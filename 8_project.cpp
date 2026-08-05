#include <iostream>
using namespace std;

int main(){

    const int dollar_val{100};
    const int quarters_val{25};
    const int dime_val{10};
    const int nickel_val{5};
    const int penny_val{1};

    int amount_of_money{0};
    cout << "Enter an amount in cents: ";
    cin >> amount_of_money;

    cout << "You can provide change for this change as follows" << endl;

    int balance{0};

    int dollars = amount_of_money / dollar_val;
    balance = amount_of_money % dollar_val;

    int quarters = balance / quarters_val;
    balance %= quarters_val;

    int dimes = balance / dime_val;
    balance %= dime_val;

    int nickels = balance / nickel_val;
    balance %= nickel_val;

    int pennies = balance / penny_val;
    

    cout << "dollars   : " << dollars << endl;
    cout << "quarters  : " << quarters << endl;
    cout << "dimes     : " << dimes << endl;
    cout << "nickels   : " << nickels << endl;
    cout << "pennies   : " << pennies << endl;

    return 0;
    







}
