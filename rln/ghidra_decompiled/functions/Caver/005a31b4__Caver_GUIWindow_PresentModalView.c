/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a31b4
 * Function: Caver::GUIWindow::PresentModalView
 * Signature: undefined __thiscall PresentModalView(GUIWindow * this, shared_ptr * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::PresentModalView(boost::shared_ptr<Caver::GUIView> const&, bool) */

void __thiscall Caver::GUIWindow::PresentModalView(GUIWindow *this,shared_ptr *param_1,bool param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  GUIView *this_00;
  void *pvVar5;
  long lVar6;
  GUIView *pGVar7;
  undefined8 uVar8;
  GUIView *local_50;
  GUIView *local_48;
  long *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  CancelAllTouches(this);
  if (param_2) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005a32c4 with catch @ 005a31e8
                       catch(type#1 @ 00000000) { ... } // from try @ 005a33e4 with catch @ 005a31e8
                        */
    pGVar7 = *(GUIView **)param_1;
    Vector2::Rounded();
    local_40 = *(long **)(*(long *)param_1 + 0x8c);
    local_48 = local_50;
    GUIView::SetFrame(pGVar7,(Rectangle *)&local_48);
  }
  this_00 = operator_new(0x228);
  GUIView::GUIView(this_00);
  uVar8 = DAT_00697140;
  puVar1 = PTR_vtable_007e68c8 + 0x188;
  puVar2 = PTR_vtable_007e68c8 + 0x10;
                    /* try { // try from 005a3264 to 006a327b has its CatchHandler @ 005a3354 */
  *(undefined **)(this_00 + 0xf8) = PTR_vtable_007e68c8 + 0x1b8;
  *(undefined **)(this_00 + 0xf0) = puVar1;
  *(undefined **)this_00 = puVar2;
  pGVar7 = this_00 + 0x128;
  *(undefined8 *)(this_00 + 0x140) = 0;
  *(undefined8 *)(this_00 + 0x138) = 0;
  *(undefined8 *)(this_00 + 0x130) = 0;
  *(undefined8 *)pGVar7 = 0;
  *(GUIView **)(this_00 + 0x138) = pGVar7;
  *(GUIView **)(this_00 + 0x140) = pGVar7;
  *(undefined8 *)(this_00 + 0x148) = 0;
  pGVar7 = this_00 + 0x188;
  *(undefined8 *)(this_00 + 0x168) = 0;
  *(undefined8 *)(this_00 + 0x160) = 0;
  *(undefined8 *)(this_00 + 0x178) = 0;
  *(undefined8 *)(this_00 + 0x170) = 0;
  *(GUIView **)(this_00 + 0x168) = this_00 + 0x158;
  *(GUIView **)(this_00 + 0x170) = this_00 + 0x158;
                    /* try { // try from 005a329c to 006a32c3 has its CatchHandler @ 005a3348 */
  *(undefined8 *)(this_00 + 0x108) = 0;
  *(undefined8 *)(this_00 + 0x100) = 0;
  *(undefined8 *)(this_00 + 0x118) = 0;
  *(undefined8 *)(this_00 + 0x110) = 0;
  *(undefined8 *)(this_00 + 0x158) = 0;
  *(undefined8 *)(this_00 + 0x1a0) = 0;
  *(undefined8 *)(this_00 + 0x198) = 0;
  *(undefined8 *)(this_00 + 400) = 0;
  *(undefined8 *)pGVar7 = 0;
  *(GUIView **)(this_00 + 0x198) = pGVar7;
  *(GUIView **)(this_00 + 0x1a0) = pGVar7;
  *(GUIView **)(this_00 + 0x1b0) = this_00 + 0x1b0;
  *(GUIView **)(this_00 + 0x1b8) = this_00 + 0x1b0;
  *(GUIView **)(this_00 + 0x1c0) = this_00 + 0x1c0;
  *(GUIView **)(this_00 + 0x1c8) = this_00 + 0x1c0;
                    /* try { // try from 005a32c4 to 006a3377 has its CatchHandler @ 005a31e8 */
  *(undefined8 *)(this_00 + 0x1d8) = uVar8;
  *(undefined8 *)(this_00 + 0x1a8) = 0;
  *(undefined8 *)(this_00 + 0x1d0) = 0;
  *(undefined8 *)(this_00 + 0x1fc) = 0;
  *(undefined8 *)(this_00 + 0x1f0) = 0;
  *(undefined8 *)(this_00 + 0x1e8) = 0;
  this_00[0x1f8] = (GUIView)0x0;
  *(undefined8 *)(this_00 + 0x218) = 0;
  *(undefined8 *)(this_00 + 0x210) = 0;
  *(undefined8 *)(this_00 + 0x208) = 0;
  this_00[0x220] = (GUIView)0x1;
  boost::shared_ptr<Caver::GUIWindow>::shared_ptr<Caver::GUIWindow>
            ((shared_ptr<Caver::GUIWindow> *)&local_48,(GUIWindow *)this_00);
  *(GUIWindow **)(local_48 + 0x1d0) = this;
  uVar8 = *(undefined8 *)(this + 0x30);
  *(undefined8 *)(local_48 + 0x38) = *(undefined8 *)(this + 0x38);
  *(undefined8 *)(local_48 + 0x30) = uVar8;
  uVar8 = *(undefined8 *)(this + 0x40);
  *(undefined8 *)(local_48 + 0x48) = *(undefined8 *)(this + 0x48);
  *(undefined8 *)(local_48 + 0x40) = uVar8;
  GUIView::SetFrame(local_48,(Rectangle *)(this + 0x84));
  (**(code **)(*(long *)local_48 + 0x60))(local_48,param_1);
  pvVar5 = operator_new(0x20);
  *(GUIView **)((long)pvVar5 + 0x10) = local_48;
  *(long **)((long)pvVar5 + 0x18) = local_40;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005a329c with catch @ 005a3348
                        */
  if (local_40 != (long *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005a3264 with catch @ 005a3354
                        */
    local_40[1] = local_40[1] + 1;
  }
  FUN_0062a9ac(pvVar5,this + 0x1c0);
  plVar4 = local_40;
  if ((local_40 != (long *)0x0) && (lVar6 = local_40[1], local_40[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
                    /* try { // try from 005a3378 to 006a33e3 has its CatchHandler @ 005a33ec */
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar6 = plVar4[2];
    plVar4[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


