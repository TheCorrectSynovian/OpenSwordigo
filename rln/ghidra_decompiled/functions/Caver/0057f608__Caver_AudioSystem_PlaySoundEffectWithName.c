/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057f608
 * Function: Caver::AudioSystem::PlaySoundEffectWithName
 * Signature: undefined __cdecl PlaySoundEffectWithName(string * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioSystem::PlaySoundEffectWithName(std::string const&, float) */

void Caver::AudioSystem::PlaySoundEffectWithName(string *param_1,float param_2)

{
  int iVar1;
  long lVar2;
  string *psVar3;
  long lVar4;
  long *local_50;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  psVar3 = (string *)SoundLibrary::sharedLibrary();
  SoundLibrary::EffectForName(psVar3);
                    /* catch() { ... } // from try @ 0057f670 with catch @ 0057f650
                       catch() { ... } // from try @ 0057f6d4 with catch @ 0057f650 */
  PlaySoundEffectAfterDelay((intrusive_ptr *)param_1,0.0,param_2);
                    /* try { // try from 0057f668 to 0067f66f has its CatchHandler @ 0057f6a0 */
                    /* try { // try from 0057f670 to 0067f6a7 has its CatchHandler @ 0057f650 */
  if ((local_50 != (long *)0x0) &&
     (iVar1 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*local_50 + 8))();
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
                    /* catch() { ... } // from try @ 0057f668 with catch @ 0057f6a0 */
                    /* try { // try from 0057f6a8 to 0067f6af has its CatchHandler @ 0057f6bc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


