/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c0068
 * Function: Caver::Program::~Program
 * Signature: undefined __thiscall ~Program(Program * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Program::~Program() */

void __thiscall Caver::Program::~Program(Program *this)

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
  
                    /* try { // try from 005c007c to 006c008f has its CatchHandler @ 005c07f4 */
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  plVar9 = *(long **)(this + 0x10);
                    /* try { // try from 005c0090 to 006c00a3 has its CatchHandler @ 005c078c */
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
                    /* try { // try from 005c00a4 to 006c00b3 has its CatchHandler @ 005c072c */
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
                    /* try { // try from 005c00b4 to 006c00bf has its CatchHandler @ 005c06c8 */
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  plVar9 = *(long **)(this + 0x20);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
                    /* try { // try from 005c00f8 to 006c0103 has its CatchHandler @ 005c0804 */
    (**(code **)(*plVar9 + 0x10))(plVar9);
                    /* try { // try from 005c0104 to 006c010b has its CatchHandler @ 005c06b8 */
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
                    /* try { // try from 005c0118 to 006c011f has its CatchHandler @ 005c0804 */
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  plVar9 = *(long **)(this + 0x20);
                    /* try { // try from 005c0134 to 006c013b has its CatchHandler @ 005c06a8 */
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
                    /* try { // try from 005c013c to 006c014f has its CatchHandler @ 005c06a4 */
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
                    /* try { // try from 005c0150 to 006c0163 has its CatchHandler @ 005c0648 */
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
                    /* try { // try from 005c0164 to 006c0173 has its CatchHandler @ 005c05ec */
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  plVar9 = *(long **)(this + 0x10);
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
                    /* try { // try from 005c0194 to 006c019b has its CatchHandler @ 005c07fc */
    lVar6 = plVar9[2];
                    /* try { // try from 005c019c to 006c01b3 has its CatchHandler @ 005c080c */
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
                    /* try { // try from 005c01b4 to 006c0217 has its CatchHandler @ 005c0044 */
  puVar4 = (undefined *)(*(long *)this + -0x18);
  if (puVar4 != PTR_DAT_007e5de8) {
    piVar7 = (int *)(*(long *)this + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
                    /* try { // try from 005c0218 to 006c030b has its CatchHandler @ 005c080c */
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
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


