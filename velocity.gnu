set terminal jpeg enhanced font 'arial,10' size 800,600
set output 'grafica_velocidad.jpg'
set title 'Velocity'
set xlabel 'Time (s) '
set ylabel 'Velocity(m/s) '
plot 'velocity.dat' using 1:2 with line 
pause -1
