#include <iostream>
#include "controller.h"
#include "game.h"
#include "renderer.h"
#include <fstream>
#include "mainMenu.h"

int main() {
  constexpr std::size_t kFramesPerSecond{60};
  constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{640};
  constexpr std::size_t kScreenHeight{640};
  constexpr std::size_t kGridWidth{32};
  constexpr std::size_t kGridHeight{32};
  std::fstream highScore;

  Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
  Controller controller;
  Game game(kGridWidth, kGridHeight);

  highScore.open("highScore.txt");
  if(highScore){
    int currScore;
    std::string line;

    std::getline(highScore, line);
    currScore = std::stoi(line);

    if(currScore > 0){
      game.SetHighScore(currScore);
      highScore.close();
      std::cout << "High Score = " << currScore << "\n";
    }
  }

  game.Run(controller, renderer, kMsPerFrame);
  std::cout << "Game has terminated successfully!\n";
  std::cout << "Score: " << game.GetScore() << "\n";
  std::cout << "Size: " << game.GetSize() << "\n";
  
    if(game.GetScore() > game.GetHighScore()){
      std::cout << "Congrats! You got a new High Score = " << game.GetScore() << std::endl;

      highScore.open("highScore.txt", std::ios::out);

      if (highScore){
          highScore << game.GetScore();
          highScore.close();
      }
    }
      
  return 0;
}

