/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00432c28
 * Function: Caver::Proto::MagicBoltComponent::Clear
 * Signature: undefined __thiscall Clear(MagicBoltComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicBoltComponent::Clear() */

void __thiscall Caver::Proto::MagicBoltComponent::Clear(MagicBoltComponent *this)

{
  if (this[0x24] != (MagicBoltComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    if ((((byte)this[0x24] >> 3 & 1) != 0) && (*(FloatColor **)(this + 0x18) != (FloatColor *)0x0))
    {
      FloatColor::Clear(*(FloatColor **)(this + 0x18));
    }
    *(undefined4 *)(this + 0x20) = 0;
  }
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


