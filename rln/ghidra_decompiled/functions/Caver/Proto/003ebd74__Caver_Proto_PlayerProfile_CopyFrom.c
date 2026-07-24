/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ebd74
 * Function: Caver::Proto::PlayerProfile::CopyFrom
 * Signature: undefined __thiscall CopyFrom(PlayerProfile * this, PlayerProfile * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PlayerProfile::CopyFrom(Caver::Proto::PlayerProfile const&) */

void __thiscall Caver::Proto::PlayerProfile::CopyFrom(PlayerProfile *this,PlayerProfile *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


