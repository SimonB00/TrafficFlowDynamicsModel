#ifndef VEHICLE_HPP
#define VEHICLE_HPP

//! Vehicle class

//! This class is used to represent a vehicle.

#include "VehicleType.hpp"
#include <memory>
#include <vector>

class Vehicle {
private:
  static std::vector<std::shared_ptr<VehicleType>> _vehicleType;
  uint8_t _index;
  uint16_t _position;
  uint16_t _previousPosition = -1;
  int _street = -1;
  int _timePenalty = 0;
  double _velocity = 0.;
  int _timeTraveled = 0;

public:
  Vehicle(uint8_t); //!< create a vehicle of a type in _vehicleType
  ~Vehicle() = default;

  static void addVehicleType(uint16_t, uint16_t); //!< add a vehicle type in _vehicleType
  static void addVehicleType(const char *); //!< add many vehicle types in _vehicleType from file
  static std::shared_ptr<VehicleType> getVehicleType(uint8_t const); //!< get a vehicle type from _vehicleType
  static uint8_t getNVehicleType(); //!< get the number of vehicle types in _vehicleType
  uint8_t getType() const noexcept; // return the index of the vehicle type in _vehicleType
  void setPosition(uint16_t);
  uint16_t getPosition() const;
  uint16_t getPreviousPosition() const;
  void setStreet(int);
  int getStreet() const;
  uint16_t getDestination() const;
  void setTimePenalty(int);
  int getTimePenalty() const;
  void setVelocity(double);
  double getVelocity() const;
  void incrementTimeTraveled();
  int getTimeTraveled() const;
  void resetTimeTraveled();
};

#endif
