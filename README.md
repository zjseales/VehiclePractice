# VehiclePractice
An attempt to reduce poly count in a vehicle scene using Unreal Engine "Level Of Detail" settings (LOD & HLOD).

## Journal
07/03 
- Set up initial project and migrated assets.

09/03 
- Fixed issue with build settings.

- Migrated some Scenery assets.
      
- Wrote out basic plan (below).

10/03
- Tried (and failed) to convert static mesh to dynamic mesh, to alter more detailed properties, and convert back to static mesh.
(I think this would be the optimal solution but it is currently difficult to do in Unreal, and outside of my current skillset).

11/03
- Failed to set a custom LOD to a Static Mesh, at runtime. (I'm sure it's possible but, again, outside of current skillset.)

- Applied multiple HLOD's to a complex scene. Triangle count reduced to 23% but this made computation very slow, the fps lowered.
Seems the best solution is to edit the meshes before runtime. 


## Simple Plan For Optimizing A Scene.
- Reference LOD (Level Of Detail) settings - from a script - for a single asset.
- Make number of polygons adjustable with a button.
- Write script to lower polygons for all assets in a folder.
  
✓ Look into HLOD groups/layers to optimize poly count of the scene.

✓ Try duplicate and convert to low poly assets, instead of lowering quality during runtime (Unreal already does this)

✓ Set up player and game mode for winter scene. (Taken from Unreal Asset Library).

✓ Ensure that only objects seen by camera are being rendered. (Unreal does this too)
