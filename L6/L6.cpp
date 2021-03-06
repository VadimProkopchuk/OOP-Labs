#include "stdafx.h"
#include "iostream"

int main()
{
	JavaScript* js = new JavaScript("", "", "Abstraction, Encapsulation", false, false, false, "ES1", "June 1997");

	js->setCommunityUrl("java-script.com/forum");
	js->setSyntaxUrl("java-script.com/docs");

	std::cout << "----- 1997 -----" << std::endl << js->getFullInfo() << std::endl << std::endl;

	js->setCommunityUrl("community.js.com");
	js->setSyntaxUrl("docs.js.com");
	js->setConcepts("Abstraction, Encapsulation, Polymorphism, Inheritance");
	js->setSupportModules(true);
	js->setLatestVersion("ES8");
	js->setReleaseDate("June 2017");

	std::cout << "----- NOW -----" << std::endl << js->getFullInfo() << std::endl;

	delete js;
	system("pause");

    return 0;
}

