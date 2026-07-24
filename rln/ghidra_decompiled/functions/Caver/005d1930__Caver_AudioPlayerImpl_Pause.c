/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d1930
 * Function: Caver::AudioPlayerImpl::Pause
 * Signature: undefined __thiscall Pause(AudioPlayerImpl * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioPlayerImpl::Pause() */

void __thiscall Caver::AudioPlayerImpl::Pause(AudioPlayerImpl *this)

{
  *(undefined4 *)(this + 8) = 2;
  MusicPlayerJNI::Pause();
  return;
}


