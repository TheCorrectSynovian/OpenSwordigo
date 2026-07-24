/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00465df0
 * Function: Caver::GuidePurchaseViewController::ProductRequestCompletion
 * Signature: undefined __cdecl ProductRequestCompletion(string * param_1, shared_ptr * param_2, string * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GuidePurchaseViewController::ProductRequestCompletion(std::string const&,
   boost::shared_ptr<Caver::StoreProduct> const&, std::string const&) */

void Caver::GuidePurchaseViewController::ProductRequestCompletion
               (string *param_1,shared_ptr *param_2,string *param_3)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  GUIView *pGVar6;
  string *in_x3;
  int in_w5;
  long lVar7;
  int *piVar8;
  int iVar9;
  long *plVar10;
  GUIAlertView *this;
  undefined1 auStack_78 [8];
  long local_70;
  undefined8 local_68;
  long *local_60;
  long local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar1 = *(undefined8 *)param_3;
  lVar7 = *(long *)(param_3 + 8);
  if (lVar7 != 0) {
    *(long *)(lVar7 + 8) = *(long *)(lVar7 + 8) + 1;
  }
  plVar10 = *(long **)(param_1 + 0x88);
                    /* catch() { ... } // from try @ 00465da4 with catch @ 00465e34 */
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  *(long *)(param_1 + 0x88) = lVar7;
  if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar7 = plVar10[2];
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
      lVar7 = *(long *)(param_1 + 0x80);
      goto joined_r0x00465e98;
    }
  }
  lVar7 = *(long *)(param_1 + 0x80);
joined_r0x00465e98:
  if (lVar7 == 0) {
                    /* catch() { ... } // from try @ 00465d8c with catch @ 00465ea4 */
                    /* catch() { ... } // from try @ 00466000 with catch @ 00465ea8
                       catch() { ... } // from try @ 00466050 with catch @ 00465ea8
                       catch() { ... } // from try @ 00466084 with catch @ 00465ea8 */
    FUN_00666bb8(&local_50,0x68f6ba,&local_68);
    FUN_00666bb8(&local_70,"STORE ERROR",auStack_78);
    GameInterfaceBuilder::AlertView
              ((GameInterfaceBuilder *)&local_70,in_x3,(string *)0x1,(int)&local_50,
               (string *)0xffffffff,in_w5);
    if (local_60 != (long *)0x0) {
      local_60[1] = local_60[1] + 1;
    }
    plVar10 = *(long **)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x70) = local_68;
    *(long **)(param_1 + 0x78) = local_60;
    if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0))
    {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar7 = plVar10[2];
      plVar10[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    if ((local_60 != (long *)0x0) &&
       (lVar7 = local_60[1], local_60[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*local_60 + 0x10))(local_60);
      lVar7 = local_60[2];
      local_60[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*local_60 + 0x18))(local_60);
      }
    }
    puVar5 = PTR_DAT_007e5de8;
    if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 0046607c to 00566083 has its CatchHandler @ 0046608c */
      piVar8 = (int *)(local_70 + -8);
                    /* try { // try from 00466084 to 0056608f has its CatchHandler @ 00465ea8 */
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
                    /* catch() { ... } // from try @ 0046607c with catch @ 0046608c */
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete((undefined *)(local_70 + -0x18));
      }
    }
    this = *(GUIAlertView **)(param_1 + 0x70);
    *(string **)(this + 0x118) = param_1 + 0x50;
    pGVar6 = *(GUIView **)(param_1 + 0x18);
    if (pGVar6 == (GUIView *)0x0) {
      (**(code **)(*(long *)param_1 + 0x18))(param_1);
      pGVar6 = *(GUIView **)(param_1 + 0x18);
    }
    plVar10 = *(long **)(param_1 + 0x20);
    if (plVar10 != (long *)0x0) {
      plVar10[1] = plVar10[1] + 1;
    }
    GUIAlertView::PresentFromView(this,pGVar6);
    if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0))
    {
                    /* try { // try from 00465ff8 to 00565fff has its CatchHandler @ 00466058 */
                    /* try { // try from 00466000 to 00566047 has its CatchHandler @ 00465ea8 */
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar7 = plVar10[2];
      plVar10[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    lVar7 = *(long *)(param_1 + 0x60);
    *(undefined1 *)(*(long *)(lVar7 + 0x140) + 0xe4) = 0;
    *(undefined1 *)(*(long *)(lVar7 + 0x130) + 0xe4) = 1;
                    /* try { // try from 00466048 to 0056604f has its CatchHandler @ 00466058 */
    if ((undefined *)(local_50 + -0x18) != puVar5) {
      piVar8 = (int *)(local_50 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete((undefined *)(local_50 + -0x18));
      }
    }
  }
  else {
    SetBuyButtonEnabled((GuidePurchaseViewController *)param_1,true);
  }
                    /* try { // try from 00466050 to 0056607b has its CatchHandler @ 00465ea8 */
                    /* catch() { ... } // from try @ 00465ff8 with catch @ 00466058
                       catch() { ... } // from try @ 00466048 with catch @ 00466058 */
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


