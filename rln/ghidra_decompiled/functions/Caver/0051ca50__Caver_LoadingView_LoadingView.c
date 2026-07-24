/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051ca50
 * Function: Caver::LoadingView::LoadingView
 * Signature: undefined __thiscall LoadingView(LoadingView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LoadingView::LoadingView() */

void __thiscall Caver::LoadingView::LoadingView(LoadingView *this)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  GUIEffectView *this_00;
  long lVar5;
  code *pcVar6;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  GUILoadingView::GUILoadingView((GUILoadingView *)this);
  puVar1 = PTR_vtable_007e62e0 + 0x10;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0x7f7fffff00000000;
  *(undefined **)this = puVar1;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xe9) = 0;
  this_00 = operator_new(0x168);
  GUIEffectView::GUIEffectView(this_00);
  boost::shared_ptr<Caver::GUIEffectView>::shared_ptr<Caver::GUIEffectView>
            ((shared_ptr<Caver::GUIEffectView> *)&local_58,this_00);
  uVar2 = *(undefined8 *)(this + 0xf8);
  plVar3 = *(long **)(this + 0x100);
  *(undefined8 *)(this + 0xf8) = local_58;
  *(long **)(this + 0x100) = local_50;
  local_58 = uVar2;
  local_50 = plVar3;
  if ((plVar3 != (long *)0x0) && (lVar5 = plVar3[1], plVar3[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0051cb28 with catch @ 0051caf8 */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar5 = plVar3[2];
    plVar3[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
                    /* try { // try from 0051cb14 to 0061cb27 has its CatchHandler @ 0051cb4c */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
                    /* try { // try from 0051cb28 to 0061cb4f has its CatchHandler @ 0051caf8 */
  GUIEffect::FadeOut((GUIEffect *)(*(long *)(this + 0xf8) + 0xf0),0.0);
  local_58 = *(undefined8 *)(this + 0xf8);
  pcVar6 = *(code **)(*(long *)this + 0x60);
  local_50 = *(long **)(this + 0x100);
                    /* catch() { ... } // from try @ 0051cb14 with catch @ 0051cb4c */
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  (*pcVar6)(this,&local_58);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) && (lVar5 = local_50[1], local_50[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar5 = plVar3[2];
    plVar3[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
                    /* catch() { ... } // from try @ 0051cc20 with catch @ 0051cba8 */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


