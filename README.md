# Theia_MobiSys2024_Client
 
The client-side component runs on Unreal Engine 4.26. The client device is the Microsoft HoloLens 2 MR headset. In this repository, we provide the client demo in the format of an Unreal Engine project that can run on the Windows OS. The project can be easily packaged and deployed to HoloLens 2.

We use the following plugins in the Unreal Engine:



Instructions:

1) Clone this project. Given its large size, we also recommend downloading the project from our Google Drive link (https://drive.google.com/file/d/1q1poEaog2Kmi6TcmVa1POocq1o0i8oR6/view?usp=sharing).
2) Open the Unreal Engine project and modify the IP address at line 319 of the cpp file at GaPe/Source/PointCloud/PointCloudRenderer.cpp to match the server’s IP address.
3) Compile the project with Unreal Engine 4.26.


Potential Errors:

1) UATHelper: Packaging (HoloLens): ERROR: System.IO.DirectoryNotFoundException: Could not find a part of the path 'C:\Users\XXXX\GaPe\Content\PLYFiles'.

Solution:
1) It may happen during the packaging step since I included the PLYFiles folder as a non-asset directory to package. You can delete it under Unreal's Project Setting. Under Packaging, there is a part named "Additional Non-Asset Directories to Package", where you can delete "PLYFiles" and "90FPS_Gaze_data". A workaround solution could be manually creating a "PLYFiles" under the "Content" Folder. You also need to create a "90FPS_Gaze_data".
