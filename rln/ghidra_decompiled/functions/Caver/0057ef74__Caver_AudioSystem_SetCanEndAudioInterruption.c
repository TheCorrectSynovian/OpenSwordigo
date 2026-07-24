/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057ef74
 * Function: Caver::AudioSystem::SetCanEndAudioInterruption
 * Signature: undefined __thiscall SetCanEndAudioInterruption(AudioSystem * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioSystem::SetCanEndAudioInterruption(bool) */

void __thiscall Caver::AudioSystem::SetCanEndAudioInterruption(AudioSystem *this,bool param_1)

{
  this[0x81] = (AudioSystem)param_1;
  if (param_1) {
    if (*(long *)(this + 8) == 0) {
      CreateDevice(this);
    }
    EndAudioInterruptionIfNecessary(this);
    return;
  }
  return;
}


