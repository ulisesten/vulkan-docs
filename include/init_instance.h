#include <stdio.h>
#include <vulkan/vulkan.h>

#if defined(_WIN32)
    #include <Windows.h>
#endif

#define APPLICATION_NAME "Vulkan Example"
#define ENGINE_NAME "Vulkan Engine"

namespace VulkanTools {
    void exitOnError(const char *msg);
}

typedef struct VkApplicationInfo {
    VkStructureType sType;
    const void* pNext;
    const char* pApplicationName;
    uint32_t applicationVersion;
    const char* pEngineName;
    uint32_t engineVersion;
    uint32_t apiVersion;
} VkApplicationInfo;