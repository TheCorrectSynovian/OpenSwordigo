/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00339c98
 * Function: Caver::SoundEffectComponent::Prepare
 * Signature: undefined __thiscall Prepare(SoundEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectComponent::Prepare() */

void __thiscall Caver::SoundEffectComponent::Prepare(SoundEffectComponent *this)

{
  int iVar1;
  long lVar2;
  string *psVar3;
  long lVar4;
  long *plVar5;
  long *local_30;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x88) == 0) {
    psVar3 = (string *)SoundLibrary::sharedLibrary();
    SoundLibrary::EffectForName(psVar3);
    if (local_30 != (long *)0x0) {
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    }
    plVar5 = *(long **)(this + 0x88);
    *(long **)(this + 0x88) = local_30;
    if ((plVar5 != (long *)0x0) &&
       (iVar1 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    if ((local_30 != (long *)0x0) &&
       (iVar1 = (int)local_30[1] + -1, *(int *)(local_30 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*local_30 + 8))();
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


