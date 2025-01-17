#ifndef VEHICLE_TYPE_HPP
#define VEHICLE_TYPE_HPP

//! VehicleType class

//! This class is used to represent a vehicle type.

#include <vector>

class VehicleType {
private:
	uint16_t _trip[2]; // 0=source, 1=destination
  std::vector<std::vector<double>> _transMatrix; // transition matrix

public:
  VehicleType(uint16_t, uint16_t);
  ~VehicleType() = default;

  uint16_t getSource() const noexcept;
  uint16_t getDestination() const noexcept;
  void setTransMatrix(std::vector<std::vector<double>> &); //!< set the transition matrix
  std::vector<std::vector<double>> const &getTransMatrix() const;
};

#endif
