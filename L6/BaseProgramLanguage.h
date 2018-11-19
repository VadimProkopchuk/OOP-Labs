#pragma once

#include <string>

class BaseProgramLanguage
{
	protected:
		std::string syntaxUrl;
		std::string communityUrl;

		std::string convertToYN(bool value);

	public:
		BaseProgramLanguage() {}
		BaseProgramLanguage(const std::string& syntaxUrl) : syntaxUrl(syntaxUrl) {}
		BaseProgramLanguage(const std::string& syntaxUrl, const std::string& communityUrl) 
			: syntaxUrl(syntaxUrl), communityUrl(communityUrl) {}
		
		virtual std::string getFullInfo() = 0;
		std::string getInnerInfo();
		void setSyntaxUrl(const std::string& value);
		void setCommunityUrl(const std::string& value);

		~BaseProgramLanguage() {
			syntaxUrl.clear();
			communityUrl.clear();
		}
};