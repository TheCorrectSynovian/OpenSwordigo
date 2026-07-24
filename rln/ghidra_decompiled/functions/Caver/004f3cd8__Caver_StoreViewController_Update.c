/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f3cd8
 * Function: Caver::StoreViewController::Update
 * Signature: undefined __thiscall Update(StoreViewController * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreViewController::Update(float) */

void __thiscall Caver::StoreViewController::Update(StoreViewController *this,float param_1)

{
  StoreViewController SVar1;
  StoreViewController SVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  byte bVar7;
  long *plVar8;
  undefined *puVar9;
  int *piVar10;
  long lVar11;
  int iVar12;
  StripeView *this_00;
  long lVar13;
  ulong uVar14;
  long local_68;
  long local_60;
  long local_58 [2];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  plVar8 = (long *)StoreController::SharedController();
  bVar7 = (**(code **)(*plVar8 + 0x50))();
  SVar2 = this[0xd0];
  SVar1 = (StoreViewController)(bVar7 & 1);
  this[0xd1] = SVar1;
  if ((SVar1 == this[0xd3]) && (SVar2 == this[0xd2])) goto LAB_004f3ed0;
  this[0xd2] = SVar2;
  this[0xd3] = SVar1;
  this_00 = *(StripeView **)(*(long *)(this + 0x58) + 0x110);
  if (SVar2 == (StoreViewController)0x0) {
    plVar8 = (long *)StoreController::SharedController();
    (**(code **)(*plVar8 + 0x10))(&local_68);
    FUN_0035a030(&local_60,"Connecting to ",&local_68);
    FUN_0066a528(local_58,&local_60);
    FUN_006677d4(local_58," Store...",9);
    StripeView::SetTitle(this_00,(string *)local_58);
    puVar6 = PTR_DAT_007e5de8;
    if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar10 = (int *)(local_58[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar12 = *piVar10;
        *piVar10 = iVar12 + -1;
      }
      else {
        do {
          iVar12 = *piVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar12 < 1) {
        operator_delete((undefined *)(local_58[0] + -0x18));
      }
    }
    if ((undefined *)(local_60 + -0x18) != puVar6) {
      piVar10 = (int *)(local_60 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar12 = *piVar10;
        *piVar10 = iVar12 + -1;
      }
      else {
        do {
          iVar12 = *piVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar12 < 1) {
        operator_delete((undefined *)(local_60 + -0x18));
      }
    }
    puVar9 = (undefined *)(local_68 + -0x18);
    if (puVar9 != puVar6) {
      piVar10 = (int *)(local_68 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar12 = *piVar10;
        *piVar10 = iVar12 + -1;
      }
      else {
        do {
          iVar12 = *piVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      goto joined_r0x004f3f9c;
    }
  }
  else if (SVar1 == (StoreViewController)0x0) {
    FUN_00666bb8(local_58,"Checking your purchases...",&local_68);
    StripeView::SetTitle(this_00,(string *)local_58);
    puVar9 = (undefined *)(local_58[0] + -0x18);
    if (puVar9 != PTR_DAT_007e5de8) {
      piVar10 = (int *)(local_58[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_004f3f70;
      do {
        iVar12 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto joined_r0x004f3f9c;
    }
  }
  else {
    FUN_00666bb8(local_58,&DAT_0068fbeb,&local_68);
    StripeView::SetTitle(this_00,(string *)local_58);
    puVar9 = (undefined *)(local_58[0] + -0x18);
    if (puVar9 != PTR_DAT_007e5de8) {
      piVar10 = (int *)(local_58[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_004f3f70:
        iVar12 = *piVar10;
        *piVar10 = iVar12 + -1;
      }
      else {
        do {
          iVar12 = *piVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
joined_r0x004f3f9c:
      if (iVar12 < 1) {
        operator_delete(puVar9);
      }
    }
  }
  lVar11 = *(long *)(this + 0x70);
  if (*(long *)(this + 0x78) != lVar11) {
    lVar13 = 0;
    uVar14 = 0;
    do {
      UpdateProductBuyButton(this,(string *)(lVar11 + lVar13));
      lVar11 = *(long *)(this + 0x70);
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 8;
    } while (uVar14 < (ulong)(*(long *)(this + 0x78) - lVar11 >> 3));
  }
LAB_004f3ed0:
  GUIViewController::Update(param_1);
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


