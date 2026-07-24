/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004855e0
 * Function: Caver::OfflineAchievementsViewController::~OfflineAchievementsViewController
 * Signature: undefined __thiscall ~OfflineAchievementsViewController(OfflineAchievementsViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OfflineAchievementsViewController::~OfflineAchievementsViewController() */

void __thiscall
Caver::OfflineAchievementsViewController::~OfflineAchievementsViewController
          (OfflineAchievementsViewController *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x60);
  *(undefined **)this = PTR_vtable_007e6af8 + 0x10;
                    /* try { // try from 00485610 to 00585613 has its CatchHandler @ 0048564c */
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
                    /* try { // try from 00485634 to 00585637 has its CatchHandler @ 00485644 */
    plVar2[2] = lVar1 + -1;
                    /* try { // try from 00485638 to 0058563f has its CatchHandler @ 00485688 */
    if (lVar1 + -1 == 0) {
                    /* catch() { ... } // from try @ 00485634 with catch @ 00485644 */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
                    /* catch() { ... } // from try @ 00485610 with catch @ 0048564c */
  plVar2 = *(long **)(this + 0x50);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* try { // try from 00485670 to 0058567f has its CatchHandler @ 00485684 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* catch() { ... } // from try @ 00485670 with catch @ 00485684 */
                    /* catch() { ... } // from try @ 004855b0 with catch @ 00485688
                       catch() { ... } // from try @ 00485638 with catch @ 00485688 */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
                    /* catch() { ... } // from try @ 0048552c with catch @ 00485694 */
  GUIViewController::~GUIViewController((GUIViewController *)this);
  return;
}


