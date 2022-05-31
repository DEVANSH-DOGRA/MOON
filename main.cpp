#include <iostream>
using namespace std;

int main() {
    int numbers[5];

    cout << "Enter 5 numbers: " << endl;

    //  store input from user to array
    for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
    }

    cout << "The numbers are: ";

    //  print array elements
    for (int n = 0; n < 5; ++n) {
        if(numbers[n]%2!=0){
        cout << numbers[n] << "  ";
        }
    
    }

    // I am also adding the sum and product of the numbers (Edited by Daksh)
    int sum=0;
    int product = 1;
    for (int n = 0; n < 5; ++n) {
        if(numbers[n]%2!=0){
            sum+=numbers[n];
            product*=numbers[n];
            cout<<"Sum of the number is :"<<sum<<endl;
            cout<<"Product of the number is :"<<product<<endl;
        }
    }

    return 0;
}
