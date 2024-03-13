set terminal jpeg enhanced font 'arial,10' size 800,600
set output 'grafica_phase.jpg'
set title 'Simple_pendulum_phase'
set xlabel 'Angle in function time'
set ylabel 'Momento in angle dependence'
plot 'phase.dat' using 1:2 with line
pause -1
set output 'position.jpg'
