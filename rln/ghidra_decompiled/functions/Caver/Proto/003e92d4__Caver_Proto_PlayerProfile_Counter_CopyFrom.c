/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e92d4
 * Function: Caver::Proto::PlayerProfile_Counter::CopyFrom
 * Signature: undefined __thiscall CopyFrom(PlayerProfile_Counter * this, PlayerProfile_Counter * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PlayerProfile_Counter::CopyFrom(Caver::Proto::PlayerProfile_Counter const&) */

void __thiscall
Caver::Proto::PlayerProfile_Counter::CopyFrom
          (PlayerProfile_Counter *this,PlayerProfile_Counter *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


