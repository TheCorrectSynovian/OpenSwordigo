/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041dad8
 * Function: Caver::Proto::ParticleEmitter::CopyFrom
 * Signature: undefined __thiscall CopyFrom(ParticleEmitter * this, ParticleEmitter * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitter::CopyFrom(Caver::Proto::ParticleEmitter const&) */

void __thiscall
Caver::Proto::ParticleEmitter::CopyFrom(ParticleEmitter *this,ParticleEmitter *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
                    /* catch() { ... } // from try @ 0041d974 with catch @ 0041db20 */
  return;
}


