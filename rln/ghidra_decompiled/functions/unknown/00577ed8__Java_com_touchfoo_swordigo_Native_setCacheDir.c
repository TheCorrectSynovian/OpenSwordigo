/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00577ed8
 * Function: Java_com_touchfoo_swordigo_Native_setCacheDir
 * Signature: undefined Java_com_touchfoo_swordigo_Native_setCacheDir(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void Java_com_touchfoo_swordigo_Native_setCacheDir
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  long local_38;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uVar4 = (**(code **)(*param_1 + 0x548))(param_1,param_3,0);
  FUN_00666bb8(&local_38,uVar4,auStack_30);
  Caver::SetAndroidCacheDir((string *)&local_38);
  if ((undefined *)(local_38 + -0x18) != PTR_DAT_007e5de8) {
    piVar5 = (int *)(local_38 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar5;
      *piVar5 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete((undefined *)(local_38 + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


