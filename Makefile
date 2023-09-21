CXX = c++

EXECUTABLE = petShop

OBJS = Digimon.o Gatomon.o Pikachu.o Pokemon.o VirtualPet.o petShop.o

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CXX) -o $@ $(OBJS)

%.o: %.cpp
	$(CXX) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXECUTABLE)
