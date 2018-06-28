CC      := g++
CFLAGS  := -std=c++03
SOURCES := $(wildcard *.cpp)
OBJECTS := $(patsubst %.cpp, %.o, $(SOURCES))

default: $(OBJECTS) worldcup.x
	@echo "Running worldcup... "; \
	./worldcup.x

clean: 
	@echo " Removed Objects, Applications, and Tests "; \
	$(RM) -r $(OBJECTS) worldcup.x

%.o: %.cpp 
	@echo " $(CC) $(CFLAGS) -c -o $@ $<"; \
	$(CC) $(CFLAGS) -c -o $@ $<

worldcup.x: worldcup.cpp $(OBJECTS)
	@echo " $(CC) $(CFLAGS) -o worldcup.x $(OBJECTS)"; \
	$(CC) $(CFLAGS) -o worldcup.x $(OBJECTS)