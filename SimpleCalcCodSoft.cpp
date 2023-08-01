#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"--SIMPLE CALCULATOR--"<<endl;
    cout<<"Choose the operation to perform:"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    int opr;
    cout<<"Write the operation number:";
    cin>>opr;
    float x,y;
    switch(opr)
    {
        case 1: 
        cout<<"Enter the first number:";
        cin>>x;
        cout<<"Enter the second number:";
        cin>>y;
        cout<<"ADDITION:-"<<endl;
        cout<<x<<" + "<<y<<" = "<<x+y<<endl;
        break;

        case 2: 
        cout<<"Enter the first number:";
        cin>>x;
        cout<<"Enter the second number:";
        cin>>y;
        cout<<"SUBTRACTION:-"<<endl;
        cout<<x<<" - "<<y<<" = "<<x-y<<endl;
        break;

        case 3: 
        cout<<"Enter the first number:";
        cin>>x;
        cout<<"Enter the second number:";
        cin>>y;
        cout<<"MULTIPLICATION:-"<<endl;
        cout<<x<<" x "<<y<<" = "<<x*y<<endl;
        break;

        case 4: 
        cout<<"Enter the first number:";
        cin>>x;
        cout<<"Enter the second number:";
        cin>>y;
        cout<<"DIVISION:-"<<endl;
        cout<<x<<" / "<<y<<" = "<<x/y<<endl;
        break;

        default:
        cout<<"Invalid option. Please choose again."<<endl;




    }
    

}