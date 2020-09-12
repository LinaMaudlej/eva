# Proposal

## Overview

Elderlies safe chronic health conditions,
 
In this project we build a robot that helps elderlies to communicate with their families via video call *Skype* . The caller can dial to the person, the robot gets the video call then smartly navigate inside the nursing home to the target. Additionally, the caller can remotly control the robot. 


## Diagrams

## Interest and complexity
The project is hardware intensive, but still it combines both hardware and software complexity.
Hardware:
1. building the robots: 
  - controlling the hover wheels we have at home via appropriate specific drivers and batteries. 
  - the height of the robot's body is 1 meter, which means we need to have a balanced base.
2. the navigation: 
  - we need to find out which type of camera can answer the navigation requirement inside the room. The tradeoff here is between the complexity and accuracy. We test two kinds of cameras: 1) Pixel camera 2) Intel real sense camera. 
  - The navigation inside a room is a known problem, our goal is not to solve this problem. We want to have a basic solution that starts from known static obstacle navigation and then trying to have the dynamic as much as possible. 
3. The integration between the robots and the navigation: 
   - both robot and camera will have in place a processing unit for decreasing the communication overhead. For the wheels, for simplicity, we will start using the Arduino microcontroller and after solving 2.1 we will integrate the camera and the robot to work in the same microcontroller. This will require from use to use a more powerful microcontroller such as raspberry PI. Raspberry PI, for example, requires to write a real-time controlling (TBD).
Software:
1. basically we don't have complex software besides that we need to have a skype video call, so we need to find an open-source API to connect our application to skype. The skype will be separated from the other logic.   
2. controlling the robots: We need to control the robot remotely, thus the application side will send the commands via the server to the robot. 
We believe that this will cost us an overhead that can be delegated by decreasing the communication overhead. For prototype requirement we may 1) keep the overhead as it is 2) replace this communication to work via Bluetooth (distance vs performance). 
 

## Showcase proposal
The final prototype includes two robots, each combines its camera (for navigation) and the tablets (for receiving video calls). Additionally, we will have the phone application for controlling both robots remotely and making the video call.
We have the functionality for controlling two robots which means it can be extended accordingly.  .  

## Cloud integration
In this project we will use the firebase:
1) Elderlies and their families (users) information in the SQL database. 
2) We will use the firebase for video streaming. 
3) 4 variables for controlling the robot remotely (right,left,backward,forward).

## User-end
TBD: Describe here the application side.

## Equipment Needed
- Hover wheels and its 3d printed parts.
- 4X Drivers: DC 12-36V 500W Brushless Motor PWM Control Controller.
- Lipo batteries 
- TBD: Camera for navigation. 
- TBD: Microcontrollers, Arduino for basic controlling. 


## References:  
