/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041dcf8
 * Function: Caver::Proto::ParticleEmitterComponent::SharedCtor
 * Signature: undefined __thiscall SharedCtor(ParticleEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitterComponent::SharedCtor() */

void __thiscall Caver::Proto::ParticleEmitterComponent::SharedCtor(ParticleEmitterComponent *this)

{
  *(undefined4 *)(this + 0x18) = 0;
  this[0x1c] = (ParticleEmitterComponent)0x0;
  *(undefined8 *)(this + 0xd) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x88) = 0;
                    /* try { // try from 0041dd10 to 0051dd53 has its CatchHandler @ 0041dd10
                       catch() { ... } // from try @ 0041dd10 with catch @ 0041dd10
                       catch() { ... } // from try @ 0041dda0 with catch @ 0041dd10
                       catch() { ... } // from try @ 0041de4c with catch @ 0041dd10 */
  return;
}


