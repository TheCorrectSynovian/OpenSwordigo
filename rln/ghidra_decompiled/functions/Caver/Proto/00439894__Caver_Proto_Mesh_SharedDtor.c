/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00439894
 * Function: Caver::Proto::Mesh::SharedDtor
 * Signature: undefined __thiscall SharedDtor(Mesh * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Mesh::SharedDtor() */

void __thiscall Caver::Proto::Mesh::SharedDtor(Mesh *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  plVar4 = *(long **)(this + 0x90);
                    /* try { // try from 004398c4 to 005398cf has its CatchHandler @ 004399e8 */
  if ((plVar4 != (long *)PTR__default_vertex_data__007e5ae0) && (plVar4 != (long *)0x0)) {
    puVar6 = (undefined *)(*plVar4 + -0x18);
    if (puVar6 != PTR_DAT_007e5de8) {
      piVar7 = (int *)(*plVar4 + -8);
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
                    /* try { // try from 00439a0c to 00539a87 has its CatchHandler @ 00439aa8 */
        } while (cVar1 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete(puVar6);
      }
    }
    operator_delete(plVar4);
  }
  plVar4 = *(long **)(this + 0x98);
  if ((plVar4 != (long *)PTR__default_index_data__007e6c48) && (plVar4 != (long *)0x0)) {
                    /* try { // try from 0043990c to 0053990f has its CatchHandler @ 004399e0 */
    puVar6 = (undefined *)(*plVar4 + -0x18);
                    /* try { // try from 00439910 to 0053995b has its CatchHandler @ 00439868 */
    if (puVar6 != PTR_DAT_007e5de8) {
      piVar7 = (int *)(*plVar4 + -8);
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
        operator_delete(puVar6);
                    /* try { // try from 00439a88 to 00539aab has its CatchHandler @ 00439868 */
      }
    }
    operator_delete(plVar4);
  }
  if (*(Mesh **)PTR_default_instance__007e66e0 != this) {
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 8))();
    }
    if (*(long **)(this + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x20) + 8))();
    }
                    /* try { // try from 0043995c to 0053995f has its CatchHandler @ 004399e8 */
    if (*(long **)(this + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x28) + 8))();
    }
    if (*(long **)(this + 0x68) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x68) + 8))();
    }
                    /* try { // try from 00439980 to 00539983 has its CatchHandler @ 004399d0 */
                    /* try { // try from 00439984 to 00539a0b has its CatchHandler @ 00439868 */
    if (*(long **)(this + 0x70) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x70) + 8))();
    }
    if (*(long **)(this + 0x78) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x78) + 8))();
    }
    if (*(long **)(this + 0x80) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x80) + 8))();
    }
    if (*(long **)(this + 0x88) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x88) + 8))();
    }
  }
                    /* catch() { ... } // from try @ 00439980 with catch @ 004399d0 */
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 0043990c with catch @ 004399e0 */
                    /* catch() { ... } // from try @ 004398c4 with catch @ 004399e8
                       catch() { ... } // from try @ 0043995c with catch @ 004399e8 */
  return;
}


