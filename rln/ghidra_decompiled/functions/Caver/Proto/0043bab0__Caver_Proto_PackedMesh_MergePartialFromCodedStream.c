/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043bab0
 * Function: Caver::Proto::PackedMesh::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(PackedMesh * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PackedMesh::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */

void __thiscall
Caver::Proto::PackedMesh::MergePartialFromCodedStream(PackedMesh *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  undefined *puVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  void *pvVar14;
  undefined8 uVar15;
  ulong uVar16;
  string *psVar17;
  byte *pbVar18;
  PackedMesh *pPVar19;
  uint local_70;
  uint local_6c;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
                    /* catch() { ... } // from try @ 0043bb3c with catch @ 0043bb0c */
  puVar1 = PTR_DAT_007e5de8 + 0x18;
                    /* try { // try from 0043bb28 to 0053bb3b has its CatchHandler @ 0043bb60 */
LAB_0043bb2c:
  pbVar18 = *(byte **)(param_1 + 8);
                    /* try { // try from 0043bb3c to 0053bb63 has its CatchHandler @ 0043bb0c */
  if ((*(byte **)(param_1 + 0x10) <= pbVar18) || (bVar3 = *pbVar18, (char)bVar3 < '\0')) {
    uVar11 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
                    /* catch() { ... } // from try @ 0043bb28 with catch @ 0043bb60 */
    uVar16 = (ulong)uVar11;
    *(uint *)(param_1 + 0x20) = uVar11;
    if (uVar11 != 0) goto LAB_0043bb6c;
LAB_0043c02c:
                    /* catch() { ... } // from try @ 0043bf9c with catch @ 0043c02c */
    uVar15 = 1;
    goto LAB_0043c030;
  }
  uVar16 = (ulong)bVar3;
  *(uint *)(param_1 + 0x20) = (uint)bVar3;
  *(byte **)(param_1 + 8) = pbVar18 + 1;
  if (bVar3 == 0) goto LAB_0043c02c;
LAB_0043bb6c:
                    /* catch() { ... } // from try @ 0043bc9c with catch @ 0043bb70
                       catch() { ... } // from try @ 0043bd58 with catch @ 0043bb70 */
  uVar11 = (uint)uVar16;
  switch((int)(uVar16 >> 3)) {
  case 1:
    if ((uVar11 & 7) == 5) {
      bVar10 = google::protobuf::internal::WireFormatLite::
               ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)15>
                         (1,10,param_1,(RepeatedField *)(this + 0x10));
      if (!bVar10) goto LAB_0043c024;
    }
    else {
      if ((uVar11 & 7) != 2) goto switchD_0043bb84_default;
      pbVar18 = *(byte **)(param_1 + 8);
      if ((pbVar18 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar18)) {
        local_70 = (uint)*pbVar18;
        *(byte **)(param_1 + 8) = pbVar18 + 1;
      }
      else {
                    /* catch() { ... } // from try @ 0043bbf4 with catch @ 0043bcc4 */
        uVar16 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_70);
        if ((uVar16 & 1) == 0) goto LAB_0043c024;
      }
      iVar12 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_70);
      iVar13 = google::protobuf::io::CodedInputStream::BytesUntilLimit(param_1);
                    /* try { // try from 0043bce8 to 0053bd57 has its CatchHandler @ 0043bd78 */
      while (0 < iVar13) {
        uVar16 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                           (param_1,&local_6c);
        uVar11 = local_6c;
        if ((uVar16 & 1) == 0) goto LAB_0043c024;
        iVar13 = *(int *)(this + 0x18);
        if (iVar13 == *(int *)(this + 0x1c)) {
          uVar4 = iVar13 * 2;
          if ((int)uVar4 < iVar13 + 1) {
            uVar4 = iVar13 + 1;
          }
          pPVar19 = *(PackedMesh **)(this + 0x10);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (long)(int)uVar4;
          *(uint *)(this + 0x1c) = uVar4;
          uVar16 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
          if (SUB168(auVar5 * ZEXT816(4),8) != 0) {
            uVar16 = 0xffffffffffffffff;
          }
          pvVar14 = operator_new__(uVar16);
          *(void **)(this + 0x10) = pvVar14;
          memcpy(pvVar14,pPVar19,(long)iVar13 << 2);
                    /* try { // try from 0043bd58 to 0053bd7b has its CatchHandler @ 0043bb70 */
          if ((pPVar19 != this + 0x20) && (pPVar19 != (PackedMesh *)0x0)) {
            operator_delete__(pPVar19);
            iVar13 = *(int *)(this + 0x18);
          }
        }
                    /* catch() { ... } // from try @ 0043bce8 with catch @ 0043bd78 */
        *(int *)(this + 0x18) = iVar13 + 1;
        *(uint *)(*(long *)(this + 0x10) + (long)iVar13 * 4) = uVar11;
        iVar13 = google::protobuf::io::CodedInputStream::BytesUntilLimit(param_1);
      }
      google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar12);
    }
    pbVar18 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar18) || (*pbVar18 != 0x12)) goto LAB_0043bb2c;
    pbVar18 = pbVar18 + 1;
    *(byte **)(param_1 + 8) = pbVar18;
    if (pbVar18 < *(byte **)(param_1 + 0x10)) {
LAB_0043bc30:
      if ((char)*pbVar18 < '\0') goto LAB_0043bdc0;
      local_70 = (uint)*pbVar18;
      *(byte **)(param_1 + 8) = pbVar18 + 1;
    }
    else {
LAB_0043bdc0:
                    /* catch() { ... } // from try @ 0043bf48 with catch @ 0043bdc4
                       catch() { ... } // from try @ 0043c00c with catch @ 0043bdc4 */
      uVar16 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_70);
      if ((uVar16 & 1) == 0) goto LAB_0043c024;
    }
    iVar12 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_70);
    iVar13 = google::protobuf::io::CodedInputStream::BytesUntilLimit(param_1);
    while (0 < iVar13) {
      uVar16 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(param_1,&local_6c)
      ;
      uVar11 = local_6c;
      if ((uVar16 & 1) == 0) goto LAB_0043c024;
      iVar13 = *(int *)(this + 0x40);
      if (iVar13 == *(int *)(this + 0x44)) {
        uVar4 = iVar13 * 2;
        if ((int)uVar4 < iVar13 + 1) {
          uVar4 = iVar13 + 1;
        }
        pPVar19 = *(PackedMesh **)(this + 0x38);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (long)(int)uVar4;
        *(uint *)(this + 0x44) = uVar4;
        uVar16 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
        if (SUB168(auVar6 * ZEXT816(4),8) != 0) {
          uVar16 = 0xffffffffffffffff;
        }
        pvVar14 = operator_new__(uVar16);
        *(void **)(this + 0x38) = pvVar14;
        memcpy(pvVar14,pPVar19,(long)iVar13 << 2);
        if ((pPVar19 != this + 0x48) && (pPVar19 != (PackedMesh *)0x0)) {
                    /* try { // try from 0043be64 to 0053bf47 has its CatchHandler @ 0043bf78 */
          operator_delete__(pPVar19);
          iVar13 = *(int *)(this + 0x40);
        }
      }
      *(int *)(this + 0x40) = iVar13 + 1;
      *(uint *)(*(long *)(this + 0x38) + (long)iVar13 * 4) = uVar11;
      iVar13 = google::protobuf::io::CodedInputStream::BytesUntilLimit(param_1);
    }
    google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar12);
    break;
  case 2:
    if ((uVar11 & 7) != 5) {
      if ((uVar11 & 7) != 2) goto switchD_0043bb84_default;
      pbVar18 = *(byte **)(param_1 + 8);
      if (pbVar18 < *(byte **)(param_1 + 0x10)) goto LAB_0043bc30;
      goto LAB_0043bdc0;
    }
    bVar10 = google::protobuf::internal::WireFormatLite::
             ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)15>
                       (1,0x12,param_1,(RepeatedField *)(this + 0x38));
    if (!bVar10) goto LAB_0043c024;
    break;
  case 3:
    if ((uVar11 & 7) != 5) {
      if ((uVar11 & 7) != 2) goto switchD_0043bb84_default;
      pbVar18 = *(byte **)(param_1 + 8);
      if (pbVar18 < *(byte **)(param_1 + 0x10)) goto LAB_0043bbe4;
      goto LAB_0043bec4;
    }
    bVar10 = google::protobuf::internal::WireFormatLite::
             ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)15>
                       (1,0x1a,param_1,(RepeatedField *)(this + 0x60));
    if (bVar10) goto LAB_0043bf9c;
    goto LAB_0043c024;
  case 4:
    if ((uVar11 & 7) != 2) goto switchD_0043bb84_default;
    goto LAB_0043bfbc;
  default:
switchD_0043bb84_default:
    if ((uVar11 & 7) == 4) goto LAB_0043c02c;
    uVar16 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar11);
    if ((uVar16 & 1) == 0) {
LAB_0043c024:
      uVar15 = 0;
LAB_0043c030:
      if (*(long *)(lVar8 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar15);
    }
    goto LAB_0043bb2c;
  }
  pbVar18 = *(byte **)(param_1 + 8);
  if ((pbVar18 < *(byte **)(param_1 + 0x10)) && (*pbVar18 == 0x1a)) {
    pbVar18 = pbVar18 + 1;
    *(byte **)(param_1 + 8) = pbVar18;
    if (pbVar18 < *(byte **)(param_1 + 0x10)) {
LAB_0043bbe4:
      if ((char)*pbVar18 < '\0') goto LAB_0043bec4;
                    /* try { // try from 0043bbf4 to 0053bc9b has its CatchHandler @ 0043bcc4 */
      local_70 = (uint)*pbVar18;
      *(byte **)(param_1 + 8) = pbVar18 + 1;
    }
    else {
LAB_0043bec4:
      uVar16 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_70);
      if ((uVar16 & 1) == 0) goto LAB_0043c024;
    }
    iVar12 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_70);
    iVar13 = google::protobuf::io::CodedInputStream::BytesUntilLimit(param_1);
    while (0 < iVar13) {
      uVar16 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(param_1,&local_6c)
      ;
      uVar11 = local_6c;
      if ((uVar16 & 1) == 0) goto LAB_0043c024;
      iVar13 = *(int *)(this + 0x68);
      if (iVar13 == *(int *)(this + 0x6c)) {
        uVar4 = iVar13 * 2;
        if ((int)uVar4 < iVar13 + 1) {
          uVar4 = iVar13 + 1;
        }
        pPVar19 = *(PackedMesh **)(this + 0x60);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (long)(int)uVar4;
        *(uint *)(this + 0x6c) = uVar4;
        uVar16 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
        if (SUB168(auVar7 * ZEXT816(4),8) != 0) {
          uVar16 = 0xffffffffffffffff;
        }
        pvVar14 = operator_new__(uVar16);
                    /* try { // try from 0043bf48 to 0053bf9b has its CatchHandler @ 0043bdc4 */
        *(void **)(this + 0x60) = pvVar14;
        memcpy(pvVar14,pPVar19,(long)iVar13 << 2);
        if ((pPVar19 != this + 0x70) && (pPVar19 != (PackedMesh *)0x0)) {
          operator_delete__(pPVar19);
          iVar13 = *(int *)(this + 0x68);
        }
      }
                    /* catch() { ... } // from try @ 0043be64 with catch @ 0043bf78 */
      *(int *)(this + 0x68) = iVar13 + 1;
      *(uint *)(*(long *)(this + 0x60) + (long)iVar13 * 4) = uVar11;
      iVar13 = google::protobuf::io::CodedInputStream::BytesUntilLimit(param_1);
    }
    google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar12);
LAB_0043bf9c:
                    /* try { // try from 0043bf9c to 0053c00b has its CatchHandler @ 0043c02c */
    pcVar2 = *(char **)(param_1 + 8);
    if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\"')) {
      *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_0043bfbc:
      puVar9 = PTR__default_vertex_data__007e74e8;
      psVar17 = *(string **)(this + 0x88);
      *(uint *)(this + 0x90) = *(uint *)(this + 0x90) | 8;
      if (psVar17 == (string *)puVar9) {
        psVar17 = operator_new(8);
        *(undefined **)psVar17 = puVar1;
        *(string **)(this + 0x88) = psVar17;
      }
      uVar16 = google::protobuf::internal::WireFormatLite::ReadBytes(param_1,psVar17);
      if ((uVar16 & 1) == 0) goto LAB_0043c024;
                    /* try { // try from 0043c00c to 0053c02f has its CatchHandler @ 0043bdc4 */
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar15 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
        goto LAB_0043c030;
      }
    }
  }
  goto LAB_0043bb2c;
}


