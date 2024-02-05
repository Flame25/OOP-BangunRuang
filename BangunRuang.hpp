#ifndef BANGUNRUANG_H
#define BANGUNRUANG_H
class BangunRuang{
  public: 
    virtual double hitungVolume() const=0; 
    virtual double hitungLuasPerm() const=0;
    virtual ~BangunRuang(); 
};
#endif

