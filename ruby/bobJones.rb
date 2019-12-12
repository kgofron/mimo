bob_jones = "PAM"
bob_jones_r = "#{bob_jones} written backwards is #{bob_jones.reverse}!"

puts bob_jones_r

print *1...5
puts


for i in 1..5
  j = 1
  while j <= i
    print j
    j += 1
  end
  puts
end

treasures = 0
until treasures == 4
  treasures += 1
  print "Sweet, #{4 - treasures} to go! \n"
end
puts
