#pragma once

#include <memory>
#include "Manipulator.h"

class IGraphicalTool
{
public:
	virtual ~IGraphicalTool() = default;

	virtual std::shared_ptr<IManipulator> GetManipulator() const = 0;
};
