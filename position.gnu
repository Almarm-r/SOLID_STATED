set view 60,30,1.0,1.5
set title 'Position in time '
set xlabel ' Time (s) '
set ylabel 'Angle in time function (m)'
plot 'position.dat' using 1:2 with line
pause -1
