#include "stdafx.h"

void FunctionalProgramLanguage::setSupportModules(bool value) { this->supportModules = value; }

void FunctionalProgramLanguage::setSupportClr(bool value) { this->supportClr = value; }

std::string FunctionalProgramLanguage::getFullInfo() {
	return "Syntax Url: " + this->syntaxUrl + "\r\nCommunity Url: " + this->communityUrl + this->getInnerInfo();
}

std::string FunctionalProgramLanguage::getInnerInfo() {
	return "\r\nSupport Modules: " + this->convertToYN(this->supportModules) + "\r\nSupportClr: " + this->convertToYN(this->supportClr);
}