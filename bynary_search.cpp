#include <bits/stdc++.h>

using namespace std;

int main()
{
    system("pause");
    int currentNumber = 50;
    int increase = 25, bottom = -1 , top = 101;
    while(true)
    {
        if(top - bottom == 2){
            cout<<"your number is: " << currentNumber << endl;
            currentNumber = 50;
            top = 101;
            bottom = -1;
            system("pause");
            continue;
        }
        cout<<"Is your number greater, equal or less than " << currentNumber << "?" << endl;
        cout<<"1 = greater, 0 = less, other = equal"<<endl;
        int response;
        cin>> response;

        switch(response)
        {
        case 1:
            bottom = currentNumber;
            currentNumber += (top - currentNumber) / 2;
            break;
        case 0:
            top = currentNumber;
            currentNumber -= (currentNumber - bottom) / 2;
            break;
        default:
            cout<<"your number is: " << currentNumber << endl;
            currentNumber = 50;
            top = 101;
            bottom = -1;
            system("pause");
            break;
        }
    }
    return 0;
}
