/*
sD 9/16/24
hashMapExamples.cpp
*/

#include <iostream>
#include <map>
#include <string>
#include <list>

using std::map, std::string, std::list, std::pair, std::cout;

int main()
{   
    map<string, list<string>> sonicCharactersMoveset;
    
    list<string> sonicMoveset{"Homing Attack", "Spin Dash", "Boost"};
    list<string> tailsMoveset{"Flight", "Dummy Ring Bombs", "Tail Spin"};
    list<string> knucklesMoveset{"Glide", "Dig", "Spinning Uppercut"};

    sonicCharactersMoveset.insert(pair<string, list<string>>("Sonic", sonicMoveset));
    sonicCharactersMoveset.insert(pair<string, list<string>>("Tails", tailsMoveset));
    sonicCharactersMoveset.insert(pair<string, list<string>>("Knuckles", knucklesMoveset));

    for (auto pair : sonicCharactersMoveset)
    {


        cout << pair.first << " - ";

        int moveCount = 0; 
        int totalMoves = pair.second.size(); 

        for (auto move : pair.second)
    {
        moveCount++; 
        
        if (moveCount == totalMoves)
        {
            cout << move << ".";
        }
        else
        {
            cout << move << ", ";
        }
    }

    cout << '\n';
    }

    return 0;
}