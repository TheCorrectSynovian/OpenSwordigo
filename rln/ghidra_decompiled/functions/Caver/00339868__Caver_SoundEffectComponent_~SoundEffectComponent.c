/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00339868
 * Function: Caver::SoundEffectComponent::~SoundEffectComponent
 * Signature: undefined __thiscall ~SoundEffectComponent(SoundEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectComponent::~SoundEffectComponent() */

void __thiscall Caver::SoundEffectComponent::~SoundEffectComponent(SoundEffectComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  AudioSystem *this_00;
  long *plVar6;
  undefined *puVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  intrusive_ptr *piVar11;
  
  lVar5 = tpidr_el0;
  lVar10 = *(long *)(lVar5 + 0x28);
  puVar7 = PTR_vtable_007e54d0 + 0x130;
  puVar1 = PTR_vtable_007e54d0 + 0x170;
  puVar2 = PTR_vtable_007e54d0 + 400;
  *(undefined **)this = PTR_vtable_007e54d0 + 0x10;
  *(undefined **)(this + 0x18) = puVar1;
  *(undefined **)(this + 0x10) = puVar7;
  *(undefined **)(this + 0x70) = puVar2;
  piVar11 = (intrusive_ptr *)(this + 0x90);
  if (*(long *)piVar11 != 0) {
    this_00 = (AudioSystem *)AudioSystem::sharedSystem();
    AudioSystem::CancelDelayedSoundEffectSource(this_00,piVar11);
    plVar6 = *(long **)piVar11;
    *(undefined8 *)piVar11 = 0;
    if ((plVar6 != (long *)0x0) &&
       (iVar9 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar9, iVar9 == 0)) {
      (**(code **)(*plVar6 + 8))();
      plVar6 = *(long **)piVar11;
      if ((plVar6 != (long *)0x0) &&
         (iVar9 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar9, iVar9 == 0)) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  plVar6 = *(long **)(this + 0x88);
  if ((plVar6 != (long *)0x0) &&
     (iVar9 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*plVar6 + 8))();
  }
  puVar7 = (undefined *)(*(long *)(this + 0x78) + -0x18);
  if (puVar7 != PTR_DAT_007e5de8) {
    piVar8 = (int *)(*(long *)(this + 0x78) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(puVar7);
    }
  }
  Component::~Component((Component *)this);
  if (*(long *)(lVar5 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


