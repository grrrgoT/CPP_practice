#include <iostream>

int main(){
    int number_of_small_room{0};
    int number_of_large_room{0};
    double price_per_small_room{25};
    double price_per_large_room{35};
    double tax_rate{0.06};

    std::cout << "Hello, welcome to Frank's Carpet Cleaning Service" << std::endl;

    std::cout << "\nHow many small rooms would like cleaned? ";
    std::cin >> number_of_small_room ;
    std::cout << "How many large rooms would like cleaned? " ;
    std::cin >> number_of_large_room;

    std::cout << "Price per small room: $" << price_per_small_room << std::endl;
    std::cout << "Price per large room: $" << price_per_large_room << std::endl;
    std::cout << "Cost: $" << (number_of_large_room * price_per_large_room) + (number_of_small_room * price_per_small_room) << std::endl;
    std::cout << "Tax: $" << ((number_of_large_room * price_per_large_room) + (number_of_small_room * price_per_small_room)) * tax_rate << std::endl;
    std::cout << "============================================" << std::endl; 
    std::cout << "Total estimate: $" << (number_of_large_room * price_per_large_room) + (number_of_small_room * price_per_small_room) + ((number_of_large_room * price_per_large_room) + (number_of_small_room * price_per_small_room)) * tax_rate << std::endl;
    std::cout << "This estimate is valid for 30 days" << std::endl;

    return 0;
    




}