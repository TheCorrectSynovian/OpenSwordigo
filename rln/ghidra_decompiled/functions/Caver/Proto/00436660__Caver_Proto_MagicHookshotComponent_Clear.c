/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00436660
 * Function: Caver::Proto::MagicHookshotComponent::Clear
 * Signature: undefined __thiscall Clear(MagicHookshotComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicHookshotComponent::Clear() */

void __thiscall Caver::Proto::MagicHookshotComponent::Clear(MagicHookshotComponent *this)

{
  if (this[0x28] != (MagicHookshotComponent)0x0) {
    *(undefined8 *)(this + 0x14) = 0;
    *(undefined8 *)(this + 0xc) = 0;
    if ((((byte)this[0x28] >> 4 & 1) != 0) && (*(FloatColor **)(this + 0x20) != (FloatColor *)0x0))
    {
      FloatColor::Clear(*(FloatColor **)(this + 0x20));
    }
  }
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


