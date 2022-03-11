#include <iostream>
#include <string>

#include "game.h"
#include "snake.h"
#include "mainMenu.h"

void mainMenu::options(){
    int choices;

    std::cout << "===Main Menu ===\n\n" << "Enter 1 to Play at Normal Speed\n" <<
                << "Enter 2 to Play at Slow Speed\n" << "Enter 3 to Play at Fast Speed\n"
                << "Enter 4 to Quit\n" << std:endl;

                while(std::cin >> choices{
                    if (choices == 1){
                        break;
                    }
                    else{
                        std::cerr << "Error. Please choose a valid option." << std::endl;
                        break;
                    }
                }

                if(std::cerr.fail()){
                    choices = 4;
                    std::cerr << "Error. Please choose a valid option." << std::endl;
                }

                gameOption = std::move(choices);

};

int Menu::choice(){
    return gameOption;
}
