
#include <iostream>
using namespace std;

int main()
{

    // int day;
    // cin >> day;

    // switch(day){

    //     case 1: cout << "Sunday"; break;
    //     case 2: cout << "Monday"; break;
    //     case 3: cout << "Tuesday"; break;
    //     case 4: cout << "Wednesday"; break;
    //     case 5: cout << "Thursday"; break;
    //     case 6: cout << "Friday"; break;
    //     case 7: cout << "Saturday"; break;
    // }

    char c;
    cin >> c;
    switch (c)
    {
    case 'a':
        cout << "Vowel";
        break;
    case 'e':
        cout << "Vowel";
        break;
    case 'i':
        cout << "Vowel";
        break;
    case 'o':
        cout << "Vowel";
        break;
    case 'u':
        cout << "Vowel";
        break;

    default:
        cout << "Consonant";
        break;
    }

    return 0;
}