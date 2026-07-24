/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058ce18
 * Function: Caver::RenderingProgram::~RenderingProgram
 * Signature: undefined __thiscall ~RenderingProgram(RenderingProgram * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingProgram::~RenderingProgram() */

void __thiscall Caver::RenderingProgram::~RenderingProgram(RenderingProgram *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  
                    /* catch() { ... } // from try @ 0058c8c4 with catch @ 0058ce1c */
                    /* catch() { ... } // from try @ 0058ced0 with catch @ 0058ce20 */
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 0058ce38 to 0068ce3f has its CatchHandler @ 0058cedc */
  plVar9 = *(long **)(this + 0x88);
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
                    /* try { // try from 0058ce6c to 0068ce77 has its CatchHandler @ 0058ce84 */
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
                    /* catch() { ... } // from try @ 0058ce6c with catch @ 0058ce84 */
  plVar9 = *(long **)(this + 0x78);
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
                    /* try { // try from 0058cea8 to 0068cecf has its CatchHandler @ 0058ced8 */
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
                    /* try { // try from 0058ced0 to 0068ceeb has its CatchHandler @ 0058ce20 */
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x20));
  }
                    /* catch() { ... } // from try @ 0058cea8 with catch @ 0058ced8 */
                    /* catch() { ... } // from try @ 0058ce38 with catch @ 0058cedc */
  puVar4 = (undefined *)(*(long *)(this + 8) + -0x18);
                    /* try { // try from 0058ceec to 0068cef7 has its CatchHandler @ 0058cef8 */
  if (puVar4 != PTR_DAT_007e5de8) {
    piVar7 = (int *)(*(long *)(this + 8) + -8);
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
      operator_delete(puVar4);
    }
  }
                    /* catch() { ... } // from try @ 0058ceec with catch @ 0058cef8 */
                    /* try { // try from 0058cefc to 0068ceff has its CatchHandler @ 0058cf04 */
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 0058cefc with catch @ 0058cf04 */
  return;
}


