# Project: Holy Shot

*An FPS in the style of Halo* 

## Specs

Unreal Engine 4.25.4

SLN solution in Visual Studio Community 2019 Preview 
https://visualstudio.microsoft.com/vs/community/

Trello board: 
https://trello.com/b/ABDPFNxA/project-holy-shot

<details>
  <summary>Some Tutorials that have helped</summary>

  - [ShawntheBro's FPS Tutorial in C++ and Blueprints](https://www.youtube.com/playlist?list=PLfAjixzz6o82cLilSI3Vbv0hu868hAp7P)
    - I didn't include all of the features such as tilting and special abilities and ended up changing things quite a bit in the end, but this tutorial was helpful in understanding the basics of Unreal Engine development 
  - [This video by ShawntheBro on incorporating Mixamo animations](https://www.youtube.com/watch?v=VMuekRGuEVU&list=PLKX52YByM7dbvjFrFa0gutBPynA_sfWK8&index=8)
  - [Ryan Laley's Shooter AI Tutorial primarily in Blueprints](https://www.youtube.com/playlist?list=PL4G2bSPE_8ums1OIn0tdj1xbpw_8W-GIP)
    - I did mix in some C++ for some aspects of the enemies such as health, and later enemies aside from the Elite don't behave this way at all, but a lot of the AI behavior still in the blueprints based on this tutorial 
  - [Tesla Dev's video that helped with some of the debugging I had to figure out](https://www.youtube.com/watch?v=jWRkM-95k2I&list=PLKX52YByM7dbvjFrFa0gutBPynA_sfWK8&index=9&t=88s)
  - [Tesla Dev's video on camera shake](https://www.youtube.com/watch?v=kJCP_8u9odA&list=PLKX52YByM7dbvjFrFa0gutBPynA_sfWK8&index=10)

</details>

<details>
  <summary>Level Design Graphs</summary>

  - Tutorial Level (level design and dialogue)
    - <img src="https://github.com/Persomatey/ProjectHolyShot/blob/master/LevelDesignAndScript.jpg" width="800" height="364" />

</details>

<details>
  <summary>Name Ideas</summary>

_ |
------------------ |
Halation | 
Coroter | 
Corotor | 
Halated Shot | 
Discus Shot | 
Radiant Shot | 
Halation Shooter |
Radiant Shooter |
Halation Arena |
Radiant Arena | 
Coroning Arena | 
Discus Arena | 
Glowing Arena | 

</details>

## Credits 

**Programming**
- [Hunter Goodin](https://huntergoodin.com/)

**UI/UX Art/Design**
- [Hunter Goodin](https://huntergoodin.com/)

**Art**
- [Hunter Goodin](https://huntergoodin.com/)
- [ursa.anim](https://assetstore.unity.com/publishers/13142)
- [Dungeon Mason](https://assetstore.unity.com/publishers/23554)
- [Adequate](https://assetstore.unity.com/publishers/9348)
- [MLX](https://assetstore.unity.com/publishers/21576)
- [LemmoLab](https://assetstore.unity.com/publishers/28991) 
- [MASH Virtual](https://assetstore.unity.com/publishers/26592) 
- [Factory Of Models](https://assetstore.unity.com/publishers/26499) 
- [Adventure Forge](https://assetstore.unity.com/publishers/12038)

**Animation**
- [mixamo](https://www.mixamo.com/#/2)

**Music**
- [Faisal Anderson](https://assetstore.unity.com/publishers/31375)

**SFX**
- [Hunter Goodin](https://huntergoodin.com/)
- [Komposite Sound](https://assetstore.unity.com/publishers/32329)
- [Olivier Girardot](https://assetstore.unity.com/publishers/39771)
- [Sound Earth Game Audio](https://assetstore.unity.com/publishers/12036)
- [Shapeforms](https://assetstore.unity.com/publishers/40210)
- [StormwaveAudio](https://www.audiomicro.com/artist/StormwaveAudio)
- [ZapSplat](https://www.zapsplat.com/)

**Special Thanks**
- [Gerardo Bonnet](https://screams-from-the-cellar.itch.io/) 
- [Shawn the Bro](https://shawnthebro.com/) 
- [Tesla Dev](https://www.youtube.com/user/TeslaUE4/)
- [Ryan Laley](https://www.youtube.com/c/RyanLaley/)

## Changelist 

<details>
  <summary>CL-000049 (The Builds Update)</summary>

  - Made the following changes: 
    - Fixed bug where when the game launches, I got the following error: 
      - Default Property warnings and errors: Error: CDO Constructor (FPSGameHUD): Failed to find /Game/FirstPerson/Textures/FirstPersonCrosshair
      - Fixed the bug by changing the reference path to the crosshair in code to my new fully transparent one 
    - Fixed bug where when trying to load the Tutorial or Arena modes, the game will throw up a Fatal Error then crash 
      - This was resolved with the aforemention fix 
    - Made it so that the game will no longer open Steam VR by default when launching 
      - Resolved this by navigating to C:\Program Files\Epic Games\"Engine Version"\Engine\Plugins\Runtime\Steam\SteamVR\SteamVR.uplugin then opening that file with a text editor, then modifying the line "EnabledByDefault" from true to false, then saving the file 
    - Fixed the bug where in the Tutorial, the player started with all of the weapons equipped 
      - Apparently in that scene, I had "ToggleIfIWantAllWeaponsEquippedOnStart" set to true in that scene when it should be false for the tutorial 
    - Made the player's ragdoll a little heavier so hopefully it won't fly all over the place on death anymore 
    - Made some collision changes for the Elite Enemy 
      - Changed the collision for the Robot mesh to "No Collision" 
      - Made the capsule collider wider 
    - Set the visibility for the player's hand model (for the pistol) to false when the player dies 
    - Fixed bug where the healthbars weren't appearing 
      - Apparently the call GetPlayerCharacter is better than GetPlayerController for these kinds of things 
    - Made the default enemies for the Shotgun a little bit closer
    - Made changes to the Shotgun 
      - Made the bullets a little more powerful 
      - Made the range a little better than before 
    - Made it so that Right Shoft also works for crouching
    - Lowered how far the Door C can go in the tutorial 
      - Used to be 170 higher than it's starting position, now it's 162 higher 
      - 161 higher is too far, the player can't crouch that low 
    - Fixed the NavMesh in the robot fighting room as they weren't navigating properly 
    - Made the grenade last a little longer
    - Made the glow around the grenade sprite a little more noticeable 
    - Slightly changed the positioning of the grenade HUD images 
    - Slightly changed the dimensions of the healthbar in the HUD 
    - Got rid of the Reticle for being Unarmed 
      - It just looked dumb and I don't have anything that you interact with by looking at it, only positionally 
    - Raised the alarm sounds for Audio Clip 14 K, X, and P 
    - Changed the way all of the menus look 
      - All of the widgets no longer have background images, only image blurs 
      - Changed the name of the "Options" menu to "Settings" 
      - Added some more credits to the credits 
      - Made the main menu level open to a camera pointed at a hexagonal pattern from the combat levels 
    - Added some graphic art for the game 
      - The name "Helation" with a lens flare going through it for the title screen and stuff 
      - An icon featuring the Elite enemy with a lens flare going through it 
    - Got rid of the Minimap for the HUD 
      - It wasn't working when I packaged the game for some reason 
        - Seems to be an issue with the current version of Unreal 
      - May add it in in the future but for now, this is fine 
    - Made a new HUD image without the little curve in the bottom right corner for the minimap 
    - Added a Builds folder where I will be putting packaged builds for the game 
      - Edited the README to reflect the above changes 

</details>

<details>
  <summary>CL-000048 (The Arena Mode Update)</summary>

    - Made the following changes: 
    - Finished Arena Level 
      - Copied the room in the tutorial where you fight the robots 
    - When the enemies die in the Arena Mode, they will drop pickups for the player 
      - 10% chance of dropping two Grenade Pickups 
      - 10% chance of dropping a Shotgun Ammo Box 
      - 10% chance of dropping a Sniper Ammo Box 
      - 30% chance of dropping a Assault Rifle Ammo Box 
      - 40% chance of dropping a Pistol Ammo Box 
    - Made it so that when the player is dead, the health bars stop showing 
    - Made it so that when the player dies in arena mode, it does the following instead of reloading the level: 
      - Sets time scale to 0 so no movement occurs 
      - Blurs the screen 
      - Opens a HUD Widget which displays the following: 
        - Amount of enemies killed this game 
        - How long you've lasted 
        - Score (the two numbers combined)
        - High score 
          - If you've set the new high score, both score texts will be yellow 
        - A button to return to main menu 
        - A button to replay 
      - Edited the README to reflect the above changes 

</details>

<details>
  <summary>CL-000047</summary>

  - Made the following changes: 
    - Made it so that the player can not access the weapon wheel until all 4 weapons are equipped 
      - Technically it's making sure that the weaponSize int var is == 4 
    - In the weapon cabinets, changed the texture for the ammo boxes to the correct textures 
    - Closed the seam in the back of the weapon room 
    - Raised the volume of the announcer voice
    - Changed the way that the Elite AI works a little bit 
      - Made it so that when they don't see the player, they won't keep shooting 
      - Made it so that they properly alert each of their allies 
      - Made it so that when they move towards the player, they will look in their general direction afterward 
      - Edited the README to reflect the above changes 

</details>

<details>
  <summary>CL-000046 (The Tutorial Update)</summary>

  - Made the following changes: 
    - Rerecorded all tutorial dialogue as I made some mistakes the first time such as referring to the orange walls as "blue" 
    - Incorporated the tutorial level controller into the tutorial level 
      - It starts up right away and controls the player's experience through the level 
      - Is able to play audio, opens doors, lift platforms, place targets, and record enemy deaths 
    - Finished the tutorial level 
    - Added SFX for doors opening 
    - Added SFX for the doors closing 
    - Added a song by Faisal Anderson (already credited) 
      - Probably going to use this song for the arena mode as well as the fighting portion of the tutorial mode 
    - Added collision to the weapon cabinets 
    - Added a glow to the weapon silhouette sprites and grenade sprite 
    - Changed the anchoring for the weapon sprites in the HUD 
      - Before they were anchored to the middle, now they are anchored to the lower right corner 
    - Added a collision on top of the rails in the tutorial level 
      - So that the player can't jump over them 
    - Added a soft radial light to the player 
    - Changed the pistol damage from 0.1f to 0.18f 
    - Moved the player's spawn area in the tutorial to slightly further away from the walls 
    - Changed the material on the doors to make them orange 
    - Made all of the enemy health bars visible from 4000 units from 2800 units 
    - Changed the way that death works 
      - If the player is in the tutorial level, if they die, they will respawn at a checkpoint 
    - Added Zapslpat to the SFX section of the credits 
      - Edited the README to reflect the above changes 

</details>

<details>
  <summary>CL-000045</summary>

  - Made the following changes: 
    - Changed the player's dimensions 
      - The player's capsule height is now 100 
      - Now when the player crouches, the player's capsule height changes to 75 
      - Edited the README to reflect the above changes 

</details>

<details>
  <summary>CL-000044</summary>

  - Made the following changes: 
    - Created the Tutorial Level geometry 
    - Added a weapon cabinet asset to the project 
    - Added Adventure Forge to the Art section of the credits 
    - Edited the README to reflect the above changes 

</details>

<details>
  <summary>CL-000043 (The Audio Update)</summary>

  - Made the following changes: 
    - Audio changes: 
      - Added a jumping SFX 
      - Added a landing SFX 
      - Added a healing SFX 
      - Added a sparking SFX for the enemies 
      - Added an explosion SFX for the enemies 
      - Added a zooming SFX for 5x zoom 
      - Added a zooming SFX for 10x zoom 
      - Added an unzooming SFX 
      - Added a grenade explosion SFX 
      - Added a grenade throwing SFX 
      - Added a grenade pickup SFX 
      - Added a menu hover SFX for when you hover over a button 
      - Added a weapon wheel hover SFX for when you hover over a weapon on the weapon wheel 
      - Added an enemy shooting SFX 
    - Added music
      - Set the main menu music to the song in the UE4 starter pack 
      - Added music for battles 
    - Changed the way that the collision worked for the projectiles
      - They do not collide with the player or themselves 
      - They do collide with enemies and thw world's dymamic collision 
    - The projectiles now spawn way closer to the player character 
    - Added a Level Design dropdown to the README 
      - Added the Tutorial Level's design image 
    - Added StormwaveAudio to the SFX section of the credits 
    - Added Faisal Anderson to the Music section of the credits 
    - Edited the README to reflect the above changes 

</details>

<details>
  <summary>CL-000042</summary>

  - Made the following changes: 
    - Added a .psd and .jpg image to the main folder in the repository 
      - This image serves as level design for the campaign/training mode 
      - It also includes a script for me to say during the game 
    - Added some level art for when I get to making levels 
    - Edited the README to reflect the above changes 

</details>

<details>
  <summary>CL-000041</summary>

  - Made the following changes: 
    - Added a little arrow on the mini map to represent the player 
    - Added muzzle flashes for the enemy and the player weapons 
      - The muzzle flash for the player weapon changes local location based on which weapon the player has equipped 
    - Got rid of the enemy in the main testing room 
      - I'm done with it so there was really no reason to keep it there 
    - Edited the README to reflect the above changes 

</details>

<details>
  <summary>CL-000040 (The Mini Map Update)</summary>

  - Made the following changes: 
    - Added a Mini Map to the HUD 
      - The Elite enemies now have a widget above them that displays a red dot 
      - The player now has a camera pointed directly above them that renders only the red dots 
      - The camera is rendered onto a txture and that texture onto a mat that is in the HUD as an img 
      - Also created a cool looking UI for the minimap that displays over the camera render 
    - Sometimes when I close the project then reopen the project, the camera will render everything. It's simple to fix, just toggle an item then untoggle it then it goes back to normal. Idk why it's happening though. 
    - Edited the README to reflect the above changes 

</details>

<details>
  <summary>CL-000039</summary>

  - Made the following changes: 
    - Fixed bug where the player was able to ADS with the Sniper even while reloading 
      - Now the player needs to finish reloading before they can ADS again 
    - Fixed bug where, opening the weapon wheel while pausing then unpausing the game will leave the weapon wheel active 
      - Now when you pause the game, it deactivates the weapon wheel 
    - Fixed bug where pressing tab while the weapon wheel was still active wouldn't do anything, forcing you to switch weapons 
      - Now when you press tab while the weapon wheel is up, it will just close the weapon wheel 
    - Made it so that the player is unable to open the weapon wheel while reloading 
      - Now the player must wait until the reloading has finished to open the weapon wheel 
    - Edited the README to reflect the above changes 

</details>

<details>
  <summary>CL-000038</summary>

  - Made the following changes: 
    - Added a new character mesh for a ragdoll effect 
    - Added a death cam. When the player dies, the following will happen: 
      - Enable a ragdol mesh on the player controller 
      - Disable the FPS camera and enable a death cam 
      - The death cam slowly pans out for 3.5 seconds 
      - All of the player's controls are disabled 
    - Now when the player dies after the death cam effect, a new level is loaded 
      - Currently, the death just loads the same level 
      - Unsure if I will leave it this way in the future 
    - Edited the README to reflect the above changes 

</details>

<details>
  <summary>CL-000037 (The Respawn Update)</summary>

  - Made the following changes: 
    - Made it so that if there are less than a certain count of enemies in the scene, the Enounter Space will spawn a new enemy every second until there are enough enemies. It will cycle between 4 different enemy locations. 
      - The count of minimum enemies can be edited in the details pane in the map editor 
      - The spawn locations can be edited in the details pane in the map editor 
    - Edited the README to reflect the above changes 

</details>

<details>
  <summary>CL-000036 (The Elite Update)</summary>

  - Made the following changes: 
    - Added a Nav Mesh to the Elite testing room 
    - Added an Encounter Space to the Elite testing room 
    - Added the Elite Enemy AI 
      - At first, the enemy is in an unalerted state
      - If the enemy sees the player or takes damage, they will enter an alerted state 
      - When the enemy is alerted they will alert all the other Elites in the Encounter Space 
      - They will then enter one of two states: 
        - If the enemy is above 50% HP: 
          - They will then start doing 5-shot bursts at the player 
          - If they can't see the player, they will follow the player and chase them down until they can see him 
        - If the enemy is below 50% HP: 
          - They will find the nearest cover and crouch behind the cover 
          - Every few seconds, they will stand up, do a 5-shot burst at the player, then crouch again 
    - Edited the README to reflect the above changes 

</details>

<details>
  <summary>CL-000035</summary>

  - Made the following changes: 
    - Added some animations for the Elite Enemy 
    - Added the model for the Elite Enemy 
    - Hooked up the animations for the Elite Enemy 
    - Started adding some basic AI functionality for the Elite Enemy 
    - Put an Elite enemy in the central test room for faster testing purposes 
    - Added a tutorials section to the readme where it shows some of tutorials that have helped me along the way 
    - Added Tesla Dev to the special thanks section of the credits 
      - I've used his videos for some stuff before so it only feels right to include him 
    - Added Ryan Laley to the special thanks section of the credits 
      - I'm going to start using his videos soon to help with the enemy AI so it feels right to include him 
    - Edited the README to reflect the above changes 

</details>

<details>
  <summary>CL-000034</summary>

  - Made the following changes: 
    - Changed the map of the test level to help test the enemy development going forward 
      - Added two more rooms off to the sides 
        - Each of these rooms will be fore a different enemy type 
      - Added some ramps to move to each room 
      - Got rid of all of the grav lifts 
        - They're cool but they just don't really work when the computer gets to lower framerates 
      - Each of the rooms has some barricades to crouch behind 
      - In the Turret test room, I added a lot more Turrets 
        - Including some on some ledges that you can't quite reach, but they can shoot you from 
    - Changed the way the turret's head positioning works slightly 
      - Now it's linked directly with the base's location 
    - Edited the README to reflect the above changes 

</details>

<details>
  <summary>CL-000033</summary>

  - Made the following changes: 
    - Fixed bug where the player would do the grenade throwing animation even if they don't have grenades 
    - Added crouching to the game 
      - When the player holds 'Shift', the player will crouch 
      - Crouching lowers the player's camera and rig lower the the ground 
      - While crouching, movement speed is reduced from 600.0f to 300.0f 
    - Removed the sprinting functionality 
    - Removed the abilities functionality 
      - And hid the icons for them in the HUD
    - Gave the health bar priority over the red vignette in the HUD 
      - Makes it translate a lot easier this way 
    - Edited the README to reflect the above changes 

</details>

<details>
  <summary>CL-000032 (The Menus Update)</summary>

  - Made the following changes: 
    - Added some blur to the Weapon Wheel selection 
    - Added art for all of the keys and mouse 
    - Added some temp background art 
      - <img src="https://image.freepik.com/free-vector/dark-hexagonal-background-with-gradient-color_79603-1410.jpg" alt="" data-canonical-src="https://image.freepik.com/free-vector/dark-hexagonal-background-with-gradient-color_79603-1410.jpg" width="75" height="50" /> by [coolvector](https://www.freepik.com/free-vector/dark-hexagonal-background-with-gradient-color_12804210.htm#page=1&position=1) 
      - <img src="https://image.freepik.com/free-vector/digital-technology-background-with-blue-orange-light-effect_1017-27423.jpg" alt="" data-canonical-src="https://image.freepik.com/free-vector/digital-technology-background-with-blue-orange-light-effect_1017-27423.jpg" width="75" height="50" /> by [starline](https://www.freepik.com/free-vector/digital-technology-background-with-blue-orange-light-effect_10136759.htm#page=1&query=gaming%20background&position=12)
      - Will replace these with better custom art later on 
    - Made the Main Menu 
      - The Main Menu has 5 options
        - Campaign 
          - Currently opens up the test level 
        - Options
          - Opens up the Options Menu widget 
        - Controls
          - Opens up the Controls Menu widget 
        - Credits 
          - Opens up hte Credits Menu widget
        - Quit
          - Will close the app 
    - Made the Options Menu 
      - The player can change the following settings: 
        - Screen Resolution 
          - 720x480
          - 1280x720
          - 1920x1080
          - 2560x1440
          - 3840x2160
        - View Distance 
          - Near
          - Intermediate
          - Far 
        - Anti-Aliasing
          - Low
          - Medium
          - High 
          - Ultra
        - Shadow Quality 
          - Low 
          - Medium 
          - High 
          - Ultra
        - Texture Quality 
          - Low 
          - Medium 
          - High 
          - Ultra 
    - Made the Pause functionality 
      - While in game, the player can press 'Esc' or 'P' and the game will freeze and open up the Pause Menu 
    - Made the Pause Menu 
      - The Pause Menu has the following options: 
        - Resume 
          - Will close the Pause Menu and unfreeze the game 
        - Options 
          - Will open the Options Menu widget 
        - Quit 
          - Quit will open up two more buttons 
            - To Main Menu 
              - Will go to the main menu 
            - To Desktop 
              - Will close the app 
    - Made the Controls Menu 
      - Shows the player controls for playing on Keyboard and Mouse 
      - Will likely add controller support later and will figure out the controls menu for that then 
    - Made the Credits Menu 
      - Just displays the names of the people who have worked on the game 
      - Probably not going to be the final list so I may change it later 
    - Edited the README to reflect the above changes 

</details>

<details>
  <summary>CL-000031 (The Weapon Wheel Update)</summary>

  - Made the following changes: 
    - Made the art assets for the weapon wheel 
      - The assets are split up between four sides, Top, Left, Right, Bottom 
    - Made some more silhouette art assets for the weapon wheel that are similar to the regular ones but have a slight outer glow 
    - Made a simple boolean to toggle if I want the player to start out with all the weapons right away or not 
      - This will be useful for when I do the campaign mode 
    - Added the weapon wheel 
      - When the player presses 'Tab', a weapon wheel will show up and the time dilation will be lowered to 0.2f 
      - When clicking on one of the options on the weapon wheel, the player will switch to that weapon, the weapon wheel will disappear, and the time dilation will be raised back to 1.0f 
        - If the player already has that weapon equipped, the weapon wheel will disappear and the time dilation will be raised back to 1.0f 
      - When hovering over an option on the weapon wheel, that bottom will slight up slightly 
    - Made it so that as soon as the player runs out of ammo in the clip, the weapon will automatically reload. You do not need to click again or press 'R' 
    - The "SwitchWeapon" key is now currently blank 
    - Edited the README to reflect the above changes 

</details>

<details>
  <summary>CL-000030 (The Grenade Update)</summary>

  - Made the following changes: 
    - Added a model for a grenade 
    - Altered the grenade texture to make it look more like the guns 
    - Added a single hand model for the gun that was useful for changing the melee animation for it 
    - Added silhouette art for the grenade 
    - Added Grenades to the game 
      - Pressing 'F' will throw a grenade in front of the player 
      - The grenade will bounce on the ground for 2 seconds before blowing up 
      - The damage trigger mesh inside the grenade will expand when blowing up 
      - The damage mesh will deal less damage the longer it's expanding 
      - When the damage mesh in the grenade starts expanding, an explosion FX will occur
      - Added 4 grenade silhouettes to the HUD that will be enabled based on how many grenades the player has 
    - Added a pickup for the grenades 
      - Whent the player walks over the grenade pickup, 1 grenade will be added to the player's grenade count 
      - When the player has the max amount of grenades, the pickup will not function 
    - Changed the way that the ammo pickus work slightly 
      - When the player has the max amount of that specific ammo, the pickup will not function 
    - Changed the positioning for the melee attack animations 
      - They now all snap up and vertical, like in Halo 
    - Edited the README to reflect the above changes. 

</details>

<details>
  <summary>CL-000029</summary>

  - Made the following changes: 
    - Added a red vignette that gets more intense the more damage the player takes. 
    - Added some slight screen shake when the player takes damage. 
    - Edited the README to reflect the above changes. 

</details>

<details>
  <summary>CL-000028 (The Melee Update)</summary>

  - Made the following changes: 
    - Changed the key for changing weapons to the 'Tab' key. 
    - Added SFX for the melee attack. 
    - Added some potential menu SFX to use later. 
    - Added a Melee attack 
      - When the player presses the 'Q' key, the player will do a melee. 
      - When the player does a melee, a prefab will instantiate that is a child of the FirstPersonProjectile class that does not move, is mapped to be exactly in front of the player character, and despawns in 0.2f seconds. 
      - When the player does a melee, an SFX will play. 
      - When the player's melee connects with an enemy, a different SFX will play. 
      - When the player does a melee, the player's arms rig will move forward slightly as an attack animation. It's not great, might change it later, but it's good for now. 
      - When the player does a melee, the player can not switch weapons. 
      - The player can not melee while already meleeing. 
      - The player can not zoom while meleeing. 
      - The player can not shoot while meleeing. 
      - The player can not reload while meleeing. 
    - Added Shapeform to the Audio section of the README. 
    - Edited the README to reflect the above changes. 

</details>

<details>
  <summary>CL-000027</summary>

  - Made the following changes: 
    - Changed the FOV's for zooming with the Sniper 
      - Changed the FOV for the first zoom from 45.0f to 18.0f 
      - Changed the FOV for the second zoom from 22.5f to 9.0f 
    - Added a textbox for the Sniper zoom 
      - When the Sniper is zoomed in at 5X, the textbox will display '5X' 
      - When the Sniper is zoomed in at 10X, the textbox will display '10X' 
      - When the Sniper is unzoomed, the textbox will be blank 
    - Edited the README to reflect the above changes. 

</details>

<details>
  <summary>CL-000026 (The Shotgun Update)</summary>

  - Made the following changes: 
    - Finished the Shotgun weapon 
      - When firing, 10 projectiles spawn instead of 1 
      - Projectiles lose damage the longer they last 
    - Added more SFX for the weapon sounds so each weapon now has it's own SFX when fired 
    - Added a "switch weapons" SFX 
    - Fixed bug where picking up a new weapon while the latest weapon equipped is not the last in the array will switch to the next weapon instead of the one recently picked up 
    - Added an animation for when you switch the weapons. While the animation is playing, the player can not fire the weapon. 
    - Added Olivier Girardot and Sound Earth Game Audio to the Audio section of the README 
    - Edited the README to reflect the above changes. 

</details>

<details>
  <summary>CL-000025 (The Sniper Update)</summary>

  - Made the following changes: 
    - Finished the Sniper weapon
      - When firing a shot, the projectiles spawn to fire right at the middle of the reticle 
      - Fires really slow, but does .80 damage to a target 
      - Right click once to zoom 2x, then click again to zoom 4x, then click again to unzoom. 
      - Reloading or switching weapons will unzoom 
      - Created a separate HUD for the sniper when zoomed. While zoomed, the standard HUD will be hidden and the Sniper's HUD will be visable. Vice versa while unzoomed. 
    - Made it so that the player can only ADS while holding the Sniper 
    - Moved all the reticles to the middle of the HUD so that the Sniper's HUD doesn't have the reticle a little off. 
    - Changed the velocities of all the weapons' projectiles because of the reticle changes. 
    - Edited the README to reflect the above changes. 

</details>

<details>
  <summary>CL-000024 (The Pistol Update)</summary>

  - Made the following changes: 
    - Added a fire rate for non-automatic weapons so not everything feels like a semi-auto
    - Finished the Pistol weapon 
      - When shooting, the projectiles spawn at slightly random velocities 
      - Feels like a semi auto with the fire rate set to pretty low  
    - Fixed bug where reload animation would trigger even if out of ammo 
    - Fixed bug where reload animation would continue even if the player switches guns while reloading 
    - Fixed bug where the player could start to reload during the reload animation 
    - Fixed bug where the reload animation wouldn't play while weaponSwitched was true 
    - Fixed bug where the shooting sound would play when reloading 
    - Fixed bug where the shooting sound would play when out of ammo 
    - Added SFX for when you are out of ammo 
    - Added SFX for reloading 
    - When reloading, the reloading sfx plays 
    - Added a red flashing animation for the ammo counter called RedFlashAnim
    - When attempting to reload while out of ammo, RedFlashAnim plays and the "out of ammo" SFX plays 
    - Added an SFX section in the credits and credited myself and Komposite Sound 
    - Edited the README to reflect the above changes. 

</details>

<details>
  <summary>CL-000023 (The Assault Rifle Update)</summary>

  - Made the following changes: 
    - Added different projectiles based on the different weapons. 
    - Added a boolean on all weapons called isAutomatic where, if true, the weapon will keep calling OnFire() based on a fireRate as long as the mouse button is clicked, then stop firing when the mouse button is unlciked.
    - Finished the Assault Rifle weapon.
      - It is an automatic weapon. 
      - To make the weapon spray, the projectiles spawn at slightly random velocities based on variables inside the blueprint. 
    - Edited the README to reflect the above changes. 

</details>

<details>
  <summary>CL-000022</summary>

  - Made the following changes: 
    - Made the default weapon an "unarmed" weapon. 
      - When you pick up your first real weapon, it "unequips" the Default Weapon. 
      - Removed the ammo counter in the bottom right corner while having the Default Weapon equipped. 
      - Moved the model of the arms while holding the Default Weapon so that they are not visible. 
    - Moved the model of the arms while holding the Pistol so that they are not visible, then moved the FP_Gun component down so that the gun is visible. 
    - Lowered the weapon pickup colliders. 
    - Changed the reticle colors to more of a blue to fit with the rest of the HUD. 
    - Edited the README to reflect the above changes. 

</details>

<details>
  <summary>CL-000021</summary>

  - Made the following changes: 
    - Made some changes to the player projectiles 
      - Made it so that the projectiles disappear after a 2 seconds 
      - Removed the gravity from the projectiles 
      - Changed the projectiles' texture from yellow to metal 
      - Made the projectiles move faster. Before it was like 3000 or something, now it's 20000. 
    - Edited the README to reflect the above changes. 

</details>

<details>
  <summary>CL-000020</summary>

  - Made the following changes: 
    - Added reticles for each weapon. The reticles change depending on what weapon is being held at the time. 
    - Removed the old red reticle. 
    - Fixed the bug where the hitboxes for some of the enemies were way too big. Turns out it was the health bars' fault. When you would shoot a health bar, that would count as shooting the enemy. 
    - Edited the README to reflect the above changes. 

</details>

<details>
  <summary>CL-000019</summary>

  - Made the following changes: 
    - Fixed the name it shows for the Sniper. It used to show "SniperRifle" (no spaces), now it shows "Sniper Rifle" (with spaces). Felt like that makes it more consistent with how the AR shows "Assault Rifle" (with spaces). 
    - Made it to where when you switch to a weapon, it shows that weapon's silhouette in the HUD instead of the weapon's name. 
    - Added a FileSources folder to the GitHub folder. This folder will store the assets that I'm using before Unreal converts them to .uasset files. Sometimes I want the original file and exporting the .uasset file as the original file doesn't always make it the original filetype like in the case of .psd files. 
    - Edited the README to reflect the above changes. 

</details>

<details>
  <summary>CL-000018</summary>

  - Made the following changes: 
    - Fixed bug where the ammo boxes would add ammo to your inventory even if you didn't have that weapon yet. Now the player needs to have that weapon in order to get ammo for it. 
    - Edited the README to reflect the above changes. 

</details>

<details>
  <summary>CL-000017</summary>

  - Made the following changes: 
    - Made it so that picking up a weapon also adds ammo for that weapon to the player's stash. 
    - Made it so that when you pick up a weapon by pressing 'E', that weapon enters a destroyed state. The destroyed state doesn't actually destory it, but it makes is invisible and removes all functionality from it. 
    - Made it so that when you walk over a weapon while you have that weapon type equipped, it will add ammo for that weapon to player's stash then makes that weapon on the ground enter the destroyed state. 
    - Changed the pickup collider for the weapons to a cylinder instead of a cube. 
    - Got rid of that cloudy texture for the pickup collider. 
    - Added gravity to the weapons so that they're not just floating. The weapons will ignore all player and projectile collision so the player can't mess with it's position, but will collide with the ground so that it doesn't fall through the earth. 
    - Fixed a bug where the player could pick up more than the "max ammo" for a weapon type. Added some constant integers to the player's header file for each weapon, then did a check every time AddAmmo() was called. 
    - Edited the README to reflect the above changes. 

</details>

<details>
  <summary>CL-000016</summary>

  - Made the following changes: 
    - Added ammo boxes for each weapon type. 
    - Removed the functionality where the enemy blueprints would try to destroy the player projectile after the player projectile already destroyed itself causing an error. 
    - Edited the README to reflect the above changes. 

</details>

<details>
  <summary>CL-000015 (The Interaction Update)</summary>

  - Made the following changes: 
    - Added "Press E To Interact" functionality to each weapon. Now when walking up to a weapon, the player doesn't automatically pick it up. Instead the player message area will say "Press 'E' To Equip [weapon name]" and it will remove that message when the player walks away from it. When the player presses 'E' when right to the weapon, the player will equip that weapon. 
    - Changed out the old way of equipping weapons (called it the Doom-Like System) where the weapons are obtained in a certain order (like Doom) for the new system where the weapons can be obtained in any order (called it the Any Order System). 
      - If I ever want to go back any change it back to the old way, I can do so by uncommenting the "Doom-Like System" region and commenting the "Any Order System" region in FPSGameCharacter.cpp. 
    - Added my name to a new "UI/UX Art/Design" credits section in the README. It just occured to me that I've been doing some of the UI/UX art like the HUD image, reticles, weapon silhouettes, etc. so it felt right to credit myself. 
    - Changed the "Switch Weapon" key to 'Q' because I would keep forgetting that it's 'Y'. Q seems better because it's closer to the rest of your keys. 
    - Slightly altered where the projectiles spawn again. Before when shooting, sometimes, the projectiles would spawn so close to the character that they would slightly push the character. Changed the 50.0f to 75.0f and that seems to be the sweet spot. 
    - Changed the base ammo that the player has for each weapon to 0. Will be relying on ammo box pickups going forward. 
    - Made it so that when the player switches to a weapon, the weapon's name appears below the ammo counter in the HUD. In the future, I'm probably going to remove this in favor of adding the weapon's silhouettes under the ammo counter instead. 
    - Added the weapon silhouettes to the HUD. Currently they are all inactive but I will make them active according to which weapon is equipped later. 
    - Added my name to the "Art" credits section of the README. It just occured to me that I've changed the textures for the weapon meshes and that probably deserves some credit. 
    - Added some final name ideas in the README under a dropdown titled "Name Ideas"
    - Edited the README to reflect the above changes. 

</details>

<details>
  <summary>CL-000014</summary>

  - Made the following changes: 
    - Slightly altered where the projectiles are spawning from for each weapon. 
    - Created a camera render texture which takes input from a camera (already currently in my test scene) and renders it to a material which renders it to a texture which renders it to an image in the HUD. Right now the HUD image is invisible but if I need to enable it again for testing purposes, it's there). 
      - (I might end up doing the minimap like this in the future). 
    - Edited the README to reflect the above changes. 

</details>

<details>
  <summary>CL-000013</summary>

  - Made the following changes: 
    - Made it so that weapon switching works 
    - When you walk over a weapon, you gain that weapon and can switch to it by pressing "T" 
    - Currenly, you can pick up as many weapons as you want and pressing "T" cycles through all of the weapons. Unsure if I will change this so you can only hold two weapons at a time (like Halo), or leave it this way and add a weapon wheel (Like Doom) 
    - Switching the weapons also switches which kind of bullet you're shooting, and which ammo supply you're going through. 
    - Added some new versions of the weapon models (basically the same) that are just Skeletal Mesh versions of each  weapon so that the player can hold them. 
    - Still need to slightly alter where the projectiles are spawning from for certain weapons but having a hard time figuring out the perfect placement currently. 
    - Edited the README to reflect the above changes. 

</details>

<details>
  <summary>CL-000012</summary>
  
  - Made the following changes: 
    - Added the weapon models for the AR, Pistol, Sniper, and Shotgun. 
    - Edited the original textures for all of the weapons to make them more white and orange like the Pistol. 
    - Stretched out the Sniper model because I like it better that way. 
    - Created some silhouette images for each weapon which will be useful when I do weapon switching. 
    - Added the credits for the people who made the SR, Pistol, and Sniper models. The Shotgun modeler is already in there because it was the same person who did the ammo boxes. 
    - Also added the credits for mixamo which I've been using the animations for for a few changelists now. They also did the current art for the Elite enemy. 
    - Edited the README to reflect the above changes. 

</details>

<details>
  <summary>CL-000011</summary>
  
  - Made the following changes: 
    - Changed the death animation for the Elite enemy 
    - Made it so that, when the Elite dies, sparks start start flying from it, then an explosion occurs before it dissappears. 
    - Edited the README to reflect the above changes. 

</details>

<details>
  <summary>CL-000010</summary>
  
  - Made the following changes: 
    - Added the following effects to use under Content > FirstPerson > Blueprints > Effects: 
      - Explosion 
      - Fire 
      - Smoke 
      - Sparks 
      - Steam 
    - Made it so that, when the drone dies, sparks start flying from it then an explosion ooccurs before it dissappears. 
    - Made it so that, when the turret dies, the head starts looking downard, sparks start flying from it, then an explosion ooccurs before it dissappears. 
    - Also, made the healthbars for the enemies toggle invisible when yhe enemy dies. 
    - Edited the README to reflect the above changes. 

</details>

<details>
  <summary>CL-000009</summary>
  
  - Made the following changes: 
    - Made it so that, when the drone dies, it falls to the ground then dissappears after a little while.
    - Made it so that, when the turret dies, it dissappears after a little while. 
    - Added another ammo pack to interact with and moved their locations in the test level. 
    - Edited the README so that when you click on my name in the credits, it will link to my website. The link was broken before. 
    - Edited the README so that the credits look a little nicer. 
    - Edited the README to reflect the above changes. 

</details>

<details>
  <summary>CL-000008</summary>
  
  - Made the following changes: 
    - Fixed bug where the grav lift worked every frame instead of a fixed time. Apparently I had basically fixed this a while ago, but now it's a little better. It wont work too well if the player runs the game at low framerates though. 
    - Added different ammo types. 
    - Started making changes to pave the way for having different weapon types. 
    - Added ammo pickups. When the player collides with an ammo pickup, more ammo is added to their inventory. The type of ammo and ammount of ammo added is customizable in the Details window under the "Weapon" dropdown. 
    - Changed the HUD so that the clip and max ammo will display the type of weapon that is currently equipped. 
    - Edited the README to reflect the above changes. 
    
</details>

<details>
  <summary>CL-000007</summary>
  
  - Made the following changes: 
    - Started making some changes to pave the way for having multiple ammo types. Which will, in turn, pave the way for having multiple weapon types. 
    - Added some models to the project for "Ammo Boxes". 
    - Turned the turret around in the main room of the test level. Not much of a change but it felt like it made more sense this way. 
    - Edited the README to reflect the above changes. 
    
</details>

<details>
  <summary>CL-000006</summary>
  
  - Made the following changes: 
    - Changed the Elite's character art from the gundam looking robot to a more generic looking robot. 
    - I removed all the inheritance from the other enemies. I decided that the game would work better if I wasn't inheriting from DefaultEnemy so that I can make their logic a bit more advanced. 
    - I made it so that when the player's projectile collides with enemies, it gets destroyed instead of bouncing everywhere. Eventully I'll probably use a different kind of projectile anyways or just do a hit scan or somehting but for now, this makes me feel better. 
    - Added some animations for when the Elite gets hit and for when the Elite dies. 
    - Made it so that the turret aims at the player when the player is close. When the player is further away, it will switch between looking left and looking right every 4 seconds. 
    - Edited the README to reflect the above changes. 
    
</details>

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
