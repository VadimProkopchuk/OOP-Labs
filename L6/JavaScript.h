#pragma once

#include <string>

class JavaScript : public FunctionalProgramLanguage, public OopProgramLanguage
{
	private:
		std::string latestVersion;
		std::string releaseDate;

	public:
		JavaScript(const std::string& syntaxUrl, const std::string& communityUrl, const std::string& concepts,
			bool supportMultipleExtentds, bool supportModules, bool supportClr, const std::string& latestVersion,
			const std::string& releaseDate) : latestVersion(latestVersion), releaseDate(releaseDate),
			FunctionalProgramLanguage(syntaxUrl, communityUrl, supportModules, supportClr),
			OopProgramLanguage(concepts, supportMultipleExtentds) { }

		std::string getFullInfo();
		std::string getInnerInfo();
		void setLatestVersion(std::string val);
		void setReleaseDate(std::string val);

		~JavaScript() {
			this->latestVersion.clear();
			this->releaseDate.clear();
		}
};

