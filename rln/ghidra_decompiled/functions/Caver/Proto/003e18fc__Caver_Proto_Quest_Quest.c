/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e18fc
 * Function: Caver::Proto::Quest::Quest
 * Signature: undefined __thiscall Quest(Quest * this, Quest * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Quest::Quest(Caver::Proto::Quest const&) */

void __thiscall Caver::Proto::Quest::Quest(Quest *this,Quest *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR__default_name__007e5e30;
  puVar2 = PTR__default_follow_up_quest__007e5bb8;
  puVar1 = PTR_vtable_007e5b70;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)this = puVar1 + 0x10;
  puVar4 = PTR__default_title__007e6d70;
  puVar1 = PTR__default_map_location__007e4c80;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined **)(this + 0x18) = puVar4;
  *(undefined **)(this + 0x10) = puVar3;
  *(undefined **)(this + 0x28) = puVar1;
  *(undefined **)(this + 0x20) = puVar2;
  MergeFrom(this,param_1);
  return;
}


