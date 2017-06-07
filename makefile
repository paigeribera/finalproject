CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -g

OBJS = main.o Room.cpp Game.cpp BarRoom.cpp BossRoom.cpp Journal.cpp Pirate.cpp ShipRoom.cpp StartingRoom.cpp MapRoom.cpp Helper.cpp
SRS = main.cpp Room.cpp Game.cpp BarRoom.cpp BossRoom.cpp Journal.cpp Pirate.cpp ShipRoom.cpp StartingRoom.cpp MapRoom.cpp Helper.cpp
HEADERS = Room.hpp Game.hpp BarRoom.hpp BossRoom.hpp Journal.hpp Pirate.hpp ShipRoom.hpp StartingRoom.hpp MapRoom.hpp Helper.hpp

all: finalproject

finalproject: $(OBJS) $(HEADERS)
	$(CXX) $(OBJS) -o finalproject

clean:
	rm -rf *.o finalproject
