/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d3f6c
 * Function: Caver::GUIPopoverView::SetPopoverContentView
 * Signature: undefined __thiscall SetPopoverContentView(GUIPopoverView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIPopoverView::SetPopoverContentView(boost::shared_ptr<Caver::GUIView> const&) */

void __thiscall
Caver::GUIPopoverView::SetPopoverContentView(GUIPopoverView *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
                    /* try { // try from 005d3f78 to 006d40d3 has its CatchHandler @ 005d3d94 */
  plVar2 = *(long **)(this + 0x100);
  if ((plVar2 != (long *)0x0) && ((GUIPopoverView *)plVar2[0xb] == this)) {
    (**(code **)(*plVar2 + 0x78))();
  }
  uVar1 = *(undefined8 *)param_1;
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
  }
  plVar2 = *(long **)(this + 0x108);
  *(undefined8 *)(this + 0x100) = uVar1;
  *(long *)(this + 0x108) = lVar3;
  if ((plVar2 != (long *)0x0) && (lVar3 = plVar2[1], plVar2[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar3 = plVar2[2];
    plVar2[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  (**(code **)(*(long *)this + 0x60))(this,this + 0x100);
  if (this[0xe9] != (GUIPopoverView)0x0) {
                    /* catch() { ... } // from try @ 005d3f50 with catch @ 005d4034 */
    UpdateLayout(this);
    return;
  }
  return;
}


