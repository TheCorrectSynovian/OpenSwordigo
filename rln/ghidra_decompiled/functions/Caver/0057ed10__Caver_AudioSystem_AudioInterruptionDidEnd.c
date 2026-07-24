/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057ed10
 * Function: Caver::AudioSystem::AudioInterruptionDidEnd
 * Signature: undefined __thiscall AudioInterruptionDidEnd(AudioSystem * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioSystem::AudioInterruptionDidEnd() */

void __thiscall Caver::AudioSystem::AudioInterruptionDidEnd(AudioSystem *this)

{
  alcResume();
  this[0x80] = (AudioSystem)0x1;
  if (this[0x81] != (AudioSystem)0x0) {
    EndAudioInterruptionIfNecessary(this);
    return;
  }
  return;
}


