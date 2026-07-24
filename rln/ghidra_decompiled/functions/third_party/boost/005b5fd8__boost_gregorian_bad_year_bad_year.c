/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b5fd8
 * Function: boost::gregorian::bad_year::bad_year
 * Signature: undefined __thiscall bad_year(bad_year * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::gregorian::bad_year::bad_year() */

void __thiscall boost::gregorian::bad_year::bad_year(bad_year *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_40 [8];
  long local_38 [2];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  FUN_00666bb8(local_38,"Year is out of valid range: 1400..10000",auStack_40);
  FUN_0064aadc(this,local_38);
                    /* try { // try from 005b6018 to 006b601b has its CatchHandler @ 005b620c */
                    /* try { // try from 005b601c to 006b60d3 has its CatchHandler @ 005b5e68 */
  if ((undefined *)(local_38[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar4 = (int *)(local_38[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar4;
                    /* catch() { ... } // from try @ 005b5f78 with catch @ 005b6088 */
      *piVar4 = iVar5 + -1;
    }
    else {
      do {
        iVar5 = *piVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* catch() { ... } // from try @ 005b5f30 with catch @ 005b6090 */
    if (iVar5 < 1) {
      operator_delete((undefined *)(local_38[0] + -0x18));
                    /* catch() { ... } // from try @ 005b5ee8 with catch @ 005b60a0 */
    }
  }
  *(undefined **)this = PTR_vtable_007e7668 + 0x10;
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


