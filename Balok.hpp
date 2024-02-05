#ifndef BALOK_H
#define BALOK_H
#include "BangunRuang.hpp"
class Balok: public BangunRuang{
  private: 
    double panjang, lebar, tinggi; 
  public:
    Balok(double p, double l, double t);
    double hitungVolume() const override; 
    double hitungLuasPerm() const override;
    double getPanjang() const; 
    double getLebar() const; 
    double getTinggi() const; 
    ~Balok();
};
#endif
