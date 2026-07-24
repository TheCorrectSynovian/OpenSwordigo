/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ba6cc
 * Function: Caver::GUITextField::~GUITextField
 * Signature: undefined __thiscall ~GUITextField(GUITextField * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextField::~GUITextField() */

void __thiscall Caver::GUITextField::~GUITextField(GUITextField *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x130);
  *(undefined **)this = PTR_vtable_007e75f0 + 0x10;
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  GUIControl::~GUIControl((GUIControl *)this);
  return;
}


