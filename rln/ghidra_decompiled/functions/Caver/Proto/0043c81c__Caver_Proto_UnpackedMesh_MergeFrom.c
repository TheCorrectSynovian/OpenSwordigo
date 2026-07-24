/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043c81c
 * Function: Caver::Proto::UnpackedMesh::MergeFrom
 * Signature: undefined __thiscall MergeFrom(UnpackedMesh * this, UnpackedMesh * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::UnpackedMesh::MergeFrom(Caver::Proto::UnpackedMesh const&) */

void __thiscall Caver::Proto::UnpackedMesh::MergeFrom(UnpackedMesh *this,UnpackedMesh *param_1)

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
  UnpackedMesh *pUVar13;
  int iVar14;
  ulong uVar15;
  LogFinisher aLStack_80 [8];
  LogMessage aLStack_78 [32];
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_78,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x6caa);
    pLVar8 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_78,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_80,pLVar8);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_78);
  }
  uVar15 = (ulong)*(uint *)(param_1 + 0x18);
  iVar14 = *(int *)(this + 0x18);
  uVar1 = *(uint *)(param_1 + 0x18) + iVar14;
  if (*(int *)(this + 0x1c) < (int)uVar1) {
    uVar2 = *(int *)(this + 0x1c) * 2;
    if ((int)uVar1 <= (int)uVar2) {
      uVar1 = uVar2;
    }
    pUVar13 = *(UnpackedMesh **)(this + 0x10);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (long)(int)uVar1;
    *(uint *)(this + 0x1c) = uVar1;
    uVar11 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    if (SUB168(auVar3 * ZEXT816(4),8) != 0) {
      uVar11 = 0xffffffffffffffff;
    }
    pvVar9 = operator_new__(uVar11);
    *(void **)(this + 0x10) = pvVar9;
    memcpy(pvVar9,pUVar13,(long)iVar14 << 2);
    if ((pUVar13 != this + 0x20) && (pUVar13 != (UnpackedMesh *)0x0)) {
      operator_delete__(pUVar13);
      iVar14 = *(int *)(this + 0x18);
      uVar15 = (ulong)*(uint *)(param_1 + 0x18);
    }
  }
  memcpy((void *)(*(long *)(this + 0x10) + (long)iVar14 * 4),*(void **)(param_1 + 0x10),
         -(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2);
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + *(int *)(param_1 + 0x18);
  uVar15 = (ulong)*(uint *)(param_1 + 0x38);
  iVar14 = *(int *)(this + 0x38);
  uVar1 = *(uint *)(param_1 + 0x38) + iVar14;
  if (*(int *)(this + 0x3c) < (int)uVar1) {
    uVar2 = *(int *)(this + 0x3c) * 2;
    if ((int)uVar1 <= (int)uVar2) {
      uVar1 = uVar2;
    }
    pUVar13 = *(UnpackedMesh **)(this + 0x30);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (long)(int)uVar1;
    *(uint *)(this + 0x3c) = uVar1;
    uVar11 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    if (SUB168(auVar4 * ZEXT816(4),8) != 0) {
      uVar11 = 0xffffffffffffffff;
    }
    pvVar9 = operator_new__(uVar11);
    *(void **)(this + 0x30) = pvVar9;
    memcpy(pvVar9,pUVar13,(long)iVar14 << 2);
    if ((pUVar13 != this + 0x40) && (pUVar13 != (UnpackedMesh *)0x0)) {
      operator_delete__(pUVar13);
                    /* catch() { ... } // from try @ 0043ca2c with catch @ 0043c99c
                       catch() { ... } // from try @ 0043cb10 with catch @ 0043c99c */
      iVar14 = *(int *)(this + 0x38);
      uVar15 = (ulong)*(uint *)(param_1 + 0x38);
    }
  }
  memcpy((void *)(*(long *)(this + 0x30) + (long)iVar14 * 4),*(void **)(param_1 + 0x30),
         -(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2);
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + *(int *)(param_1 + 0x38);
  uVar15 = (ulong)*(uint *)(param_1 + 0x58);
  iVar14 = *(int *)(this + 0x58);
  uVar1 = *(uint *)(param_1 + 0x58) + iVar14;
  if (*(int *)(this + 0x5c) < (int)uVar1) {
    uVar2 = *(int *)(this + 0x5c) * 2;
    if ((int)uVar1 <= (int)uVar2) {
      uVar1 = uVar2;
    }
    pUVar13 = *(UnpackedMesh **)(this + 0x50);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (long)(int)uVar1;
    *(uint *)(this + 0x5c) = uVar1;
    uVar11 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
                    /* try { // try from 0043ca04 to 0053ca2b has its CatchHandler @ 0043cab8 */
    if (SUB168(auVar5 * ZEXT816(4),8) != 0) {
      uVar11 = 0xffffffffffffffff;
    }
    pvVar9 = operator_new__(uVar11);
    *(void **)(this + 0x50) = pvVar9;
    memcpy(pvVar9,pUVar13,(long)iVar14 << 2);
                    /* try { // try from 0043ca2c to 0053cb07 has its CatchHandler @ 0043c99c */
    if ((pUVar13 != this + 0x60) && (pUVar13 != (UnpackedMesh *)0x0)) {
      operator_delete__(pUVar13);
      iVar14 = *(int *)(this + 0x58);
      uVar15 = (ulong)*(uint *)(param_1 + 0x58);
    }
  }
  memcpy((void *)(*(long *)(this + 0x50) + (long)iVar14 * 4),*(void **)(param_1 + 0x50),
         -(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2);
  *(int *)(this + 0x58) = *(int *)(this + 0x58) + *(int *)(param_1 + 0x58);
  puVar7 = PTR__default_vertex_data__007e7148;
  if (((byte)param_1[0x78] >> 3 & 1) != 0) {
    plVar10 = *(long **)(this + 0x70);
    uVar12 = *(undefined8 *)(param_1 + 0x70);
    *(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 8;
    if (plVar10 == (long *)puVar7) {
      plVar10 = operator_new(8);
      *plVar10 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x70) = plVar10;
    }
    FUN_0066a6a8(plVar10,uVar12);
  }
                    /* catch() { ... } // from try @ 0043ca04 with catch @ 0043cab8 */
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


