
#include <string>
#ifndef hangman_h
#define hangman_h
#include <fstream>



class hangman{

  int guessesLeft;
  int wordLength;
  std::string word;
  std::string display;
  

  void displayBoard();

  int updateBoard(char c);

  int checkGuess(std::string guess);

  int countGuesses();
  

 public:
  hangman(std::string hidden, int guesses){
    word = hidden;
    wordLength = word.length();
    guessesLeft = guesses;
    for(int i = 0; i < word.length(); i++){
      display += "_";
    }
  }

  hangman(){}


  void readTXT();

  void printArray();

  ~hangman(){};
  
  int turn();

  void play();

};

#endif
