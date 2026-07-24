/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f2ebc
 * Function: Caver::Proto::CharacterState_ItemState::CopyFrom
 * Signature: undefined __thiscall CopyFrom(CharacterState_ItemState * this, CharacterState_ItemState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharacterState_ItemState::CopyFrom(Caver::Proto::CharacterState_ItemState const&)
    */

void __thiscall
Caver::Proto::CharacterState_ItemState::CopyFrom
          (CharacterState_ItemState *this,CharacterState_ItemState *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


