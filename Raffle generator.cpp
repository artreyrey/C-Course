#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    
    srand(time(0));
    int randNum = rand() % 5 + 1;
    
    switch(randNum){
        case 1: cout << "You win a sticker!\n";
            break;
        case 2:cout << "You win a Tshirt!\n";
            break;
        case 3:cout << "You win a Tomica!\n";
            break;
        case 4:cout << "You win a Ferrari!\n";
            break;
        case 5:cout << "You win a Porsche!\n";
            break;
    }
    

    return 0;
}
