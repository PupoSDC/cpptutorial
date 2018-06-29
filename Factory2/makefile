CC      := g++
CFLAGS  := -std=c++03
SOURCES := $(wildcard *.cpp)
OBJECTS := $(patsubst %.cpp, %.o, $(SOURCES))

default: $(OBJECTS) factory.x
	@echo "Running factory... "; \
	./factory.x

clean: 
	@echo " Removed Objects, Applications, and Tests "; \
	$(RM) -r $(OBJECTS) factory.x

%.o: %.cpp 
	@echo " $(CC) $(CFLAGS) -c -o $@ $<"; \
	$(CC) $(CFLAGS) -c -o $@ $<

factory.x: factory.cpp $(OBJECTS)
	@echo " $(CC) $(CFLAGS) -o factory.x $(OBJECTS)"; \
	$(CC) $(CFLAGS) -o factory.x $(OBJECTS)