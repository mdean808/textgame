#include <iostream>
#include <string>
#include "libs/character.h"
#include "libs/location.h"
using namespace std;

//string showSate();

int main() {

    //helper functions


    //PRINT INSTRUCTIONS HERE

    Character Player = Character(0, 0, 10, false, "null");

    //set unique location inputs
    Location Map[5][5];
    Location A = Location(10, 0, "a", false, "null", false, false);
        Map[0][0] = A;
    Location B = Location(20, -10, "b", false, "null", false, true);
        Map[1][0] = B;
    Location C = Location(10, -5, "c", false, "null", false, true);
        Map[2][0] = C;
    Location D = Location(60, -20, "d", false, "null", false, true);
        Map[3][0] = D;
    Location E = Location(20, -10, "e", false, "null", false, true);
        Map[4][0] = E;
    Location F = Location(10, -5, "f", false, "null", false, true);
        Map[0][1] = D;
    Location G = Location(25, -15, "g", false, "null", false, true);
        Map[1][1] = G;
    Location H = Location(10, -30, "h", false, "null", false, true);
        Map[2][1] = H;
    Location I = Location(30, -30, "i", false, "null", false, true);
        Map[3][1] = I;
    Location J = Location(10, -40, "j", false, "null", false, true);
        Map[4][1] = J;
    Location K = Location(30, -15, "k", false, "null", false, true);
        Map[0][2] = K;
    Location L = Location(25, 0, "l", false, "null", false, true);
        Map[1][2] = L;
    Location M = Location(10, -20, "m", false, "null", false, true);
        Map[2][2] = M;
    Location N = Location(10, -15, "n", false, "null", false, true);
        Map[3][2] = N;
    Location O = Location(15, -15, "o", false, "null", false, true);
        Map[4][2] = O;
    Location P = Location(15, -20, "p", false, "null", false, true);
        Map[0][3] = P;
    Location Q = Location(10, -40, "p", false, "null", false, true);
        Map[1][3] = Q;
    Location R = Location(15, -40, "r", false, "null", false, true);
        Map[2][3] = R;
    Location S = Location(0, -40, "s", false, "null", false, true);
        Map[3][3] = S;
    Location T = Location(5, -25, "t", false, "null", false, true);
        Map[4][3] = T;
    Location U = Location(20, -30, "u", false, "null", false, true);
        Map[0][4] = U;
    Location V = Location(5, -25, "v", false, "null", false, true);
        Map[1][4] = V;
    Location W = Location(5, -25, "w", false, "null", false, true);
        Map[2][4] = W;
    Location X = Location(30, -40, "x", false, "null", false, true);
        Map[3][4] = X;
    Location Y = Location(30, -40, "x", false, "null", false, true);
        Map[4][4] = Y;
    //end setting unique locations

    //?? Should this be in the loop?
    bool finished = Player.getFinished();

    while (!finished) {
        //give the state of the game
        here:



        string inputVar;
        cout << "  What's your next move?" << endl;
        cin >> inputVar;

        //determine if the command is a movement

            if (inputVar == "n" || inputVar == "N" || inputVar == "north" || inputVar == "North" ||
                inputVar == "s" || inputVar == "S" || inputVar == "south" || inputVar == "South" ||
                inputVar == "e" || inputVar == "E" || inputVar == "east" || inputVar == "East" ||
                inputVar == "w" || inputVar == "W" || inputVar == "west" || inputVar == "West") {


                if (inputVar == "e" || inputVar == "E" || inputVar == "east" || inputVar == "East") {
                    int i = Player.getPositionI();
                    int j = Player.getPositionJ();
                    int fireStatus = Map[i][j].getFireResource();

                    int wp = Player.getWaterPoints();
                    if (wp < 0 ) {
                        cout << "You're overwhelmed by flames! Try playing again." << endl;
                        Player.setFinished(true);
                    }

                    if (i == 4) {
                        cout << "Please Input a Correct Command" << endl;
                        //
                        goto here;
                    }

                    if (fireStatus < 0) {
                        cout << "Put out fire first!" << endl;
                        //
                        goto here;
                    }
                    else {
                        i = i + 1;
                        Player.setPositionI(i);
                        cout << Player << endl; // insertion operator
                        goto here;
                    }

                } else if (inputVar == "s" || inputVar == "S" || inputVar == "south" ||inputVar == "South") {
                    int i = Player.getPositionI();
                    int j = Player.getPositionJ();
                    int fireStatus = Map[i][j].getFireResource();

                    int wp = Player.getWaterPoints();
                    if (wp < 0 ) {
                        cout << "You're overwhelmed by flames! Try playing again." << endl;
                        Player.setFinished(true);
                    }

                    if (j == 4) {
                        cout << "Please Input a Correct Command" << endl;
                        goto here;
                    }

                    if (fireStatus < 0) {
                        cout << "Put out fire first!" << endl;
                        goto here;
                    }
                    else {
                        j = j + 1;
                        Player.setPositionJ(j);
                        cout << Player << endl;
                        goto here;
                    }
                }
                else if (inputVar == "n" || inputVar == "N" || inputVar == "north" || inputVar == "North") {
                    //bool didMove = Player.moveNorth(); //get the relevant movement func
                    int i = Player.getPositionI();
                    int j = Player.getPositionJ();
                    int fireStatus = Map[i][j].getFireResource();

                    int wp = Player.getWaterPoints();
                    if (wp < 0 ) {
                        cout << "You're overwhelmed by flames! Try playing again." << endl;
                        Player.setFinished(true);
                    }

                    if (j == 0){
                        cout << "Please Input a Correct Command" << endl;
                        goto here;
                    }

                    if (fireStatus < 0) {
                        cout << "Put out fire first!" << endl;

                        goto here;
                    }

                    else {
                        j = j - 1;
                        Player.setPositionJ(j);
                        cout << Player << endl;
                        goto here;
                    }
                }
                else if (inputVar == "w" || inputVar == "W" || inputVar == "west" || inputVar == "West") {
                    //bool didMove = Player.moveWest();
                    int i = Player.getPositionI();
                    int j = Player.getPositionJ();
                    int fireStatus = Map[i][j].getFireResource();

                    int wp = Player.getWaterPoints();
                    if (wp < 0 ) {
                        cout << "You're overwhelmed by flames! Try playing again." << endl;
                        Player.setFinished(true);
                    }

                    if (i == 0){
                        cout << "Please Input a Correct Command" << endl;
                        goto here;
                    }

                    if (fireStatus < 0) {
                        cout << "Put out fire first!" << endl;
                        continue;
                    }
                    else {
                        i = i - 1;
                        Player.setPositionI(i);
                        cout << Player << endl;
                        goto here;
                    }
                }
            }
                //quell
            else if (inputVar == "quell" || inputVar == "q") {
                int i = Player.getPositionI();
                int j = Player.getPositionJ();
                int fireStatus = Map[i][j].getFireResource();
                //int waterStatus = Map[i][j].getWaterResource();
                int waterStatus = Player.getWaterPoints();
                int wp = waterStatus + fireStatus;
                //check if player is still alive?
                Player.setWaterPoints(wp);
                int fp = 0; //is always going to be zero after using waterpoints
                Map[i][j].setFireResource(fp);
                cout << Player << endl;
            }
                //regen
            else if (inputVar == "regen" || inputVar == "r") {
                int i = Player.getPositionI();
                int j = Player.getPositionJ();
                int waterStatus = Map[i][j].getWaterResource();
                int currentWater = Player.getWaterPoints();
                int newWaterTotal = waterStatus + currentWater;
                Player.setWaterPoints(newWaterTotal);

                //determine if the player is alive:
                if (newWaterTotal < 0 ) {
                    cout << "You're overwhelmed by flames!" << endl;
                    Player.setFinished(true);
                }
                cout << Player << endl;
            }

            else if (inputVar == "exit" || inputVar == "stop") {
                cout << "Thanks for Playing" <<  endl;
                Player.setFinished(true);
            } else if (inputVar == "help") {
                //PRINT THE INTRO

            }
            //update the state
        }

    return 0;
}
