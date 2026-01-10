#include <iostream>
using namespace std ;
int main () {

int times , choose , maximum ,minimum;
double avg,sum;
int array[100];
cout<<"How Many Numbers You Will Enter ?"<<endl;
cin>>times;
cout<<"Enter "<<times<<" Numbers"<<endl;
    for (int i = 0; i < times; i++)
    {
       cin>>array[i] ;
    }
   
    
    
    while (true)
    {
      cout<<"choose frome Menu : \n1-enter Numbers\n2-Display The Entered Numbers\n3-Calculate Data\n4-Re-enter the numbers\n5-Exit the program "<<endl ; 
        cin>>choose;
            switch (choose)
            {
            case 1:
                for (int i = 0; i < times; i++)
                 {
                 cin>>array[i] ;
                 }
                break;


            case 2:
                for (int i = 0; i < times; i++)
                 {
                 cout<<array[i]<<" " ;
                 }
                 cout<<endl;
                 break;

            
            case 3:
            sum=0;
                 for (int i = 0; i < times; i++)
                 {
                 sum=sum+array[i] ;
                 }
            avg=sum/times;
            maximum=array[0];
            minimum=array[0];
                for (int i = 0; i < times; i++)
                 { if (maximum<array[i])
                 maximum=array[i];
                 }
                for (int i = 0; i < times; i++)
                 { if (minimum>array[i])
                minimum=array[i];
                 }

                 cout<<"Sum = "<<sum<<endl;
                 cout<<"Average = "<<avg<<endl;
                 cout<<"MAximum Number = "<<maximum<<endl;
                 cout<<"Minimum Number = "<<minimum<<endl;

                 break;


            case 4:
            cout<<"How Many Numbers You Will Enter ?"<<endl;
            cin>>times;
               for (int i = 0; i < times; i++)
                 {
                 cout<<"Enter New Number"<<i+1<<" :"<<endl;
                 cin>>array[i];
                 } 
                break;

            case 5:
              return 0;

            default:
              cout << "Invalid choice! Please try again." << endl;
                break;
            }
      
    }
    





    return 0;
}