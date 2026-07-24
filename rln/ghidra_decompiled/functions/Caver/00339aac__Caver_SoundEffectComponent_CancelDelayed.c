/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00339aac
 * Function: Caver::SoundEffectComponent::CancelDelayed
 * Signature: undefined __thiscall CancelDelayed(SoundEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectComponent::CancelDelayed() */

void __thiscall Caver::SoundEffectComponent::CancelDelayed(SoundEffectComponent *this)

{
  int iVar1;
  AudioSystem *this_00;
  long *plVar2;
  intrusive_ptr *piVar3;
  
  piVar3 = (intrusive_ptr *)(this + 0x90);
  if (*(long *)piVar3 != 0) {
    this_00 = (AudioSystem *)AudioSystem::sharedSystem();
    AudioSystem::CancelDelayedSoundEffectSource(this_00,piVar3);
    plVar2 = *(long **)piVar3;
    *(undefined8 *)piVar3 = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00339b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
}


