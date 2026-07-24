/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c45ec
 * Function: Caver::FontLibrary::MediumSmallDefaultFont
 * Signature: undefined __thiscall MediumSmallDefaultFont(FontLibrary * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FontLibrary::MediumSmallDefaultFont() */

void __thiscall Caver::FontLibrary::MediumSmallDefaultFont(FontLibrary *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00666bb8(local_48,"megalopolis_12",auStack_50);
                    /* try { // try from 005c4630 to 006c4657 has its CatchHandler @ 005c48dc */
  FontWithName((string *)this);
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 005c4674 to 006c4683 has its CatchHandler @ 005c483c */
    piVar4 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar4;
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
    if (iVar5 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005c46b8 to 006c46cb has its CatchHandler @ 005c490c */
    __stack_chk_fail();
  }
  return;
}


