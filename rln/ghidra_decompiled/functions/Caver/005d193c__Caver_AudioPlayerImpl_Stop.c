/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d193c
 * Function: Caver::AudioPlayerImpl::Stop
 * Signature: undefined __thiscall Stop(AudioPlayerImpl * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioPlayerImpl::Stop() */

void __thiscall Caver::AudioPlayerImpl::Stop(AudioPlayerImpl *this)

{
  *(undefined4 *)(this + 8) = 3;
  MusicPlayerJNI::Stop();
  return;
}


