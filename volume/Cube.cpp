#include "Cube.h"

double Cube::getVolume(){
    return length*length*length; 
}

double Cube::getSurfaceArea(){
    return 6*length*length;

}

void Cube::setLength(double length){
    length=length; 
}

