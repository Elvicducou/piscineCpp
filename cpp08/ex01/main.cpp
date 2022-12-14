
#include "includes/Span.hpp"

std::ostream &operator<<(std::ostream &o, Span const &i)
{
	o << std::endl << "Printing array with max size : " << i.getN() << " and size : "
	<< i.getMaxNumbers() << " :" << std::endl;
	for (unsigned int x = 0; x < i.getMaxNumbers(); x++)
		o << i.getValueByIndex(x) << ", ";
	o << std::endl;
	return (o);
}

void	workingArrayTest(void)
{
	std::cout << std::endl << "*** ALL WORKING TEST ***" << std::endl << std::endl;
	Span a(3);
	srand(time(NULL));
	for (int i = 0; i < 3; i++)
	{
		try
		{
			a.addNumber(rand()%100);
		}
		catch(const Span::TooMuchNumberException& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	std::cout << a;
}
void	fullArrayTest(void)
{
	std::cout << std::endl << "*** FULL ARRAY TEST ***" << std::endl << std::endl;
	Span a(3);
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		try
		{
			a.addNumber(rand()%100);
		}
		catch(const Span::TooMuchNumberException& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	std::cout << a;
}

void	workingLowerTest(void)
{
	std::cout << std::endl << "*** WORKING LOWEST TEST ***" << std::endl << std::endl;
	Span a(5);
	a.fillWithRandomNumbers();
	try
	{
		std::cout << "shortest span : " << a.shortestSpan() << a << std::endl;
	}
	catch(const Span::EmptyArrayException& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	workingLongestTest(void)
{
	std::cout << std::endl << "*** WORKING LONGEST TEST ***" << std::endl << std::endl;
	Span a(5);
	a.fillWithRandomNumbers();
	try
	{
		std::cout << "longest span : " << a.longestSpan() << a << std::endl;
	}
	catch(const Span::EmptyArrayException& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	emptyArrayExceptionTest(void)
{
	std::cout << std::endl << "*** EMPTY ARRAY EXCEPTION TEST ***" << std::endl << std::endl;
	Span a(1);
	a.fillWithRandomNumbers();
	try
	{
		std::cout << "longest span : " << a.longestSpan() << a << std::endl;
	}
	catch(const Span::EmptyArrayException& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void emptyArrayPrintTest(void)
{
	std::cout << std::endl << "*** EMPTY ARRAY PRINT TEST ***" << std::endl << std::endl;
	Span a;
	std::cout << a;
}

void mallocedAndDestroyedTest(void)
{
	std::cout << std::endl << "*** MALLOCED AND DESTROYED TEST ***" << std::endl << std::endl;
	Span *a = new Span(10);
	delete a;
}

void deepCopyTest(void)
{
	std::cout << std::endl << "*** DEEP COPY TEST ***" << std::endl << std::endl;
	Span a(4);
	a.fillWithRandomNumbers();
	Span b;
	std::cout << " //// printing before copy : " << std::endl;
	std::cout << a << b;
	b = a;
	std::cout << " //// printing after copy : " << std::endl;
	std::cout << a << b;
}

void testByFortyTwo(void)
{
	std::cout << std::endl << "*** 42 PROVIDED TEST ***" << std::endl << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp;
}

int main (void)
{
	workingArrayTest();
	fullArrayTest();
	workingLowerTest();
	workingLongestTest();
	emptyArrayExceptionTest();
	emptyArrayPrintTest();
	mallocedAndDestroyedTest();
	deepCopyTest();
	testByFortyTwo();
}