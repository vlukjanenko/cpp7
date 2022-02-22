/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majosue <majosue@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 09:10:01 by majosue           #+#    #+#             */
/*   Updated: 2022/02/21 09:10:13 by majosue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename T >
void swap(T & a, T & b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template< typename T >
T & min(T & a, T & b)
{
	if (a < b)
		return a;
	return b;
}

template< typename T >
T & max(T & a, T & b)
{
	if (a > b)
		return a;
	return b;
}

#endif
