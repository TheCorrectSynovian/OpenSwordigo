/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e2bc8
 * Function: Caver::Proto::EntityClass::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(EntityClass * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityClass::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::EntityClass::MergePartialFromCodedStream(EntityClass *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  char *pcVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  string *psVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint local_5c;
  long local_58;
  
  puVar7 = PTR_DAT_007e5de8;
  puVar6 = PTR__default_name__007e5c18;
  puVar5 = PTR__default_title__007e56f8;
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_003e2c1c:
  do {
    pbVar14 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar14) || (bVar3 = *pbVar14, (char)bVar3 < '\0')) {
      uVar8 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar10 = (ulong)uVar8;
      *(uint *)(param_1 + 0x20) = uVar8;
      if (uVar8 != 0) goto LAB_003e2c5c;
LAB_003e3018:
      uVar9 = 1;
      goto LAB_003e301c;
    }
    uVar10 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
    *(byte **)(param_1 + 8) = pbVar14 + 1;
    if (bVar3 == 0) goto LAB_003e3018;
LAB_003e2c5c:
    uVar8 = (uint)uVar10;
    switch((int)(uVar10 >> 3)) {
    case 1:
      if ((uVar8 & 7) == 2) {
        psVar11 = *(string **)(this + 0x10);
        *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 1;
        if (psVar11 == (string *)puVar6) {
          psVar11 = operator_new(8);
          *(undefined **)psVar11 = puVar1;
          *(string **)(this + 0x10) = psVar11;
        }
        uVar10 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar11);
        if ((uVar10 & 1) == 0) goto LAB_003e3010;
        pcVar2 = *(char **)(param_1 + 8);
        if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x12')) {
          *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_003e2d8c:
          psVar11 = *(string **)(this + 0x18);
          *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 2;
          if (psVar11 == (string *)puVar5) {
            psVar11 = operator_new(8);
            *(undefined **)psVar11 = puVar7 + 0x18;
            *(string **)(this + 0x18) = psVar11;
          }
          uVar10 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar11);
          if ((uVar10 & 1) == 0) goto LAB_003e3010;
          pbVar13 = *(byte **)(param_1 + 8);
          pbVar12 = *(byte **)(param_1 + 0x10);
          if ((pbVar13 < pbVar12) && (*pbVar13 == 0x18)) {
            pbVar13 = pbVar13 + 1;
            *(byte **)(param_1 + 8) = pbVar13;
            if (pbVar13 < pbVar12) {
LAB_003e2d24:
              if ((char)*pbVar13 < '\0') goto LAB_003e2df0;
              pbVar14 = pbVar13 + 1;
              local_5c = (uint)*pbVar13;
              *(byte **)(param_1 + 8) = pbVar14;
            }
            else {
LAB_003e2df0:
              uVar10 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                 (param_1,&local_5c);
              if ((uVar10 & 1) == 0) goto LAB_003e3010;
              pbVar14 = *(byte **)(param_1 + 8);
              pbVar12 = *(byte **)(param_1 + 0x10);
            }
            this[0x20] = (EntityClass)(local_5c != 0);
            *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 4;
            if ((pbVar14 < pbVar12) && (*pbVar14 == 0x20)) {
              pbVar14 = pbVar14 + 1;
              *(byte **)(param_1 + 8) = pbVar14;
              if (pbVar14 < pbVar12) {
LAB_003e2d54:
                if ((char)*pbVar14 < '\0') goto LAB_003e2e44;
                pbVar13 = pbVar14 + 1;
                local_5c = (uint)*pbVar14;
                *(byte **)(param_1 + 8) = pbVar13;
              }
              else {
LAB_003e2e44:
                uVar10 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                   (param_1,&local_5c);
                if ((uVar10 & 1) == 0) goto LAB_003e3010;
                pbVar13 = *(byte **)(param_1 + 8);
                pbVar12 = *(byte **)(param_1 + 0x10);
              }
              this[0x21] = (EntityClass)(local_5c != 0);
              *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 8;
              if ((pbVar13 < pbVar12) && (*pbVar13 == 0x28)) {
                pbVar13 = pbVar13 + 1;
                *(byte **)(param_1 + 8) = pbVar13;
                if (pbVar13 < pbVar12) {
LAB_003e2cf4:
                  if ((char)*pbVar13 < '\0') goto LAB_003e2e98;
                  pbVar14 = pbVar13 + 1;
                  local_5c = (uint)*pbVar13;
                  *(byte **)(param_1 + 8) = pbVar14;
                }
                else {
LAB_003e2e98:
                  uVar10 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                     (param_1,&local_5c);
                  if ((uVar10 & 1) == 0) goto LAB_003e3010;
                  pbVar14 = *(byte **)(param_1 + 8);
                  pbVar12 = *(byte **)(param_1 + 0x10);
                }
                this[0x22] = (EntityClass)(local_5c != 0);
                *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x10;
                if ((pbVar14 < pbVar12) && (*pbVar14 == 0x30)) {
                  pbVar14 = pbVar14 + 1;
                  *(byte **)(param_1 + 8) = pbVar14;
                  if (pbVar14 < pbVar12) {
LAB_003e2eec:
                    if ((char)*pbVar14 < '\0') goto LAB_003e2f1c;
                    pbVar13 = pbVar14 + 1;
                    local_5c = (uint)*pbVar14;
                    *(byte **)(param_1 + 8) = pbVar13;
                  }
                  else {
LAB_003e2f1c:
                    uVar10 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                       (param_1,&local_5c);
                    if ((uVar10 & 1) == 0) goto LAB_003e3010;
                    pbVar13 = *(byte **)(param_1 + 8);
                    pbVar12 = *(byte **)(param_1 + 0x10);
                  }
                  this[0x23] = (EntityClass)(local_5c != 0);
                  *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x20;
                  if ((pbVar13 < pbVar12) && (*pbVar13 == 0x3d)) {
                    *(byte **)(param_1 + 8) = pbVar13 + 1;
LAB_003e2f78:
                    uVar10 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                       (param_1,&local_5c);
                    if ((uVar10 & 1) == 0) goto LAB_003e3010;
                    *(uint *)(this + 0x24) = local_5c;
                    *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x40;
                    pcVar2 = *(char **)(param_1 + 8);
                    if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == 'E')) {
                      *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_003e2fbc:
                      uVar10 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                         (param_1,&local_5c);
                      if ((uVar10 & 1) == 0) goto LAB_003e3010;
                      *(uint *)(this + 0x28) = local_5c;
                      *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x80;
                      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
                         (*(int *)(param_1 + 0x2c) != 0)) {
                        uVar9 = 1;
                        *(undefined4 *)(param_1 + 0x20) = 0;
                        param_1[0x24] = (CodedInputStream)0x1;
                        goto LAB_003e301c;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_003e2c1c;
      }
      break;
    case 2:
      if ((uVar8 & 7) == 2) goto LAB_003e2d8c;
      break;
    case 3:
      if ((uVar10 & 7) == 0) {
        pbVar13 = *(byte **)(param_1 + 8);
        pbVar12 = *(byte **)(param_1 + 0x10);
        if (pbVar13 < pbVar12) goto LAB_003e2d24;
        goto LAB_003e2df0;
      }
      break;
    case 4:
      if ((uVar10 & 7) == 0) {
        pbVar14 = *(byte **)(param_1 + 8);
        pbVar12 = *(byte **)(param_1 + 0x10);
        if (pbVar14 < pbVar12) goto LAB_003e2d54;
        goto LAB_003e2e44;
      }
      break;
    case 5:
      if ((uVar10 & 7) == 0) {
        pbVar13 = *(byte **)(param_1 + 8);
        pbVar12 = *(byte **)(param_1 + 0x10);
        if (pbVar13 < pbVar12) goto LAB_003e2cf4;
        goto LAB_003e2e98;
      }
      break;
    case 6:
      if ((uVar10 & 7) == 0) {
        pbVar14 = *(byte **)(param_1 + 8);
        pbVar12 = *(byte **)(param_1 + 0x10);
        if (pbVar14 < pbVar12) goto LAB_003e2eec;
        goto LAB_003e2f1c;
      }
      break;
    case 7:
      if ((uVar8 & 7) == 5) goto LAB_003e2f78;
      break;
    case 8:
      if ((uVar8 & 7) == 5) goto LAB_003e2fbc;
    }
    if ((uVar8 & 7) == 4) goto LAB_003e3018;
    uVar10 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar8);
    if ((uVar10 & 1) == 0) {
LAB_003e3010:
      uVar9 = 0;
LAB_003e301c:
      if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar9);
      }
      return;
    }
  } while( true );
}


