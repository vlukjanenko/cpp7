/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majosue <majosue@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 09:09:42 by majosue           #+#    #+#             */
/*   Updated: 2022/02/21 09:19:59 by majosue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
#include <string>

void myTests()
{
	std::cout <<"--my tests--" << std::endl;
	std::cout <<"--int test--" << std::endl;
	int a = 1;
	int b = 2;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "max " << ::max(a, b) << std::endl;
	std::cout << "min " << ::min(a, b) << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl << std::endl;


	std::cout <<"--test for max min retrurn second parameter--" << std::endl;
	float c = 0.1f;
	float d = 0.1f;

	std::cout << "c = " << c << " &c = " << &c << std::endl;
	std::cout << "d = " << d << " &d = " << &d << std::endl;
	std::cout << "max address  " << &::max(c, d) << std::endl;
	std::cout << "min address  " << &::min(c, d) << std::endl << std::endl;

	std::cout <<"--string test--" << std::endl;
	std::string str1 = "John";
	std::string str2 = "Snow";

	std::cout << "str1 = " << str1 << std::endl;
	std::cout << "str2 = " << str2 << std::endl;
	std::cout << "max " << ::max(str1, str2) << std::endl;
	std::cout << "min " << ::min(str1, str2) << std::endl;
	::swap(str1, str2);
	std::cout << "str1 = " << str1 << std::endl;
	std::cout << "str2 = " << str2 << std::endl << std::endl;
}

int main(void)
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	::myTests();

	return 0;
}
