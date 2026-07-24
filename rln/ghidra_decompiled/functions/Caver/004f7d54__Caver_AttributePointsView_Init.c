/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f7d54
 * Function: Caver::AttributePointsView::Init
 * Signature: undefined __thiscall Init(AttributePointsView * this, string * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AttributePointsView::Init(std::string const&, std::string const&) */

void __thiscall
Caver::AttributePointsView::Init(AttributePointsView *this,string *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  string *psVar6;
  size_t __n;
  long *plVar7;
  int *piVar8;
  GUILabel *this_00;
  long local_68;
  long local_60;
  long *local_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  this_00 = *(GUILabel **)(this + 0x118);
  __n = *(size_t *)((long)*(void **)param_2 + -0x18);
  if ((__n != *(size_t *)((long)*(void **)(this_00 + 0x100) + -0x18)) ||
     (iVar5 = memcmp(*(void **)param_2,*(void **)(this_00 + 0x100),__n), iVar5 != 0)) {
    FUN_0066a6a8(this_00 + 0x100,param_2);
    GUILabel::UpdateText(this_00);
  }
  psVar6 = (string *)TextureLibrary::sharedLibrary();
  FUN_0035a030(&local_60,"ui_attrib_",param_1);
  TextureLibrary::TextureForName(psVar6,SUB81(&local_60,0));
  if (local_58 != (long *)0x0) {
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
  }
  plVar7 = *(long **)(this + 0x170);
  *(long **)(this + 0x170) = local_58;
  if ((plVar7 != (long *)0x0) &&
     (iVar5 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar5, iVar5 == 0)) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  if ((local_58 != (long *)0x0) &&
     (iVar5 = (int)local_58[1] + -1, *(int *)(local_58 + 1) = iVar5, iVar5 == 0)) {
    (**(code **)(*local_58 + 8))();
  }
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_60 + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar8;
      *piVar8 = iVar5 + -1;
    }
    else {
      do {
        iVar5 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar5 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  psVar6 = (string *)TextureLibrary::sharedLibrary();
  FUN_0035a030(&local_68,"ui_attrib_",param_1);
  FUN_0066a528(&local_60,&local_68);
  FUN_006677d4(&local_60,&LAB_0068a10c,5);
  TextureLibrary::TextureForName(psVar6,SUB81(&local_60,0));
  if (local_58 != (long *)0x0) {
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
  }
  plVar7 = *(long **)(this + 0x178);
  *(long **)(this + 0x178) = local_58;
  if ((plVar7 != (long *)0x0) &&
     (iVar5 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar5, iVar5 == 0)) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  if ((local_58 != (long *)0x0) &&
     (iVar5 = (int)local_58[1] + -1, *(int *)(local_58 + 1) = iVar5, iVar5 == 0)) {
    (**(code **)(*local_58 + 8))();
  }
  if ((undefined *)(local_60 + -0x18) != puVar4) {
    piVar8 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar8;
      *piVar8 = iVar5 + -1;
    }
    else {
      do {
        iVar5 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar5 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  if ((undefined *)(local_68 + -0x18) != puVar4) {
    piVar8 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar8;
      *piVar8 = iVar5 + -1;
    }
    else {
      do {
        iVar5 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar5 < 1) {
      operator_delete((undefined *)(local_68 + -0x18));
    }
  }
  *(undefined4 *)(this + 0x100) = 0xc;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


