/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d5f8c
 * Function: Caver::Proto::Program::CopyFrom
 * Signature: undefined __thiscall CopyFrom(Program * this, Program * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Program::CopyFrom(Caver::Proto::Program const&) */

void __thiscall Caver::Proto::Program::CopyFrom(Program *this,Program *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


