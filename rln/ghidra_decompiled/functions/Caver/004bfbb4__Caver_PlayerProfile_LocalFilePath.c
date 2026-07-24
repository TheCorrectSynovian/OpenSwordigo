/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bfbb4
 * Function: Caver::PlayerProfile::LocalFilePath
 * Signature: undefined __thiscall LocalFilePath(PlayerProfile * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PlayerProfile::LocalFilePath() */

void __thiscall Caver::PlayerProfile::LocalFilePath(PlayerProfile *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  string *psVar5;
  int *piVar6;
  int iVar7;
  long local_50;
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 004bfbdc to 005bfbe7 has its CatchHandler @ 004bfe94 */
  DocumentsDirectoryPath((Caver *)this);
                    /* try { // try from 004bfbe8 to 005bfbf3 has its CatchHandler @ 004bfe90 */
  FUN_0066a528(&local_50,this + 0x18);
  psVar5 = (string *)0x8;
  FUN_006677d4(&local_50,".gplayer");
  StringByAppendingPathComponent((Caver *)local_48,(string *)&local_50,psVar5);
  puVar4 = PTR_DAT_007e5de8;
                    /* try { // try from 004bfc18 to 005bfc83 has its CatchHandler @ 004bfe98 */
  if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
    piVar6 = (int *)(local_50 + -8);
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
      operator_delete((undefined *)(local_50 + -0x18));
    }
  }
  if ((undefined *)(local_48[0] + -0x18) != puVar4) {
    piVar6 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
                    /* try { // try from 004bfc94 to 005bfc9f has its CatchHandler @ 004bfe8c */
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
                    /* try { // try from 004bfca0 to 005bfcab has its CatchHandler @ 004bfe88 */
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


