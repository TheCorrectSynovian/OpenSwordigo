/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00471414
 * Function: Caver::PortalViewController::GuideToggleViewEnableStateChanged
 * Signature: undefined __thiscall GuideToggleViewEnableStateChanged(PortalViewController * this, GuideToggleView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView*) */

void __thiscall
Caver::PortalViewController::GuideToggleViewEnableStateChanged
          (PortalViewController *this,GuideToggleView *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  StoreController *this_00;
  ulong uVar4;
  long *plVar5;
  GUISwitch *this_01;
  long lVar6;
  StoreViewController *this_02;
  code *pcVar7;
  int *piVar8;
  int iVar9;
  long local_60;
  long *local_58;
  long local_50;
  long *local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
                    /* try { // try from 00471420 to 00571437 has its CatchHandler @ 00471614 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*(char *)(*(long *)(param_1 + 0x108) + 0x148) != '\0') {
    this_00 = (StoreController *)StoreController::SharedController();
    uVar4 = StoreController::IsGuideUnlockedCheck(this_00);
    if ((uVar4 & 1) == 0) {
      this_01 = *(GUISwitch **)(param_1 + 0x108);
      this_01[0x148] = (GUISwitch)0x0;
      GUISwitch::UpdateFrameTexture(this_01);
      lVar6 = StoreController::SharedController();
      FUN_00666bb8(&local_50,"Portal",auStack_40);
      FUN_0066a6a8(lVar6 + 8,&local_50);
      if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
        piVar8 = (int *)(local_50 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar9 = *piVar8;
          *piVar8 = iVar9 + -1;
        }
        else {
          do {
            iVar9 = *piVar8;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar2) {
              *piVar8 = iVar9 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar9 < 1) {
          operator_delete((undefined *)(local_50 + -0x18));
                    /* catch() { ... } // from try @ 00471420 with catch @ 00471614 */
        }
      }
      this_02 = operator_new(0xd8);
      StoreViewController::StoreViewController(this_02);
      boost::shared_ptr<Caver::StoreViewController>::shared_ptr<Caver::StoreViewController>
                ((shared_ptr<Caver::StoreViewController> *)&local_50,this_02);
      *(PortalViewController **)(local_50 + 0x50) = this + 0x60;
      pcVar7 = *(code **)(*(long *)this + 0x50);
      local_60 = local_50;
      local_58 = local_48;
      if (local_48 != (long *)0x0) {
        local_48[1] = local_48[1] + 1;
      }
      (*pcVar7)(this,&local_60);
      plVar5 = local_58;
      if ((local_58 != (long *)0x0) &&
         (lVar6 = local_58[1], local_58[1] = lVar6 + -1, lVar6 + -1 == 0)) {
        (**(code **)(*local_58 + 0x10))(local_58);
        lVar6 = plVar5[2];
        plVar5[2] = lVar6 + -1;
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      if ((local_48 != (long *)0x0) &&
         (lVar6 = local_48[1], local_48[1] = lVar6 + -1, lVar6 + -1 == 0)) {
        (**(code **)(*local_48 + 0x10))(local_48);
        lVar6 = local_48[2];
        local_48[2] = lVar6 + -1;
        if (lVar6 + -1 == 0) {
          (**(code **)(*local_48 + 0x18))(local_48);
        }
      }
      goto LAB_00471480;
    }
  }
  plVar5 = *(long **)(this + 0x68);
                    /* try { // try from 00471458 to 0057145b has its CatchHandler @ 00471654 */
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 0047145c to 00571637 has its CatchHandler @ 00471378 */
    (**(code **)(*plVar5 + 8))(plVar5,this,*(undefined1 *)(*(long *)(param_1 + 0x108) + 0x148));
  }
  MapView::UpdateTargetPath(*(MapView **)(*(long *)(this + 0x80) + 0x110));
LAB_00471480:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


