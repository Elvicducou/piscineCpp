
#include "includes/MutantStack.hpp"

void	fortyTwoTests(void)
{
	std::cout << std::endl << "*** TESTS BY 42 ***" << std::endl << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "base ite : " << *ite << " base it : " << *it << std::endl;
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "it : " <<*it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}

void stringIteratorTest(void)
{
	std::cout << std::endl << "*** STRING ITERATION TEST ***" << std::endl << std::endl;
	MutantStack<std::string> a;
	a.push("bonjour");
	a.push("hello");

	MutantStack<std::string>::iterator iter = a.begin();
	std::cout << *iter << std::endl;
	iter++;
	std::cout << *iter << std::endl;
	a.push("hola");
	iter = a.end() - 1;
	std::cout << *iter << std::endl;
}

void	iterateFromConstEnd(void)
{
	std::cout << std::endl << "*** ITERATION FROM CONST AND END TEST ***" << std::endl << std::endl;
	MutantStack<std::string> a;
	a.push("bonjour");
	a.push("hello");
	a.push("hola");
	MutantStack<std::string>::iterator iter = a.end();
	while (--iter != a.begin())
		std::cout << *iter << std::endl;
	std::cout << *iter << std::endl;
}

void compareWithListTest(void)
{
	std::cout << std::endl << "*** COMPARE WITH LIST TEST ***" << std::endl << std::endl;
	MutantStack<std::string> a;
	std::list<std::string> b;
	a.push("bonjour");
	a.push("hello");
	a.push("hola");
	b.push_back("bonjour");
	b.push_back("hello");
	b.push_back("hola");
	MutantStack<std::string>::iterator iter = a.begin();
	std::list<std::string>::iterator iterlst = b.begin();
	std::cout << *iter << " (MUTANT), " << *iterlst << " (LIST)" << std::endl;
	iter++, iterlst++;
	std::cout << *iter << " (MUTANT), " << *iterlst << " (LIST)" << std::endl;
	iter++, iterlst++;
	std::cout << *iter << " (MUTANT), " << *iterlst << " (LIST)" << std::endl;
}

void iterateFromReverseTest(void)
{
	std::cout << std::endl << "*** REVERSE ITERATION TEST ***" << std::endl << std::endl;
	MutantStack<int> a;
	MutantStack<int>::reverse_iterator riter;
	a.push(1);
	a.push(2);
	a.push(3);
	riter = a.rbegin();
	while (riter != a.rend())
	{
		std::cout << *riter << ", ";
		riter++;
	}
	std::cout << std::endl;
}

void deepCopyTest(void)
{
	std::cout << std::endl << "*** DEEP COPY TEST ***" << std::endl << std::endl;
	MutantStack<int> a;
	MutantStack<int>::iterator iter;
	a.push(1);
	a.push(2);
	a.push(3);
	MutantStack<int> b(a);
	MutantStack<int> c;
	iter = b.begin();
	while (iter != b.end())
	{
		std::cout << *iter << ", ";
		iter++;
	}
	c = b;
	iter = c.begin();
	std::cout << "(from copy constructor)" << std::endl;
	std::cout << std::endl;
	while (iter != c.end())
	{
		std::cout << *iter << ", ";
		iter++;
	}
	std::cout << "(from operator overload)" << std::endl;
	std::cout << std::endl;
}

int main(void)
{
	stringIteratorTest();
	fortyTwoTests();
	iterateFromConstEnd();
	compareWithListTest();
	iterateFromReverseTest();
	deepCopyTest();
}