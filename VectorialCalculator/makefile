CC      := g++
CFLAGS  := -std=c++03
SOURCES := $(wildcard *.cpp)
OBJECTS := $(patsubst %.cpp, %.o, $(SOURCES))

default: $(OBJECTS) vectorialcalculator.x
	@echo "Running vectorialcalculator... "; \
	./vectorialcalculator.x

clean: 
	@echo " Removed Objects, Applications, and Tests "; \
	$(RM) -r $(OBJECTS) vectorialcalculator.x

%.o: %.cpp 
	@echo " $(CC) $(CFLAGS) -c -o $@ $<"; \
	$(CC) $(CFLAGS) -c -o $@ $<

vectorialcalculator.x: vectorialcalculator.cpp $(OBJECTS)
	@echo " $(CC) $(CFLAGS) -o vectorialcalculator.x $(OBJECTS)"; \
	$(CC) $(CFLAGS) -o vectorialcalculator.x $(OBJECTS)