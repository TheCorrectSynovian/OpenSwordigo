/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b4670
 * Function: Caver::CachesDirectoryPath
 * Signature: undefined __thiscall CachesDirectoryPath(Caver * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CachesDirectoryPath() */

void __thiscall Caver::CachesDirectoryPath(Caver *this)

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
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b4628 with catch @ 005b4670
                        */
  psVar5 = asStack_50;
                    /* try { // try from 005b4674 to 006b467b has its CatchHandler @ 005b4684 */
                    /* try { // try from 005b467c to 006b4687 has its CatchHandler @ 005b45e8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b4674 with catch @ 005b4684
                        */
  lVar3 = tpidr_el0;
                    /* try { // try from 005b4688 to 006b46d3 has its CatchHandler @ 005b4688
                       catch() { ... } // from try @ 005b4688 with catch @ 005b4688
                       catch() { ... } // from try @ 005b46d8 with catch @ 005b4688
                       catch() { ... } // from try @ 005b4740 with catch @ 005b4688
                       catch() { ... } // from try @ 005b47f8 with catch @ 005b4688
                       catch() { ... } // from try @ 005b48b4 with catch @ 005b4688
                       catch() { ... } // from try @ 005b4a0c with catch @ 005b4688 */
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00666bb8(local_48,"Caches");
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
                    /* try { // try from 005b4740 to 006b47f3 has its CatchHandler @ 005b4688 */
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
                    /* try { // try from 005b46d4 to 006b46d7 has its CatchHandler @ 005b49ac */
                    /* try { // try from 005b46d8 to 006b46ef has its CatchHandler @ 005b4688 */
  uVar4 = FileExistsAtPath(in_x8);
  if ((uVar4 & 1) == 0) {
    CreateDirectoryAtPath(in_x8,true);
  }
                    /* try { // try from 005b46f0 to 006b473f has its CatchHandler @ 005b49c0 */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


