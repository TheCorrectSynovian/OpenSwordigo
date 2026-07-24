/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043cafc
 * Function: Caver::Proto::UnpackedMesh::~UnpackedMesh
 * Signature: undefined __thiscall ~UnpackedMesh(UnpackedMesh * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::UnpackedMesh::~UnpackedMesh() */

void __thiscall Caver::Proto::UnpackedMesh::~UnpackedMesh(UnpackedMesh *this)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  UnpackedMesh *pUVar5;
  long lVar6;
  undefined *puVar7;
  int *piVar8;
  int iVar9;
  
                    /* try { // try from 0043cb08 to 0053cb0f has its CatchHandler @ 0043cb30 */
  lVar2 = tpidr_el0;
                    /* try { // try from 0043cb10 to 0053cb33 has its CatchHandler @ 0043c99c */
  lVar6 = *(long *)(lVar2 + 0x28);
  plVar4 = *(long **)(this + 0x70);
                    /* catch() { ... } // from try @ 0043cb08 with catch @ 0043cb30 */
                    /* catch() { ... } // from try @ 0043cb48 with catch @ 0043cb34 */
  bVar3 = plVar4 != (long *)PTR__default_vertex_data__007e7148;
  *(undefined **)this = PTR_vtable_007e64d8 + 0x10;
  if ((bVar3) && (plVar4 != (long *)0x0)) {
                    /* try { // try from 0043cb44 to 0053cb47 has its CatchHandler @ 0043cb58 */
                    /* try { // try from 0043cb48 to 0053cb6b has its CatchHandler @ 0043cb34 */
    puVar7 = (undefined *)(*plVar4 + -0x18);
                    /* catch() { ... } // from try @ 0043cb44 with catch @ 0043cb58 */
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
        operator_delete(puVar7);
      }
    }
    operator_delete(plVar4);
  }
  pUVar5 = *(UnpackedMesh **)(this + 0x50);
                    /* try { // try from 0043cb6c to 0053cb87 has its CatchHandler @ 0043cb6c
                       catch() { ... } // from try @ 0043cb6c with catch @ 0043cb6c
                       catch() { ... } // from try @ 0043cb8c with catch @ 0043cb6c */
  if ((pUVar5 != this + 0x60) && (pUVar5 != (UnpackedMesh *)0x0)) {
    operator_delete__(pUVar5);
  }
  pUVar5 = *(UnpackedMesh **)(this + 0x30);
                    /* try { // try from 0043cb88 to 0053cb8b has its CatchHandler @ 0043cbc4 */
  if ((pUVar5 != this + 0x40) && (pUVar5 != (UnpackedMesh *)0x0)) {
                    /* try { // try from 0043cb8c to 0053cbd7 has its CatchHandler @ 0043cb6c */
    operator_delete__(pUVar5);
  }
  pUVar5 = *(UnpackedMesh **)(this + 0x10);
  if ((pUVar5 != this + 0x20) && (pUVar5 != (UnpackedMesh *)0x0)) {
    operator_delete__(pUVar5);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  if (*(long *)(lVar2 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 0043cb88 with catch @ 0043cbc4 */
  return;
}


