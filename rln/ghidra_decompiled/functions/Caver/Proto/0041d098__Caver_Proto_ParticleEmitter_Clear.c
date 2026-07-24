/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041d098
 * Function: Caver::Proto::ParticleEmitter::Clear
 * Signature: undefined __thiscall Clear(ParticleEmitter * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitter::Clear() */

void __thiscall Caver::Proto::ParticleEmitter::Clear(ParticleEmitter *this)

{
  ParticleEmitter PVar1;
  uint uVar2;
  
  PVar1 = this[0x50];
  uVar2 = (uint)(byte)PVar1;
  if (PVar1 != (ParticleEmitter)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    if ((((byte)PVar1 >> 1 & 1) != 0) && (*(Vector3 **)(this + 0x10) != (Vector3 *)0x0)) {
      Vector3::Clear(*(Vector3 **)(this + 0x10));
      uVar2 = *(uint *)(this + 0x50);
    }
    if (((uVar2 >> 2 & 1) != 0) && (*(FloatColor **)(this + 0x18) != (FloatColor *)0x0)) {
      FloatColor::Clear(*(FloatColor **)(this + 0x18));
    }
                    /* try { // try from 0041d0d8 to 0051d0db has its CatchHandler @ 0041d190 */
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x28) = 0;
  }
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  return;
}


