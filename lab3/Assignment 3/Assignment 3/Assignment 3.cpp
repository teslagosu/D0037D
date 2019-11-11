#include "pch.h"
#include <iostream>
#include "Vector2d.h"
#include "Matrix2d.h"
using namespace std;

int main()
{


	Vector2d v1(2, 3);
	v1.printEverything();
	v1.printLength(v1);
	Vector2d v2(3, 4);
	v2.printEverything();
	v2.printLength(v2);
	Vector2d minus = (v1 - v2);
	Vector2d plus = (v1 + v2);
	Vector2d multiply = (v1 * v2);







	plus.printEverything();
	minus.printEverything();
	multiply.printEverything();

	cout << "----------------------------------" << endl;
	cout << "" << endl;
	Matrix2d m1(1, 2, 3, 4);
	Matrix2d m2(2, 3, 4, 5);
	//-------------------
	Vector2d v123(1, 2);
	Matrix2d m123(1, 2, 3, 4);
	Vector2d v321 = (m123 * v123);
	cout << "Multiply vector with 2dmatrix" << endl;
	v321.printEverything();
	//--------------------------
	Matrix2d test((m1 * m2));
	m1.printOriginalMatrix();
	Matrix2d m3 = m1.transpose();
	m3.printOriginalMatrix();
	test.printOriginalMatrix();

	Matrix2d m4 = m1.rotate2(m1.radian(90));
	m4.printOriginalMatrix();
	

	
	
	
	
		//m1.transpose(m1);
		//m1.rotate2(test.radian(90));
		//m1.rotate2(m1.radian(45));
		//m1.printMatrix(m1);
		







		
		//dotproduct
		//cout << v1.getDotProduct(v1, v2) << endl;

		//length
		//cout << v1.getLengthOfVector(v1, v2) << endl;
	}





	
	
	

	




