#ifndef VULKAN_CLASS_H
#define VULKAN_CLASS_H

#include <stdio.h>
#include <stdlib.h>
#include <vulkan/vulkan.h>
#include <vector>


#if defined(__linux__)
    #include <xcb/xcb.h>
    #include <vulkan/vulkan_xcb.h>
#elif defined(_WIN32)
    #include<vulkan/vulkan_win32.h>
#elif defined(__ANDROID__)
    #include <vulkan/vulkan_android.h>
#endif


class VulkanClass {
    private :
        void initInstance();
        VkInstance instance;
    public :
        VulkanClass();
        virtual ~VulkanClass();
};



#endif