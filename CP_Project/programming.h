#pragma once
#include "cstring"
#include "iostream"


using namespace std;

class Movie {
public:
	void cal() {

	}
	
};

class Cinema {

public:
	float priceA,priceB,priceC;
public:
	Cinema() {
		priceA = 3000;
		priceB = 2800;
		priceC = 2000;
	}

	~Cinema() {
		
	}

	float getCprice(char p) {
		if (p == 'A') {
			return priceA;
		}
		else if (p == 'B') {
			return priceB;
		}
		else if (p == 'C') {
			return priceC;
		}
		else
		{
			return 0;
		}
	}

	void setCPrices(float a,float b,float c) {
		priceA = a;
		priceB = b;
		priceC = c;
	}

};

class snacks {
public:
	char* package;
	float price;
public:
	snacks() {
		package = new char(10);
		price = 1000;
	}
	~snacks() {
		delete package;
	}

	void SetSPrice(float a) {
		price = a;
	}

	 float getSPrice() {
		return price;
	}

};

