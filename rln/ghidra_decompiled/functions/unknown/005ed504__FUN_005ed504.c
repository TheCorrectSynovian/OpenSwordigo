/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ed504
 * Function: FUN_005ed504
 * Signature: undefined FUN_005ed504(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ed504(long param_1,ulong param_2)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20);
  plVar2 = (long *)(param_1 + 0x98);
  for (plVar3 = (long *)*(long *)(param_1 + 0x98);
      (plVar3 != (long *)0x0 && (param_2 <= (ulong)plVar3[2])); plVar3 = (long *)*plVar3) {
    if (plVar3[2] == param_2) {
      if ((*(byte *)((long)plVar3 + 9) & (*(byte *)(lVar5 + 0x20) ^ 0xff) & 3) != 0) {
        *(byte *)((long)plVar3 + 9) = *(byte *)((long)plVar3 + 9) ^ 3;
        return;
      }
      return;
    }
    plVar2 = plVar3;
  }
  plVar3 = (long *)FUN_005eed74(param_1,0,0,0x28);
  *(undefined1 *)(plVar3 + 1) = 10;
  bVar1 = *(byte *)(lVar5 + 0x20);
  plVar3[2] = param_2;
  *(byte *)((long)plVar3 + 9) = bVar1 & 3;
  *plVar3 = *plVar2;
  *plVar2 = (long)plVar3;
  plVar3[3] = lVar5 + 0xb8;
  lVar4 = *(long *)(lVar5 + 0xd8);
  plVar3[4] = lVar4;
  *(long **)(lVar4 + 0x18) = plVar3;
  *(long **)(lVar5 + 0xd8) = plVar3;
  return;
}


