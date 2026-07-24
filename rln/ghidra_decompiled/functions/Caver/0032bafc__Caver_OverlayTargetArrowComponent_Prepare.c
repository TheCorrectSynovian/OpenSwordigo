/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032bafc
 * Function: Caver::OverlayTargetArrowComponent::Prepare
 * Signature: undefined __thiscall Prepare(OverlayTargetArrowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayTargetArrowComponent::Prepare() */

void __thiscall Caver::OverlayTargetArrowComponent::Prepare(OverlayTargetArrowComponent *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  string *psVar4;
  Sprite *pSVar5;
  long *plVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined4 local_68 [2];
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  SceneObject::SetAlwaysActive(*(SceneObject **)(this + 0x28),true);
  psVar4 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_50,&DAT_0068432c,local_68);
  TextureLibrary::TextureForName(psVar4,SUB81(&local_50,0));
  if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_50 + -8);
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
      operator_delete((undefined *)(local_50 + -0x18));
    }
  }
  uVar10 = *(undefined8 *)((long)local_40 + 0x54);
  pSVar5 = operator_new(0x58);
  *(undefined4 *)(pSVar5 + 0x30) = 0;
  pSVar5[0x50] = (Sprite)0x0;
  *(undefined8 *)(pSVar5 + 0x18) = 0;
  *(undefined8 *)(pSVar5 + 0x10) = 0;
  *(undefined8 *)(pSVar5 + 0x28) = 0;
  *(undefined8 *)(pSVar5 + 0x20) = 0;
  *(undefined8 *)(pSVar5 + 8) = 0;
  *(undefined8 *)pSVar5 = 0;
  *(undefined8 *)(pSVar5 + 0x48) = 0;
  *(undefined8 *)(pSVar5 + 0x40) = 0;
  *(undefined8 *)(pSVar5 + 0x38) = 0;
  plVar9 = *(long **)(this + 0xa0);
  *(Sprite **)(this + 0xa0) = pSVar5;
  if (plVar9 != (long *)0x0) {
    if ((void *)plVar9[7] != (void *)0x0) {
      operator_delete__((void *)plVar9[7]);
    }
    if ((void *)plVar9[4] != (void *)0x0) {
      operator_delete__((void *)plVar9[4]);
    }
    plVar6 = (long *)*plVar9;
    if ((plVar6 != (long *)0x0) &&
       (iVar8 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar8, iVar8 == 0)) {
      (**(code **)(*plVar6 + 8))();
    }
    operator_delete(plVar9);
    pSVar5 = *(Sprite **)(this + 0xa0);
  }
  Sprite::Init(pSVar5,(intrusive_ptr *)&local_40,2,4,false);
  pSVar5 = *(Sprite **)(this + 0xa0);
  local_60 = CONCAT44((float)((ulong)uVar10 >> 0x20) * -0.5,(float)uVar10 * -0.5);
  Vector2::Rounded();
  local_50 = local_58;
  local_68[0] = 0xffffffff;
  local_48 = uVar10;
  Sprite::AddRectangle
            (pSVar5,(Rectangle *)&local_50,(Rectangle *)((long)local_40 + 0x5c),(Color *)local_68);
  if ((local_40 != (long *)0x0) &&
     (iVar8 = (int)local_40[1] + -1, *(int *)(local_40 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*local_40 + 8))();
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


