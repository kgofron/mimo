arr = [5,3,4,2,7,9,6];
length = len(arr);
for i in range(length): # defaults: start=0, increment=1; up to but not include length
   print(i);

for j in range(0,length,3): # start=0,stop=length, increment=3
    print(j);

# Optimized bubble sort
list = [3,7,1,4,9,2,5]
length = len(list);
for i in range(length):
    for j in range(length - i - 1):
        if list[j] > list[j+1]:
            temp = list[j];
            list[j] = list[j+1];
            list[j+1] = temp;
print(list);


