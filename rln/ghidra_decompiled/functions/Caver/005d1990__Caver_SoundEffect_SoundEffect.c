/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d1990
 * Function: Caver::SoundEffect::SoundEffect
 * Signature: undefined __thiscall SoundEffect(SoundEffect * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffect::SoundEffect() */

void __thiscall Caver::SoundEffect::SoundEffect(SoundEffect *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(this + 8) = 0;
  uVar3 = DAT_0068a310;
                    /* try { // try from 005d1994 to 006d199b has its CatchHandler @ 005d2a28 */
                    /* try { // try from 005d199c to 006d1a0b has its CatchHandler @ 005d34e0 */
  puVar1 = PTR_vtable_007e6fc8 + 0x10;
  puVar2 = PTR_DAT_007e5de8 + 0x18;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined **)this = puVar1;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined **)(this + 0x20) = puVar2;
  *(undefined8 *)(this + 0x38) = uVar3;
  return;
}


