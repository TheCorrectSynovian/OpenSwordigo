/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d12c0
 * Function: Caver::AudioListener::AudioListener
 * Signature: undefined __thiscall AudioListener(AudioListener * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::AudioListener::AudioListener() */

void __thiscall Caver::AudioListener::AudioListener(AudioListener *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_00698068;
  uVar1 = _DAT_00698060;
  *(undefined4 *)this = 0x3f800000;
                    /* try { // try from 005d12d0 to 006d12db has its CatchHandler @ 005d2b94 */
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined8 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0x20) = uVar2;
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}


