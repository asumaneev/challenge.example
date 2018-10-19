#pragma once

#include "ITask.hpp"

class MyTask : public ITask
{
public:
    virtual ~MyTask() = default;

    virtual std::string who_is_awsome() noexcept override;
};
