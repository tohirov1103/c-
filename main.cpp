//
//  main.cpp
//  project7
//
//  Created by Yusufjon Tohirov on 25/10/23.
//

#include <iostream>
#include <cstdlib>
using namespace std;
//1
void sum(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    cout<<a+b<<endl;
}
//2
int Sum(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    return a*b;
};
//3
void circule(){
    int r;
    
    cin>>r;
    int c = 2*3.14*r;
    int area = 3.14 * r*r;
    cout<<c<<endl;
    cout<<area<<endl;
}
//4
bool evenorOdd(){
    int a;
    
    cin>>a;
    
    if(a%2==0){
        cout<<"true";

    }
    else{
        cout<<"false";

    }
    return 0;
};
//5
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        cout<<"false"<<endl;
    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0){
            cout<<"true"<<endl;
        }
        else{
            cout<<"not prime"<<endl;
        }
    return 0;
}
//6
void factorial(){
    int a;
    cin>>a;
    int sum = 1;
    
    for(int i = 1; i<=a; i++){
        sum = sum*i;
    }
    cout<<sum<<endl;
}
//7
void minMax(){
    int a;
    int greatesNum = 0;
    cin>>a;
    int count = 1;
    
    while (count!=3) {
        cin>>a;
        count++;
        if(greatesNum<a){
            greatesNum=a;
        }
    }
    cout<<greatesNum<<endl;
}
//8
void calc(){
    char op;
    int a;
    int b;
    cout<<"+"<<endl;
    cout<<"-"<<endl;
    cout<<"*"<<endl;
    cout<<"/"<<endl;
    cin>>a;
    cin>>b;
    cin>>op;
    switch (op) {
        case '+':
            cout<<a+b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        case '/':
            cout<<a/b<<endl;
            break;
            
        default:
            break;
    }
}
//9
void randm(){
    int b;
    cin>>b;
    
    for(int i = 1; i<=b;i++){
        
        int d = 1+(rand()%(b-1+1));
//        int randomNumber = rand();
        cout << d << endl ;
    }
}

//11
void problem11(){
//    vector<int>arr;
    int arry[]={};
    for(int i = 1; i<=3;i++){
        int random = rand();
//        arr.push_back(random);
        arry[i]=random;
        cout<<arry[i]<<endl;
    }
//    cout<<arry[0]<<endl;
}
//12
void problem12(){
    vector<int>arr;
    for(int i = 0; i<=10;i++){
        int random = rand();
        arr.push_back(random);
//        cout<<arr[i]<<endl;
    }
}
//13
void problem13(){
    double array[]={};
    for (int i = 0; i<=7; i++) {
        int random = rand();
        array[i]= random;
    }
    cout<<array[4]<<endl;
}
//14
void problem14(){
    char array[]={'H','e','l','l','o',' ','W','o','r','l','d'};
    int n = sizeof(array)/sizeof(array[0]);
   

    for (int i = 0; i<=n; i++) {
        cout<<array[i];
    }
}
//15
void problem15(){
    int arr[7]={};
    int num;
    for (int i = 0; i<7; i++) {
        cin>>num;
        if(i%2==0){
            arr[i]=pow(num, 3);
        }else{
            arr[i]=num;
        }
    
    }
    for (int b=0; b<=7; b++) {
        cout<<arr[b]<<" ";
    }
}



int main() {
    
//    sum();
//    circule();
//    evenorOdd();
//    isPrime(1);
//    factorial();
//    minMax();
//    calc();
//    randm();
//    problem11();
//    problem13();
//    problem14();
    problem15();
    return 0;
}
