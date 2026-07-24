/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043b4b0
 * Function: Caver::Proto::PackedMesh::MergeFrom
 * Signature: undefined __thiscall MergeFrom(PackedMesh * this, PackedMesh * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PackedMesh::MergeFrom(Caver::Proto::PackedMesh const&) */

void __thiscall Caver::Proto::PackedMesh::MergeFrom(PackedMesh *this,PackedMesh *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  undefined *puVar7;
  LogMessage *pLVar8;
  void *pvVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  PackedMesh *pPVar13;
  int iVar14;
  ulong uVar15;
  LogFinisher aLStack_80 [8];
  LogMessage aLStack_78 [32];
  long local_58;
  
                    /* try { // try from 0043b4b0 to 0053b4d7 has its CatchHandler @ 0043b524 */
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (param_1 == this) {
                    /* try { // try from 0043b4f8 to 0053b51f has its CatchHandler @ 0043b664 */
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_78,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x6b8f);
    pLVar8 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_78,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_80,pLVar8);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_78);
  }
                    /* catch() { ... } // from try @ 0043b4b0 with catch @ 0043b524 */
  uVar15 = (ulong)*(uint *)(param_1 + 0x18);
  iVar14 = *(int *)(this + 0x18);
  uVar1 = *(uint *)(param_1 + 0x18) + iVar14;
  if (*(int *)(this + 0x1c) < (int)uVar1) {
    uVar2 = *(int *)(this + 0x1c) * 2;
    if ((int)uVar1 <= (int)uVar2) {
      uVar1 = uVar2;
    }
                    /* try { // try from 0043b548 to 0053b56f has its CatchHandler @ 0043b574 */
    pPVar13 = *(PackedMesh **)(this + 0x10);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (long)(int)uVar1;
    *(uint *)(this + 0x1c) = uVar1;
    uVar11 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    if (SUB168(auVar3 * ZEXT816(4),8) != 0) {
      uVar11 = 0xffffffffffffffff;
    }
    pvVar9 = operator_new__(uVar11);
                    /* catch() { ... } // from try @ 0043b548 with catch @ 0043b574 */
    *(void **)(this + 0x10) = pvVar9;
                    /* catch() { ... } // from try @ 0043b140 with catch @ 0043b578 */
    memcpy(pvVar9,pPVar13,(long)iVar14 << 2);
    if ((pPVar13 != this + 0x20) && (pPVar13 != (PackedMesh *)0x0)) {
      operator_delete__(pPVar13);
      iVar14 = *(int *)(this + 0x18);
      uVar15 = (ulong)*(uint *)(param_1 + 0x18);
    }
  }
                    /* try { // try from 0043b59c to 0053b5c3 has its CatchHandler @ 0043b610 */
  memcpy((void *)(*(long *)(this + 0x10) + (long)iVar14 * 4),*(void **)(param_1 + 0x10),
         -(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2);
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + *(int *)(param_1 + 0x18);
  uVar15 = (ulong)*(uint *)(param_1 + 0x40);
  iVar14 = *(int *)(this + 0x40);
  uVar1 = *(uint *)(param_1 + 0x40) + iVar14;
  if (*(int *)(this + 0x44) < (int)uVar1) {
    uVar2 = *(int *)(this + 0x44) * 2;
    if ((int)uVar1 <= (int)uVar2) {
      uVar1 = uVar2;
    }
                    /* try { // try from 0043b5e4 to 0053b60b has its CatchHandler @ 0043b664 */
    pPVar13 = *(PackedMesh **)(this + 0x38);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (long)(int)uVar1;
    *(uint *)(this + 0x44) = uVar1;
    uVar11 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    if (SUB168(auVar4 * ZEXT816(4),8) != 0) {
      uVar11 = 0xffffffffffffffff;
    }
    pvVar9 = operator_new__(uVar11);
                    /* catch() { ... } // from try @ 0043b59c with catch @ 0043b610 */
    *(void **)(this + 0x38) = pvVar9;
    memcpy(pvVar9,pPVar13,(long)iVar14 << 2);
    if ((pPVar13 != this + 0x48) && (pPVar13 != (PackedMesh *)0x0)) {
      operator_delete__(pPVar13);
      iVar14 = *(int *)(this + 0x40);
                    /* try { // try from 0043b634 to 0053b65b has its CatchHandler @ 0043b660 */
      uVar15 = (ulong)*(uint *)(param_1 + 0x40);
    }
  }
  memcpy((void *)(*(long *)(this + 0x38) + (long)iVar14 * 4),*(void **)(param_1 + 0x38),
         -(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2);
  *(int *)(this + 0x40) = *(int *)(this + 0x40) + *(int *)(param_1 + 0x40);
                    /* try { // try from 0043b65c to 0053b72b has its CatchHandler @ 0043b080 */
  uVar15 = (ulong)*(uint *)(param_1 + 0x68);
                    /* catch() { ... } // from try @ 0043b634 with catch @ 0043b660 */
  iVar14 = *(int *)(this + 0x68);
                    /* catch() { ... } // from try @ 0043b4f8 with catch @ 0043b664
                       catch() { ... } // from try @ 0043b5e4 with catch @ 0043b664 */
  uVar1 = *(uint *)(param_1 + 0x68) + iVar14;
  if (*(int *)(this + 0x6c) < (int)uVar1) {
                    /* catch() { ... } // from try @ 0043b1f4 with catch @ 0043b670 */
    uVar2 = *(int *)(this + 0x6c) * 2;
                    /* catch() { ... } // from try @ 0043b0b4 with catch @ 0043b674 */
    if ((int)uVar1 <= (int)uVar2) {
      uVar1 = uVar2;
    }
                    /* catch() { ... } // from try @ 0043b208 with catch @ 0043b680
                       catch() { ... } // from try @ 0043b2f4 with catch @ 0043b680 */
    pPVar13 = *(PackedMesh **)(this + 0x60);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (long)(int)uVar1;
    *(uint *)(this + 0x6c) = uVar1;
    uVar11 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    if (SUB168(auVar5 * ZEXT816(4),8) != 0) {
      uVar11 = 0xffffffffffffffff;
    }
    pvVar9 = operator_new__(uVar11);
    *(void **)(this + 0x60) = pvVar9;
    memcpy(pvVar9,pPVar13,(long)iVar14 << 2);
                    /* catch() { ... } // from try @ 0043b0c8 with catch @ 0043b6bc
                       catch() { ... } // from try @ 0043b1b4 with catch @ 0043b6bc */
    if ((pPVar13 != this + 0x70) && (pPVar13 != (PackedMesh *)0x0)) {
      operator_delete__(pPVar13);
      iVar14 = *(int *)(this + 0x68);
      uVar15 = (ulong)*(uint *)(param_1 + 0x68);
    }
  }
  memcpy((void *)(*(long *)(this + 0x60) + (long)iVar14 * 4),*(void **)(param_1 + 0x60),
         -(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2);
  *(int *)(this + 0x68) = *(int *)(this + 0x68) + *(int *)(param_1 + 0x68);
  puVar7 = PTR__default_vertex_data__007e74e8;
  if (((byte)param_1[0x90] >> 3 & 1) != 0) {
    plVar10 = *(long **)(this + 0x88);
    uVar12 = *(undefined8 *)(param_1 + 0x88);
    *(uint *)(this + 0x90) = *(uint *)(this + 0x90) | 8;
    if (plVar10 == (long *)puVar7) {
      plVar10 = operator_new(8);
                    /* catch() { ... } // from try @ 0043b79c with catch @ 0043b734 */
      *plVar10 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x88) = plVar10;
    }
    FUN_0066a6a8(plVar10,uVar12);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


