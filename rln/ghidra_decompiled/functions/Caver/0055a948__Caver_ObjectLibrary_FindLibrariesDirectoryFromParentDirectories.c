/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055a948
 * Function: Caver::ObjectLibrary::FindLibrariesDirectoryFromParentDirectories
 * Signature: undefined __thiscall FindLibrariesDirectoryFromParentDirectories(ObjectLibrary * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLibrary::FindLibrariesDirectoryFromParentDirectories(std::string const&) */

void __thiscall
Caver::ObjectLibrary::FindLibrariesDirectoryFromParentDirectories
          (ObjectLibrary *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  long local_60;
  undefined1 auStack_58 [8];
  long local_50;
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 0055a96c to 0065a993 has its CatchHandler @ 0055aaa0 */
  FUN_00666bb8(&local_50,"Libraries",auStack_58);
  FUN_0066a528(&local_60,this);
  FindFileFromParentDirectories(local_48,&local_50,&local_60);
  puVar4 = PTR_DAT_007e5de8;
                    /* try { // try from 0055a9b4 to 0065a9bf has its CatchHandler @ 0055aab0 */
  if ((undefined *)(local_60 + -0x18) != PTR_DAT_007e5de8) {
    piVar5 = (int *)(local_60 + -8);
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
                    /* try { // try from 0055aad4 to 0065ab43 has its CatchHandler @ 0055ab4c */
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  if ((undefined *)(local_50 + -0x18) != puVar4) {
    piVar5 = (int *)(local_50 + -8);
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
      operator_delete((undefined *)(local_50 + -0x18));
    }
  }
  if (*(long *)(local_48[0] + -0x18) == 0) {
                    /* try { // try from 0055aa08 to 0065aad3 has its CatchHandler @ 0055a8b0 */
    puts("ERROR: Could not find \'Libraries\' directory");
    FUN_00666bb8();
  }
  else {
    printf("Libraries directory found at \'%s\'\n");
                    /* try { // try from 0055a9e0 to 0065aa07 has its CatchHandler @ 0055aa9c */
    FUN_0066a6a8(&DAT_007e9bb0,local_48);
    FUN_0066a528();
  }
  if ((undefined *)(local_48[0] + -0x18) != puVar4) {
                    /* catch() { ... } // from try @ 0055a9e0 with catch @ 0055aa9c */
                    /* catch() { ... } // from try @ 0055a96c with catch @ 0055aaa0 */
    piVar5 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar5;
      *piVar5 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar5;
                    /* catch() { ... } // from try @ 0055a9b4 with catch @ 0055aab0 */
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
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


