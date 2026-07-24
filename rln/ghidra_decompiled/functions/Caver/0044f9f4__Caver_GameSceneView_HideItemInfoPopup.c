/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044f9f4
 * Function: Caver::GameSceneView::HideItemInfoPopup
 * Signature: undefined __thiscall HideItemInfoPopup(GameSceneView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneView::HideItemInfoPopup() */

void __thiscall Caver::GameSceneView::HideItemInfoPopup(GameSceneView *this)

{
  long lVar1;
  long *plVar2;
  
                    /* try { // try from 0044fa04 to 0054fa1b has its CatchHandler @ 0044fa04
                       catch() { ... } // from try @ 0044fa04 with catch @ 0044fa04
                       catch() { ... } // from try @ 0044fa20 with catch @ 0044fa04 */
  if (*(long **)(this + 0x130) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x130) + 0x78))();
    plVar2 = *(long **)(this + 0x138);
                    /* try { // try from 0044fa1c to 0054fa1f has its CatchHandler @ 0044fa30 */
    *(undefined8 *)(this + 0x130) = 0;
    *(undefined8 *)(this + 0x138) = 0;
                    /* try { // try from 0044fa20 to 0054fa43 has its CatchHandler @ 0044fa04 */
                    /* catch() { ... } // from try @ 0044fa1c with catch @ 0044fa30 */
    if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* try { // try from 0044fa44 to 0054fa5b has its CatchHandler @ 0044fa44
                       catch() { ... } // from try @ 0044fa44 with catch @ 0044fa44
                       catch() { ... } // from try @ 0044fa60 with catch @ 0044fa44 */
      lVar1 = plVar2[2];
      plVar2[2] = lVar1 + -1;
      if (lVar1 + -1 == 0) {
                    /* try { // try from 0044fa60 to 0054fa83 has its CatchHandler @ 0044fa44 */
                    /* catch() { ... } // from try @ 0044fa5c with catch @ 0044fa70 */
                    /* WARNING: Could not recover jumptable at 0x0044fa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x18))(plVar2);
        return;
      }
    }
  }
                    /* try { // try from 0044fa5c to 0054fa5f has its CatchHandler @ 0044fa70 */
  return;
}


