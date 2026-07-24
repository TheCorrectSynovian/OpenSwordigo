/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e42f0
 * Function: Caver::TargetFrame::Show
 * Signature: undefined __thiscall Show(TargetFrame * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TargetFrame::Show() */

void __thiscall Caver::TargetFrame::Show(TargetFrame *this)

{
  long lVar1;
  long *plVar2;
  
  GUIView::RemoveAllAnimations((GUIView *)this);
  plVar2 = *(long **)(this + 0x308);
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  *(undefined4 *)(this + 0xec) = 0;
  this[0x10c] = (TargetFrame)0x1;
  this[0xe4] = (TargetFrame)0x0;
  return;
}


