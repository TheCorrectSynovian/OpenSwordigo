/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a4c2c
 * Function: Caver::ProfileSelectionViewController::~ProfileSelectionViewController
 * Signature: undefined __thiscall ~ProfileSelectionViewController(ProfileSelectionViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileSelectionViewController::~ProfileSelectionViewController() */

void __thiscall
Caver::ProfileSelectionViewController::~ProfileSelectionViewController
          (ProfileSelectionViewController *this)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x60);
  puVar1 = PTR_vtable_007e60f0 + 0x88;
  *(undefined **)this = PTR_vtable_007e60f0 + 0x10;
  *(undefined **)(this + 0x48) = puVar1;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  GUIViewController::~GUIViewController((GUIViewController *)this);
  operator_delete(this);
  return;
}


