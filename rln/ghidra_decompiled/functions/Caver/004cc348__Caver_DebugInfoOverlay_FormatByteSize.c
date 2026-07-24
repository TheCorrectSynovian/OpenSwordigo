/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004cc348
 * Function: Caver::DebugInfoOverlay::FormatByteSize
 * Signature: undefined __cdecl FormatByteSize(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DebugInfoOverlay::FormatByteSize(int) */

void Caver::DebugInfoOverlay::FormatByteSize(int param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int in_w1;
  int *piVar5;
  int iVar6;
  long local_1b8 [2];
  long local_1a8;
  undefined *local_1a0 [2];
  uint auStack_190 [10];
  undefined1 auStack_168 [16];
  long local_158;
  undefined1 auStack_150 [264];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00646a98(&local_1a8,0x10);
  *(uint *)((long)auStack_190 + *(long *)(local_1a8 + -0x18)) =
       *(uint *)((long)auStack_190 + *(long *)(local_1a8 + -0x18)) | 4;
  *(undefined8 *)((long)local_1a0 + *(long *)(local_1a8 + -0x18)) = 2;
  if (in_w1 < 1000000) {
    FUN_00641620((double)((float)in_w1 / DAT_00687978),&local_1a8);
    FUN_006459d8(local_1b8,local_1a0);
    FUN_0066a528();
    FUN_006677d4();
    puVar4 = (undefined *)(local_1b8[0] + -0x18);
    if (puVar4 == PTR_DAT_007e5de8) goto LAB_004cc4a4;
    piVar5 = (int *)(local_1b8[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_004cc59c:
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
  }
  else {
    FUN_00641620((double)((float)in_w1 / DAT_006922e0),&local_1a8);
    FUN_006459d8(local_1b8,local_1a0);
    FUN_0066a528();
    FUN_006677d4();
    puVar4 = (undefined *)(local_1b8[0] + -0x18);
    if (puVar4 == PTR_DAT_007e5de8) goto LAB_004cc4a4;
    piVar5 = (int *)(local_1b8[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_004cc59c;
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
    operator_delete(puVar4);
  }
LAB_004cc4a4:
  local_1a8 = *(long *)PTR_PTR_007e6d78;
  *(undefined8 *)((long)local_1a0 + *(long *)(local_1a8 + -0x18) + -8) =
       *(undefined8 *)(PTR_PTR_007e6d78 + 0x18);
  local_1a0[0] = PTR_DAT_007e5770 + 0x10;
  if ((undefined *)(local_158 + -0x18) != PTR_DAT_007e5de8) {
    piVar5 = (int *)(local_158 + -8);
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
      operator_delete((undefined *)(local_158 + -0x18));
    }
  }
  local_1a0[0] = PTR_DAT_007e6a48 + 0x10;
  FUN_0063c0c8(auStack_168);
  FUN_006221dc(auStack_150);
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


