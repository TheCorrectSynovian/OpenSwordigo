/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00423844
 * Function: Caver::Proto::ParticleFieldComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(ParticleFieldComponent * this, ParticleFieldComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleFieldComponent::CopyFrom(Caver::Proto::ParticleFieldComponent const&) */

void __thiscall
Caver::Proto::ParticleFieldComponent::CopyFrom
          (ParticleFieldComponent *this,ParticleFieldComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
                    /* try { // try from 00423870 to 0052387b has its CatchHandler @ 00423978 */
    MergeFrom(this,param_1);
    return;
  }
  return;
}


