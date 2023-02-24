#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
int c;
float s=0,j=0;
    void dol(float x,int k)
    {
        if(k==1){
        s=x;
        cout<<"Converted Value: "<<s<<endl;
        }
        else if(k==2)
        {
            cout<<"Enter 1 for default value & 2 for custom value"<<endl;
            cin>>c;
            if(c==1){
            s=x*0.0074;
            cout<<"Converted Value: "<<s<<endl;
        }
        else
        {
            cout<<"Enter the value of current Dollar"<<endl;
            cin>>j;
            s=x*j;
            cout<<"Converted Value: "<<s<<endl;
        }
        }
        else if(k==3)
        {
            cout<<"Enter 1 for default value & 2 for custom value"<<endl;
            cin>>c;
            if(c==1){
            s=x*1.06;
            cout<<"Converted Value: "<<s<<endl;
            }
        else
        {
            cout<<"Enter the value of current Dollar"<<endl;
            cin>>j;
            s=x*j;
            cout<<"Converted Value: "<<s<<endl;
        }
        }
        else if(k==4)
        {
            cout<<"Enter 1 for default value & 2 for custom value"<<endl;
            cin>>c;
            if(c==1){
            s=x*0.012;
            cout<<"Converted Value: "<<s<<endl;
            }
            else
            {
                cout<<"Enter the value of current dollar"<<endl;
                cin>>j;
                s=x*j;
                cout<<"Converted Value: "<<s<<endl;
            }
    }
    }
     void rup(float x,int k)
     {
        if(k==1)
        {
            
            cout<<"Enter 1 for default value & 2 for custom value"<<endl;
            cin>>c;
            if(c==1){
            s=x*82.62;
            cout<<"Converted Value: "<<s<<endl;
            }
            else
             {
                        cout<<"Enter the value of current rupees"<<endl;
                        cin>>j;
                        s=x*j;
                        cout<<"Converted Value: "<<s<<endl;
                     }
        } 
        else if(k==2)
        {
            cout<<"Enter 1 for default value & 2 for custom value"<<endl;
            cin>>c;
            if(c==1){
            s=x*0.61;
            cout<<"Converted Value: "<<s<<endl;
            }
                else
                {
                    cout<<"Enter the value of current rupees"<<endl;
                    cin>>j;
                    s=x*j;
                    cout<<"Converted Value: "<<s<<endl;
                 }
     }
        else if(k==3)
        {
            cout<<"Enter 1 for default value & 2 for custom value"<<endl;
            cin>>c;
            if(c==1){
            s=x*87.55;
            cout<<"Converted Value: "<<s<<endl;
            }
            else
            {
                cout<<"Enter the value of current rupees"<<endl;
                cin>>j;
                s=x*j;
                cout<<"Converted Value: "<<s<<endl;
            }
        }
        
        else if(k==4){
        s=x;
        cout<<"Converted Value: "<<s<<endl;
        }
    }
     void euro(float x,int k)
    {
        float s=0,j=0;
        if(k==1)
        {
    
            cout<<"Enter 1 for default value & 2 for custom value"<<endl;
            cin>>c;
            if(c==1){
            s=x*0.94;
            cout<<"Converted Value: "<<s<<endl;
            }
        else
        {
            cout<<"Enter the value of current Euro"<<endl;
            cin>>j;
            s=x*j;
            cout<<"Converted Value: "<<s<<endl;
        }
        }
        if(k==2)
        {
            cout<<"Enter 1 for default value & 2 for custom value"<<endl;
            cin>>c;
            if(c==1){
            s=x*10.0070;
            cout<<"Converted Value: "<<s<<endl;
            }
        else
        {
            cout<<"Enter the value of current euro"<<endl;
            cin>>j;
            s=x*j;
            cout<<"Converted Value: "<<s<<endl;
        }
        }
        else if(k==3){
        s=x;
        cout<<"Converted Value: "<<s<<endl;
        }
        else if(k==4) 
        {
            cout<<"Enter 1 for default value & 2 for custom value"<<endl;
            cin>>c;
            if(c==1){
            s=x*0.011;
            cout<<"Converted Value: "<<s<<endl;
        }
            else{
                cout<<"Enter the value of current euro"<<endl;
                cin>>j;
                s=x*j;
                cout<<"Converted Value: "<<s<<endl;
            }
    }
    }
    void yen(float x,int k)
    {
        float s=0,j=0;
        if(k==1)
        {
            cout<<"Enter 1 for default value & 2 for custom value"<<endl;
            cin>>c;
            if(c==1){
            s=x*134.85;
            cout<<"Converted Value: "<<s<<endl;
            }
            else
            { 
                cout<<"Enter the value of current Japanese Yen"<<endl;
                cin>>j;
                s=x*j;
                cout<<"Converted Value: "<<s<<endl;
            }
        }
        else if(k==2){
        s=x;
        cout<<"Converted Value: "<<s<<endl;
        }
        else if(k==3){
            cout<<"Enter 1 for default value & 2 for custom value"<<endl;
            cin>>c;
            if(c==1){
            s=x*142.89;
            cout<<"Converted Value: "<<s<<endl;
            }
            else{
                cout<<"Enter the value of current Japanese Yen"<<endl;
                cin>>j;
                s=x*j;
                cout<<"Converted Value: "<<s<<endl;
            }
        }
        else if(k==4)
        {
            cout<<"Enter 1 for default value & 2 for custom value"<<endl;
            cin>>c;
            if(c==1){
            s=x*1.63;
            cout<<"Converted Value: "<<s<<endl;
            }
            else{
                cout<<"Enter the value of current Japanese Yen"<<endl;
                cin>>j;
                s=x*j;
                cout<<"Converted Value: "<<s<<endl;
            }
    }
    }
    int main()
    {
        system("color D2");
    int ch,k;
    float d,s=0,j;
    system("cls");
    cout << "\t\t\t<================================================================================>" << endl;
    cout << "\t\t\t|                        WELCOME TO CURRENCY CONVERTER                           |" << endl;
    cout << "\t\t\t|            Please NOTE that the currency value fluctuates frequently           |" << endl;
    cout << "\t\t\t|      So if you find the conversion to be inaccurate, that might be the cause   |" << endl;
    cout << "\t\t\t<================================================================================>" << endl;
  cout << " \n\t\t \t\t\t\tPress any key to start";  
    _getch ();  
    while ( !_kbhit() )  
    {  
        Sleep(2);
        break;
        system( "CLS" );   
    }  
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout<<"Which type of currency is urs"<<endl<<"1.Dollor"<<endl<<"2.Japanese Yen"<<endl<<"3.Euro"<<endl<<"4.rupee"<<endl<<"5.other"<<endl ;
    cin>>k;
    cout<<"Enter amount"<<endl;
    cin>>d;
    cout<<"Convert in:"<<endl<<"1.Dollor"<<endl<<"2.Japanese Yen"<<endl<<"3.Euro"<<endl<<"4.rupee"<<endl<<"5.other"<<endl ;
    cin>>ch;
    switch(ch)
    {
        case 1:
        dol(d,k);
        break;
        case 2:
        yen(d,k);
        break;
        case 3:
        euro(d,k);
        break;
        case 4:
        rup(d,k);
        break;
        case 5:
        cout<<"Enter the value  "<<endl;
            cin>>j;
            s=d*j;
        cout<<s;
        break;
        default:cout<<"WRONG INPUT";
        break;
    }
}
