/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b5178
 * Function: Caver::PathForDocumentsDirectory
 * Signature: undefined __cdecl PathForDocumentsDirectory(string * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PathForDocumentsDirectory(std::string const&, bool) */

void Caver::PathForDocumentsDirectory(string *param_1,bool param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  string *in_x2;
  string *in_x8;
  int *piVar5;
  int iVar6;
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  DocumentsDirectoryPath((Caver *)param_1);
  StringByAppendingPathComponent((Caver *)local_48,param_1,in_x2);
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar5 = (int *)(local_48[0] + -8);
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
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  if ((param_2) && (uVar4 = FileExistsAtPath(in_x8), (uVar4 & 1) == 0)) {
    CreateDirectoryAtPath(in_x8,true);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


