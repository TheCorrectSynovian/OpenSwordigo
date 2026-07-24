/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041e354
 * Function: Caver::Proto::ParticleEmitterComponent::Clear
 * Signature: undefined __thiscall Clear(ParticleEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitterComponent::Clear() */

void __thiscall Caver::Proto::ParticleEmitterComponent::Clear(ParticleEmitterComponent *this)

{
  uint uVar1;
  long lVar2;
  
                    /* try { // try from 0041e354 to 0051e35b has its CatchHandler @ 0041e38c */
                    /* try { // try from 0041e35c to 0051e3df has its CatchHandler @ 0041e33c */
  uVar1 = *(uint *)(this + 0x88);
  if ((uVar1 & 0xff) != 0) {
    *(undefined4 *)(this + 0x18) = 0;
    this[0x1c] = (ParticleEmitterComponent)0x0;
    this[0x14] = (ParticleEmitterComponent)0x0;
    *(undefined8 *)(this + 0xc) = 0;
    if (((uVar1 >> 7 & 1) != 0) && (*(Vector3 **)(this + 0x78) != (Vector3 *)0x0)) {
                    /* catch() { ... } // from try @ 0041e354 with catch @ 0041e38c */
      Vector3::Clear(*(Vector3 **)(this + 0x78));
      uVar1 = *(uint *)(this + 0x88);
    }
  }
  if (((uVar1 >> 8 & 1) != 0) && (*(Vector3 **)(this + 0x80) != (Vector3 *)0x0)) {
    Vector3::Clear(*(Vector3 **)(this + 0x80));
  }
  *(undefined4 *)(this + 0x28) = 0;
  if (0 < *(int *)(this + 0x48)) {
    lVar2 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x40) + lVar2 * 8) + 0x20))();
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x48));
  }
  *(undefined4 *)(this + 0x48) = 0;
                    /* try { // try from 0041e3e0 to 0051e3e3 has its CatchHandler @ 0041e3f0 */
  *(undefined4 *)(this + 0x88) = 0;
                    /* try { // try from 0041e3ec to 0051e3ef has its CatchHandler @ 0041e400 */
  return;
}


