/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044eac8
 * Function: Caver::GameSceneView::ResetSceneController
 * Signature: undefined __thiscall ResetSceneController(GameSceneView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneView::ResetSceneController() */

void __thiscall Caver::GameSceneView::ResetSceneController(GameSceneView *this)

{
  long lVar1;
  long *plVar2;
  
                    /* try { // try from 0044eac8 to 0054ead7 has its CatchHandler @ 0044f4b4 */
  plVar2 = *(long **)(this + 0xf8);
                    /* try { // try from 0044ead8 to 0054eb2f has its CatchHandler @ 00447cc4 */
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0044eb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 0044eb30 to 0054eb3f has its CatchHandler @ 0044f4b4 */
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return;
    }
  }
                    /* catch() { ... } // from try @ 00448b64 with catch @ 0044eb10 */
                    /* catch() { ... } // from try @ 00448b18 with catch @ 0044eb14 */
  return;
}


