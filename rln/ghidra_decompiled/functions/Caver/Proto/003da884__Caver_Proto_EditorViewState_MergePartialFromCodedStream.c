/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003da884
 * Function: Caver::Proto::EditorViewState::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(EditorViewState * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EditorViewState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::EditorViewState::MergePartialFromCodedStream
          (EditorViewState *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  char *pcVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  string *psVar12;
  int iVar13;
  byte *pbVar14;
  Vector3 *pVVar15;
  uint local_6c;
  long local_68;
  
  puVar7 = PTR_DAT_007e5de8;
  puVar5 = PTR__default_file_path__007e4ba8;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_003da8d8:
  pbVar14 = *(byte **)(param_1 + 8);
  if ((pbVar14 < *(byte **)(param_1 + 0x10)) && (bVar3 = *pbVar14, -1 < (char)bVar3)) {
    uVar11 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
    *(byte **)(param_1 + 8) = pbVar14 + 1;
    if (bVar3 == 0) goto LAB_003dadc0;
LAB_003da918:
    uVar8 = (uint)uVar11;
    switch((int)(uVar11 >> 3)) {
    case 1:
      if ((uVar8 & 7) == 2) {
        while( true ) {
          iVar9 = *(int *)(this + 0x20);
          iVar13 = *(int *)(this + 0x24);
          if (iVar9 < iVar13) {
            *(int *)(this + 0x20) = iVar9 + 1;
            psVar12 = *(string **)(*(long *)(this + 0x18) + (long)iVar9 * 8);
          }
          else {
            if (iVar13 == *(int *)(this + 0x28)) {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                        ((RepeatedPtrFieldBase *)(this + 0x18),iVar13 + 1);
              iVar13 = *(int *)(this + 0x24);
            }
            *(int *)(this + 0x24) = iVar13 + 1;
            psVar12 = (string *)google::protobuf::internal::StringTypeHandlerBase::New();
            iVar9 = *(int *)(this + 0x20);
            *(int *)(this + 0x20) = iVar9 + 1;
            *(string **)(*(long *)(this + 0x18) + (long)iVar9 * 8) = psVar12;
          }
          uVar11 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar12);
          if ((uVar11 & 1) == 0) goto LAB_003dadb8;
          pcVar2 = *(char **)(param_1 + 8);
          if (*(char **)(param_1 + 0x10) <= pcVar2) goto LAB_003da8d8;
          if (*pcVar2 != '\n') break;
          *(char **)(param_1 + 8) = pcVar2 + 1;
        }
        if (*pcVar2 == '\x12') {
          *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_003daa58:
          puVar6 = PTR__default_inspected_object_identifier__007e7f88;
          psVar12 = *(string **)(this + 0x50);
          *(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 4;
          if (psVar12 == (string *)puVar6) {
            psVar12 = operator_new(8);
            *(undefined **)psVar12 = puVar1;
            *(string **)(this + 0x50) = psVar12;
          }
          uVar11 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar12);
          if ((uVar11 & 1) == 0) goto LAB_003dadb8;
          pcVar2 = *(char **)(param_1 + 8);
          if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x1a')) {
            *(char **)(param_1 + 8) = pcVar2 + 1;
            goto LAB_003daab8;
          }
        }
        goto LAB_003da8d8;
      }
      break;
    case 2:
      if ((uVar8 & 7) == 2) goto LAB_003daa58;
      break;
    case 3:
      if ((uVar8 & 7) == 2) {
LAB_003daab8:
        puVar6 = PTR__default_inspected_template_identifier__007e4d40;
        psVar12 = *(string **)(this + 0x58);
        *(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 8;
        if (psVar12 == (string *)puVar6) {
          psVar12 = operator_new(8);
          *(undefined **)psVar12 = puVar7 + 0x18;
          *(string **)(this + 0x58) = psVar12;
        }
        uVar11 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar12);
        if ((uVar11 & 1) == 0) goto LAB_003dadb8;
        pbVar14 = *(byte **)(param_1 + 8);
        if ((pbVar14 < *(byte **)(param_1 + 0x10)) && (*pbVar14 == 0x20)) {
          pbVar14 = pbVar14 + 1;
          *(byte **)(param_1 + 8) = pbVar14;
          if (pbVar14 < *(byte **)(param_1 + 0x10)) goto LAB_003daa20;
          goto LAB_003dab24;
        }
        goto LAB_003da8d8;
      }
      break;
    case 4:
      if ((uVar11 & 7) == 0) {
        pbVar14 = *(byte **)(param_1 + 8);
        if (pbVar14 < *(byte **)(param_1 + 0x10)) {
LAB_003daa20:
          if ((char)*pbVar14 < '\0') goto LAB_003dab24;
          local_6c = (uint)*pbVar14;
          *(byte **)(param_1 + 8) = pbVar14 + 1;
        }
        else {
LAB_003dab24:
          uVar11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
          if ((uVar11 & 1) == 0) goto LAB_003dadb8;
        }
        if (local_6c - 1 < 2) {
          *(uint *)(this + 0x60) = local_6c;
          *(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 0x10;
        }
        pcVar2 = *(char **)(param_1 + 8);
        if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '*')) {
          *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_003dab74:
          psVar12 = *(string **)(this + 0x10);
          *(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 1;
          if (psVar12 == (string *)puVar5) {
            psVar12 = operator_new(8);
            *(undefined **)psVar12 = puVar7 + 0x18;
            *(string **)(this + 0x10) = psVar12;
          }
          uVar11 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar12);
          if ((uVar11 & 1) == 0) goto LAB_003dadb8;
          pcVar2 = *(char **)(param_1 + 8);
          if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '2')) {
            *(char **)(param_1 + 8) = pcVar2 + 1;
            goto LAB_003dabe0;
          }
        }
        goto LAB_003da8d8;
      }
      break;
    case 5:
      if ((uVar8 & 7) == 2) goto LAB_003dab74;
      break;
    case 6:
      if ((uVar8 & 7) == 2) {
LAB_003dabe0:
        pVVar15 = *(Vector3 **)(this + 0x68);
        *(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 0x20;
        if (pVVar15 == (Vector3 *)0x0) {
          pVVar15 = operator_new(0x20);
          Vector3::Vector3(pVVar15);
          *(Vector3 **)(this + 0x68) = pVVar15;
        }
        pbVar14 = *(byte **)(param_1 + 8);
        if ((pbVar14 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar14)) {
          local_6c = (uint)*pbVar14;
          *(byte **)(param_1 + 8) = pbVar14 + 1;
        }
        else {
          uVar11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
          if ((uVar11 & 1) == 0) goto LAB_003dadb8;
        }
        iVar9 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar9 + 1;
        if (*(int *)(param_1 + 0x3c) <= iVar9) goto LAB_003dadb8;
        iVar9 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
        uVar11 = Vector3::MergePartialFromCodedStream(pVVar15,param_1);
        if (((uVar11 & 1) != 0) && (param_1[0x24] != (CodedInputStream)0x0)) {
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar9);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar2 = *(char **)(param_1 + 8);
          if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == ':')) {
            *(char **)(param_1 + 8) = pcVar2 + 1;
            goto LAB_003dacdc;
          }
          goto LAB_003da8d8;
        }
        goto LAB_003dadb8;
      }
      break;
    case 7:
      if ((uVar8 & 7) != 2) break;
LAB_003dacdc:
      pVVar15 = *(Vector3 **)(this + 0x70);
      *(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 0x40;
      if (pVVar15 == (Vector3 *)0x0) {
        pVVar15 = operator_new(0x20);
        Vector3::Vector3(pVVar15);
        *(Vector3 **)(this + 0x70) = pVVar15;
      }
      pbVar14 = *(byte **)(param_1 + 8);
      if ((pbVar14 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar14)) {
        local_6c = (uint)*pbVar14;
        *(byte **)(param_1 + 8) = pbVar14 + 1;
      }
      else {
        uVar11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
        if ((uVar11 & 1) == 0) goto LAB_003dadb8;
      }
      iVar9 = *(int *)(param_1 + 0x38);
      *(int *)(param_1 + 0x38) = iVar9 + 1;
      if (*(int *)(param_1 + 0x3c) <= iVar9) goto LAB_003dadb8;
      iVar9 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
      uVar11 = Vector3::MergePartialFromCodedStream(pVVar15,param_1);
      if (((uVar11 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003dadb8;
      google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar9);
      if (0 < *(int *)(param_1 + 0x38)) {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      }
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar10 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_003dadc4:
        if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar10);
        }
        return;
      }
      goto LAB_003da8d8;
    default:
      if ((uVar8 & 7) == 4) goto LAB_003dadc0;
      goto LAB_003dac44;
    }
    if ((uVar8 & 7) != 4) {
LAB_003dac44:
      uVar11 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar8);
      if ((uVar11 & 1) != 0) goto LAB_003da8d8;
LAB_003dadb8:
      uVar10 = 0;
      goto LAB_003dadc4;
    }
  }
  else {
    uVar8 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar11 = (ulong)uVar8;
    *(uint *)(param_1 + 0x20) = uVar8;
    if (uVar8 != 0) goto LAB_003da918;
  }
LAB_003dadc0:
  uVar10 = 1;
  goto LAB_003dadc4;
}


