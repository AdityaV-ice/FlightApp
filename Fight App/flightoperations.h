#include"flight.h"
#include<vector>

using namespace std;

class FlightOperations{
private:
    vector<Flight> flights;
    void readFlightDetails(Flight&);
    bool isEmpty();
public:
    FlightOperations();
    ~FlightOperations();

    void createFlight();
    void updateFlight();
    void deleteFlight();
    void searchFlight();
    void listAllFlights();
};