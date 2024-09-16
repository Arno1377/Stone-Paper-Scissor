#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void input(string& player, int& randchoice);
void gameplay(string& AI, int& randchoice);
void winner(string& player, string AI);


int main()
{
    string elements[3] = { "stone","paper","scissor" };
    string player;
    string AI;
    int randchoice;
    input(player, randchoice);
    gameplay(AI,randchoice);
    winner(player, AI);
    return 0;
    
}

void input(string& player, int& randchoice)
{
     cout << "please choose between Stone Or Paper Or Scissor : ";
     cin >> player;
     srand(time(0));
     randchoice = ((rand() % 3) +1);
     cout << randchoice;
        
    
    
}

void gameplay(string& AI , int& randchoice)
{
    switch (randchoice)
    {
    case 1:
        AI = "stone";
        break;
    case 2:
        AI = "paper";
        break;
    case 3:
        AI = "scissor";
        break;
    }
}

void winner(string& player, string AI)
{
    cout << "AI CHOOSED : " << AI << endl;
    if (player == "stone"   && AI == "stone"   ||
        player == "paper"   && AI == "paper"   ||
        player == "scissor" && AI == "scissor"  )
    {
        cout << "*** TIE ***" << endl;
    }
    else if (player == "stone"   && AI == "scissor" ||
             player == "paper"   && AI == "stone"   ||
             player == "scissor" && AI == "paper"    )
    {
        cout << "*** PLAYER IS WINNER ***" << endl;
    }
    else if (player == "stone"   && AI == "paper"   ||
             player == "paper"   && AI == "scissor" ||
             player == "scissor" && AI == "stone"    )
    {
        cout << "*** AI IS WINNER ***" << endl;
    }
}
