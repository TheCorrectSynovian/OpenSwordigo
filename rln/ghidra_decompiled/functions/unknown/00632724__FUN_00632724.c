/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00632724
 * Function: FUN_00632724
 * Signature: undefined FUN_00632724(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_00632724(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
                    /* catch() { ... } // from try @ 0063250c with catch @ 00632730 */
  lVar1 = FUN_0063c4d0(&DAT_007fbdd0);
  lVar4 = *(long *)(*param_2 + 0x18);
  lVar2 = *(long *)(lVar4 + lVar1 * 8);
  if (lVar2 != 0) {
    return lVar2;
  }
  puVar3 = operator_new(0x90);
  *(undefined4 *)(puVar3 + 1) = 0;
  *puVar3 = &PTR_FUN_007b70c0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined1 *)(puVar3 + 4) = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 9) = 0;
  *(undefined1 *)((long)puVar3 + 0x49) = 0;
  *(undefined1 *)(puVar3 + 0x11) = 0;
                    /* catch() { ... } // from try @ 00632994 with catch @ 006327b0 */
  FUN_0062dbf0(puVar3,param_2);
  FUN_0063c340(*param_2,puVar3,lVar1);
  return *(long *)(lVar4 + lVar1 * 8);
}


