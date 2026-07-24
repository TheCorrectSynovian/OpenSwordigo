/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003354e4
 * Function: Caver::ShadowComponent::Prepare
 * Signature: undefined __thiscall Prepare(ShadowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShadowComponent::Prepare() */

void __thiscall Caver::ShadowComponent::Prepare(ShadowComponent *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  string *psVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_58 [8];
  long local_50;
  long *local_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  *(undefined4 *)(this + 0xa8) = 0x43160000;
  lVar4 = SceneObject::ComponentWithInterface
                    (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e7860);
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  plVar5 = *(long **)(this + 0x70);
  *(long *)(this + 0x70) = lVar4;
  if ((plVar5 != (long *)0x0) &&
     (iVar8 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  psVar6 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_50,"shadow",auStack_58);
  TextureLibrary::TextureForName(psVar6,SUB81(&local_50,0));
  if (local_48 != (long *)0x0) {
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
  }
  plVar5 = *(long **)(this + 0xd8);
  *(long **)(this + 0xd8) = local_48;
  if ((plVar5 != (long *)0x0) &&
     (iVar8 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  if ((local_48 != (long *)0x0) &&
     (iVar8 = (int)local_48[1] + -1, *(int *)(local_48 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*local_48 + 8))();
  }
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
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


