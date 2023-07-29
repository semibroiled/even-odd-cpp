#include <iostream>
#include <string>
using namespace std;

bool test_odd(int a_number) {

    int mod_num = a_number % 2 ;

    switch(mod_num){

        case 0:
            return false;
            break;
        case 1:
            return true;
            break;
        default:
            cout << "Something went wrong. Couldn't evaluate number";
            break;
        
    } 
}

int main(){


int your_number {};

while (true){
cout << "Give a number to test if its odd or even: " << endl;
cin >> your_number;

if(test_odd(your_number)) {
    cout << your_number << " is odd" << endl;
} else {
    cout << your_number << " is even" << endl;
}
}





return 0;
};