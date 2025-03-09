# VehiclePractice
An attempt to reduce poly count in a vehicle scene using Unreal Engine "Level Of Detail" settings (LOD & HLOD).

## Journal
07/03 
- Set up initial project and migrated assets.

09/03 
- Fixed issue with build settings.

      - Migrated some Scenery assets.
      
      - Wrote out basic plan (below).


## Simple Plan For Optimizing A Scene.
✓ Set up player and game mode for winter scene. (Taken from Unreal Asset Library).
- Reference LOD (Level Of Detail) settings - from a script - for a single asset.
- Make number of polygons adjustable with a button.
- Write script to lower polygons for all assets in a folder.
✓ Try duplicate and convert to low poly assets, instead of lowering quality during runtime (Unreal already does this)
- Look into HLOD groups/layers to optimize poly count of the scene.
✓ Ensure that only objects seen by camera are being rendered. (Unreal does this too)
