/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b532c
 * Function: Caver::PathForCachesDirectory
 * Signature: undefined __cdecl PathForCachesDirectory(string * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PathForCachesDirectory(std::string const&, bool) */

void Caver::PathForCachesDirectory(string *param_1,bool param_2)

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
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b50ec with catch @ 005b533c
                        */
  lVar3 = tpidr_el0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b5080 with catch @ 005b5348
                        */
  local_38 = *(long *)(lVar3 + 0x28);
  CachesDirectoryPath((Caver *)param_1);
                    /* try { // try from 005b5368 to 006b538f has its CatchHandler @ 005b5398 */
  StringByAppendingPathComponent((Caver *)local_48,param_1,in_x2);
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar5 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 005b53b4 with catch @ 005b53ec */
      iVar6 = *piVar5;
                    /* try { // try from 005b53f4 to 006b53fb has its CatchHandler @ 005b5408 */
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
                    /* try { // try from 005b5404 to 006b5407 has its CatchHandler @ 005b5418 */
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 005b53f4 with catch @ 005b5408 */
                    /* try { // try from 005b5390 to 006b539b has its CatchHandler @ 005b4fc0 */
  if ((param_2) && (uVar4 = FileExistsAtPath(in_x8), (uVar4 & 1) == 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b5368 with catch @ 005b5398
                        */
                    /* catch() { ... } // from try @ 005b53bc with catch @ 005b539c
                       catch() { ... } // from try @ 005b5420 with catch @ 005b539c */
    CreateDirectoryAtPath(in_x8,true);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005b53b4 to 006b53bb has its CatchHandler @ 005b53ec */
                    /* try { // try from 005b53bc to 006b53f3 has its CatchHandler @ 005b539c */
  return;
}


