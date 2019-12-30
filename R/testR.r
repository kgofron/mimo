print("Hello World!")
a <- rnorm(100)
plot(a)
print(a)

# Matrices
data <- c(1,2,3,4,5,6)  # Vector
my_matrix <- matrix(data,nrow=2,ncol=3)
my_matrix
myRow_matrix <- my_matrix <- matrix(data,nrow=2,ncol=3, byrow=TRUE)
myRow_matrix
myCol_matrix <- my_matrix <- matrix(data,nrow=3,ncol=2, byrow=FALSE)
myCol_matrix    # Name columns and rows
colnames(myCol_matrix) <- c("run", "cycle")
rownames(myCol_matrix) <- c("Ann","Kaz", "JD")
myCol_matrix
rowSums(myCol_matrix)    # Calculate total distance per person
colSums(myCol_matrix)   # per activity

myCol_matrix[3,2]   # Subsetting 3rd row, 2nd column
my_mtx = rbind(myCol_matrix, c(7,8)) # Add a row
my_mtx
cbind(my_mtx, c(9,8,7,6))   # Add a column

myTest_matrix <- matrix(1:6, 3)    # create matrix
myTest_matrix / 2   # divide by constant
myTest_matrix + myTest_matrix   # add matrix of same size

matrix(1:6) # 1D matrix, 1 column
print("Extract 2nd column")
myTest_matrix[,2]   # extract 2nd column
print("Another matrix")
matrix(1:6,nrow=3)

# Factors (unordered)
os <-c("Android", "iOS", "Android")
os_factor <- factor(os) # distinct categories
os_factor
android <- os_factor[1]
ios <- os_factor[2]
#android > iOS   # Not meaningful for factors

length <- c("medium", "short", "long", "medium")    # Ordered factors
l_fctr <- factor(length, order = TRUE, levels= c("short","medium","long"))
l_fctr  # Levels: short < medium < long
l_fctr[1] > l_fctr[2]   # TRUE (medium > short)

group_vector <- c("C", "B","A","C","A")
group_fac <- factor(group_vector)
summary(group_fac)  # A B C (2 1 2)  Factor summary

vector <- c("A_grp", "B_grp", "A_grp")  # Rename levels
fctr <- factor(vector)
levels(fctr) <- c("A","B")
fctr

print("Data frames")
quantity <- c(200,300,100)
crop <- c("corn", "leek","pea")
subsidy <- c(TRUE,FALSE, TRUE)
my_df <- data.frame(quantity,crop,subsidy)
my_df           # matrix view
str(my_df)
 
farmer <- c("Bob", "Sam", "Mike")   # crop as factor (not string)
f_df <- data.frame(quantity, crop, farmer, subsidy, stringsAsFactors = FALSE)
class(f_df$crop)
f_df

my_df$farmer <- c("Bob", "Sam", "Mike") # add new variable to data frame and name it 'farmer'
my_df
my_df$crop      # subset variable 'crop'
my_df[["quantity"]]     # select data frame variable, use index, or 'column name'
my_df[[1]]
my_df[ , 3:4]       # subset using index
my_df[subsidy,]     # only rows with subsidy = TRUE

order(my_df$quantity)   # Sorting, default ascending
my_df[order(my_df$quantity), ]

miles <- c(200,300,100)
car <- c("Tesla", "GM", "BMW")
hybrid <- c(TRUE, FALSE, TRUE)
my_df <- data.frame(miles, car, hybrid)
my_df$driver <- c("Bob", "Sam", "Mike")
my_df










