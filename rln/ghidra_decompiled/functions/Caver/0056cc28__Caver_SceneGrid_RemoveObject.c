/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056cc28
 * Function: Caver::SceneGrid::RemoveObject
 * Signature: undefined __thiscall RemoveObject(SceneGrid * this, SceneGridEntry * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGrid::RemoveObject(Caver::SceneGridEntry*) */

void __thiscall Caver::SceneGrid::RemoveObject(SceneGrid *this,SceneGridEntry *param_1)

{
                    /* try { // try from 0056cc2c to 0066cc3f has its CatchHandler @ 0056d41c */
  SceneGridLayer::RemoveObject(*(SceneGridLayer **)param_1,param_1);
  return;
}


