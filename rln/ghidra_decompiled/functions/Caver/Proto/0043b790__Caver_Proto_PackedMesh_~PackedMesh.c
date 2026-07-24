/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043b790
 * Function: Caver::Proto::PackedMesh::~PackedMesh
 * Signature: undefined __thiscall ~PackedMesh(PackedMesh * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PackedMesh::~PackedMesh() */

void __thiscall Caver::Proto::PackedMesh::~PackedMesh(PackedMesh *this)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  PackedMesh *pPVar5;
  long lVar6;
  undefined *puVar7;
  int *piVar8;
  int iVar9;
  
                    /* try { // try from 0043b79c to 0053b8ab has its CatchHandler @ 0043b734 */
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  plVar4 = *(long **)(this + 0x88);
  bVar3 = plVar4 != (long *)PTR__default_vertex_data__007e74e8;
  *(undefined **)this = PTR_vtable_007e5790 + 0x10;
  if ((bVar3) && (plVar4 != (long *)0x0)) {
    puVar7 = (undefined *)(*plVar4 + -0x18);
    if (puVar7 != PTR_DAT_007e5de8) {
      piVar8 = (int *)(*plVar4 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar9 < 1) {
                    /* catch() { ... } // from try @ 0043b780 with catch @ 0043b8a8 */
        operator_delete(puVar7);
      }
    }
    operator_delete(plVar4);
  }
  pPVar5 = *(PackedMesh **)(this + 0x60);
  if ((pPVar5 != this + 0x70) && (pPVar5 != (PackedMesh *)0x0)) {
    operator_delete__(pPVar5);
  }
  pPVar5 = *(PackedMesh **)(this + 0x38);
  if ((pPVar5 != this + 0x48) && (pPVar5 != (PackedMesh *)0x0)) {
    operator_delete__(pPVar5);
  }
  pPVar5 = *(PackedMesh **)(this + 0x10);
  if ((pPVar5 != this + 0x20) && (pPVar5 != (PackedMesh *)0x0)) {
                    /* catch() { ... } // from try @ 0043b78c with catch @ 0043b838 */
    operator_delete__(pPVar5);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  if (*(long *)(lVar2 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


