/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a04f4
 * Function: Caver::GUIView::DragAndDropItemWithTouch
 * Signature: undefined __thiscall DragAndDropItemWithTouch(GUIView * this, FWTouch * param_1, shared_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::DragAndDropItemWithTouch(Caver::FWTouch const&,
   boost::shared_ptr<Caver::GUIDraggableItem> const&) */

void __thiscall
Caver::GUIView::DragAndDropItemWithTouch(GUIView *this,FWTouch *param_1,shared_ptr *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0xf0))();
                    /* catch() { ... } // from try @ 0059ff60 with catch @ 005a051c */
                    /* catch() { ... } // from try @ 0059fb7c with catch @ 005a0520 */
                    /* catch() { ... } // from try @ 0059fb98 with catch @ 005a0524
                       catch() { ... } // from try @ 0059fc8c with catch @ 005a0524 */
                    /* catch() { ... } // from try @ 0059fca8 with catch @ 005a0528
                       catch() { ... } // from try @ 0059fe84 with catch @ 005a0528
                       catch() { ... } // from try @ 0059ff50 with catch @ 005a0528
                       catch() { ... } // from try @ 0059ffdc with catch @ 005a0528 */
                    /* WARNING: Could not recover jumptable at 0x005a052c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 0059fbcc with catch @ 005a052c */
  (**(code **)(*plVar1 + 0x98))(plVar1,param_1,param_2);
  return;
}


