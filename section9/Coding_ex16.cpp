#include <iostream>
#include <vector>

using namespace std;

int count_numbers(const vector<int> &vec){

    int count {0};
    size_t index {0};

    while (index < vec.size() && vec.at(index) != -99){
        ++count;
        ++index;
    }

    return count;
}
int main(){
    cout << "HAHA: " << &count_numbers << endl;
    return 0;
}