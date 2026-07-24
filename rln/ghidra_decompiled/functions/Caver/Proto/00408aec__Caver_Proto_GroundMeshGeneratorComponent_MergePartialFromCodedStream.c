/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00408aec
 * Function: Caver::Proto::GroundMeshGeneratorComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(GroundMeshGeneratorComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundMeshGeneratorComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::GroundMeshGeneratorComponent::MergePartialFromCodedStream
          (GroundMeshGeneratorComponent *this,CodedInputStream *param_1)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
LAB_00408ff8:
  pbVar7 = *(byte **)(param_1 + 8);
  if ((pbVar7 < *(byte **)(param_1 + 0x10)) && (bVar2 = *pbVar7, -1 < (char)bVar2)) {
    uVar6 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar7 + 1;
    if (bVar2 == 0) goto LAB_00409020;
LAB_00408b34:
    uVar4 = (uint)uVar6;
    switch((int)(uVar6 >> 3)) {
    case 1:
      if ((uVar6 & 7) != 0) break;
      pbVar7 = *(byte **)(param_1 + 8);
      pbVar8 = *(byte **)(param_1 + 0x10);
      if ((pbVar8 <= pbVar7) || ((char)*pbVar7 < '\0')) {
        uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
        if ((uVar6 & 1) != 0) {
          pbVar9 = *(byte **)(param_1 + 8);
          pbVar8 = *(byte **)(param_1 + 0x10);
          goto LAB_00408e30;
        }
        goto LAB_00409028;
      }
      pbVar9 = pbVar7 + 1;
      local_3c = (uint)*pbVar7;
      *(byte **)(param_1 + 8) = pbVar9;
LAB_00408e30:
      *(uint *)(this + 0xc) = local_3c;
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 1;
      if ((pbVar9 < pbVar8) && (*pbVar9 == 0x10)) {
        pbVar9 = pbVar9 + 1;
        *(byte **)(param_1 + 8) = pbVar9;
        if (pbVar9 < pbVar8) goto LAB_00408c44;
        goto LAB_00408e64;
      }
      goto LAB_00408ff8;
    case 2:
      if ((uVar6 & 7) == 0) {
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
        if (pbVar9 < pbVar8) {
LAB_00408c44:
          if ((char)*pbVar9 < '\0') goto LAB_00408e64;
          pbVar7 = pbVar9 + 1;
          local_3c = (uint)*pbVar9;
          *(byte **)(param_1 + 8) = pbVar7;
        }
        else {
LAB_00408e64:
          uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
          if ((uVar6 & 1) == 0) goto LAB_00409028;
          pbVar7 = *(byte **)(param_1 + 8);
          pbVar8 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0x10) = local_3c;
        *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 2;
        if ((pbVar7 < pbVar8) && (*pbVar7 == 0x18)) {
          pbVar7 = pbVar7 + 1;
          *(byte **)(param_1 + 8) = pbVar7;
          if (pbVar7 < pbVar8) {
LAB_00408bd4:
            if ((char)*pbVar7 < '\0') goto LAB_00408eb0;
            pbVar9 = pbVar7 + 1;
            local_3c = (uint)*pbVar7;
            *(byte **)(param_1 + 8) = pbVar9;
          }
          else {
LAB_00408eb0:
            uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
            if ((uVar6 & 1) == 0) goto LAB_00409028;
            pbVar9 = *(byte **)(param_1 + 8);
            pbVar8 = *(byte **)(param_1 + 0x10);
          }
          *(uint *)(this + 0x14) = local_3c;
          *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 4;
          if ((pbVar9 < pbVar8) && (*pbVar9 == 0x20)) {
            pbVar9 = pbVar9 + 1;
            *(byte **)(param_1 + 8) = pbVar9;
            if (pbVar9 < pbVar8) {
LAB_00408c04:
              if ((char)*pbVar9 < '\0') goto LAB_00408efc;
              pbVar7 = pbVar9 + 1;
              local_3c = (uint)*pbVar9;
              *(byte **)(param_1 + 8) = pbVar7;
            }
            else {
LAB_00408efc:
              uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                (param_1,&local_3c);
              if ((uVar6 & 1) == 0) goto LAB_00409028;
              pbVar7 = *(byte **)(param_1 + 8);
              pbVar8 = *(byte **)(param_1 + 0x10);
            }
            *(uint *)(this + 0x18) = local_3c;
            *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 8;
            if ((pbVar7 < pbVar8) && (*pbVar7 == 0x28)) {
              pbVar7 = pbVar7 + 1;
              *(byte **)(param_1 + 8) = pbVar7;
              if (pbVar7 < pbVar8) {
LAB_00408b94:
                if ((char)*pbVar7 < '\0') goto LAB_00408f48;
                pbVar9 = pbVar7 + 1;
                local_3c = (uint)*pbVar7;
                *(byte **)(param_1 + 8) = pbVar9;
              }
              else {
LAB_00408f48:
                uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                  (param_1,&local_3c);
                if ((uVar6 & 1) == 0) goto LAB_00409028;
                pbVar9 = *(byte **)(param_1 + 8);
                pbVar8 = *(byte **)(param_1 + 0x10);
              }
              *(uint *)(this + 0x1c) = local_3c;
              *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x10;
              if ((pbVar9 < pbVar8) && (*pbVar9 == 0x35)) {
                *(byte **)(param_1 + 8) = pbVar9 + 1;
LAB_00408f8c:
                uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                  (param_1,&local_3c);
                if ((uVar6 & 1) == 0) goto LAB_00409028;
                *(uint *)(this + 0x20) = local_3c;
                *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x20;
                pbVar7 = *(byte **)(param_1 + 8);
                if ((pbVar7 < *(byte **)(param_1 + 0x10)) && (*pbVar7 == 0x38)) {
                  pbVar7 = pbVar7 + 1;
                  *(byte **)(param_1 + 8) = pbVar7;
                  if (pbVar7 < *(byte **)(param_1 + 0x10)) goto LAB_00408c84;
                  goto LAB_00408fd8;
                }
              }
            }
          }
        }
        goto LAB_00408ff8;
      }
      break;
    case 3:
      if ((uVar6 & 7) == 0) {
        pbVar7 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
        if (pbVar7 < pbVar8) goto LAB_00408bd4;
        goto LAB_00408eb0;
      }
      break;
    case 4:
      if ((uVar6 & 7) == 0) {
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
        if (pbVar9 < pbVar8) goto LAB_00408c04;
        goto LAB_00408efc;
      }
      break;
    case 5:
      if ((uVar6 & 7) == 0) {
        pbVar7 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
        if (pbVar7 < pbVar8) goto LAB_00408b94;
        goto LAB_00408f48;
      }
      break;
    case 6:
      if ((uVar4 & 7) == 5) goto LAB_00408f8c;
      break;
    case 7:
      if ((uVar6 & 7) == 0) {
        pbVar7 = *(byte **)(param_1 + 8);
        if (pbVar7 < *(byte **)(param_1 + 0x10)) {
LAB_00408c84:
          if ((char)*pbVar7 < '\0') goto LAB_00408fd8;
          local_3c = (uint)*pbVar7;
          *(byte **)(param_1 + 8) = pbVar7 + 1;
        }
        else {
LAB_00408fd8:
          uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
          if ((uVar6 & 1) == 0) goto LAB_00409028;
        }
        if (local_3c < 2) {
          *(uint *)(this + 0x24) = local_3c;
          *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x40;
        }
        pcVar1 = *(char **)(param_1 + 8);
        if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == 'E')) {
          *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_00408cd4:
          uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                            (param_1,&local_3c);
          if ((uVar6 & 1) == 0) goto LAB_00409028;
          *(uint *)(this + 0x28) = local_3c;
          *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x80;
          pcVar1 = *(char **)(param_1 + 8);
          if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == 'M')) {
            *(char **)(param_1 + 8) = pcVar1 + 1;
            goto LAB_00408d28;
          }
        }
        goto LAB_00408ff8;
      }
      break;
    case 8:
      if ((uVar4 & 7) == 5) goto LAB_00408cd4;
      break;
    case 9:
      if ((uVar4 & 7) == 5) {
LAB_00408d28:
        uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                          (param_1,&local_3c);
        if ((uVar6 & 1) == 0) goto LAB_00409028;
        *(uint *)(this + 0x2c) = local_3c;
        *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x100;
        pcVar1 = *(char **)(param_1 + 8);
        if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == 'U')) {
          *(char **)(param_1 + 8) = pcVar1 + 1;
          goto LAB_00408d6c;
        }
        goto LAB_00408ff8;
      }
      break;
    case 10:
      if ((uVar4 & 7) == 5) {
LAB_00408d6c:
        uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                          (param_1,&local_3c);
        if ((uVar6 & 1) == 0) goto LAB_00409028;
        *(uint *)(this + 0x30) = local_3c;
        *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x200;
        pcVar1 = *(char **)(param_1 + 8);
        if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == ']')) {
          *(char **)(param_1 + 8) = pcVar1 + 1;
          goto LAB_00408dc0;
        }
        goto LAB_00408ff8;
      }
      break;
    case 0xb:
      if ((uVar4 & 7) != 5) break;
LAB_00408dc0:
      uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(param_1,&local_3c);
      if ((uVar6 & 1) == 0) goto LAB_00409028;
      *(uint *)(this + 0x34) = local_3c;
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x400;
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar5 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_0040902c:
        if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar5);
        }
        return;
      }
      goto LAB_00408ff8;
    }
    if ((uVar4 & 7) != 4) {
      uVar6 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar4);
      if ((uVar6 & 1) == 0) {
LAB_00409028:
        uVar5 = 0;
        goto LAB_0040902c;
      }
      goto LAB_00408ff8;
    }
  }
  else {
    uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar6 = (ulong)uVar4;
    *(uint *)(param_1 + 0x20) = uVar4;
    if (uVar4 != 0) goto LAB_00408b34;
  }
LAB_00409020:
  uVar5 = 1;
  goto LAB_0040902c;
}


