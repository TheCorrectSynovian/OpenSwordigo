/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0060072c
 * Function: FUN_0060072c
 * Signature: undefined FUN_0060072c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined * FUN_0060072c(long param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_2 < 0x101) {
    iVar2 = iscntrl(param_2);
    pcVar1 = "%c";
    if (iVar2 != 0) {
      pcVar1 = "char(%d)";
    }
    puVar3 = (undefined *)FUN_005ef3d4(*(undefined8 *)(param_1 + 0x38),pcVar1,param_2);
    return puVar3;
  }
  return (&PTR_ByteCount_007d8490)[param_2];
}


