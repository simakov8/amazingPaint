#pragma once

#include <QString>

class CStyleSheetCreator
{
public:
	virtual ~CStyleSheetCreator() = default;

	virtual QString GetPushButtonStyle() const;
	
	// TODO:
	// describe getters for quantity of widget style sheets
};
