#include <iostream>
#include <cmath>

using namespace std;

//Task 3
double result = 0;
int k = 1;

double summation(int n){
    if (k <= n) {
        result += pow(-1, k+1)/k;
        k += 1;
        summation(n);
    } else{
        return result;
    }
}

//Task 4 - Overloading
double summation(){
    result = 0;   //I have to re-define them because their values changed already after summation(n)
    k = 1;
    int n;
    while(true){
        cout<<"Please enter a variable for summation as a constraint:";
        cin>>n;
        if (n<1){
            cout<<"Summation step is starting from 1. You should enter 1 or higher!"<<endl;
        } else{
            return summation(n);
        }
    }
}

int main() {

    //Task 3 in main
    while(true){
        int n;
        cout<<"Please enter a variable for summation as a constraint:";
        cin>>n;
        if (n<1){
            cout<<"Summation step is starting from 1. You should enter 1 or higher!"<<endl;
        } else{
            cout<<"Result:"<<summation(n)<<endl;
            break;
        }
    }

    //Task 4 in main
    result = summation();
    cout<<"Result:"<<result;

    return 0;
}
