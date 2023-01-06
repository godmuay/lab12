#include <iostream>

using namespace std;
int main()
{
    cout << "Press Enter 3 times to reveal your future.";
    for (int i=0 ; i < 3 ; i++)
    {
        cin.get();
    }
srand(time(0));
int random = rand()%9;
if(random == 0) cout << "You will get A in this 261102.";
else if (random == 1) cout << "You will get B+ in this 261102.";
else if (random == 2) cout << "You will get B in this 261102.";
else if (random == 3) cout << "You will get C+ in this 261102.";
else if (random == 4) cout << "You will get C in this 261102.";
else if (random == 5) cout << "You will get D+ in this 261102.";
else if (random == 6) cout << "You will get D in this 261102.";
else if (random == 7) cout << "You will get F in this 261102.";
else if (random == 8) cout << "You will get W in this 261102.";



}






// cout << "You will get A in this 261102.";