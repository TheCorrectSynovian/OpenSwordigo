/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ba3e8
 * Function: Caver::GUITextFieldImpl::UpdateFont
 * Signature: undefined __thiscall UpdateFont(GUITextFieldImpl * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextFieldImpl::UpdateFont() */

void __thiscall Caver::GUITextFieldImpl::UpdateFont(GUITextFieldImpl *this)

{
  long lVar1;
  long lVar2;
  GUILabel *this_00;
  long *plVar3;
  
  this_00 = *(GUILabel **)(this + 0x148);
  lVar1 = *(long *)(this + 0x158);
  if (lVar1 != *(long *)(this_00 + 0xf0)) {
    lVar2 = *(long *)(this + 0x160);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
    plVar3 = *(long **)(this_00 + 0xf8);
    *(long *)(this_00 + 0xf0) = lVar1;
    *(long *)(this_00 + 0xf8) = lVar2;
    if ((plVar3 != (long *)0x0) && (lVar1 = plVar3[1], plVar3[1] = lVar1 + -1, lVar1 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar1 = plVar3[2];
      plVar3[2] = lVar1 + -1;
      if (lVar1 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
                    /* try { // try from 005ba46c to 006ba50b has its CatchHandler @ 005ba46c
                       catch(type#1 @ 00000000) { ... } // from try @ 005ba46c with catch @ 005ba46c
                       catch(type#1 @ 00000000) { ... } // from try @ 005ba51c with catch @ 005ba46c
                       catch(type#1 @ 00000000) { ... } // from try @ 005ba56c with catch @ 005ba46c
                        */
    GUILabel::UpdateText(this_00);
    return;
  }
  return;
}


