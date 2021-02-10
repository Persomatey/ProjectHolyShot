# Project: Holy Shot

*An FPS in the style of Halo* 

*Following this tutorial by Shawnthebro on YouTube: https://www.youtube.com/playlist?list=PLfAjixzz6o82cLilSI3Vbv0hu868hAp7P*

## Specs

Unreal Engine 4.25.4

SLN solution in Visual Studio Community 2019 Preview 
https://visualstudio.microsoft.com/vs/community/

Trello board: 
https://trello.com/b/ABDPFNxA/project-holy-shot

## Credits 

**Programming**
[Hunter Goodin](huntergoodin.com)

**Art**
[ursa.anim](https://assetstore.unity.com/publishers/13142)
[Dungeon Mason](https://assetstore.unity.com/publishers/23554)
[Adequate](https://assetstore.unity.com/publishers/9348)

## Changelist 

<details>
  <summary>CL-000005</summary>
  
  - Made the following changes: 
    - Created three separate enemies that all inherit from the Default Enemy class. None of them do much right now, they basically just act like the "Targets" 
    - The 'Elite' enemy is using the 'Sci Fi Warrior PBR HP Polyart' model from 'Dungeon Mason'. It is currently T-Posing. When spawned, it sends a "Hello, World" to the console. I edited the colors for the textures to make it black and red instead of white and blue to make it feel more like a bad guy. 
    - The 'Drone' enemy is using the 'Space Droid' model from 'Adequate'. It currently is able to hover up and down pretty slowly. When spawned, it sends a "Hello, World" to the console. 
    - The 'Turret' enemy is using the 'Laser Turret' model from 'ursa.anim'. It is currently not doing anything. When spawned, it sends a "Hello, World" to the console. 
    - Updated the .gitignore to be more friendly with Unreal (hopefully). 
    - Edited the README to reflect the above changes. 
    
</details>

<details>
  <summary>CL-000004</summary>
  
  - Made the following changes: 
    - Fixed a bug with the healing system where the wait timer wouldn't start back up again when the player takes damage while waiting on the timer. 
    - Edited the README to reflect the above changes. 
    
</details>

<details>
  <summary>CL-000003</summary>
  
  - Made the following changes: 
    - Added healing in the game. When the player gets damaged, the game will wait a few seconds, then start healing. If the player is damaged while waiting, the wait timer will start up again. If the player is damaged while healing, the wait timer will start up again. The code for this is a little messy, but I want to commit this while it's working right now. 
    - Edited the README to reflect the above changes. 
    
</details>

<details>
  <summary>CL-000002</summary>
  
  - Made the following changes: 
    - Fixed a bug where, when you die for the first time before reaching a checkpoint then run into the checkpoint, the message says "Checkpoint Loaded" instead of "Checkpoint Reached". 
    - Fixing the above also revealed another bug where when the player died and respawns for the first time, it doesn't say anything. It now says "Checkpoint Loaded" (Even though technically you never hit a checkpoint). To solve this, I added a "Spawn Point" Interactable that is to be placed underneath the player in each scene. For all intents and purposes, it's a checkpoint that doesn't say "Checkpoint Reached" the first time you run into it. 
    - Edited the README to reflect the above changes. 
    
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
    - Edited the README to reflect the above changes. 
      
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
