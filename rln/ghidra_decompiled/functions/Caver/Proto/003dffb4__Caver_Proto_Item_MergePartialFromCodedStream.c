/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dffb4
 * Function: Caver::Proto::Item::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(Item * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Item::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */

void __thiscall
Caver::Proto::Item::MergePartialFromCodedStream(Item *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  char *pcVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  string *psVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint local_6c;
  long local_68;
  
  puVar9 = PTR__default_description__007e7e10;
  puVar8 = PTR__default_name__007e6888;
  puVar7 = PTR__default_short_description__007e6118;
  puVar6 = PTR_DAT_007e5de8;
  puVar5 = PTR__default_title__007e4fd8;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_003e001c:
  do {
    pbVar16 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar16) || (bVar3 = *pbVar16, (char)bVar3 < '\0')) {
      uVar10 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar12 = (ulong)uVar10;
      *(uint *)(param_1 + 0x20) = uVar10;
      if (uVar10 != 0) goto LAB_003e005c;
LAB_003e04bc:
      uVar11 = 1;
      goto LAB_003e04c8;
    }
    uVar12 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
    *(byte **)(param_1 + 8) = pbVar16 + 1;
    if (bVar3 == 0) goto LAB_003e04bc;
LAB_003e005c:
    uVar10 = (uint)uVar12;
    switch((int)(uVar12 >> 3)) {
    case 1:
      if ((uVar12 & 7) == 0) {
        pbVar16 = *(byte **)(param_1 + 8);
        if ((pbVar16 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar16)) {
          local_6c = (uint)*pbVar16;
          *(byte **)(param_1 + 8) = pbVar16 + 1;
        }
        else {
          uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
          if ((uVar12 & 1) == 0) goto LAB_003e04c4;
        }
        if (local_6c - 1 < 5) {
          *(uint *)(this + 0xc) = local_6c;
          *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 1;
        }
        pcVar2 = *(char **)(param_1 + 8);
        if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x12')) {
          *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_003e0214:
          psVar13 = *(string **)(this + 0x10);
          *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 2;
          if (psVar13 == (string *)puVar8) {
            psVar13 = operator_new(8);
            *(undefined **)psVar13 = puVar1;
            *(string **)(this + 0x10) = psVar13;
          }
          uVar12 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar13);
          if ((uVar12 & 1) == 0) goto LAB_003e04c4;
          pcVar2 = *(char **)(param_1 + 8);
          if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x1a')) {
            *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_003e026c:
            psVar13 = *(string **)(this + 0x18);
            *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 4;
            if (psVar13 == (string *)puVar5) {
              psVar13 = operator_new(8);
              *(undefined **)psVar13 = puVar6 + 0x18;
              *(string **)(this + 0x18) = psVar13;
            }
            uVar12 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar13);
            if ((uVar12 & 1) == 0) goto LAB_003e04c4;
            pcVar2 = *(char **)(param_1 + 8);
            if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\"')) {
              *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_003e02c8:
              psVar13 = *(string **)(this + 0x20);
              *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 8;
              if (psVar13 == (string *)puVar7) {
                psVar13 = operator_new(8);
                *(undefined **)psVar13 = puVar6 + 0x18;
                *(string **)(this + 0x20) = psVar13;
              }
              uVar12 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar13);
              if ((uVar12 & 1) == 0) goto LAB_003e04c4;
              pcVar2 = *(char **)(param_1 + 8);
              if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '*')) {
                *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_003e0324:
                psVar13 = *(string **)(this + 0x28);
                *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x10;
                if (psVar13 == (string *)puVar9) {
                  psVar13 = operator_new(8);
                  *(undefined **)psVar13 = puVar6 + 0x18;
                  *(string **)(this + 0x28) = psVar13;
                }
                uVar12 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar13);
                if ((uVar12 & 1) == 0) goto LAB_003e04c4;
                pbVar15 = *(byte **)(param_1 + 8);
                pbVar14 = *(byte **)(param_1 + 0x10);
                if ((pbVar15 < pbVar14) && (*pbVar15 == 0x30)) {
                  pbVar15 = pbVar15 + 1;
                  *(byte **)(param_1 + 8) = pbVar15;
                  if (pbVar15 < pbVar14) {
LAB_003e012c:
                    if ((char)*pbVar15 < '\0') goto LAB_003e0388;
                    pbVar16 = pbVar15 + 1;
                    local_6c = (uint)*pbVar15;
                    *(byte **)(param_1 + 8) = pbVar16;
                  }
                  else {
LAB_003e0388:
                    uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                       (param_1,&local_6c);
                    if ((uVar12 & 1) == 0) goto LAB_003e04c4;
                    pbVar16 = *(byte **)(param_1 + 8);
                    pbVar14 = *(byte **)(param_1 + 0x10);
                  }
                  this[0x30] = (Item)(local_6c != 0);
                  *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x20;
                  if ((pbVar16 < pbVar14) && (*pbVar16 == 0x38)) {
                    pbVar16 = pbVar16 + 1;
                    *(byte **)(param_1 + 8) = pbVar16;
                    if (pbVar16 < pbVar14) {
LAB_003e015c:
                      if ((char)*pbVar16 < '\0') goto LAB_003e03dc;
                      pbVar15 = pbVar16 + 1;
                      local_6c = (uint)*pbVar16;
                      *(byte **)(param_1 + 8) = pbVar15;
                    }
                    else {
LAB_003e03dc:
                      uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                         (param_1,&local_6c);
                      if ((uVar12 & 1) == 0) goto LAB_003e04c4;
                      pbVar15 = *(byte **)(param_1 + 8);
                      pbVar14 = *(byte **)(param_1 + 0x10);
                    }
                    *(uint *)(this + 0x34) = local_6c;
                    *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x40;
                    if ((pbVar15 < pbVar14) && (*pbVar15 == 0x40)) {
                      pbVar15 = pbVar15 + 1;
                      *(byte **)(param_1 + 8) = pbVar15;
                      if (pbVar15 < pbVar14) {
LAB_003e00ec:
                        if ((char)*pbVar15 < '\0') goto LAB_003e0428;
                        pbVar16 = pbVar15 + 1;
                        local_6c = (uint)*pbVar15;
                        *(byte **)(param_1 + 8) = pbVar16;
                      }
                      else {
LAB_003e0428:
                        uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                           (param_1,&local_6c);
                        if ((uVar12 & 1) == 0) goto LAB_003e04c4;
                        pbVar16 = *(byte **)(param_1 + 8);
                        pbVar14 = *(byte **)(param_1 + 0x10);
                      }
                      *(uint *)(this + 0x38) = local_6c;
                      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x80;
                      if ((pbVar16 < pbVar14) && (*pbVar16 == 0x48)) {
                        pbVar16 = pbVar16 + 1;
                        *(byte **)(param_1 + 8) = pbVar16;
                        if (pbVar16 < pbVar14) {
LAB_003e018c:
                          if ((char)*pbVar16 < '\0') goto LAB_003e0474;
                          pbVar15 = pbVar16 + 1;
                          local_6c = (uint)*pbVar16;
                          *(byte **)(param_1 + 8) = pbVar15;
                        }
                        else {
LAB_003e0474:
                          uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                             (param_1,&local_6c);
                          if ((uVar12 & 1) == 0) goto LAB_003e04c4;
                          pbVar15 = *(byte **)(param_1 + 8);
                          pbVar14 = *(byte **)(param_1 + 0x10);
                        }
                        *(uint *)(this + 0x3c) = local_6c;
                        *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x100;
                        if ((pbVar15 == pbVar14) && (*(int *)(param_1 + 0x2c) != 0)) {
                          uVar11 = 1;
                          *(undefined4 *)(param_1 + 0x20) = 0;
                          param_1[0x24] = (CodedInputStream)0x1;
                          goto LAB_003e04c8;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_003e001c;
      }
      break;
    case 2:
      if ((uVar10 & 7) == 2) goto LAB_003e0214;
      break;
    case 3:
      if ((uVar10 & 7) == 2) goto LAB_003e026c;
      break;
    case 4:
      if ((uVar10 & 7) == 2) goto LAB_003e02c8;
      break;
    case 5:
      if ((uVar10 & 7) == 2) goto LAB_003e0324;
      break;
    case 6:
      if ((uVar12 & 7) == 0) {
        pbVar15 = *(byte **)(param_1 + 8);
        pbVar14 = *(byte **)(param_1 + 0x10);
        if (pbVar15 < pbVar14) goto LAB_003e012c;
        goto LAB_003e0388;
      }
      break;
    case 7:
      if ((uVar12 & 7) == 0) {
        pbVar16 = *(byte **)(param_1 + 8);
        pbVar14 = *(byte **)(param_1 + 0x10);
        if (pbVar16 < pbVar14) goto LAB_003e015c;
        goto LAB_003e03dc;
      }
      break;
    case 8:
      if ((uVar12 & 7) == 0) {
        pbVar15 = *(byte **)(param_1 + 8);
        pbVar14 = *(byte **)(param_1 + 0x10);
        if (pbVar15 < pbVar14) goto LAB_003e00ec;
        goto LAB_003e0428;
      }
      break;
    case 9:
      if ((uVar12 & 7) == 0) {
        pbVar16 = *(byte **)(param_1 + 8);
        pbVar14 = *(byte **)(param_1 + 0x10);
        if (pbVar16 < pbVar14) goto LAB_003e018c;
        goto LAB_003e0474;
      }
    }
    if ((uVar10 & 7) == 4) goto LAB_003e04bc;
    uVar12 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar10);
    if ((uVar12 & 1) == 0) {
LAB_003e04c4:
      uVar11 = 0;
LAB_003e04c8:
      if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar11);
      }
      return;
    }
  } while( true );
}


