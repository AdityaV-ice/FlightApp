#include"flightoperations.h"
#include<algorithm>

FlightOperations:: FlightOperations(){

}
FlightOperations::~FlightOperations(){

}
void FlightOperations::readFlightDetails(Flight& flight){
    int id=0;
    string code = "";
    string source="";
    string destination="";
    float price=0.0f;

    cout<<"Enter Flight Id: ";
    cin>>id;
    cout<<"\nEnter Flight Code(AA-DDDD): ";
    cin>>code;
    cout<<"\nEnter Flight Source: ";
    cin>>source;
    cout<<"\nEnter Flight Destination: ";
    cin>>destination;
    cout<<"\nEnter Flight Price: ";
    cin>>price;

    flight.setId(id);
    flight.setCode(code);
    flight.setSource(source);
    flight.setDestination(destination);
    flight.setPrice(price);
}

void FlightOperations::createFlight(){
    Flight flight;
    readFlightDetails(flight);
    flights.push_back(flight);
}

bool FlightOperations::isEmpty(){
    if(flights.empty())
        return true;
    return false;
}

void FlightOperations::updateFlight(){
    if(isEmpty()){
        cout<<"List of all Flights is empty"<<endl; 
        return;
    }
    int id=0;
    cout<<"\nEnter ID of the Flight to update its price: ";
    cin>>id;
    for(Flight& flight : flights){
        if(flight.getId() == id){
            float price=0.0f;
            cout<<"\nEnter the new price of the Flight: ";
            cin>>price;
            flight.setPrice(price);
            cout<<"\nFlight Object is Updated!";
            return;
        }
    }
    cout<<"\nFlight with ID = "<<id<<" not found.";
}

void FlightOperations::deleteFlight(){
    if(isEmpty()){
        cout<<"List of all Flights is empty"<<endl; 
        return;
    }
    int id=0;
    cout<<"\nEnter ID of the Flight to be deleted: ";
    cin>>id;
    Flight flight;
    flights.erase(find(flights.begin(),flights.end(),flight));
    cout<<"\nFlight with ID = "<<id<<" is deleted."<<endl;
}

void FlightOperations::searchFlight(){
    if(isEmpty()){
        cout<<"List of all Flights is empty"<<endl; 
        return;
    }
    int id=0;
    cout<<"\nEnter ID of the Flight to be searched: ";
    cin>>id;
    bool found = false;
    for(Flight& flight:flights){
        if(flight.getId() == id){
            cout<<flight<<endl;
            found = true;
        }
    }
    if(!found){
        cout<<"Flight with Id="<<id<<" was not found"<<endl;
    }
}

void FlightOperations::listAllFlights(){
    if(isEmpty()){
        cout<<"List of all Flights is empty"<<endl; 
        return;
    }
    for(Flight& flight:flights){
        cout<<flight<<endl;
    }
}