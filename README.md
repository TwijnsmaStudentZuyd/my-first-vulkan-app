# Setting up your development environment with Visual Studio 2026

## 1. Required Downloads

> **Important!**
> 
> make sure you do not store these in a directory that's part of any **git-repository**
>
> If their locations ever change you *will* have to redo the linking procedure for them

- #### Vulkan SDK

The most important component you'll need for developing Vulkan applications is the SDK. It includes the headers, standard validation layers, debugging tools and a loader for the Vulkan functions.
The loader looks up the functions in the driver at runtime, similarly to GLEW for OpenGL - if you're familiar with that.
The SDK can be downloaded from the [LunarG website](https://vulkan.lunarg.com/). You *don't* need an account for this

- #### GLFW

GLFW is used to manage and create the applications window. You can download GLFW from their [official website](https://www.glfw.org/download.html). This project uses the pre-compiled 64-bit binaries.

- #### GLM

Vulkan does not provide a library for linear algebra operations, so in this project we use GLM for that instead. GLM is a header-only library, so you only need to download it's latest release from the [GLM github page](https://github.com/g-truc/glm/releases).

## 2. Setting up visual studio

1. Open up the visual studio solution (.slnx) file
2. Open the projects properties dialag by right-clicking on it and choosing properties
   > make sure you're targeting all configurations
    <img width="801" height="229" alt="properties1" src="https://github.com/user-attachments/assets/5570c074-6ba1-49c0-b102-0fd5fd5939b9" />
3. go to C/C++ -> General -> Additional Include Directories and select *edit* from it's dropdown menu.
    Here you want to add the three libraries you've just downloaded. It should look something like this:
    <img width="517" height="159" alt="properties2" src="https://github.com/user-attachments/assets/806eae35-9ce5-4aa6-9215-0855a8f789b6" />
4. go to Linker -> General -> Additional Library Directories and select *edit* from it's dropdown menu. Here you add the refrences to GLFW and Vulkan.
   it should look something like this:
   <img width="518" height="153" alt="Properties3" src="https://github.com/user-attachments/assets/568283b4-dfde-45a2-8340-7df7f0cd9962" />
5. go to Linker -> Input -> Additional Dependencies and select *edit* from it's dropdown menu. Here you add the refrences to GLFW and Vulkan again.
   This time you'll have to type them out manually:
   <img width="521" height="128" alt="Properties4" src="https://github.com/user-attachments/assets/770f52f5-bad9-4287-bbec-ff046442d392" />
6. Lastly you have to set the C++ compiler language to 17 Standard:
   <img width="777" height="237" alt="Properties5" src="https://github.com/user-attachments/assets/fb74544d-fcad-412b-b143-61d32adbed42" />
7. Now you can hit **Apply** and close the properties window.
8. If you did everything right all the error messages should disappear and you can start her up!
> don't forget to target compile in 64-bit mode
> 
> <img width="356" height="32" alt="debug" src="https://github.com/user-attachments/assets/060dff8d-a5ff-4dc7-ac63-268e3225948e" />
