/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059c1e8
 * Function: Caver::GUIScrollView::TouchMoved
 * Signature: undefined __thiscall TouchMoved(GUIScrollView * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIScrollView::TouchMoved(Caver::FWTouch const&) */

void __thiscall Caver::GUIScrollView::TouchMoved(GUIScrollView *this,FWTouch *param_1)

{
  long lVar1;
  float fVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 local_60;
  float local_54;
  float local_50;
  
                    /* catch() { ... } // from try @ 0059b564 with catch @ 0059c1fc */
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  if (*(long *)param_1 == *(long *)(this + 0x158)) {
    plVar3 = *(long **)(this + 0x1a0);
    if ((plVar3 == (long *)0x0) || (this[0x1b1] != (GUIScrollView)0x0)) {
      if (this[0x163] == (GUIScrollView)0x0) {
        this[0x163] = (GUIScrollView)0x1;
                    /* catch() { ... } // from try @ 0059b530 with catch @ 0059c24c */
                    /* catch() { ... } // from try @ 0059b49c with catch @ 0059c258 */
        *(undefined8 *)(this + 0x168) = 0;
        *(undefined4 *)(this + 0x164) = 0;
        *(undefined4 *)(this + 0x170) = *(undefined4 *)(this + 0x100);
        *(undefined4 *)(this + 0x174) = *(undefined4 *)(this + 300);
        FWTouch::PreviousLocationInView(param_1,(GUIView *)this);
        *(undefined8 *)(this + 0x178) = local_60;
        *(undefined4 *)(this + 0x188) = *(undefined4 *)(this + 0x100);
        *(undefined4 *)(this + 0x18c) = *(undefined4 *)(this + 300);
        if (this[0x163] == (GUIScrollView)0x0) goto LAB_0059c298;
      }
                    /* catch() { ... } // from try @ 0059b48c with catch @ 0059c290 */
                    /* catch() { ... } // from try @ 0059b47c with catch @ 0059c294 */
      DragWithTouch(this,param_1);
    }
    else {
      if (this[0x1b0] != (GUIScrollView)0x0) {
        this[0x1b1] = (GUIScrollView)0x1;
        (**(code **)(*plVar3 + 8))(plVar3,param_1);
        this[0x1b1] = (GUIScrollView)0x0;
      }
      fVar2 = DAT_006883d0;
      if (this[0x1b3] != (GUIScrollView)0x0) {
        fVar7 = 0.0;
        if (*(float *)(this + 0x8c) + DAT_006883d0 < *(float *)(this + 0xf4)) {
                    /* catch() { ... } // from try @ 0059b454 with catch @ 0059c310 */
          FWTouch::LocationInView(param_1,(GUIView *)this);
          fVar7 = ABS(local_50 - *(float *)(this + 0x1e4));
          if (fVar7 <= 0.0) {
            fVar7 = 0.0;
          }
        }
        fVar8 = fVar7;
        if (*(float *)(this + 0x90) + fVar2 < *(float *)(this + 0xf8)) {
          FWTouch::LocationInView(param_1,(GUIView *)this);
                    /* catch() { ... } // from try @ 0059b420 with catch @ 0059c360 */
          fVar8 = ABS(local_54 - *(float *)(this + 0x1e8));
          if (ABS(local_54 - *(float *)(this + 0x1e8)) <= fVar7) {
            fVar8 = fVar7;
          }
        }
                    /* catch() { ... } // from try @ 0059ae8c with catch @ 0059c378 */
        if (10.0 < fVar8) {
                    /* catch() { ... } // from try @ 0059adf0 with catch @ 0059c380 */
          if (this[0x1b0] != (GUIScrollView)0x0) {
            uVar6 = *(undefined8 *)(this + 0x158);
            *(undefined8 *)(this + 0x158) = 0;
            (**(code **)(**(long **)(this + 0x1a0) + 0x18))(*(long **)(this + 0x1a0),param_1);
            *(undefined8 *)(this + 0x158) = uVar6;
          }
          plVar3 = *(long **)(this + 0x1a8);
          *(undefined8 *)(this + 0x1a0) = 0;
          *(undefined8 *)(this + 0x1a8) = 0;
          if ((plVar3 != (long *)0x0) &&
             (lVar5 = plVar3[1], plVar3[1] = lVar5 + -1, lVar5 + -1 == 0)) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            lVar5 = plVar3[2];
            plVar3[2] = lVar5 + -1;
            if (lVar5 + -1 == 0) {
                    /* catch() { ... } // from try @ 0059b398 with catch @ 0059c3e8 */
              (**(code **)(*plVar3 + 0x18))(plVar3);
            }
          }
        }
      }
    }
  }
LAB_0059c298:
                    /* catch() { ... } // from try @ 0059b460 with catch @ 0059c2a4 */
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


