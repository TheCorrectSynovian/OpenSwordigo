/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ba494
 * Function: Caver::GUITextFieldImpl::setFont
 * Signature: undefined __thiscall setFont(GUITextFieldImpl * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextFieldImpl::setFont(boost::shared_ptr<Caver::Font> const&) */

void __thiscall Caver::GUITextFieldImpl::setFont(GUITextFieldImpl *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  GUILabel *this_00;
  
  uVar1 = *(undefined8 *)param_1;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar4 = *(long **)(this + 0x160);
  *(undefined8 *)(this + 0x158) = uVar1;
  *(long *)(this + 0x160) = lVar2;
  if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar2 = plVar4[2];
    plVar4[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  this_00 = *(GUILabel **)(this + 0x148);
  lVar2 = *(long *)(this + 0x158);
                    /* try { // try from 005ba50c to 006ba51b has its CatchHandler @ 005ba560 */
  if (lVar2 != *(long *)(this_00 + 0xf0)) {
    lVar3 = *(long *)(this + 0x160);
                    /* try { // try from 005ba51c to 006ba563 has its CatchHandler @ 005ba46c */
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
    }
    plVar4 = *(long **)(this_00 + 0xf8);
    *(long *)(this_00 + 0xf0) = lVar2;
    *(long *)(this_00 + 0xf8) = lVar3;
    if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar2 = plVar4[2];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005ba50c with catch @ 005ba560
                        */
      plVar4[2] = lVar2 + -1;
                    /* try { // try from 005ba564 to 006ba56b has its CatchHandler @ 005ba574 */
      if (lVar2 + -1 == 0) {
                    /* try { // try from 005ba56c to 006ba577 has its CatchHandler @ 005ba46c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005ba564 with catch @ 005ba574
                        */
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
                    /* try { // try from 005ba578 to 006ba783 has its CatchHandler @ 005ba578
                       catch() { ... } // from try @ 005ba578 with catch @ 005ba578
                       catch() { ... } // from try @ 005ba788 with catch @ 005ba578 */
    GUILabel::UpdateText(this_00);
    return;
  }
  return;
}


