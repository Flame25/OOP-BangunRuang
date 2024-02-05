#ifndef KUBUS_H
#define KUBUS_H
#include "BangunRuang.hpp"

class Kubus: public BangunRuang{ 
  private: 
    double sisi;  
  public:
    Kubus(double S);
    double hitungVolume() const override; 
    double hitungLuasPerm() const override;
    double getSisi() const; 
    ~Kubus(); 
};
#endif
