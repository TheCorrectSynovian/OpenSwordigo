/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003616a4
 * Function: boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
 * Signature: char * __cdecl lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>(uint param_1, char * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* char* boost::detail::lcast_put_unsigned<std::char_traits<char>, unsigned int, char>(unsigned int,
   char*) */

char * boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                 (uint param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  byte bVar4;
  long *plVar5;
  int *piVar6;
  int iVar7;
  ulong uVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  ulong uVar12;
  char *local_60;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_0063db28(auStack_58);
  plVar5 = (long *)FUN_0062db88(auStack_58);
  (**(code **)(*plVar5 + 0x20))(&local_60,plVar5);
  uVar12 = *(ulong *)(local_60 + -0x18);
  if (uVar12 == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  cVar2 = *local_60;
  cVar9 = '\x7f';
  uVar8 = 0;
  cVar11 = cVar9;
  cVar10 = cVar9;
  if ('\0' < cVar2) {
    cVar11 = cVar2;
    cVar10 = cVar2;
  }
  do {
    if (cVar11 == '\0') {
      uVar8 = uVar8 + 1;
      cVar11 = cVar10;
      if ((uVar8 < uVar12) && (cVar11 = cVar9, '\0' < local_60[uVar8])) {
        cVar11 = local_60[uVar8];
      }
      param_2 = param_2 + -1;
      *param_2 = bVar4;
      cVar10 = cVar11;
    }
    param_2 = param_2 + -1;
    *param_2 = (char)param_1 + (char)(param_1 / 10) * -10 | 0x30;
    bVar1 = 9 < param_1;
    param_1 = param_1 / 10;
    cVar11 = cVar11 + -1;
  } while (bVar1);
  if (local_60 + -0x18 != PTR_DAT_007e5de8) {
    piVar6 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar2 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar1) {
          *piVar6 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(local_60 + -0x18);
    }
  }
  FUN_0063c0c8(auStack_58);
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (char *)(byte *)param_2;
}


