#include <stdio.h>
#include <stdlib.h>
#include "vulkan_tools.hpp"

void VulkanTools::exitOnError(const char* msg) {
    #if defined(_WIN32)
        MessageBox(NULL, msg, ENGINE_NAME, MB_ICONERROR);
    #else
        printf(msg);
        fflush(stdout);
    #endif

    exit(EXIT_FAILURE);
}