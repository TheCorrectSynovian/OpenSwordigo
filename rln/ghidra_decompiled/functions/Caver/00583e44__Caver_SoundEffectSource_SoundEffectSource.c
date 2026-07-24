/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00583e44
 * Function: Caver::SoundEffectSource::SoundEffectSource
 * Signature: undefined __thiscall SoundEffectSource(SoundEffectSource * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectSource::SoundEffectSource() */

void __thiscall Caver::SoundEffectSource::SoundEffectSource(SoundEffectSource *this)

{
  undefined *puVar1;
  
                    /* try { // try from 00583e44 to 00683eaf has its CatchHandler @ 00583dd0 */
  *(undefined4 *)(this + 8) = 0;
  puVar1 = PTR_vtable_007e7e90;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x18] = (SoundEffectSource)0x0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x30) = 0x3f80000000000000;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x48) = 0;
  return;
}


