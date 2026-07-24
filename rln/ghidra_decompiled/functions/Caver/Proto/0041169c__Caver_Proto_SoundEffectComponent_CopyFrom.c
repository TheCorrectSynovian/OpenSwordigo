/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041169c
 * Function: Caver::Proto::SoundEffectComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(SoundEffectComponent * this, SoundEffectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SoundEffectComponent::CopyFrom(Caver::Proto::SoundEffectComponent const&) */

void __thiscall
Caver::Proto::SoundEffectComponent::CopyFrom
          (SoundEffectComponent *this,SoundEffectComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
                    /* try { // try from 004116d8 to 005116ff has its CatchHandler @ 0041178c */
    MergeFrom(this,param_1);
    return;
  }
  return;
}


