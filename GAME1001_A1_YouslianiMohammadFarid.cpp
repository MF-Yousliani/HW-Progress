#include <iostream>
#include <fstream>
#include<windows.h>
#include <string> 

using namespace std;


int main()
{
    string PlayerName;
    fstream SaveMatch;
    ofstream FileCreator;
    string filename;

    int R = 1, P = 2, S = 3;


    Sleep(650);
    cout << "Welcome to >>> Rock - Paper - Scissor <<<" << endl << endl;
    Sleep(1400);
    cout << "What would you like your Username to be?\n";
    cin >> PlayerName;
    filename = PlayerName + ".txt";
    SaveMatch.open(filename);

    if (SaveMatch) {
        Sleep(700);
        cout << "This name " << "(" << PlayerName << ")" << " is already Exist.so let's continue your game.." << endl;
    }
    else {
        Sleep(1000);
        cout << "the name " << "(" << PlayerName << ")" << " not exist" << endl;
        Sleep(1000);
        cout << "We creating one for ya" << endl;
        Sleep(2000);
        ofstream FileCreator(filename);
        cout << "SaveData Created..." << endl;
        Sleep(1500);
    }
    SaveMatch.close();




    char again = 'y';


    Sleep(1000);
    cout << endl;
    cout << endl;
    cout << "Welcome to >>> Rock - Paper - Scissor <<<" << endl << endl;

    do
    {
        Sleep(1000);
        cout << endl;
        cout << " \n -------------------------------------------------------------------";
        cout << endl;
        Sleep(1000);



        // Declare variables.
        bool currentPlayer, quitGame = false;
        int randomNum, guess, Pguess, Bguess, PguessScore = 0, BguessScore = 0, BotMin = 0, BotMax = 100, BotTalk;
        string player1, player2 = "Bot", Winner;
        // Create random number from 1 to 100 inclusive.
        srand((unsigned)time(NULL)); // Seeds the random number sequence.
        randomNum = 1 + rand() % 100; // Returns 1-100 inclusive

        // Prompt the players for their names.

        Sleep(200);
        cout << endl;
        cout << "Okay," << PlayerName << ".Lets see what you got." << endl;
        Sleep(1200);
        cout << "You vs Bot " << endl;
        cout << endl;
        Sleep(500);






        for (int i = 0; i < 9; i++) {


            cout << PlayerName << " , Enter your choose : " << endl;
            cin >> Pguess;
            Bguess = rand() % 3 + 1;

            Sleep(700);

            if (Pguess == 1) {
                cout << PlayerName << " : Rock" << endl;
            }
            if (Pguess == 2) {
                cout << PlayerName << " : Paper" << endl;
            }
            if (Pguess == 3) {
                cout << PlayerName << " : Scissor" << endl;
            }

            if (Bguess == 1) {
                cout << "Bot" << " : Rock" << endl;
            }
            if (Bguess == 2) {
                cout << "Bot" << " : Paper" << endl;
            }
            if (Bguess == 3) {
                cout << "Bot" << " : Scissor" << endl;
            }
            cout << endl;
            Sleep(700);

            if (Pguess == 1 && Bguess == 3 || Pguess == 2 && Bguess == 1 || Pguess == 3 && Bguess == 2 || Pguess == 1 && Bguess == 3)
            {
                cout << "Player Wins !!" << endl;
                PguessScore += 1;
                BguessScore += 0;
            }
            else {

                if (Pguess == Bguess)
                {
                    cout << "Draw!!" << endl;
                    PguessScore += 0;
                    BguessScore += 0;
                }
                else {

                    cout << "Robot Wins !!" << endl;
                    PguessScore += 0;
                    BguessScore += 1;
                }


            }
            Sleep(700);
            cout << endl;
            cout << "Round " << i + 1 << "/9  |  " << PlayerName << " Score : " << PguessScore << " Vs " << "Bot" << " Score : " << BguessScore << endl;
            cout << endl;
            cout << endl;











        }



        Sleep(1500);
        cout << "GameOver" << endl;
        Sleep(700);
        if (PguessScore > BguessScore) {
            cout << "PlayerWins!!" << endl;
            Winner = PlayerName;
        }
        if (PguessScore < BguessScore) {
            cout << "RobotWins!!" << endl;
            Winner = "Bot";
        }
        if (PguessScore == BguessScore) {
            cout << "Draw!!!" << endl;
            Winner = "Draw";
        }
        cout << endl;
        cout << endl;

        SaveMatch.open(filename, std::ios_base::app);

        if (SaveMatch) {

            SaveMatch << "PlayerName : " << PlayerName << "  Scores : " << PguessScore << " Vs " << BguessScore << " Winner : " << Winner << endl;

        }

        SaveMatch.close();

        Sleep(1200);

        cout << "Now...Do you want to play Again!!!  - (Y/N)" << endl;
        cin >> again;
    } while (again == 'y' || again == 'Y');



































    return 0;
}
