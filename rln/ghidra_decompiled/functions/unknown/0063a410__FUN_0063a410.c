/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063a410
 * Function: FUN_0063a410
 * Signature: undefined FUN_0063a410(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063a410(void)

{
  uint uVar1;
  long in_x5;
  undefined8 *in_x7;
  undefined8 local_8;
  
  uVar1 = *(uint *)(in_x5 + 0x18);
                    /* try { // try from 0063a43c to 0073a513 has its CatchHandler @ 0063a43c
                       catch() { ... } // from try @ 0063a43c with catch @ 0063a43c
                       catch() { ... } // from try @ 0063a53c with catch @ 0063a43c
                       catch() { ... } // from try @ 0063a5ac with catch @ 0063a43c
                       catch() { ... } // from try @ 0063a600 with catch @ 0063a43c */
  *(uint *)(in_x5 + 0x18) = uVar1 & 0xffffffb5 | 8;
  FUN_00639a80();
  *(uint *)(in_x5 + 0x18) = uVar1;
  *in_x7 = local_8;
  return;
}


