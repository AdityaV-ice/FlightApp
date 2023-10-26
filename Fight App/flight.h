#include<string>
#include<iostream>
using namespace std;


class Flight
{
private:
    int id;
    string code;
    string source;
    string destination;
    float price;
public:
    Flight();
    Flight(int,string,string,string,float);
    ~Flight();

    int getId();
    void setId(int);
    string getCode();
    void setCode(string);
    string getSource();
    void setSource(string);
    string getDestination();
    void setDestination(string);
    float getPrice();
    void setPrice(float);
    bool operator==(const Flight&);
};

ostream& operator<<(ostream& print,Flight& flight);

