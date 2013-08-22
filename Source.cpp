#include "Header.h"

CVehicle::CVehicle(VehicleType VehicleType)
{
	switch(VehicleType)
	{
	case 0:
		cout<<"Vehicle Type: Car."<<endl;
		break;
	case 1:
		cout<<"Vehicle Type: Train. "<<endl;
		break;
	}
}

int CVehicle:: SetFare(int Fare)
{
	m_Fare=Fare;
	return m_Fare;
}

void CVehicle:: Route()
{
	cout<< "Enter the name of Departure point: ";
	cin>>m_Departure;
	cout<<"Enter the name of Arrival point: ";
	cin>>m_Arrival;
	cout<<"Transfer from "<<m_Departure<<" to "<< m_Arrival<<endl<<endl;
}

int CVehicle:: DoTransfer()
{
	return m_Fare*csits;
}

void CVehicle:: Info()
{
	cout<<"Max sits:"<<csits<<endl
		<<"Fare: "<<m_Fare<<endl;
	cout<<"Profit: "<<m_Fare*csits<<endl<<endl<<endl;
}



CCar:: CCar(CarType carType): CVehicle(V_Car)
{
	csits = CarSits[carType];
	switch(carType)
	{
	case 0:
		cout<<"Car Type: Gazel. "<<endl;
		break;
	case 1:
		cout<<"Car Type: Limo. "<<endl;
		break;
	case 2:
		cout<<"Car Type: Jip. "<<endl;
		break;
	case 3:
		cout<<"Car Type: Audi8. "<<endl;
		break;
	case 4:
		cout<<"Car Type: Oka. "<<endl;
		break;
	}
}



CTrain:: CTrain(TrainType trainType):CVehicle(V_Train)
{
	csits = TrainSits[trainType];
	switch(trainType)
	{
	case 0:
		cout<<"Train Type: Plackart. "<<endl;
		break;
	case 1:
		cout<<"Train Type: Kupe. "<<endl;
		break;
	case 2:
		cout<<"Train Type: SV. "<<endl;
		break;
	}
}