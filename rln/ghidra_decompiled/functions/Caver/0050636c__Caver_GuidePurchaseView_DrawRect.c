/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050636c
 * Function: Caver::GuidePurchaseView::DrawRect
 * Signature: undefined __thiscall DrawRect(GuidePurchaseView * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GuidePurchaseView::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&,
   Caver::Matrix4 const&) */

void __thiscall
Caver::GuidePurchaseView::DrawRect
          (GuidePurchaseView *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  long lVar1;
  undefined4 local_50 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005063b0 to 006064b3 has its CatchHandler @ 005063b0
                       catch() { ... } // from try @ 005063b0 with catch @ 005063b0
                       catch() { ... } // from try @ 005064b8 with catch @ 005063b0
                       catch() { ... } // from try @ 0050663c with catch @ 005063b0
                       catch() { ... } // from try @ 0050682c with catch @ 005063b0 */
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
  RenderingContext::SetIdentityMatrix(param_1);
  local_50[0] = 0xa5000000;
  RenderingContext::FillRect(param_1,(Rectangle *)(this + 0x84),(Color *)local_50,0.0);
  GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


