#include <iostream>
using namespace std;

int main()
{
    int a, b, c, option;
    while(true){
    cout<<"1. AND"<<endl;
    cout<<"2. OR"<<endl;
    cout<<"3. NOT"<<endl;
    cout<<"4. XOR"<<endl;
    cout<<"5. Exit!";

    cout<<"Enter your opetion according to what operation you want to perform :";
    cin>>option;

    if(option==5) break;

    if(option == 1)
    {
        cout << "enter the numbers on which you want to perform bitwise AND:"<<endl;
        cout << "enter a:";
        cin >> a;
        cout << "enter b:";
        cin >> b;
        c = a & b;
        cout << "AND of a and b is:" << c << endl;
    }
    else if (option==2){
        cout << "enter the numbers on which you want to perform bitwise OR:"<<endl;
        cout << "enter a:";
        cin >> a;
        cout << "enter b:";
        cin >> b;
        c = a | b;
        cout << "AND of a and b is:" << c << endl;

    }
    else if(option==3){
        cout << "enter the number on which you want to perform bitwise NOT:"<<endl;
        cout << "enter a:";
        cin >> a;
        c =~ a;
        cout << "AND of a and b is:" << c << endl;
        
    }
    else if (option ==4){
        cout << "enter the numbers on which you want to perform bitwise XOR:"<<endl;
        cout << "enter a:";
        cin >> a;
        cout << "enter b:";
        cin >> b;
        c = a ^ b;
        cout << "AND of a and b is:" << c << endl;
    }
    else{
        cout<<"Invalid option."<<endl;
    }
    
    }
}