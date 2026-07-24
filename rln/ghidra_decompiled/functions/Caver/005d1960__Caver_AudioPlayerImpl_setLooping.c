/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d1960
 * Function: Caver::AudioPlayerImpl::setLooping
 * Signature: undefined __thiscall setLooping(AudioPlayerImpl * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioPlayerImpl::setLooping(bool) */

void __thiscall Caver::AudioPlayerImpl::setLooping(AudioPlayerImpl *this,bool param_1)

{
  this[0xc] = (AudioPlayerImpl)param_1;
  MusicPlayerJNI::SetLooping(param_1);
  return;
}


