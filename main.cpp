#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void paperScissorsRock();

int main()
{
    paperScissorsRock();

    return 0;
}

void paperScissorsRock(){
    srand(time(0));

    string inputPlayer;
    string computerChoice[3] = {"P","S","R"};
    string computerResult;

    int playerCounter = 0;
    int computerCounter = 0;

    do{
        cout << "Enter your choice : ";
        cin >> inputPlayer;
        cout << endl;

        computerResult = computerChoice[rand()%3];

        if(inputPlayer == "R" && computerResult == "S"){
            playerCounter++;
            cout << "Player choice : " << inputPlayer << "  Computer choice : " << computerResult << endl;
            cout << "Player won!" << endl;
            cout << "Player score : " << playerCounter << endl;
            cout << "Computer score : " << computerCounter << endl;
            cout << endl;
            cout << endl;
        }
        else if(inputPlayer == "S" && computerResult == "R"){
            computerCounter++;
            cout << "Player choice : " << inputPlayer << "  Computer choice : " << computerResult << endl;
            cout << "Computer won!" << endl;
            cout << "Player score : " << playerCounter << endl;
            cout << "Computer score : " << computerCounter << endl;
            cout << endl;
            cout << endl;
        }
        else if(inputPlayer == "R" && computerResult == "P"){
            computerCounter++;
            cout << "Player choice : " << inputPlayer << "  Computer choice : " << computerResult << endl;
            cout << "Computer won!" << endl;
            cout << "Player score : " << playerCounter << endl;
            cout << "Computer score : " << computerCounter << endl;
            cout << endl;
            cout << endl;
        }
         else if(inputPlayer == "P" && computerResult == "R"){
            playerCounter++;
            cout << "Player choice : " << inputPlayer << "  Computer choice : " << computerResult << endl;
            cout << "Player won!" << endl;
            cout << "Player score : " << playerCounter << endl;
            cout << "Computer score : " << computerCounter << endl;
            cout << endl;
            cout << endl;
        }
        else if(inputPlayer == "S" && computerResult == "P"){
            playerCounter++;
            cout << "Player choice : " << inputPlayer << "  Computer choice : " << computerResult << endl;
            cout << "Player won!" << endl;
            cout << "Player score : " << playerCounter << endl;
            cout << "Computer score : " << computerCounter << endl;
            cout << endl;
            cout << endl;
        }
         else if(inputPlayer == "P" && computerResult == "S"){
            computerCounter++;
            cout << "Player choice : " << inputPlayer << "  Computer choice : " << computerResult << endl;
            cout << "Computer won!" << endl;
            cout << "Player score : " << playerCounter << endl;
            cout << "Computer score : " << computerCounter << endl;
            cout << endl;
            cout << endl;
        }
        else if(inputPlayer == computerResult){
            cout << "Player choice : " << inputPlayer << "  Computer choice : " << computerResult << endl;
            cout << "It's a TIE! " << endl;
            cout << "Player score : " << playerCounter << endl;
            cout << "Computer score : " << computerCounter << endl;
            cout << endl;
            cout << endl;
        }
        else if(inputPlayer == "exit"){
            break;
        }
        else{
            cout << "You entered wrong letter so try again ! " << endl;
            cout << endl;
            cout << endl;
        }
        cout << "If you want to leave write -> 'exit' " << endl;
        cout << endl;

    }while(inputPlayer != "exit");

}
