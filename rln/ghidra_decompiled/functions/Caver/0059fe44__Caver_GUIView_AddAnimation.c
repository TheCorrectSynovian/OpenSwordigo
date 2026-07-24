/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059fe44
 * Function: Caver::GUIView::AddAnimation
 * Signature: undefined __thiscall AddAnimation(GUIView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&) */

void __thiscall Caver::GUIView::AddAnimation(GUIView *this,shared_ptr *param_1)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = operator_new(0x20);
  *(undefined8 *)((long)pvVar1 + 0x10) = *(undefined8 *)param_1;
  lVar2 = *(long *)(param_1 + 8);
  *(long *)((long)pvVar1 + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
                    /* try { // try from 0059fe84 to 0069feab has its CatchHandler @ 005a0528 */
  FUN_0062a9ac(pvVar1,this + 0x60);
  GUIAnimation::Update(0.0);
  return;
}


