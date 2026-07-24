/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0048db94
 * Function: Caver::CreditsViewController::~CreditsViewController
 * Signature: undefined __thiscall ~CreditsViewController(CreditsViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CreditsViewController::~CreditsViewController() */

void __thiscall Caver::CreditsViewController::~CreditsViewController(CreditsViewController *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x50);
  *(undefined **)this = PTR_vtable_007e6ae8 + 0x10;
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  GUIViewController::~GUIViewController((GUIViewController *)this);
  operator_delete(this);
  return;
}


