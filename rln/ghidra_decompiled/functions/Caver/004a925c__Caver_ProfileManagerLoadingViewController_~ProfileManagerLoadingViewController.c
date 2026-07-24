/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a925c
 * Function: Caver::ProfileManagerLoadingViewController::~ProfileManagerLoadingViewController
 * Signature: undefined __thiscall ~ProfileManagerLoadingViewController(ProfileManagerLoadingViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManagerLoadingViewController::~ProfileManagerLoadingViewController() */

void __thiscall
Caver::ProfileManagerLoadingViewController::~ProfileManagerLoadingViewController
          (ProfileManagerLoadingViewController *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x58);
  *(undefined **)this = PTR_vtable_007e6328 + 0x10;
                    /* catch() { ... } // from try @ 004a91c8 with catch @ 004a9280 */
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* try { // try from 004a92a4 to 005a92cb has its CatchHandler @ 004a92d0 */
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  GUIViewController::~GUIViewController((GUIViewController *)this);
                    /* catch() { ... } // from try @ 004a92a4 with catch @ 004a92d0 */
                    /* catch() { ... } // from try @ 004a919c with catch @ 004a92d4 */
  operator_delete(this);
  return;
}


