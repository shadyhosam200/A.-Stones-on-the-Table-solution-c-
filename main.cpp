#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int counter=0;
    int num;
    cin >> num;

    string color;
    cin >> color ;

    for (int i=0 ; i<num-i-1; i++)
    {


        if (color[i]==color[i+1])
        {
            counter++;
        }


    }
    cout << counter;

}


