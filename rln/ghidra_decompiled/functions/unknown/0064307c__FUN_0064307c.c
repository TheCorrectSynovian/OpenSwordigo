/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064307c
 * Function: FUN_0064307c
 * Signature: undefined FUN_0064307c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0064307c(long *param_1,char *param_2)

{
  char *pcVar1;
  long lVar2;
  undefined4 uVar3;
  size_t sVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long *plVar7;
  char cVar8;
  undefined4 *puVar9;
  
  if (param_2 == (char *)0x0) {
    lVar2 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_006215c0(lVar2,*(uint *)(lVar2 + 0x20) | 1);
  }
  else {
    sVar4 = strlen(param_2);
    uVar5 = sVar4 << 2;
    if (0x1fc0000000000000 < sVar4) {
      uVar5 = 0xffffffffffffffff;
    }
    puVar6 = operator_new__(uVar5);
    if (sVar4 != 0) {
      cVar8 = *param_2;
      plVar7 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xf0);
      if (plVar7 != (long *)0x0) {
        pcVar1 = param_2 + sVar4;
        puVar9 = puVar6;
        do {
          param_2 = param_2 + 1;
          uVar3 = (**(code **)(*plVar7 + 0x50))(plVar7,cVar8);
          *puVar9 = uVar3;
          if (param_2 == pcVar1) goto LAB_00643120;
          puVar9 = puVar9 + 1;
          cVar8 = *param_2;
          plVar7 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xf0);
        } while (plVar7 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_006652c8();
    }
LAB_00643120:
    FUN_00642b74(param_1,puVar6,sVar4);
    operator_delete__(puVar6);
  }
  return param_1;
}


