/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00435130
 * Function: Caver::Proto::FireBreathComponent::Clear
 * Signature: undefined __thiscall Clear(FireBreathComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FireBreathComponent::Clear() */

void __thiscall Caver::Proto::FireBreathComponent::Clear(FireBreathComponent *this)

{
  if (this[0x20] != (FireBreathComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    if ((((byte)this[0x20] >> 2 & 1) != 0) && (*(FloatColor **)(this + 0x18) != (FloatColor *)0x0))
    {
      FloatColor::Clear(*(FloatColor **)(this + 0x18));
    }
  }
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


