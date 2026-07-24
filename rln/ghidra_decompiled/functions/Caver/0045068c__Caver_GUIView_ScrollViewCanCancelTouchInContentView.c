/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045068c
 * Function: Caver::GUIView::ScrollViewCanCancelTouchInContentView
 * Signature: undefined __cdecl ScrollViewCanCancelTouchInContentView(GUIView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::ScrollViewCanCancelTouchInContentView(Caver::GUIView*) */

undefined8 Caver::GUIView::ScrollViewCanCancelTouchInContentView(GUIView *param_1)

{
  undefined8 uVar1;
  
                    /* try { // try from 00450690 to 00550693 has its CatchHandler @ 004506a4 */
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
                    /* try { // try from 00450694 to 005506b7 has its CatchHandler @ 00450678 */
                    /* WARNING: Could not recover jumptable at 0x0045069c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x58) + 0xd8))();
    return uVar1;
  }
                    /* catch() { ... } // from try @ 00450690 with catch @ 004506a4 */
  return 1;
}


