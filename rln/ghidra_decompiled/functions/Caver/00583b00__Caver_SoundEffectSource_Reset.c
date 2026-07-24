/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00583b00
 * Function: Caver::SoundEffectSource::Reset
 * Signature: undefined __thiscall Reset(SoundEffectSource * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectSource::Reset() */

void __thiscall Caver::SoundEffectSource::Reset(SoundEffectSource *this)

{
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x18] = (SoundEffectSource)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  return;
}


