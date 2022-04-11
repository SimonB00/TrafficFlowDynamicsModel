#ifndef STREET_HPP
#define STREET_HPP

class Street {
private:
  double _lenght;     // lenght of the street
  int _maxCapacity;   // maximum capacity of vehicles
  int _nVehicles = 0; // number of vehicles on the street
  int _src;           // source node
  int _dst;           // destination node

public:
  Street(int, int, double);
  ~Street() = default;

  int getOrigin() const noexcept;
  int getDestination() const noexcept;
  double getLenght() const noexcept;
  bool isFull() const noexcept;
  int getNVehicles() const noexcept;
  double getVelocity() const noexcept;
  double getNormVelocity() const noexcept;
  void addVehicle();
  void remVehicle();
};

#endif