/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005435b8
 * Function: Caver::TabView::TouchBegan
 * Signature: undefined __thiscall TouchBegan(TabView * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::TabView::TouchBegan(Caver::FWTouch const&) */

void __thiscall Caver::TabView::TouchBegan(TabView *this,FWTouch *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  int iVar5;
  long lVar6;
  string *psVar7;
  undefined8 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_a0 [8];
  long local_98;
  long *local_90;
  float local_84;
  long local_78;
  
  fVar4 = _DAT_006884d0;
                    /* catch() { ... } // from try @ 005431c4 with catch @ 005435bc */
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if (0 < *(int *)(this + 0x210)) {
                    /* try { // try from 00543604 to 006437c3 has its CatchHandler @ 00542f7c */
                    /* catch() { ... } // from try @ 00543528 with catch @ 00543608 */
                    /* catch() { ... } // from try @ 00543188 with catch @ 0054360c */
    iVar11 = 0;
    iVar10 = -1;
    fVar14 = DAT_0068431c;
    do {
      FWTouch::LocationInView(param_1,(GUIView *)this);
      fVar13 = local_84;
      lVar6 = GUIWindow::mainWindow();
                    /* catch() { ... } // from try @ 00543174 with catch @ 00543644 */
                    /* catch() { ... } // from try @ 00543154 with catch @ 00543648 */
      fVar12 = 10.0;
      if (*(float *)(lVar6 + 0x90) < fVar4) {
        fVar12 = 6.0;
      }
      fVar13 = ABS(fVar13 - (*(float *)(*(long *)(this + 0xf8) + 0x58) * 0.5 +
                            (*(float *)(*(long *)(this + 0xf8) + 0x58) + fVar12) * (float)iVar11));
      iVar5 = iVar11;
      if (fVar14 <= fVar13) {
        fVar13 = fVar14;
        iVar5 = iVar10;
      }
      iVar10 = iVar5;
      fVar14 = fVar13;
      iVar11 = iVar11 + 1;
                    /* catch() { ... } // from try @ 00543140 with catch @ 00543680 */
    } while (iVar11 < *(int *)(this + 0x210));
                    /* catch() { ... } // from try @ 00543120 with catch @ 00543684 */
    if ((-1 < iVar10) && (iVar10 != *(int *)(this + 0x208))) {
      psVar7 = (string *)AudioSystem::sharedSystem();
      FUN_00666bb8(&local_98,"click",auStack_a0);
                    /* catch() { ... } // from try @ 0054310c with catch @ 005436bc */
                    /* catch() { ... } // from try @ 005430ec with catch @ 005436c0 */
      AudioSystem::PlaySoundEffectWithName(psVar7,1.0);
      if ((local_90 != (long *)0x0) &&
         (iVar11 = (int)local_90[1] + -1, *(int *)(local_90 + 1) = iVar11, iVar11 == 0)) {
        (**(code **)(*local_90 + 8))();
      }
                    /* catch() { ... } // from try @ 005430d8 with catch @ 005436f8 */
                    /* catch() { ... } // from try @ 005430b8 with catch @ 005436fc */
      if ((undefined *)(local_98 + -0x18) != PTR_DAT_007e5de8) {
        piVar9 = (int *)(local_98 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar11 = *piVar9;
          *piVar9 = iVar11 + -1;
        }
        else {
          do {
            iVar11 = *piVar9;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar2) {
              *piVar9 = iVar11 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar11 < 1) {
          operator_delete((undefined *)(local_98 + -0x18));
        }
      }
      *(int *)(this + 0x208) = iVar10;
      UpdateSprite(this);
      puVar8 = *(undefined8 **)(this + 0xf0);
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8,this);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 005430a4 with catch @ 00543734 */
                    /* catch() { ... } // from try @ 0054307c with catch @ 00543738 */
  return;
}


