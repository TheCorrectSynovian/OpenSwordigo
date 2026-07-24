/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00417504
 * Function: Caver::Proto::ProgramComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(ProgramComponent * this, ProgramComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ProgramComponent::CopyFrom(Caver::Proto::ProgramComponent const&) */

void __thiscall
Caver::Proto::ProgramComponent::CopyFrom(ProgramComponent *this,ProgramComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


