/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004034dc
 * Function: Caver::Proto::ModelComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(ModelComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ModelComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::ModelComponent::MergePartialFromCodedStream
          (ModelComponent *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  char *pcVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  string *psVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  Vector3 *this_00;
  FloatColor *pFVar14;
  uint local_5c;
  long local_58;
  
  puVar5 = PTR__default_name__007e7d30;
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_00403528:
  do {
    pbVar12 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar12) || (bVar3 = *pbVar12, (char)bVar3 < '\0')) {
      uVar6 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar9 = (ulong)uVar6;
      *(uint *)(param_1 + 0x20) = uVar6;
      if (uVar6 != 0) goto LAB_00403568;
LAB_00403a48:
      uVar8 = 1;
      goto LAB_00403a4c;
    }
    uVar9 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
    *(byte **)(param_1 + 8) = pbVar12 + 1;
    if (bVar3 == 0) goto LAB_00403a48;
LAB_00403568:
    uVar6 = (uint)uVar9;
    switch((int)(uVar9 >> 3)) {
    case 1:
      if ((uVar6 & 7) == 2) {
        psVar10 = *(string **)(this + 0x10);
        *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 1;
        if (psVar10 == (string *)puVar5) {
          psVar10 = operator_new(8);
          *(undefined **)psVar10 = puVar1;
          *(string **)(this + 0x10) = psVar10;
        }
        uVar9 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar10);
        if ((uVar9 & 1) == 0) goto LAB_00403a40;
        pcVar2 = *(char **)(param_1 + 8);
        if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x15')) {
          *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_00403640:
          uVar9 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                            (param_1,&local_5c);
          if ((uVar9 & 1) == 0) goto LAB_00403a40;
          *(uint *)(this + 0x24) = local_5c;
          *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 8;
          pcVar2 = *(char **)(param_1 + 8);
          if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x1d')) {
            *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_00403684:
            uVar9 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                              (param_1,&local_5c);
            if ((uVar9 & 1) == 0) goto LAB_00403a40;
            *(uint *)(this + 0x28) = local_5c;
            *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x10;
            pcVar2 = *(char **)(param_1 + 8);
            if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '%')) {
              *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_004036c8:
              uVar9 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                (param_1,&local_5c);
              if ((uVar9 & 1) == 0) goto LAB_00403a40;
              *(uint *)(this + 0x20) = local_5c;
              uVar6 = *(uint *)(this + 0x48) | 4;
              *(uint *)(this + 0x48) = uVar6;
              pcVar2 = *(char **)(param_1 + 8);
              if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '*')) {
                *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_0040370c:
                pFVar14 = *(FloatColor **)(this + 0x30);
                *(uint *)(this + 0x48) = uVar6 | 0x20;
                if (pFVar14 == (FloatColor *)0x0) {
                  pFVar14 = operator_new(0x20);
                  FloatColor::FloatColor(pFVar14);
                  *(FloatColor **)(this + 0x30) = pFVar14;
                }
                pbVar12 = *(byte **)(param_1 + 8);
                if ((pbVar12 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar12)) {
                  local_5c = (uint)*pbVar12;
                  *(byte **)(param_1 + 8) = pbVar12 + 1;
                }
                else {
                  uVar9 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                    (param_1,&local_5c);
                  if ((uVar9 & 1) == 0) goto LAB_00403a40;
                }
                iVar7 = *(int *)(param_1 + 0x38);
                *(int *)(param_1 + 0x38) = iVar7 + 1;
                if (*(int *)(param_1 + 0x3c) <= iVar7) goto LAB_00403a40;
                iVar7 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_5c);
                uVar9 = FloatColor::MergePartialFromCodedStream(pFVar14,param_1);
                if (((uVar9 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                goto LAB_00403a40;
                google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar7);
                if (0 < *(int *)(param_1 + 0x38)) {
                  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                }
                pcVar2 = *(char **)(param_1 + 8);
                if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '2')) {
                  *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_0040383c:
                  this_00 = *(Vector3 **)(this + 0x18);
                  *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 2;
                  if (this_00 == (Vector3 *)0x0) {
                    this_00 = operator_new(0x20);
                    Vector3::Vector3(this_00);
                    *(Vector3 **)(this + 0x18) = this_00;
                  }
                  pbVar12 = *(byte **)(param_1 + 8);
                  if ((pbVar12 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar12)) {
                    local_5c = (uint)*pbVar12;
                    *(byte **)(param_1 + 8) = pbVar12 + 1;
                  }
                  else {
                    uVar9 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                      (param_1,&local_5c);
                    if ((uVar9 & 1) == 0) goto LAB_00403a40;
                  }
                  iVar7 = *(int *)(param_1 + 0x38);
                  *(int *)(param_1 + 0x38) = iVar7 + 1;
                  if (*(int *)(param_1 + 0x3c) <= iVar7) goto LAB_00403a40;
                  iVar7 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_5c);
                  uVar9 = Vector3::MergePartialFromCodedStream(this_00,param_1);
                  if (((uVar9 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                  goto LAB_00403a40;
                  google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar7);
                  if (0 < *(int *)(param_1 + 0x38)) {
                    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                  }
                  pbVar12 = *(byte **)(param_1 + 8);
                  pbVar11 = *(byte **)(param_1 + 0x10);
                  if ((pbVar12 < pbVar11) && (*pbVar12 == 0x38)) {
                    pbVar12 = pbVar12 + 1;
                    *(byte **)(param_1 + 8) = pbVar12;
                    if (pbVar12 < pbVar11) {
LAB_0040377c:
                      if ((char)*pbVar12 < '\0') goto LAB_0040391c;
                      pbVar13 = pbVar12 + 1;
                      local_5c = (uint)*pbVar12;
                      *(byte **)(param_1 + 8) = pbVar13;
                    }
                    else {
LAB_0040391c:
                      uVar9 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                        (param_1,&local_5c);
                      if ((uVar9 & 1) == 0) goto LAB_00403a40;
                      pbVar13 = *(byte **)(param_1 + 8);
                      pbVar11 = *(byte **)(param_1 + 0x10);
                    }
                    this[0x38] = (ModelComponent)(local_5c != 0);
                    uVar6 = *(uint *)(this + 0x48) | 0x40;
                    *(uint *)(this + 0x48) = uVar6;
                    if ((pbVar13 < pbVar11) && (*pbVar13 == 0x42)) {
                      *(byte **)(param_1 + 8) = pbVar13 + 1;
LAB_00403968:
                      pFVar14 = *(FloatColor **)(this + 0x40);
                      *(uint *)(this + 0x48) = uVar6 | 0x80;
                      if (pFVar14 == (FloatColor *)0x0) {
                        pFVar14 = operator_new(0x20);
                        FloatColor::FloatColor(pFVar14);
                        *(FloatColor **)(this + 0x40) = pFVar14;
                      }
                      pbVar12 = *(byte **)(param_1 + 8);
                      if ((pbVar12 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar12)) {
                        local_5c = (uint)*pbVar12;
                        *(byte **)(param_1 + 8) = pbVar12 + 1;
                      }
                      else {
                        uVar9 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                          (param_1,&local_5c);
                        if ((uVar9 & 1) == 0) goto LAB_00403a40;
                      }
                      iVar7 = *(int *)(param_1 + 0x38);
                      *(int *)(param_1 + 0x38) = iVar7 + 1;
                      if (*(int *)(param_1 + 0x3c) <= iVar7) goto LAB_00403a40;
                      iVar7 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_5c);
                      uVar9 = FloatColor::MergePartialFromCodedStream(pFVar14,param_1);
                      if (((uVar9 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                      goto LAB_00403a40;
                      google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar7);
                      if (0 < *(int *)(param_1 + 0x38)) {
                        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                      }
                      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
                         (*(int *)(param_1 + 0x2c) != 0)) {
                        uVar8 = 1;
                        *(undefined4 *)(param_1 + 0x20) = 0;
                        param_1[0x24] = (CodedInputStream)0x1;
                        goto LAB_00403a4c;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_00403528;
      }
      break;
    case 2:
      if ((uVar6 & 7) == 5) goto LAB_00403640;
      break;
    case 3:
      if ((uVar6 & 7) == 5) goto LAB_00403684;
      break;
    case 4:
      if ((uVar6 & 7) == 5) goto LAB_004036c8;
      break;
    case 5:
      if ((uVar6 & 7) == 2) {
        uVar6 = *(uint *)(this + 0x48);
        goto LAB_0040370c;
      }
      break;
    case 6:
      if ((uVar6 & 7) == 2) goto LAB_0040383c;
      break;
    case 7:
      if ((uVar9 & 7) == 0) {
        pbVar12 = *(byte **)(param_1 + 8);
        pbVar11 = *(byte **)(param_1 + 0x10);
        if (pbVar12 < pbVar11) goto LAB_0040377c;
        goto LAB_0040391c;
      }
      break;
    case 8:
      if ((uVar6 & 7) == 2) {
        uVar6 = *(uint *)(this + 0x48);
        goto LAB_00403968;
      }
    }
    if ((uVar6 & 7) == 4) goto LAB_00403a48;
    uVar9 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar6);
    if ((uVar9 & 1) == 0) {
LAB_00403a40:
      uVar8 = 0;
LAB_00403a4c:
      if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar8);
      }
      return;
    }
  } while( true );
}


