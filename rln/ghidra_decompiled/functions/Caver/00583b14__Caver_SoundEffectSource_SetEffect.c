/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00583b14
 * Function: Caver::SoundEffectSource::SetEffect
 * Signature: undefined __thiscall SetEffect(SoundEffectSource * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectSource::SetEffect(boost::intrusive_ptr<Caver::SoundEffect> const&) */

void __thiscall Caver::SoundEffectSource::SetEffect(SoundEffectSource *this,intrusive_ptr *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  SoundEffect *pSVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  SoundEffect *this_00;
  undefined4 uVar9;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this_00 = *(SoundEffect **)param_1;
  pSVar4 = *(SoundEffect **)(this + 0x28);
  if (this_00 == pSVar4) goto LAB_00583bec;
  if (this_00 != (SoundEffect *)0x0) {
    *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
  }
  *(SoundEffect **)(this + 0x28) = this_00;
  if ((pSVar4 == (SoundEffect *)0x0) ||
     (iVar8 = *(int *)(pSVar4 + 8), *(int *)(pSVar4 + 8) = iVar8 + -1, iVar8 + -1 != 0)) {
    uVar9 = *(undefined4 *)(this + 0x30);
    if (this_00 == (SoundEffect *)0x0) goto LAB_00583bac;
LAB_00583b78:
    puVar6 = *(undefined4 **)(this_00 + 0x28);
    if (puVar6 == (undefined4 *)0x0) {
      SoundEffect::LoadBuffer(this_00);
      puVar6 = *(undefined4 **)(this_00 + 0x28);
    }
    uVar5 = *puVar6;
  }
  else {
    (**(code **)(*(long *)pSVar4 + 8))();
    this_00 = *(SoundEffect **)(this + 0x28);
    uVar9 = *(undefined4 *)(this + 0x30);
    if (this_00 != (SoundEffect *)0x0) goto LAB_00583b78;
LAB_00583bac:
    uVar5 = 0;
  }
  alSourcei(uVar9,0x1009,uVar5);
  FUN_00666bb8(local_48,"alSourcei",auStack_50);
  alGetError();
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
LAB_00583bec:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


