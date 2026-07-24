/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041f824
 * Function: Caver::Proto::ParticleComponent::Clear
 * Signature: undefined __thiscall Clear(ParticleComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleComponent::Clear() */

void __thiscall Caver::Proto::ParticleComponent::Clear(ParticleComponent *this)

{
  long *plVar1;
  
  if (this[0x1c] != (ParticleComponent)0x0) {
    if ((((byte)this[0x1c] & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x10), plVar1 != (long *)PTR__default_texture_name__007e6170)) {
                    /* catch() { ... } // from try @ 0041f7fc with catch @ 0041f858 */
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
    }
    *(undefined4 *)(this + 0x18) = 0;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


