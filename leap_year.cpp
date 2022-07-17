#include <iostream>

int main() {
  
  int user_year;

  std::cout << "L E A P  Y E A R  C A L\n";
  std::cout << "Enter Year: \n";
  std::cin >> user_year;

  if(user_year < 1000 ||user_year > 9999)
  {
    std::cout << "Invalid entry. \n";

  }
  else if(user_year % 4 == 0 && user_year % 100 != 0 || user_year % 400 == 0)
  {
    std::cout << user_year;
    std::cout << " falls on a leap year. \n";
  }
  else 
  {
    std::cout << user_year;
    std::cout << " is not a leap year. \n";
  }

  return 0;
}
