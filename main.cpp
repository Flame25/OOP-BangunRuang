#include "Balok.hpp"
#include "Silinder.hpp"
#include "Kubus.hpp"
#include <iostream>

int main(){
  // Test Kubus
  Kubus kubus(3.0);
  std::cout << "Kubus:" << std::endl;
  kubus.hitungVolume();
  kubus.hitungLuasPerm();
  std::cout << "Sisi : " << kubus.getSisi() << std::endl; 
  std::cout << "Volume Kubus: " << kubus.hitungVolume() << std::endl;
  std::cout << "Luas Permukaan Kubus: " << kubus.hitungLuasPerm() << std::endl;
  std::cout << std::endl;

  // Test Balok
  Balok balok(2.0, 4.0, 5.0);
  std::cout << "Balok:" << std::endl;
  balok.hitungVolume();
  balok.hitungLuasPerm();
  std::cout << "Panjang : " << balok.getPanjang() << std::endl; 
  std::cout << "Lebar : " << balok.getLebar() << std::endl; 
  std::cout << "Tinggi : " << balok.getTinggi() << std::endl; 
  std::cout << "Volume Balok: " << balok.hitungVolume() << std::endl;
  std::cout << "Luas Permukaan Balok: " << balok.hitungLuasPerm()<< std::endl;
  std::cout << std::endl;

  // Test Silinder
  Silinder silinder(2.0, 5.0);
  std::cout << "Silinder:" << std::endl;
  silinder.hitungVolume();
  silinder.hitungLuasPerm();
  std::cout << "Jari - Jari : " << silinder.getJarijari() << std::endl; 
  std::cout << "Tinggi : " << silinder.getTinggi() << std::endl;
  std::cout << "Volume Silinder: " << silinder.hitungVolume() << std::endl;
  std::cout << "Luas Permukaan Silinder: " << silinder.hitungLuasPerm() << std::endl;
}
