#include "Balok.hpp"

Balok::Balok(double p, double l, double t):panjang(p),lebar(l),tinggi(t){}
double Balok::hitungVolume() const {
  return panjang*lebar*tinggi;
}
double Balok::hitungLuasPerm() const {
  return 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
}
double Balok::getPanjang() const{
  return panjang;
}
double Balok::getLebar() const{
  return lebar; 
}
double Balok::getTinggi() const{
  return tinggi;
}
Balok::~Balok(){

}
