#include "Kubus.hpp"

Kubus::Kubus(double s) : sisi(s) {}

double Kubus::hitungVolume() const {
    return sisi * sisi * sisi;
}

double Kubus::hitungLuasPerm() const {
    return 6 * sisi * sisi;
}
double Kubus::getSisi() const{
  return sisi;
}
Kubus::~Kubus(){

}
