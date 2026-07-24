/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00435f40
 * Function: Caver::Proto::MagicBombComponent::Clear
 * Signature: undefined __thiscall Clear(MagicBombComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicBombComponent::Clear() */

void __thiscall Caver::Proto::MagicBombComponent::Clear(MagicBombComponent *this)

{
  if ((((byte)this[0x18] & 1) != 0) && (*(FloatColor **)(this + 0x10) != (FloatColor *)0x0)) {
    FloatColor::Clear(*(FloatColor **)(this + 0x10));
  }
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


