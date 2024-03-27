#include <vector>
#include <iostream>
#include "profile.hpp"
using namespace std;

Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns)
  : name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns) {

}
std::string Profile::view_profile() {
  std::string info = "Name: \n" + name;
  info += "\nAge: " + std::to_string(age);
  info += "\nPronouns: " + pronouns;
  info += "\nCity: " + city;
  std::string hobby_string = "Hobbies:\n";

  for (std::string hobby : hobbies) {

    hobby_string += " - " + hobby + "\n";

  }

  return info + "\n" + hobby_string;

}

void Profile::add_hobby(std::string new_hobby) {
 hobbies.push_back(new_hobby);
}