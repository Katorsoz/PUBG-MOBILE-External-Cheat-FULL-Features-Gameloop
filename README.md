## PUBG MOBILE Cheat - Full Features

Introducing a powerful **PUBG Mobile Cheat** software designed to enhance your gaming experience on **PUBG Mobile**, meticulously developed using **C++**.

This cheat tool is fully compatible with **Gameloop** and supports **32-bit** architecture for smooth usage and performance.

## Requirements

To successfully compile and run this project, you must have the following dependencies installed on your system.

### **Required Software**
- **[Visual Studio 2022 (Community Edition)](https://visualstudio.microsoft.com/thank-you-downloading-visual-studio/?sku=Community&channel=Release&version=VS2022&source=VSLandingPage&cid=2030&passive=false)**

### **Required Components for Visual Studio**
During the **Visual Studio 2022 installation** you need to select the following components.

- **Desktop Development with C++**
- **C++ CMake Tools**
- **MSVC v143 - VS 2022 C++ x64/x86 Build Tools**
- **ATL for x86 and x64 for Visual Studio 2022 (v143)**
- Choose the latest version of **Windows 10 and 11 SDK**.

## Compilation

- [Download the project to your computer from releases (for error-free compilation)]()
- Extract Project to Folder.
- Open Solution File (PUBGM Cheat.sln)
- Set to: Release | x64
- Select **Build Solution** from the **Build** menu.

<details>
<summary>Compilation Video</summary>
  
https://github.com/user-attachments/assets/3fa98bee-ccb6-4a9a-8d7e-5c8db902678a

</details>

### Alternative Compilation Method (Using Builder.bat)

As an alternative to manually building the solution through Visual Studio, you can compile the project using the **Builder.bat** script. This method automates the build process.<br>
Double-click on **Builder.bat** to start the build process.<br>
The script will automatically compile the solution and open the output folder.

- Compiled File Location: `./x64/Release/PUBGM Cheat.exe`

## Usage

- You'll need to launch the Android Emulator using the following command in PowerShell. This will open the emulator with the appropriate arguments for the cheat to work.
```batch
powershell -Command "$installPath = (Get-ItemProperty -Path 'HKLM:\SOFTWARE\WOW6432Node\Tencent\MobileGamePC\UI' -Name InstallPath).InstallPath; Start-Process -FilePath \"`\"$installPath\\AndroidEmulatorEn.exe`\"\" -ArgumentList '-vm 100'"
```
- After launching the emulator, open the **PUBG Mobile** game as you normally would. Wait for the game to load fully.
- Run the Cheat Software
- Press Login Button

- Enjoy it.

### Notes

- **If the cheat is not working**, it could be due to a change in the game's offsets. To resolve this, you'll need to update the game's offsets manually in the `Offsets.cpp` file. Once updated, recompile the project.
  
- **Important:** After updating the offsets, make sure to **comment out line `3101`** in the `Data.cpp` file using `//`. This ensures the cheat runs smoothly after the offsets update.

- **Recommended:** For better security it is highly recommended to use the cheat with an **external bypass**.

- **KeyAuth System:** The KeyAuth system used in the cheat code has been **disabled**. You can enable it again if needed by adjusting the code.

---

### Additional Tips

- Ensure that the **Android Emulator** is running with sufficient system resources for optimal performance while using the cheat.

## Features

- Player ESP Styles (3 Styles)

- Player ESP
    - Player Name
    - Player Bone
    - Player Line
    - Player Box
    - Player Weapon
    - Player Distance
    - Player Flag
    - Player Team ID

- Bot ESP Styles (3 Styles)

- Bot ESP
    - Bot Name
    - Bot Bone
    - Bot Line
    - Bot Box
    - Bot Weapon
    - Bot Distance
    - Bot Flag
    - Bot Team ID

- ALL Items ESP

- ALL Vehicle ESP
    - Vehicle Icon
    - Icon BG
    - Show Health
    - Show Fuel

- Fight Mode

- Bomb Alert

- Aim Warning

- Dots

- Total Enemy (4 Styles)

- Nearst Ar Line

- Line of Sight

- 2D Radar

- Redzone Location

- Safe Zone Location

- Magic Bullet

- Camera View 

- Show Damage

- Quick Loot

- Force Tpp (1st person as 3rd person.)

- X Effect

- Mod Skin (All Guns)

- Anti Stream 

- Game Statics

- Config Feature

## Cheat Menu Preview

<img src="https://github.com/user-attachments/assets/a843590f-2b95-4b47-98e6-c46fa6b38a1b" width="400" /><br>
<img src="https://github.com/user-attachments/assets/6c5e6314-ac13-41a7-817e-e0602a5b8a23" width="400" /><br>
<img src="https://github.com/user-attachments/assets/a7e19120-c7b2-442c-9993-63bc8ec0cb95" width="400" /><br>
<img src="https://github.com/user-attachments/assets/87421f18-0972-44da-9ca4-f44a342c9116" width="400" /><br>
<img src="https://github.com/user-attachments/assets/e9b9de5e-0048-4720-bf5d-34d5cbe5cd87" width="400" /><br>
<img src="https://github.com/user-attachments/assets/a1c4eb02-e298-4ea0-8001-b06a26fe2bd9" width="400" /><br>
<img src="https://github.com/user-attachments/assets/4c260d3a-e247-4625-831d-a175cf00eb91" width="400" /><br>
<img src="https://github.com/user-attachments/assets/5e59a029-771e-498b-92ce-f4f282a3e47c" width="400" /><br>
<img src="https://github.com/user-attachments/assets/71e6379d-9408-4853-ae31-00dee19ed34b" width="400" /><br>
<img src="https://github.com/user-attachments/assets/317e4f44-d5c6-4850-9392-60955e1bd453" width="400" /><br>
<img src="https://github.com/user-attachments/assets/d3e063e5-ae94-4318-a7cd-c17b43ace401" width="400" /><br>

## TODO

- Improving the Cheat Menu Making it Much Better

- Improving the Magic Bullet (Adding Magic Bullet Level)

## Contribution

This project is **Open Source** and is always open to community contributions. Your support is essential for its development and improvement. If you would like to contribute to this project, you can follow the steps below:

- Leave a star on this repo to Contribute to the project.⭐
- **Fork the repository**
- **Bugfixes and Improvements:** Fix bugs you find in the code and make general improvements to improve performance and stability.
<!-- - **Adding New Features:** Developing new features that improve the functionality of the software. -->

Thank you in advance for your help!

## Disclaimer

This content is provided for learning and testing purposes only. The information presented is for general information purposes and does not address any specific situation. No warranty is given as to the timeliness, accuracy or completeness of the information contained in the content. In connection with the use of these materials, no liability is accepted for any consequences or damages that may result from the use of the information or recommendations contained in the content.

## License

This project is licensed under the MIT License. For more information, see the [LICENSE file](LICENSE).