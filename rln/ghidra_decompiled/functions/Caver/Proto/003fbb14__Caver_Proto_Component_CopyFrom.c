/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fbb14
 * Function: Caver::Proto::Component::CopyFrom
 * Signature: undefined __thiscall CopyFrom(Component * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Component::CopyFrom(Caver::Proto::Component const&) */

void __thiscall Caver::Proto::Component::CopyFrom(Component *this,Component *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


