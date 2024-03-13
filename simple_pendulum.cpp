#include<iostream>
#include<math.h>
#include<fstream>



float m = 1;
float l = 1 ;
float g= 9.81;
float omega = sqrt(g/l) ;
int main() {
std::ofstream dataf ;
std::ofstream datat ;
std::ofstream datatd ;
dataf.open("phase.dat");
datat.open("position.dat");
datatd.open("velocity.dat");


    for (float j=0 ; j<=5 ; j=j+0.05){
        float t =j;
        float theta= cos(omega*t); 
        float theta_dot =-omega* sin(omega*t);
        float P_i = m*l*theta_dot;
         

        dataf <<theta<<"\t"<<P_i<<"\n";
        datat<<t<<"\t"<<theta<<"\n";
        datatd<<t<<"\t"<<theta_dot<<"\n"; 
       // std::cout << omega <<"\t"<< j << std::endl;
    };

 //Plotting results 

std::ofstream gnu;
std:: ofstream gnu_2;
std :: ofstream gnu_3; 

gnu.open("phase.gnu");
gnu << "set terminal jpeg enhanced font 'arial,10' size 800,600" << std:: endl;
gnu << "set output 'grafica_phase.jpg'"<< std:: endl;
gnu << "set title 'Simple_pendulum_phase'"<< std:: endl;
gnu<< "set xlabel 'Angle in function time'" << std::endl;
gnu << "set ylabel 'Momento in angle dependence'"<< std::endl;
gnu<< "plot 'phase.dat' using 1:2 with line" << std:: endl;
gnu << "pause -1"<<std::endl;
gnu_2.open("position.gnu");
gnu_2 << "set view 60,30,1.0,1.5" << std::endl;
gnu << "set output 'position.jpg'"<< std:: endl;
gnu_2 << "set title 'Position in time '"<< std:: endl;
gnu_2 << "set xlabel ' Time (s) '" << std::endl; 
gnu_2 << "set ylabel 'Angle in time function (m)'" << std::endl; 
gnu_2<< "plot 'position.dat' using 1:2 with line"<< std:: endl; 
gnu_2 << "pause -1"<<std::endl;

gnu_3.open("velocity.gnu");
gnu_3 << "set terminal jpeg enhanced font 'arial,10' size 800,600" << std:: endl;
gnu_3 << "set output 'grafica_velocidad.jpg'"<< std:: endl;
gnu_3 << "set title 'Velocity'"<< std:: endl;
gnu_3<< "set xlabel 'Time (s) '" << std::endl;
gnu_3 << "set ylabel 'Velocity(m/s) '"<< std::endl;
gnu_3<< "plot 'velocity.dat' using 1:2 with line " << std:: endl;
gnu_3 << "pause -1"<<std::endl;

gnu.close();
gnu_2.close();
gnu_3.close();
std::system("phase.gnu");
std::system("position.gnu");
std:: system("velocity.gnu");


    return 0;
};
