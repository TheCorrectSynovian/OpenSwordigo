/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043f9e4
 * Function: Caver::GUIButton::titleLabel
 * Signature: undefined __thiscall titleLabel(GUIButton * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIButton::titleLabel() */

void __thiscall Caver::GUIButton::titleLabel(GUIButton *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  GUILabel *this_00;
  code *pcVar4;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(this + 0x140);
  if (lVar3 == 0) {
                    /* catch() { ... } // from try @ 0043f690 with catch @ 0043fa14 */
    this_00 = operator_new(0x150);
    GUILabel::GUILabel(this_00);
    *(GUILabel **)(this + 0x140) = this_00;
    *(undefined4 *)(this_00 + 0x130) = 4;
    GUILabel::UpdateBounds(this_00);
    GUIView::SetFrame(*(GUIView **)(this + 0x140),(Rectangle *)(this + 0x84));
    pcVar4 = *(code **)(*(long *)this + 0x60);
    boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
              ((shared_ptr<Caver::GUILabel> *)&local_58,*(GUILabel **)(this + 0x140));
    local_48 = local_58;
    local_40 = local_50;
    if (local_50 != (long *)0x0) {
      local_50[1] = local_50[1] + 1;
    }
    (*pcVar4)(this,&local_48);
    plVar2 = local_40;
                    /* catch() { ... } // from try @ 0043f670 with catch @ 0043fa80 */
    if ((local_40 != (long *)0x0) &&
       (lVar3 = local_40[1], local_40[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar3 = plVar2[2];
      plVar2[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    if ((local_50 != (long *)0x0) &&
       (lVar3 = local_50[1], local_50[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* try { // try from 0043fadc to 0053fb2b has its CatchHandler @ 0043fadc
                       catch(type#1 @ 00000000) { ... } // from try @ 0043fadc with catch @ 0043fadc
                       catch(type#1 @ 00000000) { ... } // from try @ 0043fbf4 with catch @ 0043fadc
                       catch(type#1 @ 00000000) { ... } // from try @ 0043fc3c with catch @ 0043fadc
                        */
      (**(code **)(*local_50 + 0x10))(local_50);
      lVar3 = local_50[2];
      local_50[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*local_50 + 0x18))(local_50);
      }
    }
    lVar3 = *(long *)(this + 0x140);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0043fb2c to 0053fbf3 has its CatchHandler @ 0043fc30 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


