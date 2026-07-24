/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00640294
 * Function: FUN_00640294
 * Signature: undefined FUN_00640294(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00640294(long *param_1)

{
  undefined1 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xf0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_006652c8();
  }
  if ((char)plVar2[7] != '\0') {
                    /* catch() { ... } // from try @ 0064015c with catch @ 006402c0 */
                    /* catch() { ... } // from try @ 00640060 with catch @ 006402c4 */
                    /* catch() { ... } // from try @ 0063fedc with catch @ 006402c8 */
    FUN_0063ff24(param_1,*(undefined1 *)((long)plVar2 + 0x43));
                    /* catch() { ... } // from try @ 0063fd58 with catch @ 006402cc */
                    /* catch() { ... } // from try @ 0063fa6c with catch @ 006402d0 */
                    /* catch() { ... } // from try @ 0063f880 with catch @ 006402d4 */
    FUN_0063f778();
    return;
  }
                    /* catch() { ... } // from try @ 0063f824 with catch @ 006402d8 */
                    /* catch() { ... } // from try @ 0063fba4 with catch @ 006402dc */
  FUN_0061fea0(plVar2);
  uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,10);
  FUN_0063ff24(param_1,uVar1);
                    /* try { // try from 00640300 to 007409cf has its CatchHandler @ 006409d8 */
  FUN_0063f778();
  return;
}


