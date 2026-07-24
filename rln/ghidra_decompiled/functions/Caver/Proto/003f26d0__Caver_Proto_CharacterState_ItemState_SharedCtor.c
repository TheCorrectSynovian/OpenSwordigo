/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f26d0
 * Function: Caver::Proto::CharacterState_ItemState::SharedCtor
 * Signature: undefined __thiscall SharedCtor(CharacterState_ItemState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharacterState_ItemState::SharedCtor() */

void __thiscall Caver::Proto::CharacterState_ItemState::SharedCtor(CharacterState_ItemState *this)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = DAT_00689bc8;
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_name__007e5e50;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined **)(this + 0x10) = puVar2;
  return;
}


