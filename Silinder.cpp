#include "Silinder.hpp"
#include <cmath>

Silinder::Silinder(double r, double t) : jariJari(r), tinggi(t) {}

double Silinder::hitungVolume() const {
    return M_PI * jariJari * jariJari * tinggi;
}
double Silinder::hitungLuasPerm() const {
    return 2 * M_PI * jariJari * (jariJari + tinggi);
}
double Silinder::getJarijari() const{
  return jariJari;
}
double Silinder::getTinggi() const{
  return tinggi;
}
Silinder::~Silinder(){

}
