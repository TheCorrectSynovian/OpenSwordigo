/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a4b94
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
                    /* try { // try from 004a4be4 to 005a4be7 has its CatchHandler @ 004a4c00 */
    lVar2 = plVar3[2];
                    /* try { // try from 004a4be8 to 005a4bef has its CatchHandler @ 004a4c14 */
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* catch() { ... } // from try @ 004a4be4 with catch @ 004a4c00 */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
                    /* try { // try from 004a4c04 to 005a4c0b has its CatchHandler @ 004a4c10 */
                    /* try { // try from 004a4c0c to 005a4c27 has its CatchHandler @ 004a4b90 */
                    /* catch() { ... } // from try @ 004a4c04 with catch @ 004a4c10 */
  GUIViewController::~GUIViewController((GUIViewController *)this);
  return;
}


