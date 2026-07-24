/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d1948
 * Function: Caver::AudioPlayerImpl::isPlaying
 * Signature: undefined __thiscall isPlaying(AudioPlayerImpl * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioPlayerImpl::isPlaying() const */

bool __thiscall Caver::AudioPlayerImpl::isPlaying(AudioPlayerImpl *this)

{
  return *(int *)(this + 8) == 1;
}


