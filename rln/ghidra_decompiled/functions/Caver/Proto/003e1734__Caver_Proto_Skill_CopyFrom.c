/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e1734
 * Function: Caver::Proto::Skill::CopyFrom
 * Signature: undefined __thiscall CopyFrom(Skill * this, Skill * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Skill::CopyFrom(Caver::Proto::Skill const&) */

void __thiscall Caver::Proto::Skill::CopyFrom(Skill *this,Skill *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


