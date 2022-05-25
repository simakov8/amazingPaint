#pragma once

#include "GraphicalLayoutElement.h"

class CBaseGraphicalLayoutElement : public IGraphicalLayoutElement
{
public:
	CBaseGraphicalLayoutElement(CBaseGraphicalElement& elementPtr, const QPoint& point);

	QPoint GetCoordinates() const override;
	void SetCoordinates(const QPoint& coordinates) override;

	CBaseGraphicalElement* GetGraphicalElement() const override;

private:
	CBaseGraphicalElement* m_elementPtr;
};

