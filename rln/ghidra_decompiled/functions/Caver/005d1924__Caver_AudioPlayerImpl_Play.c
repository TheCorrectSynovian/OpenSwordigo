/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d1924
 * Function: Caver::AudioPlayerImpl::Play
 * Signature: undefined __thiscall Play(AudioPlayerImpl * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioPlayerImpl::Play() */

void __thiscall Caver::AudioPlayerImpl::Play(AudioPlayerImpl *this)

{
  *(undefined4 *)(this + 8) = 1;
  MusicPlayerJNI::Play();
  return;
}


