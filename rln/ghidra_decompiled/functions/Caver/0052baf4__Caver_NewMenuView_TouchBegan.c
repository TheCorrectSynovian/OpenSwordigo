/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052baf4
 * Function: Caver::NewMenuView::TouchBegan
 * Signature: undefined __cdecl TouchBegan(FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::NewMenuView::TouchBegan(Caver::FWTouch const&) */

void Caver::NewMenuView::TouchBegan(FWTouch *param_1)

{
  long *plVar1;
  
                    /* try { // try from 0052bb04 to 0062bb17 has its CatchHandler @ 0052bb3c */
  plVar1 = *(long **)(param_1 + 0xf0);
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 0052bb18 to 0062bb3f has its CatchHandler @ 0052bae8 */
    (**(code **)(*plVar1 + 8))(plVar1,param_1);
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0052bb34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x78))(param_1);
  return;
}


