CXX = g++
CXXFLAGS = -std=c++11
CXXFLAGS += -g

OBJS = main.o Room.o Game.o BarRoom.o BossRoom.o Journal.o Pirate.o ShipRoom.o StartingRoom.o MapRoom.o Helper.o
SRS = main.cpp Room.cpp Game.cpp BarRoom.cpp BossRoom.cpp Journal.cpp Pirate.cpp ShipRoom.cpp StartingRoom.cpp MapRoom.cpp Helper.cpp
HEADERS = Room.hpp Game.hpp BarRoom.hpp BossRoom.hpp Journal.hpp Pirate.hpp ShipRoom.hpp StartingRoom.hpp MapRoom.hpp Helper.hpp

all: finalproject

finalproject: $(OBJS) $(HEADERS)
	$(CXX) $(OBJS) -o finalproject

clean:
	rm -rf *.o finalproject
