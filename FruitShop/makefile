CC      := g++
CFLAGS  := -std=c++03
SOURCES := $(wildcard *.cpp)
OBJECTS := $(patsubst %.cpp, %.o, $(SOURCES))

default: $(OBJECTS) Fruitshop.x
	@echo "Running Fruitshop... "; \
	./Fruitshop.x

clean: 
	@echo " Removed Objects, Applications, and Tests "; \
	$(RM) -r $(OBJECTS) Fruitshop.x

%.o: %.cpp 
	@echo " $(CC) $(CFLAGS) -c -o $@ $<"; \
	$(CC) $(CFLAGS) -c -o $@ $<

Fruitshop.x: Fruitshop.cpp $(OBJECTS)
	@echo " $(CC) $(CFLAGS) -o Fruitshop.x $(OBJECTS)"; \
	$(CC) $(CFLAGS) -o Fruitshop.x $(OBJECTS)