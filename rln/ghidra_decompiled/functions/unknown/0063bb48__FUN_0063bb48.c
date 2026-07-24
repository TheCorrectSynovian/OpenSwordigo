/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063bb48
 * Function: FUN_0063bb48
 * Signature: undefined FUN_0063bb48(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_0063bb48(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  char *__s1;
  char *__s2;
  undefined8 *puVar5;
  void *pvVar6;
  int *piVar7;
  undefined8 *puVar8;
  void *local_10;
  void *local_8;
  
  if (*param_1 == *param_2) {
                    /* try { // try from 0063bc3c to 0073bc6b has its CatchHandler @ 0063c9b8 */
    return true;
  }
  puVar5 = *(undefined8 **)(*param_1 + 0x20);
  __s1 = (char *)*puVar5;
  if (__s1 != (char *)0x0) {
                    /* try { // try from 0063bb78 to 0073bb7b has its CatchHandler @ 0063ca94 */
    puVar8 = *(undefined8 **)(*param_2 + 0x20);
                    /* try { // try from 0063bb7c to 0073bc3b has its CatchHandler @ 0063bacc */
    __s2 = (char *)*puVar8;
    if ((__s2 != (char *)0x0) && (iVar4 = strcmp(__s1,__s2), iVar4 == 0)) {
      if ((puVar5[1] == 0) && (puVar8[1] == 0)) {
        return true;
      }
      FUN_0063b81c(&local_10,param_1);
      FUN_0063b81c(&local_8,param_2);
      pvVar6 = local_10;
      bVar3 = false;
      if (*(size_t *)((long)local_10 + -0x18) == *(size_t *)((long)local_8 + -0x18)) {
        iVar4 = memcmp(local_10,local_8,*(size_t *)((long)local_10 + -0x18));
        bVar3 = iVar4 == 0;
                    /* try { // try from 0063bc6c to 0073bd83 has its CatchHandler @ 0063bacc */
      }
      if ((undefined *)((long)local_8 + -0x18) != PTR_DAT_007e5de8) {
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar4 = *(int *)((long)local_8 + -8);
          *(int *)((long)local_8 + -8) = iVar4 + -1;
        }
        else {
          piVar7 = (int *)((long)local_8 + -8);
          do {
            iVar4 = *piVar7;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar2) {
              *piVar7 = iVar4 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pvVar6 = local_10;
        if (iVar4 < 1) {
          operator_delete((undefined *)((long)local_8 + -0x18));
          pvVar6 = local_10;
        }
      }
      if ((undefined *)((long)pvVar6 + -0x18) != PTR_DAT_007e5de8) {
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar4 = *(int *)((long)pvVar6 + -8);
          *(int *)((long)pvVar6 + -8) = iVar4 + -1;
        }
        else {
          piVar7 = (int *)((long)pvVar6 + -8);
          do {
            iVar4 = *piVar7;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar2) {
              *piVar7 = iVar4 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar4 < 1) {
          operator_delete((undefined *)((long)pvVar6 + -0x18));
        }
      }
      return bVar3;
    }
  }
  return false;
}


