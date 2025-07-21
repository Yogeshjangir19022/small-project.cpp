// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// using namespace std;
// int main()
// {
//    srand(time(0));
//    int secret = rand() % 100+1;
//    int guess;
//    int tries = 0;
//    const int maxtries = 7;

//    cout<<"guess a number between 1 to 100 (" << maxtries<< "tries): "<< endl;

//    while (tries<maxtries)
//    {
//  cout << "Guess: ";
//  cin >>guess;
//  tries++;

// if (guess<secret)
// {
//    cout<<"too low! "<<endl;
// }else if (guess>secret)
// {
//     cout<<"too high! "<<endl;
// }
// else{
//     cout<<"correct! you guessed it in "<< tries<<"tries. " <<endl;
//     break;
// }
//  cout << "Out of tries! The number was: " << secret << endl;


//    }
   
//     return 0;
// }
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess;
    int tries = 0;
    const int maxTries = 7;

    cout << "Guess a number between 1 and 100 (" << maxTries << " tries):" << endl;

    while (tries < maxTries) {
        cout << "Try " << tries + 1 << ": ";
        cin >> guess;
        tries++;

        if (guess < secret) {
            cout << "Too low!" << endl;
        } else if (guess > secret) {
            cout << "Too high!" << endl;
        } else {
            cout << "Correct! You guessed it in " << tries << " tries." << endl;
            break;
        }
    }

    if (guess != secret) {
        cout << "Out of tries! The number was: " << secret << endl;
    }

    return 0;
}
