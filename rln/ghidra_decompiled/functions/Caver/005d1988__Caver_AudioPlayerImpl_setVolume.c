/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d1988
 * Function: Caver::AudioPlayerImpl::setVolume
 * Signature: undefined __thiscall setVolume(AudioPlayerImpl * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioPlayerImpl::setVolume(float) */

void __thiscall Caver::AudioPlayerImpl::setVolume(AudioPlayerImpl *this,float param_1)

{
  *(float *)(this + 0x10) = param_1;
  MusicPlayerJNI::SetVolume(param_1);
  return;
}


