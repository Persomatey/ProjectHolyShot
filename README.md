# Project: Holy Shot

*An FPS in the style of Halo*

*Following this tutorial by Shawnthebro on YouTube: https://www.youtube.com/playlist?list=PLfAjixzz6o82cLilSI3Vbv0hu868hAp7P*

## Specs

Unreal Engine 4.25.4

SLN solution in Visual Studio Community 2019 Preview 
https://visualstudio.microsoft.com/vs/community/

Trello board: 
https://trello.com/b/ABDPFNxA/project-holy-shot

## Changelist 

<details>
  <summary>CL-000002</summary>
  
  - Made the following changes: 
    - Fixed a bug where, when you die for the first time before reaching a checkpoint then run into the checkpoint, the message says "Checkpoint Loaded" instead of "Checkpoint Reached". 
    - Fixing the above also revealed another bug where when the player died and respawns for the first time, it doesn't say anything. It now says "Checkpoint Loaded" (Even though technically you never hit a checkpoint). To solve this, I added a "Spawn Point" Interactable that is to be placed underneath the player in each scene. For all intents and purposes, it's a checkpoint that doesn't say "Checkpoint Reached" the first time you run into it. 
    
</details>

<details>
  <summary>CL-000001</summary>
  
  - Made the following changes: 
    - Added an extra little room to the level and a bridge to get there. Put a grav lift next to the wall with spikes to jump up there. 
    - Got rid of some of the spikes on the ground, there was a lot. 
    - Changed the HUD UI so that it stretches well with weird aspect ratios. There was a weird bug where it didnt stretch properly if it wasn't 16x9. 
    - Fixed a bug wher when there was a UI bug, the clip and total ammos would display 0/0 instead of just 0 resulting in 0/0/0/0. 
    - Added respawning to the game. If the player loses all their HP then died, the player will respawn at their respawn location and rotation. 
    - Added checkpoints to the game. If the player walks up to them, the player's respawn location and rotation will be set to the checkpoint's values. 
    - Changed the README to reflect the new Trello Board for this project: https://trello.com/b/ABDPFNxA/project-holy-shot 
    - Added a Changelist portion to the README 
      
</details>

<details>
  <summary>CL-000000 (First!)</summary>
  
  - Uploaded project to it's current status: 
    - Using Unreal's FPS toolkit 
    - The player can hold "Shift" to sprint 
    - The player can hold down the right mouse button to ADS 
    - The player has a limited amount of ammo in the clip and limited amount of total ammo. When the clip is empty, the player can press the left mouse button to reload the clip. The player can also press "R" to reload too. When reloading, the total ammo will decrease by the amount of ammo the clip requires. 
    - The player can press "1" to gain 4 extra midair jumps for 5 seconds. The ability cooldown time is 3 seconds. 
    - The player can press "2" to get super speed for 10 seconds. The ability cooldown time is 5 seconds. 
    - Added enemies to the game. They don't have much AI, they're more like targets with HP bars. The HP bars face the player and will lose HP when shot at. Nothing happens when the enemies reach 0 HP but the HP will not go below 0. 
    - Added player health. Nothing happens when the player reaches 0 HP but the HP will not go below 0. 
    - There are spikes around the level. When the player runs into them, the player will take 10% damage every half second the player is in the spikes. 
    - Added a "gravity lift" item that pushes the player into the air. 
    - Added some art to the HUD to make it look more like Halo. All of the art is really bad and custom made in Photoshop after like an hour or two. 
    - Added some art for the abilities to make it look more cool. The art is really bad and custom made in Photoshop after like 5 minutes. 
    - The player's clip and total ammo appears on the lower right of the UI 
    - Edited the README to reflect some details about the project 
      
</details>
