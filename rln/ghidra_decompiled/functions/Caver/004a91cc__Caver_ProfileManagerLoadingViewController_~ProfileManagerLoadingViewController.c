/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a91cc
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
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* try { // try from 004a9210 to 005a9237 has its CatchHandler @ 004a93d0 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
                    /* try { // try from 004a9238 to 005a92a3 has its CatchHandler @ 004a9088 */
  GUIViewController::~GUIViewController((GUIViewController *)this);
  return;
}


