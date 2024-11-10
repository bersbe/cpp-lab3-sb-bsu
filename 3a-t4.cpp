#include<iostream>
using namespace std;
int main()
{
int k, i = 1, sum_k = 0, number;
do {
  cout << " Enter the amount of integers to sum = "; cin >> k;
         if (cin.fail() || k <= 0) {
            cout << "Invalid input! Please enter a positive integer!" << endl;

            cin.clear();

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (k <= 0);


    while (i <= k) {
cout << "Enter integer nr. " << i << ": ";
cin >> number;

        if (cin.fail()) {
            cout << "Invalid input! Please enter an integer." << endl;


            cin.clear();

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue; 
        }



      
sum_k += number; i++;
} 
cout << " The total sum of " << k << " integers is: " << sum_k<<endl;
return 0;
}
