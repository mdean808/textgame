#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>

using namespace std;

class Character {

private:
    int positionI;
    int positionJ;
    int waterPoints;
    string inputVar;
    //int shares;
    bool finished;
    string characterOutput;

public:

    int getPositionI() { return positionI;}
    int getPositionJ() {return positionJ;}

    void setPositionI(int i) {
        this->positionI = i;
    }

    void setPositionJ(int j) {
        this->positionJ = j;
    }

    int getWaterPoints() {
        return waterPoints;
    }

    void setWaterPoints(int wp) {
        this->waterPoints = wp;
    }

    string getInputVar(){
        return inputVar;
    }

    void setInputVar(string inpv){
        this -> inputVar = inpv;
    }

//    int getShares() {
//        return shares;
//    }
//
//    void setShares(int s) {
//        this->shares = s;
//    }

    bool getFinished() {
        return finished;
    }

    void setFinished(bool fin) {
        this -> finished = fin;
    }

    //movement functions:

    bool moveNorth() {
        int j = getPositionJ();
        if ( j == 0 ) {
            return false;
        } else {
            //move guy
            int jNew = j - 1;
            setPositionJ(jNew);
            //return to notify state of game
            return true;
        }
    }

    bool moveEast(){

        int i = getPositionI();
        if ( i == 4 ) {
            return false;
        } else {
            //move guy
            int iNew = i + 1;
            setPositionJ(iNew);
            //return to notify state of game
            return true;
        }

    }

    bool moveSouth() {
        int j = getPositionJ();
        if ( j == 4 ) {
            return false;
        } else {
            //move guy
            int jNew = j + 1;
            setPositionJ(jNew);
            //return to notify state of game
            return true;
        }

    }

    bool moveWest() {

        int i = getPositionI();
        if ( i == 0 ) {
            return false;
        } else {
            //move guy
            int iNew = i - 1;
            setPositionJ(iNew);
            //return to notify state of game
            return true;
        }

    }

    //end movement functions



    //constructor:

    Character (int i, int j, int wp, bool fin, string inpv) {
        //could use setters here instead, but it's not necessary
        this->positionI = i;
        this->positionJ = j;
        this -> waterPoints = wp;
        this -> finished = fin;
        this -> inputVar = inpv;

    }



};










#endif


