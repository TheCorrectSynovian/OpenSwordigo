/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00466570
 * Function: Caver::GuidePurchaseViewController::SetRestoreButtonEnabled
 * Signature: undefined __thiscall SetRestoreButtonEnabled(GuidePurchaseViewController * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GuidePurchaseViewController::SetRestoreButtonEnabled(bool) */

void __thiscall
Caver::GuidePurchaseViewController::SetRestoreButtonEnabled
          (GuidePurchaseViewController *this,bool param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  GUIButton *pGVar6;
  int *piVar7;
  int iVar8;
  undefined4 local_4c;
  undefined1 auStack_48 [8];
  long local_40;
  undefined4 local_34 [3];
  long local_28;
  
  lVar5 = tpidr_el0;
  local_28 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 0046658c to 005665a3 has its CatchHandler @ 004665d0 */
  if ((param_1) && (*(long *)(this + 0x80) != 0)) {
    pGVar6 = *(GUIButton **)(*(long *)(this + 0x60) + 0x150);
                    /* try { // try from 004665a4 to 005665ef has its CatchHandler @ 00466470 */
    uVar2 = *(uint *)(pGVar6 + 0x120);
    uVar1 = uVar2 & 0xfffffffd;
    *(uint *)(pGVar6 + 0x120) = uVar1;
    if (uVar1 != uVar2) {
      (**(code **)(*(long *)pGVar6 + 0x130))();
      pGVar6 = *(GUIButton **)(*(long *)(this + 0x60) + 0x150);
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0046658c with catch @ 004665d0
                        */
    local_34[0] = 0x7f7f7f7f;
    GUIButton::SetTintColor(pGVar6,local_34);
    pGVar6 = *(GUIButton **)(*(long *)(this + 0x60) + 0x150);
                    /* try { // try from 004665f0 to 005665f7 has its CatchHandler @ 00466600 */
    FUN_00666bb8(&local_40,"Restore",auStack_48);
                    /* try { // try from 004665f8 to 00566603 has its CatchHandler @ 00466470 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004665f0 with catch @ 00466600
                        */
    GUIButton::SetTitle(pGVar6,(string *)&local_40);
    if ((undefined *)(local_40 + -0x18) != PTR_DAT_007e5de8) {
      piVar7 = (int *)(local_40 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
        *piVar7 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar4) {
            *piVar7 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete((undefined *)(local_40 + -0x18));
      }
    }
  }
  else {
    pGVar6 = *(GUIButton **)(*(long *)(this + 0x60) + 0x150);
    uVar1 = *(uint *)(pGVar6 + 0x120);
    uVar2 = uVar1 | 2;
    *(uint *)(pGVar6 + 0x120) = uVar2;
    if (uVar2 != uVar1) {
      (**(code **)(*(long *)pGVar6 + 0x130))();
      pGVar6 = *(GUIButton **)(*(long *)(this + 0x60) + 0x150);
    }
    local_4c = 0x4c4c4c4c;
    GUIButton::SetTintColor(pGVar6,&local_4c);
  }
  if (*(long *)(lVar5 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


