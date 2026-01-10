 #include <iostream>
 #include <ctime>
 using namespace std;
    int main() {
        int guess;
        int attempts = 0;
         cout << "Welcome to the Number Guessing Game!" << endl;
        srand(time(0));
        int num = rand() % 150 + 1;
        cout << "Random number between 1 and 150: "  << endl;
        do {

            cout<<"Enter your guess: ";
            cin>>guess;
            attempts++;
            if (guess<num)
            cout<<"Higher!\n";
            if (guess>num)
            cout<<"Lower!\n";
            else if (guess==num)
            cout<<"Congratulations! You've guessed the number in "<<attempts<<" attempts."<<endl;
        
      
        
          
        }
  while (guess!=num);
       
          return 0 ;
    }