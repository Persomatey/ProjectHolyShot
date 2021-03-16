# Project: Holy Shot

*An FPS in the style of Halo* 

*Following this tutorial by Shawnthebro on YouTube: https://www.youtube.com/playlist?list=PLfAjixzz6o82cLilSI3Vbv0hu868hAp7P*

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

## Specs

Unreal Engine 4.25.4

SLN solution in Visual Studio Community 2019 Preview 
https://visualstudio.microsoft.com/vs/community/

Trello board: 
https://trello.com/b/ABDPFNxA/project-holy-shot

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

**Animation**
- [mixamo](https://www.mixamo.com/#/2)

**SFX**
- [Hunter Goodin](https://huntergoodin.com/)
- [Komposite Sound](https://assetstore.unity.com/publishers/32329)
- [Olivier Girardot](https://assetstore.unity.com/publishers/39771)
- [Sound Earth Game Audio](https://assetstore.unity.com/publishers/12036)
- [Shapeforms](https://assetstore.unity.com/publishers/40210)

**Special Thanks**
- [Gerardo Bonnet](https://screams-from-the-cellar.itch.io/) 
- [Shawn the Bro](https://www.youtube.com/c/Shawnthebro/) 

## Changelist 

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
