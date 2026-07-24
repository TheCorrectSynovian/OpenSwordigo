/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057e37c
 * Function: Caver::AudioSystem::SetSharedSystem
 * Signature: undefined __cdecl SetSharedSystem(AudioSystem * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioSystem::SetSharedSystem(Caver::AudioSystem*) */

void Caver::AudioSystem::SetSharedSystem(AudioSystem *param_1)

{
  AudioSystem *pAVar1;
  
  pAVar1 = DAT_007e9d78;
  if (DAT_007e9d78 != (AudioSystem *)0x0) {
    ~AudioSystem(DAT_007e9d78);
    operator_delete(pAVar1);
  }
  DAT_007e9d78 = param_1;
  return;
}


