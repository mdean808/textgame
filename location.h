#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>
#include <string>

using namespace std;

class Location {

private:
    int waterResource;
    int fireResource;
    string description;

    bool clue;
    string clueDescription;
    bool puppy;
    bool activeFire;

public:

    int getWaterResource() {
        return waterResource;
        }
    void setWaterResource(int wr) {
        this ->waterResource = wr;
    }

    int getFireResource() {
        return fireResource;
    }

    void setFireResource(int fr) {
        this -> fireResource = fr;
    }

    string getDescription() {
        return description;
    }

    void setDescription(string desc) {
        this -> description = desc;
    }

    bool getClue() {
        return clue;
    }

    void setClue(bool cl){
        this -> clue = cl;
    }

    string getClueDescription() {
        return clueDescription;
    }

    void setClueDescription(string clDesc) {
        this -> clueDescription = clDesc;
    }

    bool getPuppy() {
        return puppy;
    }

    void setPuppy(bool pup){
        this -> puppy = pup;
    }

    bool getActiveFire() {
        return activeFire;
    }

    void setActiveFire(bool af) {
        this -> activeFire = af;
    }

    Location();

    Location (int wp, int fp, string desc, bool cl, string clDesc, bool pup, bool af) {
        this -> waterResource = wp;
        this -> fireResource = fp;
        this -> description = desc;
        this -> clue = cl;
        this -> clueDescription = clDesc;
        this -> puppy = pup;
        this -> activeFire = af;
    }
};


Location::Location()
{
 waterResource = 0;
 fireResource = 0;
 description = "null";
 clue = false;
 puppy = false;
 activeFire = 0;
}


#endif