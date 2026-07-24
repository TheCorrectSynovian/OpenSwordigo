/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c1890
 * Function: Caver::PlayerProfile::FormattedTimePlayed
 * Signature: undefined __thiscall FormattedTimePlayed(PlayerProfile * this, double param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PlayerProfile::FormattedTimePlayed(double, bool) */

void __thiscall
Caver::PlayerProfile::FormattedTimePlayed(PlayerProfile *this,double param_1,bool param_2)

{
  bool bVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  int iVar7;
  char *pcVar8;
  long local_1c8;
  undefined *local_1c0;
  undefined8 auStack_1b8 [6];
  undefined1 auStack_188 [16];
  long local_178;
  undefined1 auStack_170 [136];
  char acStack_e8 [16];
  undefined8 auStack_d8 [14];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00646a98(&local_1c8,0x10);
  lVar4 = *(long *)(local_1c8 + -0x18);
  if (acStack_e8[lVar4 + 1] == '\0') {
    plVar6 = *(long **)((long)auStack_d8 + lVar4);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_006652c8();
    }
    if ((char)plVar6[7] == '\0') {
      FUN_0061fea0(plVar6);
      cVar3 = (**(code **)(*plVar6 + 0x30))(plVar6,0x20);
    }
    else {
      cVar3 = *(char *)((long)plVar6 + 0x59);
    }
    pcVar8 = acStack_e8 + lVar4;
    *pcVar8 = cVar3;
    acStack_e8[lVar4 + 1] = '\x01';
  }
  else {
    pcVar8 = acStack_e8 + lVar4;
  }
  *pcVar8 = '0';
  iVar7 = (int)param_1;
  FUN_00640d00(&local_1c8,iVar7 / 0xe10);
  FUN_00640490(&local_1c8,":",1);
  *(undefined8 *)((long)auStack_1b8 + *(long *)(local_1c8 + -0x18)) = 2;
  lVar4 = *(long *)(local_1c8 + -0x18);
  if (acStack_e8[lVar4 + 1] == '\0') {
    plVar6 = *(long **)((long)auStack_d8 + lVar4);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_006652c8();
    }
    if ((char)plVar6[7] == '\0') {
      FUN_0061fea0(plVar6);
      cVar3 = (**(code **)(*plVar6 + 0x30))(plVar6,0x20);
    }
    else {
      cVar3 = *(char *)((long)plVar6 + 0x59);
    }
    pcVar8 = acStack_e8 + lVar4;
    *pcVar8 = cVar3;
    acStack_e8[lVar4 + 1] = '\x01';
  }
  else {
    pcVar8 = acStack_e8 + lVar4;
  }
  *pcVar8 = '0';
  FUN_00640d00(&local_1c8,(iVar7 / 0x3c) % 0x3c);
  if (((ulong)this & 1) != 0) {
    FUN_00640490(&local_1c8,":",1);
    *(undefined8 *)((long)auStack_1b8 + *(long *)(local_1c8 + -0x18)) = 2;
    lVar4 = *(long *)(local_1c8 + -0x18);
    if (acStack_e8[lVar4 + 1] == '\0') {
      plVar6 = *(long **)((long)auStack_d8 + lVar4);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_006652c8();
      }
      if ((char)plVar6[7] == '\0') {
        FUN_0061fea0(plVar6);
        cVar3 = (**(code **)(*plVar6 + 0x30))(plVar6,0x20);
      }
      else {
        cVar3 = *(char *)((long)plVar6 + 0x59);
      }
      pcVar8 = acStack_e8 + lVar4;
      *pcVar8 = cVar3;
      acStack_e8[lVar4 + 1] = '\x01';
    }
    else {
      pcVar8 = acStack_e8 + lVar4;
    }
    *pcVar8 = '0';
    FUN_00640d00(&local_1c8,iVar7 % 0x3c);
  }
  FUN_006459d8(&local_1c0);
  local_1c8 = *(long *)PTR_PTR_007e6d78;
  *(undefined8 *)((long)&local_1c8 + *(long *)(local_1c8 + -0x18)) =
       *(undefined8 *)(PTR_PTR_007e6d78 + 0x18);
  local_1c0 = PTR_DAT_007e5770 + 0x10;
  if ((undefined *)(local_178 + -0x18) != PTR_DAT_007e5de8) {
    piVar5 = (int *)(local_178 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar5;
      *piVar5 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar5;
        cVar3 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar1) {
          *piVar5 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_178 + -0x18));
    }
  }
  local_1c0 = PTR_DAT_007e6a48 + 0x10;
  FUN_0063c0c8(auStack_188);
  FUN_006221dc(auStack_170);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


