#ifndef GRAPH_HPP
#define GRAPH_HPP

#include "Street.hpp"
#include "Vehicle.hpp"
#include <memory>
#include <vector>

class Graph {
private:
  std::vector<std::vector<bool>> _adjMatrix;
  std::vector<std::vector<double>> _nodesCoordinates; // coordinates matrix
  std::vector<std::shared_ptr<Street>> _streets;      // streets in the network
  std::vector<std::shared_ptr<Vehicle>> _vehicles;    // vehicles in the network
  int _n;                                             // dimension

  int _minDistance(int, int); // algoritmo per la distanza minima tra due nodi
  std::vector<int> _nextStep(int, int);

public:
  Graph(const char *);               // import from file (only matrix)
  Graph(const char *, const char *); // import from file (matrix + coordinates)
  ~Graph() = default;

  void addEdge(int, int, bool);
  void addVehicle(int);
  void createTransMatrix();

  void printMatrix() noexcept;
  void print() noexcept;

  // funzione da eliminare che verrà usata per accedere alle private (REMOVE)
  void test(int, int);
};

#endif