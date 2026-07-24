/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041cb94
 * Function: Caver::Proto::ParticleEmitter::SharedCtor
 * Signature: undefined __thiscall SharedCtor(ParticleEmitter * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitter::SharedCtor() */

void __thiscall Caver::Proto::ParticleEmitter::SharedCtor(ParticleEmitter *this)

{
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x28) = 0;
                    /* catch() { ... } // from try @ 0041ca8c with catch @ 0041cba4 */
  return;
}


