/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f4b00
 * Function: Caver::Proto::CharacterState::CopyFrom
 * Signature: undefined __thiscall CopyFrom(CharacterState * this, CharacterState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharacterState::CopyFrom(Caver::Proto::CharacterState const&) */

void __thiscall Caver::Proto::CharacterState::CopyFrom(CharacterState *this,CharacterState *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


