#include "stdafx.h"
#include "JavaScript.h"

std::string JavaScript::getFullInfo()
{
	return OopProgramLanguage::getFullInfo() + FunctionalProgramLanguage::getInnerInfo() + JavaScript::getInnerInfo();
}

std::string JavaScript::getInnerInfo()
{
	return "\r\nLatest version: " + this->latestVersion + "\r\nRelease Date: " + this->releaseDate;
}

void JavaScript::setLatestVersion(std::string val) { this->latestVersion = val; }
void JavaScript::setReleaseDate(std::string val) { this->releaseDate = val; }
