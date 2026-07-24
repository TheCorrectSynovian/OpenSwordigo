/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00422b50
 * Function: Caver::Proto::ParticleObjectComponent::Clear
 * Signature: undefined __thiscall Clear(ParticleObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleObjectComponent::Clear() */

void __thiscall Caver::Proto::ParticleObjectComponent::Clear(ParticleObjectComponent *this)

{
  if (this[0x10] != (ParticleObjectComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


