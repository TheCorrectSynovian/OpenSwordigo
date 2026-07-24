/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005eb814
 * Function: FUN_005eb814
 * Signature: noreturn undefined FUN_005eb814(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005eb814(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  plVar7 = (long *)(param_1 + 0xa8);
  if (*plVar7 != 0) {
    *(int *)(*plVar7 + 0xc) = param_2;
    plVar1 = (long *)__cxa_allocate_exception(8);
    *plVar1 = *plVar7;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar1,PTR_typeinfo_007e7260,0);
  }
  *(char *)(param_1 + 10) = (char)param_2;
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x98) == 0) goto LAB_005eb990;
  *(undefined8 **)(param_1 + 0x28) = *(undefined8 **)(param_1 + 0x50);
                    /* catch() { ... } // from try @ 005eb794 with catch @ 005eb854 */
  *(undefined8 *)(param_1 + 0x18) = **(undefined8 **)(param_1 + 0x50);
  FUN_005ed5f4(param_1);
  puVar8 = *(undefined8 **)(param_1 + 0x18);
  if (param_2 - 2U < 2) {
    lVar6 = *(long *)(param_1 + 0x10);
    *puVar8 = *(undefined8 *)(lVar6 + -0x10);
    uVar5 = *(undefined4 *)(lVar6 + -8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005eb9a0 with catch @ 005eb8c4
                       catch(type#1 @ 00000000) { ... } // from try @ 005ebac4 with catch @ 005eb8c4
                        */
LAB_005eb8e4:
    *(undefined4 *)(puVar8 + 1) = uVar5;
  }
  else {
    if (param_2 == 5) {
      pcVar3 = "error in error handling";
      uVar4 = 0x17;
LAB_005eb8d4:
      uVar4 = FUN_005f356c(param_1,pcVar3,uVar4);
      *puVar8 = uVar4;
      uVar5 = 4;
      goto LAB_005eb8e4;
    }
    if (param_2 == 4) {
      pcVar3 = "not enough memory";
      uVar4 = 0x11;
      goto LAB_005eb8d4;
    }
  }
  *(undefined8 **)(param_1 + 0x10) = puVar8 + 2;
  *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_1 + 0x62);
  *(undefined1 *)(param_1 + 0x65) = 1;
                    /* try { // try from 005eb918 to 006eb93f has its CatchHandler @ 005eba24 */
  if ((20000 < *(int *)(param_1 + 0x5c)) &&
     (lVar6 = *(long *)(param_1 + 0x50),
     (int)((ulong)(*(long *)(param_1 + 0x28) - lVar6) >> 3) * -0x33333333 < 19999)) {
    lVar2 = FUN_005eed74(param_1,lVar6,(long)*(int *)(param_1 + 0x5c) * 0x28,800000);
    *(long *)(param_1 + 0x48) = lVar2 + 0xc34d8;
    *(long *)(param_1 + 0x50) = lVar2;
    *(undefined4 *)(param_1 + 0x5c) = 20000;
                    /* try { // try from 005eb978 to 006eb99f has its CatchHandler @ 005eba1c */
    *(long *)(param_1 + 0x28) = lVar2 + (*(long *)(param_1 + 0x28) - lVar6);
  }
  *plVar7 = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  (**(code **)(*(long *)(param_1 + 0x20) + 0x98))(param_1);
LAB_005eb990:
                    /* WARNING: Subroutine does not return */
  exit(1);
}


