/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057d5c8
 * Function: Caver::SubdirectoryWithName
 * Signature: undefined __thiscall SubdirectoryWithName(Caver * this, string * param_1, string * param_2, bool param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SubdirectoryWithName(std::string const&, std::string const&, bool) */

void __thiscall
Caver::SubdirectoryWithName(Caver *this,string *param_1,string *param_2,bool param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  StringByAppendingPathComponent(this,param_1,param_2);
  if (((ulong)param_2 & 1) == 0) {
    uVar4 = FileExistsAtPath((string *)local_48);
    if ((uVar4 & 1) == 0) {
      FUN_00666bb8();
    }
    else {
      FUN_0066a528();
    }
  }
  else {
    uVar4 = FileExistsAtPath((string *)local_48);
    if ((uVar4 & 1) == 0) {
      CreateDirectoryAtPath((string *)local_48,false);
    }
    FUN_0066a528();
  }
                    /* catch() { ... } // from try @ 0057d574 with catch @ 0057d658 */
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
                    /* catch() { ... } // from try @ 0057d4a8 with catch @ 0057d6c8 */
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0057d4b8 with catch @ 0057d6d4 */
    __stack_chk_fail();
  }
  return;
}


