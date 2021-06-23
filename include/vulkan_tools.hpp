
#ifndef VULKAN_TOOLS_H
#define VULKAN_TOOLS_H

#include <stdio.h>
#include <stdlib.h>
#if defined(_WIN32)
    #include <Windows.h>
#endif

#define APPLICATION_NAME "Vulkan Application"
#define ENGINE_NAME "Vulkan Engine"
#define WINDOW_WIDTH 1280
#define WINDOW_HEIGHT 720

namespace VulkanTools {
    void exitOnError(const char *msg);
}

#endif