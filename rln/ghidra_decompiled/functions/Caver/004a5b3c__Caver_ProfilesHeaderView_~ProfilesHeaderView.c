/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a5b3c
 * Function: Caver::ProfilesHeaderView::~ProfilesHeaderView
 * Signature: undefined __thiscall ~ProfilesHeaderView(ProfilesHeaderView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfilesHeaderView::~ProfilesHeaderView() */

void __thiscall Caver::ProfilesHeaderView::~ProfilesHeaderView(ProfilesHeaderView *this)

{
  long lVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 004a5b24 with catch @ 004a5b4c */
                    /* catch() { ... } // from try @ 004a5b64 with catch @ 004a5b50 */
  plVar2 = *(long **)(this + 0x128);
                    /* try { // try from 004a5b60 to 005a5b63 has its CatchHandler @ 004a5b74 */
  *(undefined **)this = PTR_vtable_007e5398 + 0x10;
                    /* try { // try from 004a5b64 to 005a5b87 has its CatchHandler @ 004a5b50 */
                    /* catch() { ... } // from try @ 004a5b60 with catch @ 004a5b74 */
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x118);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  GUIFrameView::~GUIFrameView((GUIFrameView *)this);
  return;
}


