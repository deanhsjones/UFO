#include <iostream>
#include "ufo_functions.hpp"

int main() {

std::string codeword = "Invaders";
std::string answer = "__________";
int misses = 0;
greet();

std::vector<char> incorrect;
bool guess = false;

char letter;


while (answer != codeword && misses < 7){
  display_misses(misses);

  std::cout << "\n\nPlease enter your guess: \n";
std::cin >> letter;

for (int i = 0; i < codeword.length(); i++) {
if (letter == codeword[i]) {
  answer[i] = letter;
  guess = true;
 }

}


if (guess) {
  std::cout << "\nCorrect! You're closer to cracking the codeword!\n";
}
else {
  std::cout << "\nIncorrect! The tractor beam pulls the person in further! \n";
  incorrect.push_back(letter);
  misses++;
  }
guess = false;
  std::cout << "\nIncorrect guesses: \n";

  display_status(incorrect, answer); 

  
}


end_game(answer, codeword);
}


