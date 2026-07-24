/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006626e4
 * Function: FUN_006626e4
 * Signature: undefined FUN_006626e4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_006626e4(long param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_4;
  
                    /* try { // try from 006626f4 to 007626ff has its CatchHandler @ 00662a5c */
                    /* try { // try from 00662700 to 0076273b has its CatchHandler @ 006625b0 */
  if ((*(uint *)(param_1 + 0x78) & 0x11) == 0) {
    return -1;
  }
  if (*(char *)(param_1 + 0xa9) != '\0') {
    if (*(char *)(param_1 + 0xc0) != '\0') {
      lVar4 = *(long *)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x98);
      lVar4 = *(long *)(param_1 + 0xb0) + (ulong)(*(long *)(param_1 + 0x10) != lVar4) * 4;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0xb8);
      *(long *)(param_1 + 0xb0) = lVar4;
      *(long *)(param_1 + 0x10) = lVar4;
      *(undefined1 *)(param_1 + 0xc0) = 0;
    }
    iVar3 = FUN_006623d0(param_1,param_1 + 0x8c);
    lVar4 = FUN_006625d4(param_1,(long)iVar3,1,*(undefined8 *)(param_1 + 0x8c));
                    /* try { // try from 0066273c to 007629af has its CatchHandler @ 00662a5c */
    if (lVar4 == -1) {
      return -1;
    }
  }
  piVar6 = *(int **)(param_1 + 0x20);
  bVar1 = param_2 == -1;
  piVar7 = *(int **)(param_1 + 0x28);
  if (piVar7 <= piVar6) {
    if (*(ulong *)(param_1 + 0xa0) < 2) {
      if (bVar1) {
        param_2 = 0;
      }
      else {
        local_4 = param_2;
        cVar2 = FUN_0066224c(param_1,&local_4,1);
        if (cVar2 == '\0') {
          return -1;
        }
      }
      *(undefined1 *)(param_1 + 0xaa) = 1;
      return param_2;
    }
    if ((*(uint *)(param_1 + 0x78) & 0x11) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 8) = uVar5;
      *(undefined8 *)(param_1 + 0x10) = uVar5;
      *(undefined8 *)(param_1 + 0x18) = uVar5;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x98);
      *(long *)(param_1 + 8) = lVar4;
      *(long *)(param_1 + 0x10) = lVar4;
      *(long *)(param_1 + 0x18) = lVar4;
      *(long *)(param_1 + 0x28) = lVar4;
      *(long *)(param_1 + 0x20) = lVar4;
      *(ulong *)(param_1 + 0x30) = lVar4 + *(ulong *)(param_1 + 0xa0) * 4 + -4;
    }
    *(undefined1 *)(param_1 + 0xaa) = 1;
    if (bVar1) {
      return 0;
    }
    piVar6 = *(int **)(param_1 + 0x28);
    *piVar6 = param_2;
    *(int **)(param_1 + 0x28) = piVar6 + 1;
    return param_2;
  }
  piVar8 = piVar7;
  if (!bVar1) {
    piVar8 = piVar7 + 1;
    *piVar7 = param_2;
    *(int **)(param_1 + 0x28) = piVar8;
  }
  cVar2 = FUN_0066224c(param_1,piVar6,(long)piVar8 - (long)piVar6 >> 2);
  if (cVar2 == '\0') {
    return -1;
  }
  if ((*(uint *)(param_1 + 0x78) & 0x11) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 8) = uVar5;
    *(undefined8 *)(param_1 + 0x10) = uVar5;
    *(undefined8 *)(param_1 + 0x18) = uVar5;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x98);
    *(long *)(param_1 + 8) = lVar4;
    *(long *)(param_1 + 0x10) = lVar4;
    *(long *)(param_1 + 0x18) = lVar4;
    if (1 < *(ulong *)(param_1 + 0xa0)) {
      *(long *)(param_1 + 0x28) = lVar4;
      *(long *)(param_1 + 0x20) = lVar4;
      *(ulong *)(param_1 + 0x30) = lVar4 + *(ulong *)(param_1 + 0xa0) * 4 + -4;
      goto LAB_0066284c;
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
LAB_0066284c:
  if (bVar1) {
    param_2 = 0;
  }
  return param_2;
}


