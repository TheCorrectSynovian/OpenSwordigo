/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d7f3c
 * Function: Caver::Proto::SoundEffect::CopyFrom
 * Signature: undefined __thiscall CopyFrom(SoundEffect * this, SoundEffect * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SoundEffect::CopyFrom(Caver::Proto::SoundEffect const&) */

void __thiscall Caver::Proto::SoundEffect::CopyFrom(SoundEffect *this,SoundEffect *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


