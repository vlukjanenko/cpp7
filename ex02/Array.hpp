/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majosue <majosue@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:11:11 by majosue           #+#    #+#             */
/*   Updated: 2022/02/21 21:37:46 by majosue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template< typename T >
class Array
{
	public:
		class OutOfLimitsException : public std::exception {
			virtual const char *what(void) const throw() {
				return "Error: index is out of limits";
			}
		};

		Array<T>(void) : _arr(0), _size(0) {
			_arr = 0;
		};

		Array<T>(unsigned int n) : _arr(0), _size(n) {
			_arr = new T[n];
			if (!_arr) {
				std::cout << "Error: out of memory" << std::endl;
				exit(1);
			}
		}

		Array<T>(Array<T> const & copy) : _arr(0), _size(0) {
			*this = copy;
		}

		Array<T> &operator=(Array<T> const &rhs) {
			if (this != &rhs) {
				delete[] _arr;
				_arr = new T[rhs.size()];
				_size = rhs.size();
				if (!_arr) {
					std::cout << "Error: out of memory" << std::endl;
					exit(1);
				}
				for(unsigned int i = 0; i < _size; i++) {
					_arr[i] = rhs[i];
				}
			}
			return *this;
		}

		~Array<T>(void) {
			delete[] _arr;
		}

		T& operator[](unsigned int idx) const {
			if (idx >= _size)
				throw (OutOfLimitsException());
			return _arr[idx];
		}

		T& operator[](unsigned int idx) {
			if (idx >= _size)
				throw (OutOfLimitsException());
			return _arr[idx];
		}

		unsigned int size(void) const {
			return _size;
		}
	private:
		T*				_arr;
		unsigned int	_size;
};

#endif
