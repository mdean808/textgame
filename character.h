#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
// IT WORKS!
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

    friend ostream &operator << ( ostream &output, Character &P);

public:

    //get the positions
    int getPositionI() {
        return positionI;
    }
    int getPositionJ() {
        return positionJ;
    }

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

ostream &operator << ( ostream &output, Character &P) { //if operator "<<", referencing this class, then do:
    int i = P.getPositionI();
    int j = P.getPositionJ();
    int wp = P.getWaterPoints();
    output << "Score & Current Water Available:  "<< wp << std::endl << "Current Location [i][j]: " << "[" << i << "]" <<
           "["<< j << "]" << std::endl;
    return output;
}






#endif


