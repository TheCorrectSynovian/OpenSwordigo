/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f26f0
 * Function: Caver::Proto::CharacterState_ItemState::CharacterState_ItemState
 * Signature: undefined __thiscall CharacterState_ItemState(CharacterState_ItemState * this, CharacterState_ItemState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharacterState_ItemState::CharacterState_ItemState(Caver::Proto::CharacterState_ItemState
   const&) */

void __thiscall
Caver::Proto::CharacterState_ItemState::CharacterState_ItemState
          (CharacterState_ItemState *this,CharacterState_ItemState *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e65c0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)this = puVar1 + 0x10;
  puVar1 = PTR__default_name__007e5e50;
  *(undefined8 *)(this + 0x18) = DAT_00689bc8;
  *(undefined **)(this + 0x10) = puVar1;
  MergeFrom(this,param_1);
  return;
}


