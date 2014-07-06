#include <gmapping/sensor/sensor_base/sensorreading.h>
#include <iostream> //KL TMP
namespace GMapping{

SensorReading::SensorReading(const Sensor* s, double t){
	m_sensor=s;
	m_time=t;
	//std::cerr << "SensorReading objects constructed (Possibly by RangeReading inheritance)" << std::endl; //KL TMP
}


SensorReading::~SensorReading(){
  //std::cerr << "SensorReading objects destructed (Possibly by RangeReading inheritance)" << std::endl; //KL TMP
}
};

