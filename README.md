# CPPND: Capstone Snake Game Example

This is a starter repo for the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

<img src="snake_game.gif"/>

The Capstone Project gives you a chance to integrate what you've learned throughout this program. This project will become an important part of your portfolio to share with current and future colleagues and employers.

In this project, you can build your own C++ application or extend this Snake game, following the principles you have learned throughout this Nanodegree Program. This project will demonstrate that you can independently create applications using a wide range of C++ features.

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  >Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source. 
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.

## File Structure
* controller.cpp / controller.h
Handles the input from the user.
* game.cpp / game.h
Manages the game and contains the game loop.
* main.cpp
Establishes game variables (screen size, frame speed) and starts the game.
* renderer.cpp / renderer.h
Handles all rendering and drawing
* snake.cpp / snake.h
Contains all variables and logic for the snake object

## Added features to Starter Code

1. Reading and Logging of High Score.
2. User ability to select starting speed via console.

## 5 Rubric points addressed

1. The project reads data from a file and process the data, or the program writes data to a file. The project reads data from an external file or writes data to a file as part of the necessary operation of the program.

See main.cpp Line 21 and 44.

2. The project accepts user input and processes the input.  The project accepts input from a user as part of the necessary operation of the program.

See snake.cpp Line 105

3. The project makes use of references in function declarations.  At least two variables are defined as references, or two functions use pass-by-reference in the project code. 

See snake.h Line 21, Snake.cpp Line 25.

See game.h Line 14. game.cpp Line 13.

4. The project demonstrates an understanding of C++ functions and control structures.  A variety of control structures are used in the project.  The project code is clearly organized into functions.

Many examples throughout the project.  e.g. See game.cpp Line 22 - 50

5. The project uses Object Oriented Programming techniques.  The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks.

Many examples throughout the project.  e.g. See Snake class defined in snake.h Line 7-38.

## CC Attribution-ShareAlike 4.0 International


Shield: [![CC BY-SA 4.0][cc-by-sa-shield]][cc-by-sa]

This work is licensed under a
[Creative Commons Attribution-ShareAlike 4.0 International License][cc-by-sa].

[![CC BY-SA 4.0][cc-by-sa-image]][cc-by-sa]

[cc-by-sa]: http://creativecommons.org/licenses/by-sa/4.0/
[cc-by-sa-image]: https://licensebuttons.net/l/by-sa/4.0/88x31.png
[cc-by-sa-shield]: https://img.shields.io/badge/License-CC%20BY--SA%204.0-lightgrey.svg
