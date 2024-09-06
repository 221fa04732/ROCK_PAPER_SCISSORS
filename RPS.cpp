#include<bits/stdc++.h>
using namespace std;

char button;

void instructionList()
{
    cout<<"\t------------------------------------------------\n";
    cout<<"\t|                                              |\n";
    cout<<"\t|  - Rock-Paper-Scissors played by two         |\n";
    cout<<"\t|    players.                                  |\n";
    cout<<"\t|  - Each player chooses one of three options  |\n";
    cout<<"\t|      - Rock(R)                               |\n";
    cout<<"\t|      - Paper(P)                              |\n";
    cout<<"\t|      - Scissors(S)                           |\n";
    cout<<"\t|  - Both reveal their choice simultaneously   |\n";
    cout<<"\t|      - Rock crushes Scissors => Rock Win     |\n";
    cout<<"\t|      - Scissors cut Paper => Scissors Win    |\n";
    cout<<"\t|      - Paper covers Rock => Paper Win        |\n"; 
    cout<<"\t|      - Both players choose the same => Draw  |\n";
    cout<<"\t|                                              |\n";
    cout<<"\t------------------------------------------------\n";
}

void startQuit()
{
    cout<<"\t- S --> Start\n";
    cout<<"\t- I --> Instruction\n";
    cout<<"\t- Q --> Quit\n";
    cout<<"\tChoose any one of the above option : ";
    cin>>button;
    while(button!='Q' && button!='S')
    {
        if(button=='I')
        {
            instructionList();
        }
        else 
        {
            cout<<"\n\t\t--  Enter a valid input  --\n";
        }
        cout<<"\n\t- S --> Start\n";
        cout<<"\t- I --> Instruction\n";
        cout<<"\t- Q --> Quit\n";
        cout<<"\tChoose any one of the given option : ";
        cin>>button;
    }
    return;
}

void resumeQuit()
{
    cout<<"\t- R --> Resume\n";
    cout<<"\t- I --> Instruction\n";
    cout<<"\t- Q --> Quit\n";
    cout<<"\tChoose any one of the given option : ";
    cin>>button;
    while(button!='Q' && button!='R')
    {
        if(button=='I')
        {
            instructionList();
        }
        else 
        {
            cout<<"\n\t\t--  Enter a valid input  --\n";
        }
        cout<<"\n\t- R --> Resume\n";
        cout<<"\t- I --> Instruction\n";
        cout<<"\t- Q --> Quit\n";
        cout<<"\tChoose any one of the given option : ";
        cin>>button;
    }
    return;
}

int takeStep()
{
    vector<char>choice={'R','P','S'};
    int randomIndex=rand()%choice.size();
    char computerMove=choice[randomIndex];
    char myMove;
    cout<<"\n\t- R --> Rock\n";
    cout<<"\t- P --> Paper\n";
    cout<<"\t- S --> Scissors\n";
    cout<<"\tChoose any one of the given option : ";
    cin>>myMove;
    while(myMove!='R' && myMove!='P' && myMove!='S')
    {
        cout<<"\n\t\t--  Enter a valid input  --\n";
        cout<<"\t- R --> Rock\n";
        cout<<"\t- P --> Paper\n";
        cout<<"\t- S --> Scissors\n";
        cout<<"\tChoose any one of the given option : ";
        cin>>myMove;
    }
    cout<<"\n\tComputer Move : "<<computerMove<<"\n";
    cout<<"\tYour Move     : "<<myMove;
    if(myMove=='R')
    {
        if(computerMove=='P')
        {
            return 2;
        }
        else if(computerMove=='S')
        {
            return 1;
        }
    }
    else if(myMove=='P')
    {
        if(computerMove=='S')
        {
            return 2;
        }
        else if(computerMove=='R')
        {
            return 1;
        }
    }
    else 
    {
        if(computerMove=='R')
        {
            return 2;
        }
        else if(computerMove=='P')
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    cout<<"\n\t----------------------\n";
    cout<<"\t|  TIC TAC TOE GAME  |";
    cout<<"\n\t----------------------\n\n";

    startQuit();
    while(button=='S' || button=='R')
    {
        int result=takeStep();
        cout<<"\n\t------------------\n";
        if(result==0)
        {
            cout<<"\t|      Draw      |\n";
        }
        else if(result==1)
        {
            cout<<"\t|     You Win    |\n";
        }
        else 
        {
            cout<<"\t|  Computer Win  |\n";
        }
        cout<<"\t------------------\n";
        resumeQuit();
    }
    cout<<"\n\t-----------------------------------------------\n";
    cout<<"\t|  HOPE YOU HAVE A LOT OF FUN WITH THIS GAME  |\n";
    cout<<"\t|               -- THANK YOU --               |\n";
    cout<<"\t-----------------------------------------------\n\n\n";
}