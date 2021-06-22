
#ifndef VULKAN_TOOLS_H
#define VULKAN_TOOLS_H

#include <stdio.h>
#include <stdlib.h>
#if defined(_WIN32)
    #include <Windows.h>
#endif

#define APPLICATION_NAME "Vulkan Application"
#define ENGINE_NAME "Vulkan Engine"

namespace VulkanTools {
    void exitOnError(const char *msg);
}

#endif