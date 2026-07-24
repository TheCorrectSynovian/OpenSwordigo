/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c4bd8
 * Function: Caver::Font::~Font
 * Signature: undefined __thiscall ~Font(Font * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Font::~Font() */

void __thiscall Caver::Font::~Font(Font *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005c4bf8 to 006c4bfb has its CatchHandler @ 005c4c00 */
                    /* try { // try from 005c4bfc to 006c4c7b has its CatchHandler @ 005c4a54 */
  if (*(void **)(this + 0x40) != (void *)0x0) {
                    /* catch() { ... } // from try @ 005c4bf8 with catch @ 005c4c00 */
    operator_delete__(*(void **)(this + 0x40));
  }
                    /* catch() { ... } // from try @ 005c4a98 with catch @ 005c4c04 */
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x28));
  }
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x10));
  }
  plVar4 = *(long **)(this + 8);
  if ((plVar4 != (long *)0x0) &&
     (iVar8 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  puVar5 = (undefined *)(*(long *)this + -0x18);
  if (puVar5 != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 005c4a84 with catch @ 005c4c78 */
    piVar7 = (int *)(*(long *)this + -8);
                    /* try { // try from 005c4c84 to 006c4d1f has its CatchHandler @ 005c4c84
                       catch() { ... } // from try @ 005c4c84 with catch @ 005c4c84
                       catch() { ... } // from try @ 005c4d6c with catch @ 005c4c84
                       catch() { ... } // from try @ 005c4e18 with catch @ 005c4c84 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(puVar5);
    }
  }
  if (*(long *)(lVar3 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


