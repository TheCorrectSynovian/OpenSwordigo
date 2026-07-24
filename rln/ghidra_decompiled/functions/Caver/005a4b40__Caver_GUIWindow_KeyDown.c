/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a4b40
 * Function: Caver::GUIWindow::KeyDown
 * Signature: undefined __thiscall KeyDown(GUIWindow * this, uint param_1, uint param_2, double param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::KeyDown(unsigned int, unsigned int, double) */

void __thiscall Caver::GUIWindow::KeyDown(GUIWindow *this,uint param_1,uint param_2,double param_3)

{
  GUIWindow *pGVar1;
  long lVar2;
  GUIWindow *pGVar3;
  long *plVar4;
  GUIWindow *pGVar5;
  void *pvVar6;
  bool bVar7;
  GUIWindow *pGVar8;
  double local_70;
  uint local_68;
  undefined4 uStack_64;
  uint local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 005a4c04 with catch @ 005a4b94
                       catch() { ... } // from try @ 005a4c20 with catch @ 005a4b94 */
  if (((*(GUIWindow **)(this + 0x1c0) != this + 0x1c0) &&
      (plVar4 = *(long **)(*(long *)(this + 0x1c8) + 0x10),
      *(float *)((long)plVar4 + 0x1fc) <= DAT_00683734)) && ((char)plVar4[0x3f] == '\0')) {
    (**(code **)(*plVar4 + 0x150))(param_3,plVar4,param_1,param_2);
    goto LAB_005a4cac;
  }
  plVar4 = *(long **)(this + 0x110);
  if (plVar4 == (long *)0x0) goto LAB_005a4cac;
  pGVar1 = this + 0x128;
  pGVar3 = *(GUIWindow **)(this + 0x130);
  pGVar8 = pGVar1;
  if (*(GUIWindow **)(this + 0x130) == (GUIWindow *)0x0) {
LAB_005a4bf8:
    if (pGVar8 != *(GUIWindow **)(this + 0x138)) {
                    /* try { // try from 005a4c04 to 006a4c17 has its CatchHandler @ 005a4b94 */
      pGVar5 = (GUIWindow *)FUN_0064c700(pGVar8);
      goto LAB_005a4c0c;
    }
LAB_005a4c18:
                    /* try { // try from 005a4c18 to 006a4c1f has its CatchHandler @ 005a4c28 */
    if (pGVar8 != (GUIWindow *)0x0) {
                    /* try { // try from 005a4c20 to 006a4c2b has its CatchHandler @ 005a4b94 */
      if (pGVar1 == pGVar8) {
        bVar7 = true;
      }
      else {
                    /* catch() { ... } // from try @ 005a4c18 with catch @ 005a4c28 */
                    /* catch() { ... } // from try @ 005a4cc0 with catch @ 005a4c2c */
        bVar7 = param_1 < *(uint *)(pGVar8 + 0x20);
      }
      pvVar6 = operator_new(0x28);
      *(uint *)((long)pvVar6 + 0x20) = param_1;
                    /* try { // try from 005a4c74 to 006a4c9b has its CatchHandler @ 005a4cb4 */
      FUN_0064c8a0(bVar7,pvVar6,pGVar8,pGVar1);
      plVar4 = *(long **)(this + 0x110);
      *(long *)(this + 0x148) = *(long *)(this + 0x148) + 1;
    }
  }
  else {
    do {
      pGVar5 = pGVar3;
      pGVar8 = pGVar5 + 0x10;
      if (*(uint *)(pGVar5 + 0x20) <= param_1) {
        pGVar8 = pGVar5 + 0x18;
      }
                    /* try { // try from 005a4bdc to 006a4c03 has its CatchHandler @ 005a4c14 */
      pGVar3 = *(GUIWindow **)pGVar8;
    } while (*(GUIWindow **)pGVar8 != (GUIWindow *)0x0);
    pGVar8 = pGVar5;
    if (param_1 < *(uint *)(pGVar5 + 0x20)) goto LAB_005a4bf8;
LAB_005a4c0c:
                    /* catch() { ... } // from try @ 005a4bdc with catch @ 005a4c14 */
    if (*(uint *)(pGVar5 + 0x20) < param_1) goto LAB_005a4c18;
  }
                    /* try { // try from 005a4c9c to 006a4ca3 has its CatchHandler @ 005a4cc8 */
  uStack_64 = 1;
  local_70 = param_3;
  local_68 = param_2;
  local_60 = param_1;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_70);
LAB_005a4cac:
                    /* catch() { ... } // from try @ 005a4c74 with catch @ 005a4cb4 */
                    /* try { // try from 005a4cb8 to 006a4cbf has its CatchHandler @ 005a4cc4 */
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005a4cc0 to 006a4cdb has its CatchHandler @ 005a4c2c */
                    /* catch() { ... } // from try @ 005a4cb8 with catch @ 005a4cc4 */
                    /* catch() { ... } // from try @ 005a4c9c with catch @ 005a4cc8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 005a4d8c with catch @ 005a4cdc */
  __stack_chk_fail();
}


