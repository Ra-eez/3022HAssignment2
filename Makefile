# Declare some variables to help construct our compile command
CC=g++         # the compiler
LIBS=-lm       # the libraries we will ref - m is the math library

# Create the executable .exe first
VolImageDriver: VolImageDriver.o VolImage.o
	$(CC) -o VolImageDriver VolImageDriver.o VolImage.o #$(LIBS) add this to use libs
 
# VolImage.o needed
VolImage.o: VolImage.cpp VolImage.h
	$(CC) -c -o VolImage.o VolImage.cpp

# Driver file needed
VolImageDriver.o: VolImageDriver.cpp
	$(CC) -c -o VolImageDriver.o VolImageDriver.cpp

#dbEngine.o: dbEngine.cpp dbEngine.h	
#	$(CC) -c -o Tut1Driver.o Tut1Driver.cpp 

# run command
run:
	./VolImageDriver

# deletes all the object code files
clean:
	@rm -f *.o
	@rm VolImageDriver
