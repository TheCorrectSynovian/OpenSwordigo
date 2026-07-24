/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041bc8c
 * Function: Caver::Proto::HeroEntityComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(HeroEntityComponent * this, HeroEntityComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::HeroEntityComponent::CopyFrom(Caver::Proto::HeroEntityComponent const&) */

void __thiscall
Caver::Proto::HeroEntityComponent::CopyFrom(HeroEntityComponent *this,HeroEntityComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
                    /* try { // try from 0041bcc4 to 0051bccb has its CatchHandler @ 0041be34 */
    MergeFrom(this,param_1);
    return;
  }
  return;
}


