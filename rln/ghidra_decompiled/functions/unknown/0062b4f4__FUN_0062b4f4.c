/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062b4f4
 * Function: FUN_0062b4f4
 * Signature: undefined FUN_0062b4f4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


uint FUN_0062b4f4(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                 undefined1 *param_5)

{
  size_t *__s;
  char *pcVar1;
  bool bVar2;
  uint uVar3;
  size_t *psVar4;
  size_t *psVar5;
  size_t sVar6;
  size_t sVar7;
  size_t *__dest;
  size_t sVar8;
  undefined1 auStack_8 [8];
  
                    /* catch() { ... } // from try @ 0062b4a4 with catch @ 0062b504 */
  if (param_2 == param_3) {
    __dest = (size_t *)(PTR_DAT_007e5de8 + 0x18);
  }
  else {
    if ((param_2 == (undefined1 *)0x0) && (param_3 != (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00665330("basic_string::_S_construct null not valid");
    }
    sVar7 = (long)param_3 - (long)param_2;
    psVar4 = (size_t *)FUN_00668c20(sVar7,0,auStack_8);
    __dest = psVar4 + 3;
    if (sVar7 == 1) {
      *(undefined1 *)(psVar4 + 3) = *param_2;
    }
    else {
      memcpy(__dest,param_2,sVar7);
    }
    if (psVar4 != (size_t *)PTR_DAT_007e5de8) {
      *(undefined4 *)(psVar4 + 2) = 0;
      *psVar4 = sVar7;
      *(undefined1 *)((long)psVar4 + sVar7 + 0x18) = 0;
    }
  }
  if (param_4 == param_5) {
    psVar4 = (size_t *)(PTR_DAT_007e5de8 + 0x18);
  }
  else {
    if ((param_4 == (undefined1 *)0x0) && (param_5 != (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00665330("basic_string::_S_construct null not valid");
    }
    sVar7 = (long)param_5 - (long)param_4;
    psVar5 = (size_t *)FUN_00668c20(sVar7,0,auStack_8);
    psVar4 = psVar5 + 3;
    if (sVar7 == 1) {
      *(undefined1 *)(psVar5 + 3) = *param_4;
    }
    else {
      memcpy(psVar4,param_4,sVar7);
    }
    if (psVar5 != (size_t *)PTR_DAT_007e5de8) {
      *(undefined4 *)(psVar5 + 2) = 0;
      *psVar5 = sVar7;
      *(undefined1 *)((long)psVar5 + sVar7 + 0x18) = 0;
    }
  }
  sVar8 = __dest[-3];
  sVar7 = psVar4[-3];
  uVar3 = FUN_00670e14(param_1,__dest,psVar4);
  psVar5 = __dest;
  __s = psVar4;
  while (uVar3 == 0) {
    sVar6 = strlen((char *)psVar5);
    pcVar1 = (char *)((long)psVar5 + sVar6);
    sVar6 = strlen((char *)__s);
    bVar2 = pcVar1 == (char *)((long)__dest + sVar8);
    if ((char *)((long)__s + sVar6) == (char *)((long)psVar4 + sVar7)) {
      uVar3 = (uint)!bVar2;
LAB_0062b648:
                    /* try { // try from 0062b654 to 0072b767 has its CatchHandler @ 0062b654
                       catch() { ... } // from try @ 0062b654 with catch @ 0062b654
                       catch() { ... } // from try @ 0062b76c with catch @ 0062b654
                       catch() { ... } // from try @ 0062b964 with catch @ 0062b654
                       catch() { ... } // from try @ 0062ba64 with catch @ 0062b654
                       catch() { ... } // from try @ 0062bad4 with catch @ 0062b654 */
      if (psVar4 + -3 != (size_t *)PTR_DAT_007e5de8) goto LAB_0062b6b8;
      goto LAB_0062b658;
    }
    if (bVar2) {
      uVar3 = 0xffffffff;
      goto LAB_0062b648;
    }
    psVar5 = (size_t *)(pcVar1 + 1);
    __s = (size_t *)((char *)((long)__s + sVar6) + 1);
    uVar3 = FUN_00670e14(param_1,psVar5,__s);
  }
  if (psVar4 + -3 == (size_t *)PTR_DAT_007e5de8) {
LAB_0062b658:
    if (__dest + -3 != (size_t *)PTR_DAT_007e5de8) goto LAB_0062b6d4;
  }
  else {
LAB_0062b6b8:
    FUN_0062b45c(psVar4 + -3,auStack_8);
    if (__dest + -3 != (size_t *)PTR_DAT_007e5de8) {
LAB_0062b6d4:
      FUN_0062b45c(__dest + -3,auStack_8);
      return uVar3;
    }
  }
  return uVar3;
}


