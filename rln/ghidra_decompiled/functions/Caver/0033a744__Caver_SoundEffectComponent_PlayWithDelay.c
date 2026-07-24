/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033a744
 * Function: Caver::SoundEffectComponent::PlayWithDelay
 * Signature: undefined __thiscall PlayWithDelay(SoundEffectComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectComponent::PlayWithDelay(float) */

void __thiscall Caver::SoundEffectComponent::PlayWithDelay(SoundEffectComponent *this,float param_1)

{
  int iVar1;
  long lVar2;
  intrusive_ptr *piVar3;
  long lVar4;
  long *plVar5;
  long *local_40;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x88) != 0) {
    piVar3 = (intrusive_ptr *)AudioSystem::sharedSystem();
    AudioSystem::PlaySoundEffectAfterDelay(piVar3,param_1,*(float *)(this + 0x80));
    if (local_40 != (long *)0x0) {
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    }
    plVar5 = *(long **)(this + 0x90);
    *(long **)(this + 0x90) = local_40;
    if ((plVar5 != (long *)0x0) &&
       (iVar1 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    if ((local_40 != (long *)0x0) &&
       (iVar1 = (int)local_40[1] + -1, *(int *)(local_40 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*local_40 + 8))();
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


