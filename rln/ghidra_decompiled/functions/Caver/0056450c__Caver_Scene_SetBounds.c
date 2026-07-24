/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056450c
 * Function: Caver::Scene::SetBounds
 * Signature: undefined __thiscall SetBounds(Scene * this, Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Scene::SetBounds(Caver::Rectangle const&) */

void __thiscall Caver::Scene::SetBounds(Scene *this,Rectangle *param_1)

{
  undefined8 uVar1;
  
                    /* catch() { ... } // from try @ 005644f4 with catch @ 00564518 */
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x90) = uVar1;
  uVar1 = _LAB_00695bd0;
                    /* catch() { ... } // from try @ 00564640 with catch @ 00564534
                       catch() { ... } // from try @ 005647ec with catch @ 00564534 */
  if ((*(float *)(this + 0x98) < DAT_00683944) || (*(float *)(this + 0x9c) < DAT_00683944)) {
    *(undefined8 *)(this + 0x98) = _UNK_00695bd8;
    *(undefined8 *)(this + 0x90) = uVar1;
  }
  SceneGrid::SetBounds((SceneGrid *)(this + 0x360),(Rectangle *)(this + 0x90));
  SceneGrid::SetBounds((SceneGrid *)(this + 0x3a0),(Rectangle *)(this + 0x90));
  return;
}


