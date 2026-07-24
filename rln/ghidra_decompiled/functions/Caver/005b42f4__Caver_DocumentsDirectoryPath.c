/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b42f4
 * Function: Caver::DocumentsDirectoryPath
 * Signature: undefined __thiscall DocumentsDirectoryPath(Caver * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DocumentsDirectoryPath() */

void __thiscall Caver::DocumentsDirectoryPath(Caver *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  string *psVar5;
  string *in_x8;
  int *piVar6;
  int iVar7;
  string asStack_50 [8];
  long local_48 [2];
  long local_38;
  
  psVar5 = asStack_50;
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00666bb8(local_48,"Documents");
  StringByAppendingPathComponent((Caver *)&DAT_007e9f48,(string *)local_48,psVar5);
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar6 = (int *)(local_48[0] + -8);
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
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  uVar4 = FileExistsAtPath(in_x8);
  if ((uVar4 & 1) == 0) {
    CreateDirectoryAtPath(in_x8,true);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


