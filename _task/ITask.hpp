#pragma once

#include <string>

/**
 * @brief Interface for task
 * Print output of method to std::cout
 */
class ITask
{
public:

    virtual ~ITask() = default;

    virtual std::string who_is_awsome() noexcept = 0;

};
