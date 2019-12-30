my_list <- list(2,"c",TRUE) # mixed data types
my_list

print("Complex list")
vec <- 1:6      # complex data components
mat <- matrix(1:6, nrow=2)
df <- data.frame(mat)
list(vector=vec,matrix=mat,dframe=df)     # and rename list components

my_list <- list(int=2,vec=1:6,bool=TRUE)
print(my_list[[2]][3])      # extract 3rd element of vector
my_list <- c(my_list,TRUE)  # append component
