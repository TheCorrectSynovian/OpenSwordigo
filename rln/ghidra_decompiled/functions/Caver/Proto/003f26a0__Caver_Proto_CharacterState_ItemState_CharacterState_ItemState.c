/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f26a0
 * Function: Caver::Proto::CharacterState_ItemState::CharacterState_ItemState
 * Signature: undefined __thiscall CharacterState_ItemState(CharacterState_ItemState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharacterState_ItemState::CharacterState_ItemState() */

void __thiscall
Caver::Proto::CharacterState_ItemState::CharacterState_ItemState(CharacterState_ItemState *this)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_vtable_007e65c0;
  *(undefined4 *)(this + 8) = 0;
  uVar1 = DAT_00689bc8;
  *(undefined **)this = puVar2 + 0x10;
  puVar2 = PTR__default_name__007e5e50;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined **)(this + 0x10) = puVar2;
  return;
}


