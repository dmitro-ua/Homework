#include <iostream>
#include "conio.h"
using namespace std;

enum VehicleType
{
	V_Car,
	V_Train
};

enum CarType
{
	gazel,
	limo,
	jip,
	audi8,
	oka,
	Car_MAX,
};

enum TrainType
{
	plackart,
	kupe,
	sv,
	Train_MAX,
};


static int CarSits[Car_MAX] = {17,10,7,5,4};
static int TrainSits[Train_MAX] = {54,36,18};


class CVehicle
{
public:
	CVehicle(VehicleType VehicleType);
	
	int SetFare(int Fare);
	int DoTransfer();

	void Route();
	void Info();
	
	int csits;
	int m_Fare;


private:
	char m_Departure[25];
	char m_Arrival[25];
};



class CCar: public CVehicle
{
public:
	CCar(CarType carType);
		
private:
	CarType carType;
};



class CTrain: public CVehicle
{
public:
	CTrain(TrainType TrainType);

private:
	TrainType trainType;
};