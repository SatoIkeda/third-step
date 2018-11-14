require "numo/narray"
scisum= Numo::DFloat[65,80,67,35,58,60,72,75,68,92,36,50,2,58.5,46,42,78,62,84,70]
engsum=Numo::DFloat[44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84] 

p "<<理科>>" 
ssum = scisum.sum
p ssum
p scisum.mean
p scisum.stddev
p scisum.sort

print "<<英語>>"
esum = engsum.sum
p engsum.sum 
p engsum.mean
p engsum.stddev
p engsum.sort
