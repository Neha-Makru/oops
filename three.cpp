#include <iostream>
using namespace std;
class DB; 
class DM {
    private:
    int meters;
    float centimeters; 
    public:
    void setDistance(int m, float cm) {
    meters = m;
    centimeters = cm; 
    }
    friend void addDistances(DM, DB);
    };
    
class DB {
    private:
    int feet;
    float inches;
    public:
    void setDistance(int f, float in) {
    feet = f;
    inches = in;
    }
    friend void addDistances(DM, DB);
    };
    
void addDistances(DM dmObj, DB dbObj){
    float dmInCentimeters = dmObj.meters * 100 + dmObj.centimeters;
    float dbInInches = dbObj.feet * 12 + dbObj.inches;
    float totalDistance = dmInCentimeters + dbInInches;
    int totalMeters = static_cast <int>(totalDistance / 100);
    float remainingCentimeters = totalDistance - totalMeters * 100;
    cout<<"Total Distance: "<<totalMeters<<" meters and "<<remainingCentimeters<<" centimeters "<<endl;
}

int main() {
    DM dmObj;
    DB dbObj;
    int meters;
    float centimeters;
    cout<<"Enter distance in meters and centimeters: "<<endl;
    cin>>meters>>centimeters;
    dmObj.setDistance(meters, centimeters);
    int feet;
    float inches;
    cout<<"Enter distance in feet and inches: "<<endl;
    cin>>feet>>inches;
    dbObj.setDistance(feet, inches);
    addDistances(dmObj, dbObj);
    return 0;
}
