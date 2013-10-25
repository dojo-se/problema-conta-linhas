test: compile
	./test/test

compile:
	g++ -o test/test -lboost_unit_test_framework test/test.cpp problema.cpp
