#include"flightoperations.h"

int menu(FlightOperations& oprs){
    int choice;
    cout<<"1.Create  2.Update   3.Search.   4.Delete    5.ListAll    6.Exit\n";
        cout<<"Enter your choice:";
        cin>>choice;
        switch (choice)
        {
        case 1:oprs.createFlight();
            break;
        case 2:oprs.updateFlight();
            break;
        case 3:oprs.searchFlight();
            break;
        case 4:oprs.deleteFlight();
            break;
        case 5:oprs.listAllFlights();
            break;
        default:
            break;
        }
    return choice;
}
void startApp(){
    int choice=0;
    FlightOperations oprs;
    do
    {
        choice=menu(oprs);
    } while (choice!=6);
}

int main(){
    startApp();
    cout<<"End Of Program.";
}