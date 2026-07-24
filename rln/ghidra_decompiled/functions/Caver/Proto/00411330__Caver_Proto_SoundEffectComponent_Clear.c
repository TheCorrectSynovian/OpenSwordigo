/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00411330
 * Function: Caver::Proto::SoundEffectComponent::Clear
 * Signature: undefined __thiscall Clear(SoundEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Proto::SoundEffectComponent::Clear() */

void __thiscall Caver::Proto::SoundEffectComponent::Clear(SoundEffectComponent *this)

{
  long *plVar1;
  
  if (this[0x20] != (SoundEffectComponent)0x0) {
    if ((((byte)this[0x20] & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x10), plVar1 != (long *)PTR__default_name__007e7518)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
    }
    *(undefined8 *)(this + 0x18) = _DAT_00683948;
  }
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


