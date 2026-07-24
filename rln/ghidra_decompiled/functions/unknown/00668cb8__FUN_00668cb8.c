/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00668cb8
 * Function: FUN_00668cb8
 * Signature: undefined FUN_00668cb8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00668cb8(long *param_1,size_t param_2,long param_3,long param_4)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  undefined8 *puVar8;
  size_t __n;
  undefined1 auStack_8 [8];
  
  puVar8 = (undefined8 *)*param_1;
  uVar1 = (param_4 - param_3) + puVar8[-3];
  __n = (puVar8[-3] - param_2) - param_3;
  if (((ulong)puVar8[-2] < uVar1) || (0 < *(int *)(puVar8 + -1))) {
    puVar4 = (undefined8 *)FUN_00668c20(uVar1,puVar8[-2],auStack_8);
    if (param_2 != 0) {
      if (param_2 == 1) {
        *(undefined1 *)(puVar4 + 3) = *(undefined1 *)*param_1;
      }
      else {
        memcpy(puVar4 + 3,(undefined1 *)*param_1,param_2);
      }
    }
    if (__n != 0) {
      param_4 = param_2 + 0x18 + param_4;
      if (__n == 1) {
        *(undefined1 *)((long)puVar4 + param_4) = *(undefined1 *)(*param_1 + param_3 + param_2);
      }
      else {
        memcpy((void *)((long)puVar4 + param_4),(void *)(*param_1 + param_3 + param_2),__n);
      }
    }
    puVar8 = puVar4 + 3;
    lVar5 = *param_1;
    if ((undefined8 *)(lVar5 + -0x18) != &DAT_007fd2e0) {
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *(int *)(lVar5 + -8);
        *(int *)(lVar5 + -8) = iVar7 + -1;
      }
      else {
        piVar6 = (int *)(lVar5 + -8);
        do {
          iVar7 = *piVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined8 *)(lVar5 + -0x18));
      }
    }
    *param_1 = (long)puVar8;
    if (puVar4 == &DAT_007fd2e0) {
      return;
    }
  }
  else {
    if ((param_3 != param_4) && (__n != 0)) {
      if (__n == 1) {
        *(undefined1 *)((long)puVar8 + param_4 + param_2) =
             *(undefined1 *)((long)puVar8 + param_3 + param_2);
        puVar8 = (undefined8 *)*param_1;
      }
      else {
        memmove((void *)((long)puVar8 + param_4 + param_2),
                (void *)((long)puVar8 + param_3 + param_2),__n);
        puVar8 = (undefined8 *)*param_1;
      }
    }
    if (puVar8 == (undefined8 *)&DAT_007fd2f8) {
      return;
    }
  }
  puVar8[-3] = uVar1;
  *(undefined4 *)(puVar8 + -1) = 0;
  *(undefined1 *)((long)puVar8 + uVar1) = 0;
  return;
}


