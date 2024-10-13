# Sculptor
_2024 &amp;hacks hackathon winner!_

![image](https://github.com/user-attachments/assets/6e77fa13-e734-4681-8882-c86b6814c2d8)
![image](https://github.com/user-attachments/assets/7c5fbbf6-4d19-4500-8c0c-66a43efc016e)

https://github.com/user-attachments/assets/3b2bd22f-d27a-42a6-93fe-63e585ddd9f1

https://github.com/user-attachments/assets/313f4598-cc79-4153-bc39-71717678cf77

### Description:
Sculptor was created as a proof of concept for using muscle sensors and servos to electronically power and control 3d printed prosthetic solutions.

### How we built it:
Materials Used:
- MYOWARE sensor
- Ender 3 (Printer); TPU and PLA (Filament)
- Servos
- Arduino Uno 
- Powerbank 

Our first step was to define the problem. Our end goal was to create a moving hand based on different thresholds picked up by the Myoware sensor when placed on the bicep. The idea was to make some of the more popular 3d printable prosthetics more accessible to those who may not have the proper motor function to use them. 

We had a few appearance goals for our product as well. They were that: 
- The prosthetic looks similar to a forearm and a hand 
- The majority of the hardware is contained within the forearm 

We found a file for a hand on [Thingiverse](https://www.thingiverse.com/thing:380665) and used the hand and fingers from this model in our product. 

We used this [Arduino Case](https://www.thingiverse.com/thing:994827) to mount our arduino securely.

This [tutorial](https://www.youtube.com/watch?v=-JYi08WKe6c) helped guide us through the wiring and coding process for the Arduino and servos. 

### Challenges we ran into:
- Sensor Accuracy:
Our myoelectric sensor was quite old and didnt seem to be working properly anymore. It at times will not return proper measurements or any measurements at all. We decided to add a backup button to activate the servos when the muscle sensor fails.
- Printing issues:
When printing we ran into some issues. Some of our support material couldn't be removed, and our prints were sized up for some reason. We didn't have enough time for reprints, so we had to make do.

### What we learned:
Start early and set more deadlines in advance. We all had busy schedules this weekend and having more concrete goals would have helped us navigate this project in a way that would have produced a much more refined result.

### Team Members:
- Alexandre Passin: Project lead and hardware specialist
- Ananya Bagai: Custom hardware design, and configuration planning
- Milo Nguyen: Custom hardward design and submission management
- Alexander Longo: Software development and systems integration

### Applications:
- Robotic prosthetic limb control
- Medical devices
