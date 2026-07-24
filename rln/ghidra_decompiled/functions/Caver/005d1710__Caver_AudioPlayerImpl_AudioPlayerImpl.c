/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d1710
 * Function: Caver::AudioPlayerImpl::AudioPlayerImpl
 * Signature: undefined __thiscall AudioPlayerImpl(AudioPlayerImpl * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioPlayerImpl::AudioPlayerImpl() */

void __thiscall Caver::AudioPlayerImpl::AudioPlayerImpl(AudioPlayerImpl *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e63c8;
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (AudioPlayerImpl)0x0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  return;
}


