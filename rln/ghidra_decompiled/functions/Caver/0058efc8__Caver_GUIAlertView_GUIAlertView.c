/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058efc8
 * Function: Caver::GUIAlertView::GUIAlertView
 * Signature: undefined __thiscall GUIAlertView(GUIAlertView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAlertView::GUIAlertView() */

void __thiscall Caver::GUIAlertView::GUIAlertView(GUIAlertView *this)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  GUILabel *pGVar5;
  long lVar6;
  code *pcVar7;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
                    /* try { // try from 0058efe4 to 0068f00b has its CatchHandler @ 00591514 */
  local_48 = *(long *)(lVar4 + 0x28);
  GUIFrameView::GUIFrameView((GUIFrameView *)this);
  puVar1 = PTR_vtable_007e59e8 + 0x160;
  *(undefined **)this = PTR_vtable_007e59e8 + 0x10;
  *(undefined **)(this + 0x110) = puVar1;
  memset(this + 0x118,0,0x88);
  this[0x1a4] = (GUIAlertView)0x0;
  *(undefined4 *)(this + 0x1a0) = 0xffffffff;
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
                    /* try { // try from 0058f02c to 0068f053 has its CatchHandler @ 00592708 */
  *(undefined8 *)(this + 0x1b0) = 0;
  pGVar5 = operator_new(0x150);
  GUILabel::GUILabel(pGVar5);
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
            ((shared_ptr<Caver::GUILabel> *)&local_58,pGVar5);
  uVar2 = *(undefined8 *)(this + 0x120);
  plVar3 = *(long **)(this + 0x128);
  *(undefined8 *)(this + 0x120) = local_58;
  *(long **)(this + 0x128) = local_50;
  local_58 = uVar2;
  local_50 = plVar3;
                    /* try { // try from 0058f074 to 0068f077 has its CatchHandler @ 005912a8 */
  if ((plVar3 != (long *)0x0) && (lVar6 = plVar3[1], plVar3[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar6 = plVar3[2];
    plVar3[2] = lVar6 + -1;
                    /* try { // try from 0058f098 to 0068f09b has its CatchHandler @ 005912a4 */
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  pGVar5 = *(GUILabel **)(this + 0x120);
  pGVar5[0x138] = (GUILabel)0x1;
  GUILabel::UpdateText(pGVar5);
  pGVar5 = *(GUILabel **)(this + 0x120);
  *(undefined4 *)(pGVar5 + 0x130) = 4;
  GUILabel::UpdateBounds(pGVar5);
  local_58 = *(undefined8 *)(this + 0x120);
  pcVar7 = *(code **)(*(long *)this + 0x60);
  local_50 = *(long **)(this + 0x128);
                    /* try { // try from 0058f0e4 to 0068f0f7 has its CatchHandler @ 00591ffc */
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  (*pcVar7)(this,&local_58);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) && (lVar6 = local_50[1], local_50[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
                    /* try { // try from 0058f118 to 0068f123 has its CatchHandler @ 00591204 */
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar6 = plVar3[2];
    plVar3[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
                    /* try { // try from 0058f138 to 0068f13f has its CatchHandler @ 00591ff8 */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
                    /* try { // try from 0058f14c to 0068f153 has its CatchHandler @ 00592968 */
  pGVar5 = operator_new(0x150);
  GUILabel::GUILabel(pGVar5);
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
            ((shared_ptr<Caver::GUILabel> *)&local_58,pGVar5);
  uVar2 = *(undefined8 *)(this + 0x130);
  plVar3 = *(long **)(this + 0x138);
  *(undefined8 *)(this + 0x130) = local_58;
  *(long **)(this + 0x138) = local_50;
                    /* try { // try from 0058f17c to 0068f187 has its CatchHandler @ 00591fa8 */
  local_58 = uVar2;
  local_50 = plVar3;
  if ((plVar3 != (long *)0x0) && (lVar6 = plVar3[1], plVar3[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar6 = plVar3[2];
                    /* try { // try from 0058f1a8 to 0068f1cf has its CatchHandler @ 00591510 */
    plVar3[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  pGVar5 = *(GUILabel **)(this + 0x130);
  pGVar5[0x138] = (GUILabel)0x1;
                    /* try { // try from 0058f1d0 to 0068f1d7 has its CatchHandler @ 00591fa4 */
  GUILabel::UpdateText(pGVar5);
  pGVar5 = *(GUILabel **)(this + 0x130);
                    /* try { // try from 0058f1d8 to 0068f1eb has its CatchHandler @ 00591fa0 */
  *(undefined4 *)(pGVar5 + 0x130) = 4;
  GUILabel::UpdateBounds(pGVar5);
  local_58 = *(undefined8 *)(this + 0x130);
                    /* try { // try from 0058f1ec to 0068f24f has its CatchHandler @ 005924fc */
  pcVar7 = *(code **)(*(long *)this + 0x60);
  local_50 = *(long **)(this + 0x138);
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  (*pcVar7)(this,&local_58);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) && (lVar6 = local_50[1], local_50[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar6 = plVar3[2];
    plVar3[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
                    /* try { // try from 0058f25c to 0068f263 has its CatchHandler @ 00591274 */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 0058f27c to 0068f283 has its CatchHandler @ 00591f9c */
                    /* try { // try from 0058f284 to 0068f297 has its CatchHandler @ 00591f98 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


