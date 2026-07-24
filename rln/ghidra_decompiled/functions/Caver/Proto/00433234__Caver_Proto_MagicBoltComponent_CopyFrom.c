/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00433234
 * Function: Caver::Proto::MagicBoltComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(MagicBoltComponent * this, MagicBoltComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicBoltComponent::CopyFrom(Caver::Proto::MagicBoltComponent const&) */

void __thiscall
Caver::Proto::MagicBoltComponent::CopyFrom(MagicBoltComponent *this,MagicBoltComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


