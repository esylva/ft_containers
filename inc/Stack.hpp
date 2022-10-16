#pragma once

#include "vector.hpp"

namespace ft
{
	template <class T, class Container = ft::Vector<T> >
	class Stack {

		public:
			Stack();
			~Stack();
			Stack* copy(Stack &obj);
			Stack* operator=(Stack &obj);
			void	top();
			void	pop();
			void	push(const T&);

		private:
			T*		_content;
			Stack* _next;


	};
}
