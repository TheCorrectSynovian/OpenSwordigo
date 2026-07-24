/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00467750
 * Function: Caver::GuidePurchaseViewController::RestoreCompletion
 * Signature: undefined __cdecl RestoreCompletion(vector * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GuidePurchaseViewController::RestoreCompletion(std::vector<std::string,
   std::allocator<std::string > > const&, std::string const&) */

void Caver::GuidePurchaseViewController::RestoreCompletion(vector *param_1,string *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  void *pvVar7;
  bool bVar8;
  int iVar9;
  GUIView *pGVar10;
  string *in_x2;
  size_t __n;
  int in_w5;
  int *piVar11;
  long lVar12;
  long *plVar13;
  GUIAlertView *this;
  size_t *psVar14;
  undefined8 *puVar15;
  undefined1 auStack_98 [8];
  long local_90;
  void *local_88;
  long *local_80;
  long local_70;
  long local_68;
  
  puVar6 = PTR_DAT_007e5de8;
  lVar5 = tpidr_el0;
                    /* try { // try from 00467774 to 005677eb has its CatchHandler @ 00467774
                       catch(type#1 @ 00000000) { ... } // from try @ 00467774 with catch @ 00467774
                       catch(type#1 @ 00000000) { ... } // from try @ 00467814 with catch @ 00467774
                       catch(type#1 @ 00000000) { ... } // from try @ 004678ec with catch @ 00467774
                        */
  local_68 = *(long *)(lVar5 + 0x28);
  puVar15 = *(undefined8 **)param_2;
  puVar1 = *(undefined8 **)(param_2 + 8);
  if (puVar15 != puVar1) {
    bVar4 = false;
    do {
      FUN_00666bb8(&local_88,"compass",&local_70);
      pvVar7 = local_88;
                    /* try { // try from 00467814 to 005678c3 has its CatchHandler @ 00467774 */
      __n = *(size_t *)((long)*puVar15 + -0x18);
      psVar14 = (size_t *)((long)local_88 + -0x18);
      if (__n == *psVar14) {
        iVar9 = memcmp((void *)*puVar15,local_88,__n);
        bVar8 = iVar9 == 0;
        if (psVar14 == (size_t *)puVar6) goto LAB_0046784c;
LAB_004677ac:
        piVar11 = (int *)((long)pvVar7 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar9 = *piVar11;
          *piVar11 = iVar9 + -1;
        }
        else {
          do {
            iVar9 = *piVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (0 < iVar9) goto LAB_0046784c;
                    /* try { // try from 004677ec to 00567813 has its CatchHandler @ 004678a0 */
        operator_delete(psVar14);
        if (bVar8) goto LAB_00467850;
      }
      else {
        bVar8 = false;
        if (psVar14 != (size_t *)puVar6) goto LAB_004677ac;
LAB_0046784c:
        if (bVar8) {
LAB_00467850:
          HandlePurchaseSuccess((GuidePurchaseViewController *)param_1);
          bVar4 = true;
        }
      }
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar1);
    if (bVar4) goto LAB_00467a38;
  }
  if (*(long *)(*(long *)in_x2 + -0x18) != 0) {
    FUN_00666bb8(&local_70,0x68f6ba,&local_88);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004677ec with catch @ 004678a0
                        */
    FUN_00666bb8(&local_90,"STORE ERROR",auStack_98);
    GameInterfaceBuilder::AlertView
              ((GameInterfaceBuilder *)&local_90,in_x2,(string *)0x1,(int)&local_70,
               (string *)0xffffffff,in_w5);
                    /* try { // try from 004678c4 to 005678eb has its CatchHandler @ 004678f4 */
    if (local_80 != (long *)0x0) {
      local_80[1] = local_80[1] + 1;
    }
    plVar13 = *(long **)(param_1 + 0x78);
    *(void **)(param_1 + 0x70) = local_88;
    *(long **)(param_1 + 0x78) = local_80;
                    /* try { // try from 004678ec to 005678f7 has its CatchHandler @ 00467774 */
    if ((plVar13 != (long *)0x0) &&
       (lVar12 = plVar13[1], plVar13[1] = lVar12 + -1, lVar12 + -1 == 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004678c4 with catch @ 004678f4
                        */
      (**(code **)(*plVar13 + 0x10))(plVar13);
      lVar12 = plVar13[2];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0046798c with catch @ 00467908
                       catch(type#1 @ 00000000) { ... } // from try @ 004679b8 with catch @ 00467908
                        */
      plVar13[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
    if ((local_80 != (long *)0x0) &&
       (lVar12 = local_80[1], local_80[1] = lVar12 + -1, lVar12 + -1 == 0)) {
      (**(code **)(*local_80 + 0x10))(local_80);
      lVar12 = local_80[2];
      local_80[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
                    /* try { // try from 0046795c to 00567983 has its CatchHandler @ 0046799c */
        (**(code **)(*local_80 + 0x18))(local_80);
      }
    }
    puVar6 = PTR_DAT_007e5de8;
    if ((undefined *)(local_90 + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 00467a68 to 00567a83 has its CatchHandler @ 00467a94 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00467a48 with catch @ 00467a70
                        */
      piVar11 = (int *)(local_90 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar11;
        *piVar11 = iVar9 + -1;
      }
      else {
        do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00467a44 with catch @ 00467a78
                        */
          iVar9 = *piVar11;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
                    /* try { // try from 00467a84 to 00567a97 has its CatchHandler @ 004679c4 */
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete((undefined *)(local_90 + -0x18));
      }
    }
    this = *(GUIAlertView **)(param_1 + 0x70);
                    /* try { // try from 00467988 to 0056798b has its CatchHandler @ 004679ac */
    *(vector **)(this + 0x118) = param_1 + 0x50;
                    /* try { // try from 0046798c to 005679a3 has its CatchHandler @ 00467908 */
    pGVar10 = *(GUIView **)(param_1 + 0x18);
    if (pGVar10 == (GUIView *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0046795c with catch @ 0046799c
                        */
      (**(code **)(*(long *)param_1 + 0x18))(param_1);
                    /* try { // try from 004679a4 to 005679b7 has its CatchHandler @ 004679c0 */
      pGVar10 = *(GUIView **)(param_1 + 0x18);
    }
    plVar13 = *(long **)(param_1 + 0x20);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00467988 with catch @ 004679ac
                        */
    if (plVar13 != (long *)0x0) {
                    /* try { // try from 004679b8 to 005679c3 has its CatchHandler @ 00467908 */
      plVar13[1] = plVar13[1] + 1;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004679a4 with catch @ 004679c0
                        */
    GUIAlertView::PresentFromView(this,pGVar10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00467a84 with catch @ 004679c4
                        */
    if ((plVar13 != (long *)0x0) &&
       (lVar12 = plVar13[1], plVar13[1] = lVar12 + -1, lVar12 + -1 == 0)) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      lVar12 = plVar13[2];
      plVar13[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
    if ((undefined *)(local_70 + -0x18) != puVar6) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00467a68 with catch @ 00467a94
                        */
      piVar11 = (int *)(local_70 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar11;
        *piVar11 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar11;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete((undefined *)(local_70 + -0x18));
      }
    }
  }
                    /* try { // try from 00467a18 to 00567a3f has its CatchHandler @ 00467a60 */
  SetRestoreButtonEnabled((GuidePurchaseViewController *)param_1,true);
  lVar12 = *(long *)(param_1 + 0x60);
  *(undefined1 *)(*(long *)(lVar12 + 0x140) + 0xe4) = 0;
  *(undefined1 *)(*(long *)(lVar12 + 0x130) + 0xe4) = 0;
LAB_00467a38:
                    /* try { // try from 00467a44 to 00567a47 has its CatchHandler @ 00467a78 */
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00467a48 to 00567a4f has its CatchHandler @ 00467a70 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00467a18 with catch @ 00467a60
                        */
  return;
}


