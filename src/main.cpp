

#include "vulkan_class.hpp"

#include <stdio.h>

#if defined(__linux__)
int main(int argc, char *argv[]) {
  VulkanClass ve = VulkanClass();
  ve.createWindow();
  ve.initSwapchain();
  ve.renderLoop();
}

#elif defined(_WIN32)
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine, int nCmdShow) {
  VulkanClass ve = VulkanClass();
  ve.createWindow(hInstance);
  ve.initSwapchain();
  ve.renderLoop();
}
#endif