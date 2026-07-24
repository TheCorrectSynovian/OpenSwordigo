/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c4730
 * Function: Caver::FontLibrary::LargeDefaultFont
 * Signature: undefined __thiscall LargeDefaultFont(FontLibrary * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FontLibrary::LargeDefaultFont() */

void __thiscall Caver::FontLibrary::LargeDefaultFont(FontLibrary *this)

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
                    /* catch() { ... } // from try @ 005c45e8 with catch @ 005c4748 */
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00666bb8(local_48,"megalopolis_18",auStack_50);
                    /* try { // try from 005c476c to 006c4a43 has its CatchHandler @ 005c4a4c */
  FontWithName((string *)this);
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
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
                    /* catch() { ... } // from try @ 005c4268 with catch @ 005c47e8 */
                    /* catch() { ... } // from try @ 005c40e0 with catch @ 005c47ec */
    if (iVar5 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 005c4528 with catch @ 005c4798 */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


