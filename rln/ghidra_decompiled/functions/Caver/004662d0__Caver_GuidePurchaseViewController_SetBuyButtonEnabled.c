/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004662d0
 * Function: Caver::GuidePurchaseViewController::SetBuyButtonEnabled
 * Signature: undefined __thiscall SetBuyButtonEnabled(GuidePurchaseViewController * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GuidePurchaseViewController::SetBuyButtonEnabled(bool) */

void __thiscall
Caver::GuidePurchaseViewController::SetBuyButtonEnabled
          (GuidePurchaseViewController *this,bool param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  GUIButton *pGVar7;
  int *piVar8;
  int iVar9;
  undefined4 local_5c;
  long local_58;
  long local_50;
  undefined4 local_44 [3];
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  if ((param_1) && (*(long *)(this + 0x80) != 0)) {
    pGVar7 = *(GUIButton **)(*(long *)(this + 0x60) + 0x130);
    uVar2 = *(uint *)(pGVar7 + 0x120);
    uVar1 = uVar2 & 0xfffffffd;
    *(uint *)(pGVar7 + 0x120) = uVar1;
    if (uVar1 != uVar2) {
      (**(code **)(*(long *)pGVar7 + 0x130))();
      pGVar7 = *(GUIButton **)(*(long *)(this + 0x60) + 0x130);
    }
    local_44[0] = 0xffffffff;
    GUIButton::SetTintColor(pGVar7,local_44);
    pGVar7 = *(GUIButton **)(*(long *)(this + 0x60) + 0x130);
    FUN_0066a528(&local_58,*(long *)(this + 0x80) + 8);
    FUN_0035a030(&local_50,&DAT_0068f698,&local_58);
    GUIButton::SetTitle(pGVar7,(string *)&local_50);
    puVar6 = PTR_DAT_007e5de8;
    if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
      piVar8 = (int *)(local_50 + -8);
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
        operator_delete((undefined *)(local_50 + -0x18));
      }
    }
    if ((undefined *)(local_58 + -0x18) != puVar6) {
      piVar8 = (int *)(local_58 + -8);
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
                    /* try { // try from 00466470 to 0056658b has its CatchHandler @ 00466470
                       catch(type#1 @ 00000000) { ... } // from try @ 00466470 with catch @ 00466470
                       catch(type#1 @ 00000000) { ... } // from try @ 004665a4 with catch @ 00466470
                       catch(type#1 @ 00000000) { ... } // from try @ 004665f8 with catch @ 00466470
                        */
        operator_delete((undefined *)(local_58 + -0x18));
      }
    }
  }
  else {
    pGVar7 = *(GUIButton **)(*(long *)(this + 0x60) + 0x130);
    uVar1 = *(uint *)(pGVar7 + 0x120);
    uVar2 = uVar1 | 2;
    *(uint *)(pGVar7 + 0x120) = uVar2;
    if (uVar2 != uVar1) {
      (**(code **)(*(long *)pGVar7 + 0x130))();
      pGVar7 = *(GUIButton **)(*(long *)(this + 0x60) + 0x130);
    }
    local_5c = 0x7f7f7f7f;
    GUIButton::SetTintColor(pGVar7,&local_5c);
  }
  GuidePurchaseView::UpdateBuyButtonSize(*(GuidePurchaseView **)(this + 0x60));
  if (*(long *)(lVar5 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


