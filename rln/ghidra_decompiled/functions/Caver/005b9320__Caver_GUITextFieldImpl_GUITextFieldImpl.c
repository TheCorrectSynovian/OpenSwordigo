/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b9320
 * Function: Caver::GUITextFieldImpl::GUITextFieldImpl
 * Signature: undefined __thiscall GUITextFieldImpl(GUITextFieldImpl * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GUITextFieldImpl::GUITextFieldImpl() */

void __thiscall Caver::GUITextFieldImpl::GUITextFieldImpl(GUITextFieldImpl *this)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  GUILabel *this_00;
  long lVar5;
  code *pcVar6;
  GUITextFieldImpl *pGVar7;
  undefined8 local_60;
  long *plStack_58;
  long local_48;
  
                    /* catch() { ... } // from try @ 005b9284 with catch @ 005b9330 */
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  GUIView::GUIView((GUIView *)this);
  *(undefined8 *)(this + 0x118) = 0;
  puVar1 = PTR_vtable_007e7880;
  pGVar7 = this + 0xf8;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)pGVar7 = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(GUITextFieldImpl **)(this + 0x108) = pGVar7;
  *(GUITextFieldImpl **)(this + 0x110) = pGVar7;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x140) = puVar1 + 0x208;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x17a) = 0;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  *(undefined8 *)(this + 0x16c) = 0;
  *(undefined8 *)(this + 0x174) = 0;
  *(undefined **)(this + 400) = puVar1;
  *(undefined **)(this + 0x188) = puVar1;
  *(undefined2 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x19c) = 0;
  *(undefined4 *)(this + 0x168) = 0xff000000;
  this_00 = operator_new(0x150);
  GUILabel::GUILabel(this_00);
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
            ((shared_ptr<Caver::GUILabel> *)&local_60,this_00);
  uVar2 = *(undefined8 *)(this + 0x148);
  plVar3 = *(long **)(this + 0x150);
  *(undefined8 *)(this + 0x148) = local_60;
  *(long **)(this + 0x150) = plStack_58;
                    /* catch() { ... } // from try @ 005b948c with catch @ 005b9420 */
  if ((plVar3 != (long *)0x0) && (lVar5 = plVar3[1], plVar3[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    local_60 = uVar2;
    plStack_58 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar5 = plVar3[2];
    plVar3[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  local_60 = *(undefined8 *)(this + 0x148);
  pcVar6 = *(code **)(*(long *)this + 0x60);
                    /* try { // try from 005b9464 to 006b948b has its CatchHandler @ 005b9510 */
  plStack_58 = *(long **)(this + 0x150);
  if (plStack_58 != (long *)0x0) {
    plStack_58[1] = plStack_58[1] + 1;
  }
  (*pcVar6)(this,&local_60);
  plVar3 = plStack_58;
                    /* try { // try from 005b948c to 006b957f has its CatchHandler @ 005b9420 */
  if ((plStack_58 != (long *)0x0) &&
     (lVar5 = plStack_58[1], plStack_58[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plStack_58 + 0x10))(plStack_58);
    lVar5 = plVar3[2];
    plVar3[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plStack_58 = (long *)_UNK_00697968;
  local_60 = _DAT_00697960;
  GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_60);
  if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 005b9464 with catch @ 005b9510 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


