#pragma once

#include "BaseProgramLanguage.h"
#include <string>

class OopProgramLanguage : virtual public BaseProgramLanguage
{
	protected:
		std::string concepts;
		bool supportMultipleExtends;

	public:
		OopProgramLanguage(const std::string& syntaxUrl, const std::string& communityUrl, const std::string& concepts, 
			bool supportMultipleExtentds) : BaseProgramLanguage(syntaxUrl, communityUrl), concepts(concepts), 
			supportMultipleExtends(supportMultipleExtentds) { }

		OopProgramLanguage(const std::string& syntaxUrl, const std::string& communityUrl, const std::string& concepts)
			: BaseProgramLanguage(syntaxUrl, communityUrl), concepts(concepts) { }

		OopProgramLanguage(const std::string& syntaxUrl, const std::string& communityUrl)
			: BaseProgramLanguage(syntaxUrl, communityUrl) { }

		OopProgramLanguage(const std::string& concepts, bool supportMultipleExtentds) : BaseProgramLanguage(), 
			concepts(concepts), supportMultipleExtends(supportMultipleExtentds) { }

		std::string getFullInfo();
		std::string getInnerInfo();
		void setConcepts(const std::string& value);
		void setSupportMultipleExtends(bool value);

		~OopProgramLanguage() {
			concepts.clear();
		};
		
};

