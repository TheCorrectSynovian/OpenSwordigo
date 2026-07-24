/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a03b8
 * Function: Caver::GUIView::PresentPopoverViewFromRectangle
 * Signature: undefined __thiscall PresentPopoverViewFromRectangle(GUIView * this, shared_ptr * param_1, Rectangle * param_2, uint param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::PresentPopoverViewFromRectangle(boost::shared_ptr<Caver::GUIView> const&,
   Caver::Rectangle const&, unsigned int) */

void __thiscall
Caver::GUIView::PresentPopoverViewFromRectangle
          (GUIView *this,shared_ptr *param_1,Rectangle *param_2,uint param_3)

{
  long lVar1;
  GUIWindow *this_00;
  long *plVar2;
  GUIView *pGVar3;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this_00 = (GUIWindow *)(**(code **)(*(long *)this + 0xf0))();
  local_60 = *(undefined4 *)param_2;
  uStack_5c = *(undefined4 *)(param_2 + 4);
                    /* catch() { ... } // from try @ 0059fe20 with catch @ 005a0400 */
                    /* catch() { ... } // from try @ 0059fe0c with catch @ 005a0404 */
  pGVar3 = this + 0x58;
  plVar2 = *(long **)pGVar3;
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x108))(&local_70,plVar2,&local_60,this);
    this = *(GUIView **)pGVar3;
    pGVar3 = this + 0x58;
    local_60 = local_70;
    uStack_5c = uStack_6c;
    plVar2 = *(long **)pGVar3;
  }
  local_68 = *(undefined8 *)(param_2 + 8);
  local_70 = local_60;
  uStack_6c = uStack_5c;
  GUIWindow::PresentPopoverViewFromRectangle(this_00,param_1,(Rectangle *)&local_70,param_3);
                    /* catch() { ... } // from try @ 0059fdf8 with catch @ 005a0468 */
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


