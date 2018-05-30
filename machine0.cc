#include <iostream>
#include <string>
using namespace std;

int main()
{
  double InFlux = 0.0;

  cout<<"Read the Incoming Flux [1/area time]: ";
  cin>>InFlux;

  cout<<endl;
  
  double Exposure = 1; //normally in seconds
  double NtargetParticles = 1; //recall that 10^34 is a small number
  double LuminosityFixedTarget = (InFlux*Exposure*NtargetParticles);
  double CrossSectionPerCollision = 1; //normally 1/cm^2
  
  cout<<"Exposure [time]: "<<Exposure<<endl;
  cout<<"Number of Target Particles [dimensionless]: "<<NtargetParticles<<endl;
  cout<<"Cross section per collision [area]: "<<CrossSectionPerCollision<<endl<<endl;

  cout<<"Luminosity or InFlux*Exposure*NtargetParticles [collisions/area]: "<<LuminosityFixedTarget<<endl<<endl;
  
  double Events = LuminosityFixedTarget*CrossSectionPerCollision;
  
  cout<<"Total events produced from the scattering: "<<Events<<endl;

  //Number of events = Number of Collisions times Probability of each collision
  //Number of Collisions for fixed target = InFlux*Exposure*IceCubeArea*NumberOfTargetParticles, because each
  //neutrino that crossed the icecube area can collide with any of the target particles 
  
  return 0;
  
}
