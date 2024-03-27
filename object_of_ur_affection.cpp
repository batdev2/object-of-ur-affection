#include <iostream>
#include "profile.hpp"
using namespace std;



int main() {

  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
  sam.add_hobby("listening to audiobooks and reading comics");
  sam.add_hobby("going to the gym");
  cout << sam.view_profile();


}