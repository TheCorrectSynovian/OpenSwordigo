/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d19d0
 * Function: Caver::SoundEffect::~SoundEffect
 * Signature: undefined __thiscall ~SoundEffect(SoundEffect * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffect::~SoundEffect() */

void __thiscall Caver::SoundEffect::~SoundEffect(SoundEffect *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  long *plVar10;
  
  puVar4 = PTR_vtable_007e6fc8;
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  plVar10 = *(long **)(this + 0x30);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined **)this = puVar4 + 0x10;
  if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar7 = plVar10[2];
                    /* try { // try from 005d1a38 to 006d1a3f has its CatchHandler @ 005d29d8 */
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  plVar10 = *(long **)(this + 0x30);
                    /* try { // try from 005d1a60 to 006d1a87 has its CatchHandler @ 005d28e0 */
  if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar7 = plVar10[2];
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
                    /* try { // try from 005d1a88 to 006d1a93 has its CatchHandler @ 005d34e0 */
                    /* try { // try from 005d1a94 to 006d1a9b has its CatchHandler @ 005d29d4 */
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  puVar4 = PTR_DAT_007e5de8;
                    /* try { // try from 005d1a9c to 006d1b0b has its CatchHandler @ 005d34e0 */
  puVar5 = (undefined *)(*(long *)(this + 0x20) + -0x18);
  if (puVar5 != PTR_DAT_007e5de8) {
    piVar8 = (int *)(*(long *)(this + 0x20) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 005d1b60 to 006d1b87 has its CatchHandler @ 005d28dc */
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(puVar5);
    }
  }
  puVar5 = (undefined *)(*(long *)(this + 0x18) + -0x18);
  if (puVar5 != puVar4) {
    piVar8 = (int *)(*(long *)(this + 0x18) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(puVar5);
                    /* try { // try from 005d1b9c to 006d1ba3 has its CatchHandler @ 005d2980 */
    }
  }
  puVar5 = (undefined *)(*(long *)(this + 0x10) + -0x18);
  if (puVar5 != puVar4) {
    piVar8 = (int *)(*(long *)(this + 0x10) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(puVar5);
    }
  }
  if (*(long *)(lVar3 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


