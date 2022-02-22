/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majosue <majosue@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 09:22:07 by majosue           #+#    #+#             */
/*   Updated: 2022/02/21 09:42:43 by majosue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstdlib>
# include <iostream>

template< typename T>
void iter(T* arr, std::size_t len, void (*f)(T&))
{
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

template< typename T>
void fun(T& element)
{
	std::cout << element << std::endl;
}

#endif
