FactoryTest : Calvin/CFactory.cpp Calvin/CTshirt.cpp Calvin/CTrousers.cpp JackJones/JJFactory.cpp JackJones/JTshirt.cpp JackJones/JTrousers.cpp Levis/LFactory.cpp Levis/LTshirt.cpp Levis/LTrousers.cpp Main/main.cpp
	g++ -o FactoryTest Calvin/CFactory.cpp Calvin/CTshirt.cpp Calvin/CTrousers.cpp JackJones/JJFactory.cpp JackJones/JTshirt.cpp JackJones/JTrousers.cpp Levis/LFactory.cpp Levis/LTshirt.cpp Levis/LTrousers.cpp Main/main.cpp
clean :
	rm FactoryTest
