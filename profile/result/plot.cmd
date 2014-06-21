set terminal pngcairo enhanced font "arial,10" fontscale 1.0 size 200, 500
set output 'result/plot.png'
set boxwidth 0.9 absolute
set style fill   solid 1.00 border lt -1
set key autotitle columnheader
set key invert reverse Left outside
set style histogram clustered gap 1 title  offset character 0, 0, 0
set datafile missing '-'
set yrange [0:*]
set style data histograms
set ylabel "cycles"
set title "orders-25"
set nokey
set xtics nomirror rotate by -90
plot 'result/cycles.txt' using 2:xtic(1)
set terminal postscript eps enhanced color font "arial,8"
set output 'result/plot.eps'
replot
