#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>

using namespace std;

int main(void)
{

    map<char, int> coin;

    coin['A'] = 0;
    coin['B'] = 0;
    coin['C'] = 0;

    for (int i = 0; i < 3; i++)
    {
        string temp;
        cin >> temp;
        if (temp[1] == '>')
        {
            ++coin[temp[0]];
        }
        else
        {
            ++coin[temp[2]];
        }
    }

    if (coin['A'] == coin['B'] && coin['A'] == coin['C'] && coin['C'] == coin['B'])
    {
        cout << "Impossible";
    }
    else
    {
        for (int i = 0 ; i<3 ; i++){
            if (coin['A'] == i){
                cout << "A";
            }else if(coin['B'] == i) {
                cout << "B";

            }else if(coin['C']== i){
                cout << "C";
            }
        }
    }
    return 0;
}