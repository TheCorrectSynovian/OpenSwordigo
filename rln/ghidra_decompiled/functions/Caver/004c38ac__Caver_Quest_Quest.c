/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c38ac
 * Function: Caver::Quest::Quest
 * Signature: undefined __thiscall Quest(Quest * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Quest::Quest() */

void __thiscall Caver::Quest::Quest(Quest *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_007e5de8;
  *(undefined4 *)this = 0xffffffff;
  puVar1 = puVar1 + 0x18;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined **)(this + 8) = puVar1;
  *(undefined **)(this + 0x20) = puVar1;
  *(undefined **)(this + 0x18) = puVar1;
  return;
}


