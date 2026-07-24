/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057d2a0
 * Function: Caver::FindFileFromParentDirectories
 * Signature: undefined __cdecl FindFileFromParentDirectories(string * param_1, string param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FindFileFromParentDirectories(std::string const&, std::string) */

void Caver::FindFileFromParentDirectories
               (string *param_1_00,string *param_1,undefined8 param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  undefined1 auVar10 [16];
  long local_60;
  long local_58 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_0066a528(local_58);
  puVar5 = PTR_DAT_007e5de8;
  puVar4 = PTR_pthread_create_007e4e78;
  lVar7 = *(long *)(local_58[0] + -0x18);
  while (lVar7 != 0) {
    StringByAppendingPathComponent((Caver *)local_58,param_1,param_4);
    auVar10 = FileExistsAtPath(param_1_00);
    if ((auVar10._0_8_ & 1) != 0) goto LAB_0057d3e0;
    StringByRemovingLastPathComponent((Caver *)local_58,auVar10._8_8_);
    FUN_0066a6a8(local_58,&local_60);
    if ((undefined *)(local_60 + -0x18) != puVar5) {
      piVar8 = (int *)(local_60 + -8);
      if (puVar4 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = iVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete((undefined *)(local_60 + -0x18));
      }
    }
    puVar6 = (undefined *)(*(long *)param_1_00 + -0x18);
    if (puVar6 != puVar5) {
      piVar8 = (int *)(*(long *)param_1_00 + -8);
      if (puVar4 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = iVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
                    /* catch() { ... } // from try @ 0057d59c with catch @ 0057d3b8
                       catch() { ... } // from try @ 0057d720 with catch @ 0057d3b8 */
      if (iVar9 < 1) {
        operator_delete(puVar6);
      }
    }
    lVar7 = *(long *)(local_58[0] + -0x18);
                    /* catch() { ... } // from try @ 0057d228 with catch @ 0057d34c */
  }
  FUN_00666bb8(param_1_00,&DAT_0068fbeb,&local_60);
LAB_0057d3e0:
  if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


