/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b6918
 * Function: boost::gregorian::bad_day_of_month::bad_day_of_month
 * Signature: undefined __thiscall bad_day_of_month(bad_day_of_month * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::gregorian::bad_day_of_month::bad_day_of_month() */

void __thiscall boost::gregorian::bad_day_of_month::bad_day_of_month(bad_day_of_month *this)

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
  FUN_00666bb8(local_38,"Day of month value is out of range 1..31",auStack_40);
  FUN_0064aadc(this,local_38);
                    /* catch() { ... } // from try @ 005b671c with catch @ 005b6964 */
  if ((undefined *)(local_38[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar4 = (int *)(local_38[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar4;
      *piVar4 = iVar5 + -1;
    }
    else {
      do {
        iVar5 = *piVar4;
                    /* catch() { ... } // from try @ 005b66dc with catch @ 005b69b4
                       catch() { ... } // from try @ 005b6764 with catch @ 005b69b4 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar5 < 1) {
      operator_delete((undefined *)(local_38[0] + -0x18));
    }
  }
  *(undefined **)this = PTR_vtable_007e56d8 + 0x10;
                    /* try { // try from 005b6988 to 006b69fb has its CatchHandler @ 005b6bec */
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


