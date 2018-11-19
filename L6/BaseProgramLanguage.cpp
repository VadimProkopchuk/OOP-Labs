#include "stdafx.h"

void BaseProgramLanguage::setSyntaxUrl(const std::string& value) { BaseProgramLanguage::syntaxUrl = value; }

void BaseProgramLanguage::setCommunityUrl(const std::string& value) { BaseProgramLanguage::communityUrl = value; }

std::string BaseProgramLanguage::convertToYN(bool value) { return value ? "Y" : "N";  }