#ifndef VULKAN_CLASS_H
#define VULKAN_CLASS_H

#include "vulkan_tools.hpp"
#include "vulkan_swapchain.hpp"

#include <stdio.h>
#include <stdlib.h>
#include <vulkan/vulkan.h>
#include <vector>
#include <cassert>
#include <cstring>


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
        void initDevices();

        VkInstance instance;
        VkPhysicalDevice physicalDevice;
        VkDevice device;
        VulkanSwapchain swapchain;

        #if defined(__linux__)
            xcb_connection_t * connection;
            xcb_window_t window;
            xcb_screen_t * screen;
            xcb_atom_t wmProtocols;
            xcb_atom_t wmDeleteWin;
        #elif defined(_WIN32)
            HINSTANCE windowInstance;
            HWND window;
        #endif

    public :
        VulkanClass();
        virtual ~VulkanClass();

    void initSwapchain();

    #if defined(__linux__)
        void createWindow();
    #elif defined(_WIN32)
        void createWindow(HINSTANCE hInstance);
    #endif
    
    void renderLoop();

};



#endif