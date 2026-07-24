/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b3318
 * Function: Caver::PathForResourceOfType
 * Signature: undefined __cdecl PathForResourceOfType(string * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PathForResourceOfType(std::string const&, std::string const&) */

void Caver::PathForResourceOfType(string *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  string *in_x3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00666bb8(local_48,&DAT_0068fbeb,auStack_50);
  PathForResourceOfTypeInDirectory((Caver *)param_1,param_2,(string *)local_48,in_x3);
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar4 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar4;
      *piVar4 = iVar5 + -1;
    }
    else {
      do {
        iVar5 = *piVar4;
                    /* try { // try from 005b33bc to 006b33e3 has its CatchHandler @ 005b33ec */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar5 < 1) {
                    /* try { // try from 005b33e4 to 006b33ef has its CatchHandler @ 005b3014 */
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b3140 with catch @ 005b3390
                        */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b33bc with catch @ 005b33ec
                        */
    __stack_chk_fail();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b30d4 with catch @ 005b339c
                        */
  return;
}


