![Dragonfly Logo](https://github.com/DragonID/NASAAsteroidMiningChallenge2016/blob/master/Logo/dragonfly_logo.png)

# The Dragonfly
#### Team Dragonfly's Submission for NASA SpaceApps Challenge 2016

### *Sensing Your Opportunities in Space*

In the very near future, asteroid mining may become one of the primary ways to successfully fuel the outward expansion of humankind, and the continued exploration of space. With both government and commercial entities showing a renewed interest in space, it has become clear that the expense of bringing materials up to orbit is financially untenable for significant space-bound operations; and so the race for identifying potential asteroids for mining, being able to analyze them, and then deploying mining equipment and/or the ability to change their orbits is heating up.

In addition, the continued potential for an *Angry Asteroid*, an asteroid with the ability to cause widespread damage to the Earth and humans haunts us like never before! The same techniques that can be developed for commercial mining of an asteroid could instead be redirected to saving humankind from destruction.

Drawing on our team’s diverse background in design, programming, engineering, and economics we created a modularized system that has the following abilities:

  1. Using existing infrastructure to identify key potential resources from near Earth/Moon objects (**NEMO's**).
    - We also propose theoretical technologies and locations to identify NEMO's in the future.
  2. Sending out a low cost delivery vehicle on an intercept path that will release.
    1. The Dragonfly Cluster, a set of modular, medium-production satellites that are designed to cluster around a potential prospecting target and closely analyze it at various altitudes for mineralogical composition data.
    2. The Javelin, a ‘telescopic’ mini-bore module that is designed to uncompact during flight, and then embed itself in the soft regolith of the asteroid for further analysis.
  3. Reusing the Javelins as anchors for orbital maneuvering in order to bring it around the moon or a Lagrange Point
  4. Reusing the Dragonflys as mining operation sensor units.
  5. Then based on the composition of the asteroid, a mining rig can be set-up for extraction and local processing ([see Star-Whals Project for potential methods](https://2016.spaceappschallenge.org/challenges/solar-system/asteroid-mining/projects/ne-asteroid-mining "Star-Whals")).

Team Dragonfly's methods, STL files, electronics, pictures, presentation, and in in-depth discussion on what it will take for asteroid mining this to be successful (economics, sensors, etc...) is presented here in full, Open Sourced (MIT License), and available for anyone to interact with, or improve.

The best place to start is the 30-second video found on [YouTube] (https://link). For a more in-depth view, our presentation [PPTX (recommended)](https://github.com/DragonID/NASAAsteroidMiningChallenge2016/blob/master/Dragonfly%20Presentation.pptx?raw=true), or [PDF](https://github.com/DragonID/NASAAsteroidMiningChallenge2016/blob/master/Dragonfly%20Presentation.pdf) is the next stop. The musical score for this project is, of course, [Below the Asteroids](https://soundcloud.com/ccpgames/eve-online-below-the-asteroids).

Comprehensive information on the entire projectis available in the detailed write-up below. Information on the sensors and our creation of sensor prototypes is located [here](https://github.com/DragonID/NASAAsteroidMiningChallenge2016/tree/master/Circuits). The models for the satelites are located [here](https://github.com/DragonID/NASAAsteroidMiningChallenge2016/tree/master/3D%20Files). Finally, various images from this project can be found [here](https://github.com/DragonID/NASAAsteroidMiningChallenge2016/tree/master/Images).

    Thank you, 
    Team Dragonfly

  

### Scenario and Mission Statement

**Scenario:** Current + 50 years in the future. This project can be created with modern technology (sensors, fuel, small sizes, etc...), but we also looked into the future for additional capabilities. One of those is the existence of a moon base, an ongoing mission to reach Mars, and an active planetary protection program. From this moon base we are able to have some basic refining and manufacturing processes in place. The moon base is dependent on materials found within space.

**Our mission:** We will build and send Dragonflies - exploratory micro satellites - that can define more precise estimates of asteroid composition than Earth-bound techniques and send the data back to moon base to verify that the asteroid is suitable for actual mining and exploration processes. Once a suitable asteroid is identified it will be captured and retrieved for mining. The materials that are mined will be used not only to sustain the moon base, but also to support the ongoing Mission to Mars, as well as to study how best to protect the Earth from a potential asteroid impact. 

### Ideal Elements for Mining

In order to fulfill our mission it is important to find, extract, refine, and return materials useful to sustaining life in space and furthering exploration. We have identified the key materials to sustain human life and promote further space exploration below. Having these elements available will ensure that we are able to produce air to breath, fuel (including radioactive materials) and other propellants for further exploration, and key elements for fertilizers to grow food.

Important Mining Targets include:
  - Oxygen
  - Hydrogen
  - Helium
  - Nitrogen
  - Sulfur
  - Gold
  - Silver
  - Iron
  - Cobalt
  - Nickel
  - Magnesium
  - Silicon
  - Platinum
  - Palladium
  - Osmium
  - Iridium
  - Ruthenium
  - Rhodium
  - Uranium
  - Plutonium. 

Using spectroscopy many elements from the list above have already been found in asteroids. Unfortunately, the majority of asteroids, especially smaller asteroids are still unidentified and it is unclear what they are composed of. In addition, even if the elements are found, it might not be feasible to mine specific types of elements from an energy and cost perspective. To better understand what elements are available and accessible to mine you must first understand what types of asteroids are near to Earth, and which make economic sense to mine (for planetary protection, this obviosity is not a consideration). 

### Asteroid Types

There are three key asteroid groups currently identified:

  1. [C-type asteroids](https://en.wikipedia.org/wiki/C-type_asteroid) have a high abundance of water which is not currently of use for mining but could be used in an exploration effort beyond the asteroid. Mission costs could be significantly reduced by using the available water from the asteroid. C-type asteroids also have a lot of organic carbon, phosphorus, and other key ingredients for fertilizer which could be used to grow food.
  2. [S-type asteroids](https://en.wikipedia.org/wiki/S-type_asteroid) carry little water but look more attractive because they contain numerous metals including: nickel, cobalt and more valuable metals such as gold, platinum and rhodium. A small 10-meter S-type asteroid contains about 650,000 kg (1,433,000 lb) of metal with 50 kg (110 lb) in the form of rare metals like platinum and gold.
  3. [M-type asteroids](https://en.wikipedia.org/wiki/M-type_asteroid) are rare but contain up to 10 times more metal than S-types.

*In order to fulfill our mission of deriving materials to support the moonbase and the Mission to Mars, it is necessary to focus on C-type asteroids (which include B, F, G, and C-type asteroids).*

There are several key reasons to mine C type asteroids:

- They require the least energy to mine because they have a more porous surface.
- They have more key minerals used for sustaining life in space and furthering exploration. The C-type is the is potentially up to 20% water by mass, and is the perfect source for rocket fuel.
- They are the most abundant in space (nearly 75 percent of all known asteroids).

(One 75 meter Class C type asteroid has all the water you need to run all 135 space missions to date.)

Now that we have identified the key type of asteroid we are interested in mining, we need to evaluate which of these are nearby and accessible from our moonbase. 

### Asteroid Accessibility

Below are the important factors for determining if an asteroid is accessible and a good target:

1. Delta-V: Delta V, also known as the “speed limit of space” is an important factor to consider. Ideally we will look for asteroids with a low Delta-V, less than about 5 km/s. Thus less is fuel needed to rendezvous with the asteroid.
2. Spin rate: Asteroids with a slower rotation are vastly preferred. Although there are not many that are considered large enough for our target list that also spin quickly.
3. Size: Typically larger asteroids of around 300 meters across are ideal to ensure that the mission will produce enough resources to be worth the cost of the mission.
4. Orbit: The asteroid must have an orbit that takes it near the Earth/moon often and with a low inclination to the plane.

Now that we have all the key requirements for identifying a valuable and accessible NEMO, we can identify potential targets for exploration. 

### Identifying C-type Asteroids from the Moon Base

We can use three key technologies from our moon base (as well as some observations from earth) to identify potential targets for further exploration. We will use infrared and optical telescopes with radar, Doppler, and infrared spectroscopy capabilities. These telescopes will be located on the dark side of the moon to avoid glare and aid in identifying the "dark" C-type asteroids. We will combine infrared, radar, and Doppler data to identify size, location, speed, rotation, and composition of NEMOs for further exploration.

### Sample Target - 2001 SN263

We have identified a key target for the first mission- the triple asteroid cluster 2001 SN263

2001 SN263 is an ideal target for a number of reasons including:

  1. One of only two known NEMO’s that are actually a triple-asteroid.
    - Alpha is a spheroid in shape with a diameter of 2.8km, and the satellites, named Beta and Gamma, are several times smaller in size. Beta is 1.1 km in diameter and Gamma 0.4 km.
  3. C-Type asteroid
  4. Has an orbit with a regular approach to the Earth/Moon where we can plan out the Dragonfly + Javelin flight paths ahead of time.
  5. We have maximized our research potential, profit potential, and mining yield potential by three by having a triple-asteroid system as our target.
  6. Once at location, based on resource scanning, we can point the Javelin at one of the three targets to get a deep core sample.

### The Dragonfly - How it Works

**Launch Payload:** The launcher (rocket) system is a modular, easy construction system that contains four Dragonflies around the core Javelin miniature satellites. With our assumption of being able to launch from the shallow gravitational well of the moon, we are at a significant advantage over launching from Earth both due to fuel amounts (as well as their costs), as well as the overall complexity of the launcher. After the mining or deflection target has been identified by the sensor systems on the moon and Earth, the launch can be quickly set-up. After the launch, the Dragonflies are let loose in their cluster formation, followed by the Javelin which ‘telescopes’ out and sets a course towards the target that it will embed. The rest of launcher assembly is then picked up for re-use.

![Launcher](https://github.com/DragonID/NASAAsteroidMiningChallenge2016/blob/master/Renders/Delivery%20System.JPG)


**Dragonfly:** The Dragonfly Cluster is a set of modular, medium-production satellites (each Dragonfly - #) that are designed to cluster around a potential prospecting target and closely analyze it at various altitudes for mineralogical composition data. Asteroid prospecting needs to focus on a set of materials such as [list] in order to fuel future space mining, provide a profit motive, and to protect the planet from the potential impact of the asteroid. The individual satellites carry a modular sensor package that augments the other satellites (for a cluster of at least four). Communication between the satellites is done via a built-in mesh-net to provide interferometry, location, and other data and navigational aspects. Communication back to the home base is accomplished via a standard NASA DSN and X-band communication method.

![Dragonfly Render](https://github.com/DragonID/NASAAsteroidMiningChallenge2016/blob/master/Renders/Dragonfly.JPG)


**Javelin:** An additional part of the payload is the Javelin satellite which contains a ‘telescopic’ mini-bore module that is designed to uncompact during flight, and then embed itself in the soft regolith of the asteroid. It has a few key components, namely the two (or more) stage telescopic system for size elongation (a good analogue is the system used in umbrellas), the hollow of the actual system, a set of reverse fins that serve both to anchor the stages, and to not allow the reverse motion of the module, as well as a full sensor package within the outer and inner shell. The ability to embedded itself into the soft regolith at a depth of 2, 3, even 10 meters will provide much better data about the composition of the asteroid, its mining potential, as well as scientific data. Furthermore, depending on the makeup of the system and the depth of embedding, the Javelin can be used as the anchor point(s) for an orbital control system.

![Javelin Render](https://github.com/DragonID/NASAAsteroidMiningChallenge2016/blob/master/Renders/Javelin.JPG)

#### Sensor Packages

Modular sensor package on **Dragonfly**. Will be put in and taken out as needed.

1. **Dragonfly Telescopic Imaging System (DT-IS):** The Telescopic Imaging System (DTIS) on Dragonfly will be used for both guidance, navigation, and control, as well as the part of the analytic package. For the navigator aspect it will be used for orbital correction and target monitoring for the entire Dragonfly cluster via communication to the other satellites. For the prospecting aspect, it will be used as a high-resolution, small-field-of-view camera that will search for/confirm other sensors, as well as locate potential mining sites, look for ejecta, density, etc...
2. **Dragonfly 3D Imaging System (D3D-IS):** The Dragonfly 3D Imaging System (D3D-IS) will be used to provide a very-high-resolution view of the asteroid as an individual camera, and when combined with its sister on another Dragonfly, it will be able to provide true-stereoscopic images that will be used for navigation and mining operations.
3. **Dragonfly IR/Thermal/UV System (DIRecT-US):** The Dragonfly IR/Thermal/UV System (DIRecT-US) has a number of goals useful for prospecting, starting with the ability to discriminate between different possible surface properties of the asteroid, measure the thermal properties of the asteroid surface that are relevant to the characterization of the soil structure and cohesion, and those that contribute to the thermal effects, in particular the Yarkovsky Effect rotational changes (helpful in navigation and targeting of the mining operation). Additional use of the sensor during the deployment of the Javelin will allow for studying ejecta plume and in-soil temperatures and thermoclines to determine the temperature of the plume, the rate of change, and hot spot localization which may give information the mineralogical composition of the dust.
4. **Dragonfly Gamma+Neutron+X-Ray Spectrometer Complex (DGNX-SC):** The Dragonfly Gamma+Neutron+X-Ray Spectrometer Complex (DGNX-SC) will be able to map the relative abundance of minerals, ice, and other materials to a depth of meters. The ability to map in high fidelity the subsurface composition is extremely valuable for any potential prospecting.
5. **Dragonfly Laser Spectrometer (DLS):** The Dragonfly Laser Spectrometer (DLS) will use laser spectrometry to map biological and geochemical materials with a high precision in order to identify water, Carbon, and other geologic materials for fuel and extrication. The system will be able to link with the other satellites in the cluster in order to compound the data collection.
6. **Dragonfly High+Low Frequency Radar Multi-Sat System (DHLR-MSS):** The Dragonfly High+Low Frequency Radar Multi-Sat System (DHLR-MSS) will obtain information on the structure of the asteroid´s outermost surface and sub-surface layers, estimate the dielectric permittivity of the sub-surface material to gain insight into the surface composition and the content of volatile compounds, and provide a full characterization of the homogeneity and extensive study of the mineralogy and porosity of the internal structure. Variations in density and a complete mapping the asteroids 3D structure (and deep layering) will also become apparent. It will take advantage of the Dragonfly cluster to create steep and deep radar reflections that can be captured by another Dragonfly that can then recombine the data for higher resolution in order to support the mining prospecting operation. For smaller asteroids, it should be able to do a complete internal map of the target. 

Modular sensor package on **Javelin**. Will be put in and taken out as needed.

1. **Javelin Magnetometer System (JMS):** The Javelin Magnetometer System (JMS) will sample both the core sample, and around the Javelin module after it has been embedded for variations in the magnetic field which will point towards materials with a metallic or magnetic content. This will help identify the mining operation needed to extract the optimal materials.
2. **Javelin GC/MS System (J-GCMS):** The Javelin GC/MS System (J-GCMS) will micro-vaporize the sediment inside the core sample in order to identify the materials and their micro composition.
3. **Javelin IR/UV/Vis (J-Spectrum):** The Javelin IR/UV/Vis (J-Spectrum) will image the core and outside soil using wide band spectroscopy in order to identify the materials to confirm the mining prospects.
4. **Javelin Ground Penetrating Radar (JGPR):** Javelin Ground Penetrating Radar (JGPR) will use focused radar in order to prospect the core of the asteroid further than the Javelin and to further prospect for materials while within the surface of the asteroid itself.

![Sensor Package](https://github.com/DragonID/NASAAsteroidMiningChallenge2016/blob/master/Renders/Sensors.JPG)

#### Post Analysis Mining and Extraction

In an ideal scenario, multiple Javelins will be deployed to a target at strategic locations and attached to either a solar sail or an Ion Engine. This will allow for slow, cheap orbital maneuvering. This can system can then move the asteroid to a Lagrange Point, around the orbit of the moon, or in the case of a dangerous asteroid, nudge it out of a collision course. The same can be said for the Dragonflies which will monitor the mining rig.

Once a NEMO is in position (or if the mining and refining are to be on site), the drilling or dust/layering rig will be put into position. An option for this was proposed by the [Star-Whals](https://2016.spaceappschallenge.org/challenges/solar-system/asteroid-mining/projects/ne-asteroid-mining).

### Project Impact

Opportunity to turn threats into profit centers. Opportunity to fuel our expansion to Mars, and the rest of the Solar System.

1) Preventing disaster to Earth: Mining Asteroids can prevent future asteroid collisions with Earth.
2) Dramatically reduce the cost of space mining: Weight of mining rig expected to be around 9000kg, weight of the dragonfly 15kg.
3) Able to accurately predict composition 90 percent of the time: huge cost savings to deploy mining rigs to only most valuable sites.
4) Dramatically Reduce the Cost of Living In Space: 
  - Cost of transporting one pound of cargo into low earth orbit ranges from $770 to $10,000
  - One 75 meter diameter C-type asteroid potentially has enough water to run all of the Space Missions to date.
  - Resources in two similar sized C-type asteroids were valued by Asterank at 2.62 trillion and 168.20 billion 



## Dragonfly Team

Dragonfly has been created by Team Dragonfly for the NASA SpaceApps Challenge 2016 hosted at NASA John H. Glenn Research Center at Lewis Field in Cleveland, Ohio, USA. 

Team Rocket members are:
- Eugene Malinskiy [@emalinskiy] (https://twitter.com/emalinskiy)
- Ilya Malinskiy
- Daniel Dudley [@daniel_dudley] (https://twitter.com/daniel_dudley)
- Jessica Ice
- Muzamil Hasan
- Andrea Mitofsky
- Laimis Belzinskas
- Brad Roskoph
- Miranda Caudil
- Lauren Roskoph
- Beck Strauss
