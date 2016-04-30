// This program closely follows the tutorial AnalogInOutSerial and the tutorial at 
//http://www.instructables.com/id/Arduino-AND-Bluetooth-HC-05-Connecting-easily/
// Connect D11 to Rx 
//Connect D10 to Tx

// you will need arduino 1.0.1 or higher to run this sketch
//I'm using the android app Arduino BlueControl which I got off the GooglePlayStore

// gyro code follows the tutorial at https://github.com/jrowberg/i2cdevlib


#include <SoftwareSerial.h>// import the serial library

// I2Cdev and MPU6050 must be installed as libraries, or else the .cpp/.h files
// for both classes must be in the include path of your project
#include "I2Cdev.h"
#include "MPU6050.h"

// Arduino Wire library is required if I2Cdev I2CDEV_ARDUINO_WIRE implementation
// is used in I2Cdev.h
#if I2CDEV_IMPLEMENTATION == I2CDEV_ARDUINO_WIRE
    #include "Wire.h"
#endif



// class default I2C address is 0x68
// specific I2C addresses may be passed as a parameter here
// AD0 low = 0x68 (default for InvenSense evaluation board)
// AD0 high = 0x69
MPU6050 accelgyro;
//MPU6050 accelgyro(0x69); // <-- use for AD0 high

int16_t ax, ay, az;
int16_t gx, gy, gz;


// uncomment "OUTPUT_READABLE_ACCELGYRO" if you want to see a tab-separated
// list of the accel X/Y/Z and then gyro X/Y/Z values in decimal. Easy to read,
// not so easy to parse, and slow(er) over UART.
#define OUTPUT_READABLE_ACCELGYRO

// uncomment "OUTPUT_BINARY_ACCELGYRO" to send all 6 axes of data as 16-bit
// binary, one right after the other. This is very fast (as fast as possible
// without compression or data loss), and easy to parse, but impossible to read
// for a human.
//#define OUTPUT_BINARY_ACCELGYRO




SoftwareSerial Genotronex(10, 11); // RX, TX
int ledpin=13; // led on D13 will show blink on / off
int BluetoothData; // the data given from Computer
const int analogInPin0 = A0; //Analog input force sensor/potentiometer
const int analogInPin1 = A1; //Hall effect (Magnetic)
const int analogInPin2 = A2;  // Analog input pin light sensor

int sensorValueA0 = 0;
int sensorValueA1=0;
int sensorValueA2=0;
int outputValueA0 = 0;
int outputValueA1=0;
int outputValueA2=0;
   
int countme=0;

void setup() {
  // put your setup code here, to run once:
  Genotronex.begin(9600);
  Genotronex.println("Bluetooth On please press 1 to start collecting data");
  Genotronex.println("Press 2 for Accel/Gyro data");
  pinMode(ledpin,OUTPUT);


 //now for gyro
  // join I2C bus (I2Cdev library doesn't do this automatically)
    #if I2CDEV_IMPLEMENTATION == I2CDEV_ARDUINO_WIRE
        Wire.begin();
    #elif I2CDEV_IMPLEMENTATION == I2CDEV_BUILTIN_FASTWIRE
        Fastwire::setup(400, true);
    #endif
   // initialize device
    //Serial.println("Initializing I2C devices...");
    accelgyro.initialize();
    

  
}

void loop() {
  // put your main code here, to run repeatedly:
   if (Genotronex.available()){
       digitalWrite(ledpin,1);
       BluetoothData=Genotronex.read();
       Genotronex.println("LED  On D13 on ! ");

       //  Force Mag Light data
       Genotronex.println("force = \t   magnet = \t  light = \t ");
       if(BluetoothData=='1'){   // if number 1 pressed ....
           countme=0;
           while(countme<50){   
           //Now sensor data stuff
           sensorValueA0 = analogRead(analogInPin0);
           //outputValueA1 = map(sensorValue, 0, 1023, 0, 255);
        //   Genotronex.println("LED  On D13 on !1 ");
           delay(100);
           sensorValueA1 = analogRead(analogInPin1);
           //outputValueA1 = map(sensorValue, 0, 1023, 0, 255);
          // Genotronex.println("LED  On D13 on ! 2");
           delay(100);
           sensorValueA2 = analogRead(analogInPin2);
            //outputValueA1 = map(sensorValue, 0, 1023, 0, 255);
   
           // Genotronex.println("force = \t   magnet = \t  light = \t ");
           Genotronex.println();
           Genotronex.print(sensorValueA0);
           Genotronex.print("   \t   ");
           Genotronex.print(sensorValueA1);
           Genotronex.print("   \t  \t   ");
           Genotronex.println(sensorValueA2);
   
           delay(100);
           countme++;
           }
         }
      if (BluetoothData=='0'){// if number 0 pressed ....
          digitalWrite(ledpin,0);
          Genotronex.println("LED  On D13 Off ! ");
        }
     if(BluetoothData=='3'){
          Genotronex.println(accelgyro.testConnection() ? "MPU6050 connection successful" : "MPU6050 connection failed");
    
        }

      if(BluetoothData=='2'){
         Genotronex.println("Gyroscope");   
        digitalWrite(ledpin,1);
        countme=0;
        while(countme<500){   

        BluetoothData=Genotronex.read();
       
        //For Gyro
        accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
        delay(100);
//     #ifdef OUTPUT_READABLE_ACCELGYRO
        // display tab-separated accel/gyro x/y/z values
        //Serial.print("a/g:\t");
        Genotronex.println();
        Genotronex.print(ax); Genotronex.print("\t");
        Genotronex.print(ay); Genotronex.print("\t");
        Genotronex.print(az); Genotronex.print("\t");
        Genotronex.print(gx); Genotronex.print("\t");
        Genotronex.print(gy); Genotronex.print("\t");
        Genotronex.print(gz);
  //  #endif
     delay(100);
     countme++;
      } //close the while

    
     }// close the if


  delay(100);// prepare for next data ...
  } // close the if
   }  //close the loop
   
