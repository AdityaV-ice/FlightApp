#include"flight.h"
#include<iostream>

using namespace std;

Flight::Flight()
{
    id=0;
    code = source =destination ="";
    price=0.0f;
}

Flight::Flight(int id,string code,string source,string destination,float price){
    this->id=id;
    this->code=code;
    this->source=source;
    this->destination=destination;
    this->price=price;
}

Flight::~Flight()
{
    //cout<<"Flight object with ID="<<id<<"is deleted"<<endl;//

}

int Flight::getId(){
    return id;
}

void Flight::setId(int id){
    this->id=id;
}

string Flight::getCode(){
    return this->code;
}

void Flight::setCode(string code){
    this->code=code;
}

string Flight::getSource(){
    return this->source;
}

void Flight::setSource(string source){
    this->source=source;
}

string Flight::getDestination(){
    return this->destination;
}

void Flight::setDestination(string destination){
    this->destination=destination;
}

float Flight::getPrice()
{
    return price;
}
void Flight::setPrice(float price)
{
    this->price=price;
}

bool Flight::operator==(const Flight& flight){
    return this->id==flight.id;
}

ostream& operator<<(ostream& print,Flight& flight){
    cout<<"Flight-Code="<<flight.getCode()<<",Source="<<flight.getSource()<<",Destination="<<flight.getDestination()<<",Price="<<flight.getPrice();

}