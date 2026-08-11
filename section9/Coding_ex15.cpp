#include <vector>
#include <iostream>
using namespace std;

int count_division(){
    vector <int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
    int count{};

    for (auto i : vec){
        if (i % 3 == 0 || i % 5 == 0){
            ++count;
        }
    }
    return count;

}

int main(){
    cout << "Count: " << count_division << endl;
    return 0;
}