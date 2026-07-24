/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00622a18
 * Function: FUN_00622a18
 * Signature: undefined FUN_00622a18(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


byte FUN_00622a18(byte param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined1 auStack_8 [8];
  
  puVar1 = PTR_DAT_007e7910;
  bVar2 = *PTR_DAT_007e7910;
  if (bVar2 <= param_1) {
    return bVar2;
  }
  FUN_00622294(auStack_8);
  *puVar1 = param_1;
  puVar1 = PTR_DAT_007e6a48 + 0x10;
  puVar3 = PTR_DAT_007e5338 + 0x38;
  *(undefined **)PTR_DAT_007e5338 = puVar1;
  FUN_0063c0c8(puVar3);
  puVar3 = PTR_DAT_007e57d8 + 0x38;
  *(undefined **)PTR_DAT_007e57d8 = puVar1;
  FUN_0063c0c8(puVar3);
  puVar3 = PTR_DAT_007e6ef8 + 0x38;
  *(undefined **)PTR_DAT_007e6ef8 = puVar1;
  FUN_0063c0c8(puVar3);
  puVar1 = PTR_DAT_007e6338 + 0x10;
  puVar3 = PTR_DAT_007e6190 + 0x38;
  *(undefined **)PTR_DAT_007e6190 = puVar1;
  FUN_0063c0c8(puVar3);
  puVar3 = PTR_DAT_007e5420 + 0x38;
  *(undefined **)PTR_DAT_007e5420 = puVar1;
  FUN_0063c0c8(puVar3);
  puVar3 = PTR_DAT_007e7f28 + 0x38;
  *(undefined **)PTR_DAT_007e7f28 = puVar1;
  FUN_0063c0c8(puVar3);
  FUN_0067121c(PTR_DAT_007e7298,PTR___sF_007e5cd0 + 0x98,0x10,0x400);
  FUN_0067121c(PTR_DAT_007e6770,PTR___sF_007e5cd0,8,0x400);
  FUN_0067121c(PTR_DAT_007e5210,PTR___sF_007e5cd0 + 0x130,0x10,0x400);
  FUN_00620e7c(PTR_DAT_007e7220 + 8,PTR_DAT_007e7298);
  FUN_00620e7c(PTR_DAT_007e6498 + 0x10,PTR_DAT_007e6770);
  FUN_00620e7c(PTR_DAT_007e58d0 + 8,PTR_DAT_007e5210);
  FUN_00620e7c(PTR_DAT_007e5a58 + 8,PTR_DAT_007e5210);
  FUN_00671470(PTR_DAT_007e4818,PTR___sF_007e5cd0 + 0x98,0x10,0x400);
  FUN_00671470(PTR_DAT_007e78a8,PTR___sF_007e5cd0,8,0x400);
  FUN_00671470(PTR_DAT_007e72b8,PTR___sF_007e5cd0 + 0x130,0x10,0x400);
  FUN_00621828(PTR_DAT_007e5010 + 8,PTR_DAT_007e4818);
  FUN_00621828(PTR_DAT_007e7248 + 0x10,PTR_DAT_007e78a8);
  FUN_00621828(PTR_DAT_007e4c58 + 8,PTR_DAT_007e72b8);
  FUN_00621828(PTR_DAT_007e6470 + 8,PTR_DAT_007e72b8);
  FUN_0062296c(auStack_8);
  return bVar2;
}


