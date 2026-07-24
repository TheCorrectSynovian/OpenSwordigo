/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00434724
 * Function: Caver::Proto::SkillComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(SkillComponent * this, SkillComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SkillComponent::CopyFrom(Caver::Proto::SkillComponent const&) */

void __thiscall Caver::Proto::SkillComponent::CopyFrom(SkillComponent *this,SkillComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


