/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e18bc
 * Function: Caver::Proto::Quest::SharedCtor
 * Signature: undefined __thiscall SharedCtor(Quest * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Quest::SharedCtor() */

void __thiscall Caver::Proto::Quest::SharedCtor(Quest *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  *(undefined4 *)(this + 8) = 0;
  puVar3 = PTR__default_name__007e5e30;
  puVar2 = PTR__default_follow_up_quest__007e5bb8;
  puVar1 = PTR__default_map_location__007e4c80;
  *(undefined **)(this + 0x18) = PTR__default_title__007e6d70;
  *(undefined **)(this + 0x10) = puVar3;
  *(undefined **)(this + 0x28) = puVar1;
  *(undefined **)(this + 0x20) = puVar2;
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


