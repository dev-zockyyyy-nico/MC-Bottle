#pragma once
#include <optional>

#include "../../../../crossguid/include/crossguid/guid.hpp"
class Entity;
class IEntityOwnable
{
    virtual std::optional<xg::Guid> getOwnerId() = 0;

    virtual Entity* getOwner() = 0;
};
