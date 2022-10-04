# ShcliessFach Locker Project

#### Created by:
* Dominique Huang (202000216)
* Stephen Theodorus (202000232)


### About Project
Hello everyone. This is a project of an automated locker system with the app that receives and notifies users upon package arrival.

### Requirements
* Python 3.10.0 (or other higher version of Python 3 builds)
* Arduino IDE 1.8.16 (or higher)
* sqlite3

### Dependencies 
* pip install kink
* pip install matplotlib
* pip install tkinter
* pip install pyserial
* pip install pathlib

### Tools and Materials
* Arduino uno board
* Bread Board 
* 4-8 Servo, or possibly more (Feel free to modify the amount of servos to your hearts content, for it only needs a few tweaks to the program)
* Jumper Cable
* Locker Box (You can custom build this.)

## ## How To Run This Project
* Run The Program/App With Fresh New Database Tables: python -m schliessfach -dbinit = 'True'

* Run The Program/App With The Previous Database Tables: python -m schliessfach -dbinit = 'False'

* Run The App With A Mock Database: python -m schliessfach -dbinit = 'Demo'

## BEFORE YOU RUN THIS
Please note that this project uses SMTP for emailing users and administrators. Before you run this project, please go to 'observer.py', find the observer classes. You will find a method called 'update' for each observer class. In the variable 'emailer', input your own email and password as the argument in the 'Emailer' class parameter. Please also note that to run this program, you will need to connect to an arduino board that runs the arduino code from the repository. You will also need to create an sqlite3 db file with tables corresponding to the code. You can go to 'repository.py' to see the create commands for each table.
