/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062296c
 * Function: FUN_0062296c
 * Signature: undefined FUN_0062296c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062296c(void)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  
  puVar4 = PTR_DAT_007e59c8;
  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
    iVar1 = *(int *)PTR_DAT_007e59c8;
    *(int *)PTR_DAT_007e59c8 = iVar1 + -1;
  }
  else {
    do {
      iVar1 = *(int *)puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(int *)puVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (iVar1 == 2) {
    FUN_0063f778(PTR_DAT_007e7220);
    FUN_0063f778(PTR_DAT_007e58d0);
    FUN_0063f778(PTR_DAT_007e5a58);
    FUN_00641e9c(PTR_DAT_007e5010);
    FUN_00641e9c(PTR_DAT_007e4c58);
    FUN_00641e9c(PTR_DAT_007e6470);
    return;
  }
  return;
}


