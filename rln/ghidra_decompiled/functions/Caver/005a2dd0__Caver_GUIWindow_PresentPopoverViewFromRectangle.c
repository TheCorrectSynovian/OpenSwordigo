/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a2dd0
 * Function: Caver::GUIWindow::PresentPopoverViewFromRectangle
 * Signature: undefined __thiscall PresentPopoverViewFromRectangle(GUIWindow * this, shared_ptr * param_1, Rectangle * param_2, uint param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::PresentPopoverViewFromRectangle(boost::shared_ptr<Caver::GUIView> const&,
   Caver::Rectangle const&, unsigned int) */

void __thiscall
Caver::GUIWindow::PresentPopoverViewFromRectangle
          (GUIWindow *this,shared_ptr *param_1,Rectangle *param_2,uint param_3)

{
  long lVar1;
  long *plVar2;
  GUIPopoverView *pGVar3;
  void *pvVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  GUIPopoverView *local_68;
  long *local_60;
  GUIPopoverView *local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005a2e00 to 006a2e27 has its CatchHandler @ 005a2e94 */
  pGVar3 = operator_new(0x150);
  GUIPopoverView::GUIPopoverView(pGVar3);
  boost::shared_ptr<Caver::GUIPopoverView>::shared_ptr<Caver::GUIPopoverView>
            ((shared_ptr<Caver::GUIPopoverView> *)&local_58,pGVar3);
  pcVar6 = *(code **)(*(long *)this + 0x60);
                    /* try { // try from 005a2e2c to 006a2e2f has its CatchHandler @ 005a2ea8 */
  local_68 = local_58;
  local_60 = local_50;
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  (*pcVar6)(this,&local_68);
  plVar2 = local_60;
                    /* try { // try from 005a2e50 to 006a2e77 has its CatchHandler @ 005a2e8c */
  if ((local_60 != (long *)0x0) && (lVar7 = local_60[1], local_60[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar7 = plVar2[2];
                    /* try { // try from 005a2e78 to 006a2e9b has its CatchHandler @ 005a2db4 */
    plVar2[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
                    /* catch() { ... } // from try @ 005a2e50 with catch @ 005a2e8c */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
                    /* catch() { ... } // from try @ 005a2e00 with catch @ 005a2e94 */
  pGVar3 = local_58;
                    /* try { // try from 005a2e9c to 006a2efb has its CatchHandler @ 005a2f04 */
  pvVar4 = operator_new(0x18);
  *(GUIPopoverView **)((long)pvVar4 + 0x10) = pGVar3;
                    /* catch() { ... } // from try @ 005a2e2c with catch @ 005a2ea8 */
  FUN_0062a9ac(pvVar4,this + 0x1b0);
  GUIPopoverView::SetPopoverContentView(local_58,param_1);
  GUIPopoverView::PresentFromRectangle(local_58,param_2,param_3);
  uVar5 = GUIView::FindAndSetSubviewFirstResponder(*(GUIView **)param_1);
  if ((uVar5 & 1) == 0) {
    (**(code **)(*(long *)local_58 + 200))();
  }
  if ((local_50 != (long *)0x0) && (lVar7 = local_50[1], local_50[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
                    /* try { // try from 005a2efc to 006a2f07 has its CatchHandler @ 005a2db4 */
                    /* catch() { ... } // from try @ 005a2e9c with catch @ 005a2f04 */
                    /* catch() { ... } // from try @ 005a2f1c with catch @ 005a2f08 */
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar7 = local_50[2];
    local_50[2] = lVar7 + -1;
                    /* try { // try from 005a2f18 to 006a2f1b has its CatchHandler @ 005a2f2c */
    if (lVar7 + -1 == 0) {
                    /* try { // try from 005a2f1c to 006a2f3f has its CatchHandler @ 005a2f08 */
      (**(code **)(*local_50 + 0x18))(local_50);
    }
  }
                    /* catch() { ... } // from try @ 005a2f18 with catch @ 005a2f2c */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


