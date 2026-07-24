/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d1f54
 * Function: Caver::Proto::Texture_ConversionInfo::Clear
 * Signature: undefined __thiscall Clear(Texture_ConversionInfo * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture_ConversionInfo::Clear() */

void __thiscall Caver::Proto::Texture_ConversionInfo::Clear(Texture_ConversionInfo *this)

{
  if (this[0x1c] != (Texture_ConversionInfo)0x0) {
    *(undefined8 *)(this + 0x14) = 0;
    *(undefined8 *)(this + 0xc) = 0;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


