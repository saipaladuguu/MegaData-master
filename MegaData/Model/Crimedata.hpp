//
//  CrimeData.hpp
//  MorningMegaProject
//
//  Created by Paladugu, Sai Neeraj on 5/1/17.
//  Copyright � 2017 paladugu, Sai Neeraj. All rights reserved.
//

#ifndef CrimeData_hpp
#define CrimeData_hpp

#include <string>
#include <cmath>
#include <sstream> //String as stream

using namespace std;

class CrimeData
{
private:
    string department;
    int population;
    double allPropertyRates;
    double burglaryRates;
    double larcenyRates;
    double motorRates;
    double allViolentRates;
    double assaultRates;
    double murderRates;
    double rapeRates;
    double robberyRates;
    string state;
    int allPropertyCrime;
    int allBurglary;
    int allLarceny;
    int allMotor;
    int allViolent;
    int allAssault;
    int allMurder;
    int allRape;
    int allRobbery;
    int year;
public:
    CrimeData();
    CrimeData(string dataLine);

    string getDepartment() const;
    int getPopulation() const;
    double getAllPropertyRates() const;
    double getBurglaryRates() const;
    double getLarcenyRates() const;
    double getMotorRates() const;
    double getAllViolentRates() const;
    double getAssaultRates() const;
    double getMurderRates() const;
    double getRapeRates() const;
    double getRobberyRates() const;
    string getState() const;
    int getAllPropertyCrime() const;
    int getAllBurglary() const;
    int getAllLarceny() const;
    int getAllMotor() const;
    int getAllViolent() const;
    int getAllAssault() const;
    int getAllMurder() const;
    int getAllRape() const;
    int getAllRobbery() const;
    int getYear() const;

    void setDepartment(const string & department);
    void setPopulation(const int & population);
    void setAllPropertyRates(const double & property);
    void setBurglaryRates(const double & burglary);
    void setLarcenyRates(const double & larceny);
    void setMotorRates(const double & motor);
    void setAllViolentRates(const double & violent);
    void setAssaultRates(const double & assault);
    void setMurderRates(const double & murder);
    void setRapeRates(const double & rape);
    void setRobberyRates(const double & robbery);
    void setState(const string & state);
    void setAllPropertyCrime(const int & property);
    void setAllBurglary(const int & burglary);
    void setAllLarceny(const int & larceny);
    void setAllMotor(const int & motor);
    void setAllViolent(const int & violent);
    void setAllAssault(const int & assault);
    void setAllMurder(const int & murder);
    void setAllRape(const int & rape);
    void setAllRobbery(const int & robbery);
    void setYear(const int & year);

    bool operator < (const CrimeData & other);
    bool operator > (const CrimeData & other);
    bool operator == (const CrimeData & other);

    friend ostream & operator << (ostream &outputStream, const CrimeData & outputData);
};

#endif /* CrimeData_hpp */
