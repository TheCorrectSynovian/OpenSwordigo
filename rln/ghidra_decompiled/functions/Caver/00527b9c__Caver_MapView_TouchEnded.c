/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00527b9c
 * Function: Caver::MapView::TouchEnded
 * Signature: undefined __thiscall TouchEnded(MapView * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::TouchEnded(Caver::FWTouch const&) */

void __thiscall Caver::MapView::TouchEnded(MapView *this,FWTouch *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  string *psVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  int *piVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined1 auStack_80 [8];
  long local_78;
  long *local_70;
  undefined8 local_68;
  long local_58;
  
                    /* try { // try from 00527bac to 00627baf has its CatchHandler @ 00527bbc */
  lVar3 = tpidr_el0;
                    /* catch() { ... } // from try @ 00527bac with catch @ 00527bbc */
  local_58 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00527bc0 to 00627bc7 has its CatchHandler @ 00527bd0 */
                    /* try { // try from 00527bc8 to 00627bd3 has its CatchHandler @ 00527b88 */
                    /* catch() { ... } // from try @ 00527bc0 with catch @ 00527bd0 */
                    /* try { // try from 00527bd4 to 00627c1b has its CatchHandler @ 00527bd4
                       catch(type#1 @ 00000000) { ... } // from try @ 00527bd4 with catch @ 00527bd4
                       catch(type#1 @ 00000000) { ... } // from try @ 00527c38 with catch @ 00527bd4
                       catch(type#1 @ 00000000) { ... } // from try @ 00527cac with catch @ 00527bd4
                        */
  if (*(long *)param_1 != *(long *)(this + 1000)) goto LAB_00527db0;
  lVar7 = *(long *)(this + 0x118);
  lVar11 = *(long *)(this + 0x120);
  *(undefined8 *)(this + 1000) = 0;
  fVar4 = DAT_00694834;
  if (lVar11 - lVar7 == 0) {
LAB_00527d28:
    plVar6 = *(long **)(this + 0xf0);
    if (plVar6 == (long *)0x0) goto LAB_00527db0;
    pcVar8 = *(code **)(*plVar6 + 0x10);
  }
  else {
    lVar13 = 0;
    uVar16 = 0;
    uVar14 = lVar11 - lVar7 >> 4;
    fVar20 = DAT_0068431c;
    do {
      uVar15 = uVar14;
      fVar17 = fVar20;
                    /* try { // try from 00527c1c to 00627c37 has its CatchHandler @ 00527ca0 */
      if (((this[0x418] == (MapView)0x0) || (*(char *)(*(long *)(lVar7 + lVar13) + 0x29) != '\0'))
         && (*(char *)(*(long *)(lVar7 + lVar13) + 0x19) != '\0')) {
        FWTouch::LocationInView(param_1,(GUIView *)this);
                    /* try { // try from 00527c38 to 00627ca3 has its CatchHandler @ 00527bd4 */
        lVar7 = *(long *)(this + 0x118);
        lVar11 = *(long *)(this + 0x120);
        uVar19 = *(undefined8 *)(**(long **)(lVar7 + lVar13) + 8);
        fVar17 = (float)uVar19 - (float)local_68;
        fVar18 = (float)((ulong)uVar19 >> 0x20) - (float)((ulong)local_68 >> 0x20);
        fVar17 = fVar17 * fVar17 + fVar18 * fVar18;
        uVar15 = uVar16;
        if (fVar4 <= fVar17 || fVar20 <= fVar17) {
          uVar15 = uVar14;
          fVar17 = fVar20;
        }
      }
      fVar20 = fVar17;
      uVar16 = uVar16 + 1;
      uVar12 = lVar11 - lVar7 >> 4;
      lVar13 = lVar13 + 0x10;
      uVar14 = uVar15;
    } while (uVar16 < uVar12);
    if (uVar12 <= uVar15) goto LAB_00527d28;
    psVar5 = (string *)AudioSystem::sharedSystem();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00527c1c with catch @ 00527ca0
                        */
                    /* try { // try from 00527ca4 to 00627cab has its CatchHandler @ 00527cb4 */
                    /* try { // try from 00527cac to 00627cb7 has its CatchHandler @ 00527bd4 */
    FUN_00666bb8(&local_78,"click",auStack_80);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00527ca4 with catch @ 00527cb4
                        */
    AudioSystem::PlaySoundEffectWithName(psVar5,1.0);
                    /* catch() { ... } // from try @ 00527cf4 with catch @ 00527cd0 */
    if ((local_70 != (long *)0x0) &&
       (iVar10 = (int)local_70[1] + -1, *(int *)(local_70 + 1) = iVar10, iVar10 == 0)) {
      (**(code **)(*local_70 + 8))();
    }
                    /* try { // try from 00527cf0 to 00627cf3 has its CatchHandler @ 00527d04 */
                    /* try { // try from 00527cf4 to 00627d17 has its CatchHandler @ 00527cd0 */
    if ((undefined *)(local_78 + -0x18) == PTR_DAT_007e5de8) {
LAB_00527d00:
                    /* catch() { ... } // from try @ 00527cf0 with catch @ 00527d04 */
      if (this[0x3f8] == (MapView)0x0) goto LAB_00527d84;
LAB_00527d08:
      if (uVar15 != *(ulong *)(this + 0x400)) goto LAB_00527d84;
      plVar6 = *(long **)(this + 0xf0);
      if (plVar6 == (long *)0x0) goto LAB_00527db0;
      pcVar8 = *(code **)(*plVar6 + 8);
    }
    else {
      piVar9 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar9;
        *piVar9 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = iVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (0 < iVar10) goto LAB_00527d00;
      operator_delete((undefined *)(local_78 + -0x18));
      if (this[0x3f8] != (MapView)0x0) goto LAB_00527d08;
LAB_00527d84:
      this[0x3f8] = (MapView)0x1;
      *(ulong *)(this + 0x400) = uVar15;
      UpdateSelectionSprite(this);
      plVar6 = *(long **)(this + 0xf0);
      if (plVar6 == (long *)0x0) goto LAB_00527db0;
      pcVar8 = *(code **)*plVar6;
    }
  }
  (*pcVar8)(plVar6,this);
LAB_00527db0:
  GUIResponder::TouchEnded((GUIResponder *)this,param_1);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


