#pragma once

class FunctionalProgramLanguage : virtual public BaseProgramLanguage
{
	protected: 
		bool supportModules;
		bool supportClr;

	public:
		FunctionalProgramLanguage(const std::string& syntaxUrl, const std::string& communityUrl, bool supportModules, bool supportClr)
			: BaseProgramLanguage(syntaxUrl, communityUrl), supportModules(supportModules), supportClr(supportClr) {}

		FunctionalProgramLanguage(const std::string& syntaxUrl, const std::string& communityUrl, bool supportModules)
			: BaseProgramLanguage(syntaxUrl, communityUrl), supportModules(supportModules) {}

		FunctionalProgramLanguage(const std::string& syntaxUrl, const std::string& communityUrl)
			: BaseProgramLanguage(syntaxUrl, communityUrl) {};

		std::string getFullInfo();
		std::string getInnerInfo();
		void setSupportModules(bool value);
		void setSupportClr(bool value);

		~FunctionalProgramLanguage() {}
};

