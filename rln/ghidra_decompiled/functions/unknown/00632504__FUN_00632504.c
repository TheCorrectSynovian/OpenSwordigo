/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00632504
 * Function: FUN_00632504
 * Signature: undefined FUN_00632504(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_00632504(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
                    /* try { // try from 0063250c to 00732513 has its CatchHandler @ 00632730 */
                    /* try { // try from 00632514 to 00732653 has its CatchHandler @ 00632350 */
  lVar1 = FUN_0063c4d0(&DAT_007fbde8);
  lVar4 = *(long *)(*param_2 + 0x18);
  lVar2 = *(long *)(lVar4 + lVar1 * 8);
  if (lVar2 != 0) {
    return lVar2;
  }
  puVar3 = operator_new(0x70);
  *(undefined4 *)(puVar3 + 1) = 0;
  *puVar3 = &PTR_FUN_007b70a0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined1 *)(puVar3 + 4) = 0;
  *(undefined1 *)((long)puVar3 + 0x21) = 0;
  *(undefined1 *)((long)puVar3 + 0x22) = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *(undefined4 *)(puVar3 + 0xb) = 0;
  *(undefined1 *)((long)puVar3 + 0x5c) = 0;
  *(undefined1 *)((long)puVar3 + 0x5d) = 0;
  *(undefined1 *)((long)puVar3 + 0x5e) = 0;
  *(undefined1 *)((long)puVar3 + 0x5f) = 0;
  *(undefined1 *)(puVar3 + 0xc) = 0;
  *(undefined1 *)((long)puVar3 + 0x61) = 0;
  *(undefined1 *)((long)puVar3 + 0x62) = 0;
  *(undefined1 *)((long)puVar3 + 99) = 0;
  *(undefined1 *)((long)puVar3 + 0x6f) = 0;
  FUN_0062e2bc(puVar3,param_2);
  FUN_0063c340(*param_2,puVar3,lVar1);
  return *(long *)(lVar4 + lVar1 * 8);
}


