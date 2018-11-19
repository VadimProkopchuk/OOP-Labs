#include "stdafx.h"

void OopProgramLanguage::setConcepts(const std::string& value) { this->concepts = value; }

void OopProgramLanguage::setSupportMultipleExtends(bool value) { this->supportMultipleExtends = value; }

std::string OopProgramLanguage::getFullInfo() {
	return "Syntax Url: " + this->syntaxUrl + "\r\nCommunity Url: " + this->communityUrl + this->getInnerInfo();
}

std::string OopProgramLanguage::getInnerInfo()
{
	return "\r\nConcepts: " + this->concepts + "\r\nSupport Multiple Extends: " + this->convertToYN(this->supportMultipleExtends);
}