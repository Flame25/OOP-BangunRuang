#ifndef SILINDER_H
#define SILINDER_H
#include "BangunRuang.hpp"

class Silinder:public BangunRuang{
  private:
    double jariJari, tinggi; 
  public:
    Silinder(double jariJari, double tinggi); 
    double hitungVolume() const override;
    double hitungLuasPerm() const override;
    double getJarijari() const; 
    double getTinggi() const; 
    ~Silinder();
};
#endif
