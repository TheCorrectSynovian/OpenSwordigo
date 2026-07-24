/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00574eb4
 * Function: Caver::SceneObjectGroup::SceneObjectGroup
 * Signature: undefined __thiscall SceneObjectGroup(SceneObjectGroup * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObjectGroup::SceneObjectGroup() */

void __thiscall Caver::SceneObjectGroup::SceneObjectGroup(SceneObjectGroup *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR_vtable_007e7568;
  puVar1 = PTR_DAT_007e5de8;
                    /* try { // try from 00574eb8 to 00674ec3 has its CatchHandler @ 005750bc */
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined **)(this + 0x10) = puVar2 + 0x60;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)(this + 0x20) = puVar1 + 0x18;
  *(undefined8 *)(this + 0x28) = 0;
                    /* try { // try from 00574ee8 to 00674eeb has its CatchHandler @ 005750f0 */
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0x10000;
  return;
}


