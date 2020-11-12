hepsi: derle calistir

derle:
	g++ -I ./include/ -o ./lib/Dugum.o -c ./src/Dugum.cpp
	g++ -I ./include/ -o ./lib/Dosya.o -c ./src/Dosya.cpp
	g++ -I ./include/ -o ./lib/Test.o -c ./src/Test.cpp
	g++ -I ./include/ -o ./bin/Test ./lib/Dugum.o ./lib/Dosya.o ./lib/Test.o
calistir:
	./bin/Test