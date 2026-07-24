/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059f4c0
 * Function: Caver::GUIView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(GUIView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::LayoutSubviews() */

void __thiscall Caver::GUIView::LayoutSubviews(GUIView *this)

{
  GUIView *pGVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  GUIView *pGVar7;
  GUIView *pGVar8;
  GUIView *pGVar9;
  GUIView *pGVar10;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
                    /* catch() { ... } // from try @ 0059f028 with catch @ 0059f4d8 */
                    /* catch() { ... } // from try @ 0059eff8 with catch @ 0059f4dc */
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  pGVar9 = this + 0x20;
  pGVar10 = *(GUIView **)pGVar9;
  if (pGVar9 != pGVar10) {
    do {
      plVar6 = *(long **)(pGVar10 + 0x10);
      uVar2 = *(uint *)(plVar6 + 0xe);
      pGVar1 = (GUIView *)((long)plVar6 + 0x74);
      pGVar7 = (GUIView *)((long)plVar6 + 0x7c);
      if ((uVar2 & 2) != 0) {
        pGVar1 = this + 0x84;
        pGVar7 = this + 0x8c;
      }
      uVar3 = *(undefined4 *)pGVar7;
      pGVar7 = this + 0x90;
      pGVar8 = this + 0x88;
      if ((uVar2 >> 4 & 1) == 0) {
        if ((uVar2 >> 1 & 1) != 0) {
                    /* catch() { ... } // from try @ 0059efe4 with catch @ 0059f534 */
                    /* catch() { ... } // from try @ 0059ef68 with catch @ 0059f538 */
          pGVar7 = (GUIView *)(plVar6 + 0x10);
          pGVar8 = (GUIView *)(plVar6 + 0xf);
          goto LAB_0059f558;
        }
      }
      else {
LAB_0059f558:
        uVar4 = *(undefined4 *)pGVar8;
        uStack_5c = *(undefined4 *)pGVar7;
        *(undefined4 *)((long)plVar6 + 0x74) = *(undefined4 *)pGVar1;
        *(undefined4 *)(plVar6 + 0xf) = uVar4;
        *(undefined4 *)((long)plVar6 + 0x7c) = uVar3;
        *(undefined4 *)(plVar6 + 0x10) = uStack_5c;
        local_68 = *(undefined8 *)((long)plVar6 + 0x84);
        local_60 = uVar3;
                    /* try { // try from 0059f584 to 0069f76f has its CatchHandler @ 0059edcc */
                    /* catch() { ... } // from try @ 0059ee34 with catch @ 0059f588 */
        (**(code **)(*plVar6 + 0xf8))(plVar6,&local_68);
      }
      pGVar10 = *(GUIView **)pGVar10;
                    /* catch() { ... } // from try @ 0059ee20 with catch @ 0059f590 */
    } while (pGVar9 != pGVar10);
  }
                    /* catch() { ... } // from try @ 0059ee10 with catch @ 0059f598 */
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


