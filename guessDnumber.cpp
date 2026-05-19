

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int num;
    int guess;
    
    srand(time(NULL));
    num = (rand() % 100 ) + 1;
    
    cout<<"NUMBER GUESSING GAME\n";
    
    do{
        cout << "Guess a number between 1-100: ";
        cin >> guess;
        
        if (guess < num ){
            cout<<"guess is too low!\n";
        }
        else if (guess > num ){
            cout<<"guess is too high!\n";
        }
        else{
            cout<<"Congratulations you won a Porsche 911 GT3RS\n";
        }
        
        
    } while (guess != num);
    
    cout<< "_______________________________\n";
    

    return 0;
}
