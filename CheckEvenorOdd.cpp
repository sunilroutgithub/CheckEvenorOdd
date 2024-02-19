#include<iostream>
using namespace std;
// int main(){
//     int num;
//     cin >>num;
//      if(num %2 ==0){
//         cout<<"num is even";
//    }else
//    cout<<"num is odd";
//  }
// return 0;
// }

//ANOTHER METHOD
bool isEven(int num){return (num % 2 ==0);}
int main(){
    int num;
    cin >>num;
    if(isEven(num) == true){
        cout <<"Even Number";
    }else{
    cout <<"Odd Number";
    }
    return 0;
}