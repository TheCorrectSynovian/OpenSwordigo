/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00577c14
 * Function: Java_com_touchfoo_swordigo_Native_uniqueIdentifier
 * Signature: undefined Java_com_touchfoo_swordigo_Native_uniqueIdentifier(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 Java_com_touchfoo_swordigo_Native_uniqueIdentifier(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  long local_38;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  Caver::UniqueIdentifier();
  uVar4 = (**(code **)(*param_1 + 0x538))(param_1,local_38);
  if ((undefined *)(local_38 + -0x18) != PTR_DAT_007e5de8) {
    piVar6 = (int *)(local_38 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_38 + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


