#include <vector>
#include<iostream>
using namespace std;

void find_first_vowel(const std::vector<char>& vec){


    size_t i = 0;
    bool found = false;

    if (!vec.empty()){
        do{
            char c = vec[i];
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                cout << "Vowel found: ";
                found = true;
                break;
            }
            i++;
        }while(i < vec.size());

    }
    if (!found){
        cout << "No vowel was found";
    }
}
