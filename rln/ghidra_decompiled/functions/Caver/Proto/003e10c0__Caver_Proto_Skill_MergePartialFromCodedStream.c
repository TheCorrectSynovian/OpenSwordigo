/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e10c0
 * Function: Caver::Proto::Skill::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(Skill * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Skill::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */

void __thiscall
Caver::Proto::Skill::MergePartialFromCodedStream(Skill *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  char *pcVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  string *psVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint local_6c;
  long local_68;
  
  puVar8 = PTR__default_description__007e7dc0;
  puVar7 = PTR__default_title__007e7328;
  puVar6 = PTR__default_name__007e6d10;
  puVar5 = PTR_DAT_007e5de8;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_003e1120:
  do {
    pbVar15 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar15) || (bVar3 = *pbVar15, (char)bVar3 < '\0')) {
      uVar9 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar11 = (ulong)uVar9;
      *(uint *)(param_1 + 0x20) = uVar9;
      if (uVar9 != 0) goto LAB_003e1160;
LAB_003e1444:
      uVar10 = 1;
      goto LAB_003e1448;
    }
    uVar11 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
    *(byte **)(param_1 + 8) = pbVar15 + 1;
    if (bVar3 == 0) goto LAB_003e1444;
LAB_003e1160:
    uVar9 = (uint)uVar11;
    switch((int)(uVar11 >> 3)) {
    case 1:
      if ((uVar9 & 7) == 2) {
        psVar12 = *(string **)(this + 0x10);
        *(uint *)(this + 0x34) = *(uint *)(this + 0x34) | 1;
        if (psVar12 == (string *)puVar6) {
          psVar12 = operator_new(8);
          *(undefined **)psVar12 = puVar1;
          *(string **)(this + 0x10) = psVar12;
        }
        uVar11 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar12);
        if ((uVar11 & 1) == 0) goto LAB_003e143c;
        pcVar2 = *(char **)(param_1 + 8);
        if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x12')) {
          *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_003e1260:
          psVar12 = *(string **)(this + 0x18);
          *(uint *)(this + 0x34) = *(uint *)(this + 0x34) | 2;
          if (psVar12 == (string *)puVar7) {
            psVar12 = operator_new(8);
            *(undefined **)psVar12 = puVar5 + 0x18;
            *(string **)(this + 0x18) = psVar12;
          }
          uVar11 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar12);
          if ((uVar11 & 1) == 0) goto LAB_003e143c;
          pcVar2 = *(char **)(param_1 + 8);
          if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x1a')) {
            *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_003e12bc:
            psVar12 = *(string **)(this + 0x20);
            *(uint *)(this + 0x34) = *(uint *)(this + 0x34) | 4;
            if (psVar12 == (string *)puVar8) {
              psVar12 = operator_new(8);
              *(undefined **)psVar12 = puVar5 + 0x18;
              *(string **)(this + 0x20) = psVar12;
            }
            uVar11 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar12);
            if ((uVar11 & 1) == 0) goto LAB_003e143c;
            pbVar15 = *(byte **)(param_1 + 8);
            pbVar13 = *(byte **)(param_1 + 0x10);
            if ((pbVar15 < pbVar13) && (*pbVar15 == 0x20)) {
              pbVar15 = pbVar15 + 1;
              *(byte **)(param_1 + 8) = pbVar15;
              if (pbVar15 < pbVar13) {
LAB_003e1238:
                if ((char)*pbVar15 < '\0') goto LAB_003e1320;
                pbVar14 = pbVar15 + 1;
                local_6c = (uint)*pbVar15;
                *(byte **)(param_1 + 8) = pbVar14;
              }
              else {
LAB_003e1320:
                uVar11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                   (param_1,&local_6c);
                if ((uVar11 & 1) == 0) goto LAB_003e143c;
                pbVar14 = *(byte **)(param_1 + 8);
                pbVar13 = *(byte **)(param_1 + 0x10);
              }
              *(uint *)(this + 0x28) = local_6c;
              *(uint *)(this + 0x34) = *(uint *)(this + 0x34) | 8;
              if ((pbVar14 < pbVar13) && (*pbVar14 == 0x28)) {
                pbVar14 = pbVar14 + 1;
                *(byte **)(param_1 + 8) = pbVar14;
                if (pbVar14 < pbVar13) {
LAB_003e11f8:
                  if ((char)*pbVar14 < '\0') goto LAB_003e136c;
                  pbVar15 = pbVar14 + 1;
                  local_6c = (uint)*pbVar14;
                  *(byte **)(param_1 + 8) = pbVar15;
                }
                else {
LAB_003e136c:
                  uVar11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                     (param_1,&local_6c);
                  if ((uVar11 & 1) == 0) goto LAB_003e143c;
                  pbVar15 = *(byte **)(param_1 + 8);
                  pbVar13 = *(byte **)(param_1 + 0x10);
                }
                *(uint *)(this + 0x2c) = local_6c;
                *(uint *)(this + 0x34) = *(uint *)(this + 0x34) | 0x10;
                if ((pbVar15 < pbVar13) && (*pbVar15 == 0x30)) {
                  pbVar15 = pbVar15 + 1;
                  *(byte **)(param_1 + 8) = pbVar15;
                  if (pbVar15 < pbVar13) {
LAB_003e13b8:
                    if ((char)*pbVar15 < '\0') goto LAB_003e13e8;
                    pbVar14 = pbVar15 + 1;
                    local_6c = (uint)*pbVar15;
                    *(byte **)(param_1 + 8) = pbVar14;
                  }
                  else {
LAB_003e13e8:
                    uVar11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                       (param_1,&local_6c);
                    if ((uVar11 & 1) == 0) goto LAB_003e143c;
                    pbVar14 = *(byte **)(param_1 + 8);
                    pbVar13 = *(byte **)(param_1 + 0x10);
                  }
                  *(uint *)(this + 0x30) = local_6c;
                  *(uint *)(this + 0x34) = *(uint *)(this + 0x34) | 0x20;
                  if ((pbVar14 == pbVar13) && (*(int *)(param_1 + 0x2c) != 0)) {
                    uVar10 = 1;
                    *(undefined4 *)(param_1 + 0x20) = 0;
                    param_1[0x24] = (CodedInputStream)0x1;
                    goto LAB_003e1448;
                  }
                }
              }
            }
          }
        }
        goto LAB_003e1120;
      }
      break;
    case 2:
      if ((uVar9 & 7) == 2) goto LAB_003e1260;
      break;
    case 3:
      if ((uVar9 & 7) == 2) goto LAB_003e12bc;
      break;
    case 4:
      if ((uVar11 & 7) == 0) {
        pbVar15 = *(byte **)(param_1 + 8);
        pbVar13 = *(byte **)(param_1 + 0x10);
        if (pbVar15 < pbVar13) goto LAB_003e1238;
        goto LAB_003e1320;
      }
      break;
    case 5:
      if ((uVar11 & 7) == 0) {
        pbVar14 = *(byte **)(param_1 + 8);
        pbVar13 = *(byte **)(param_1 + 0x10);
        if (pbVar14 < pbVar13) goto LAB_003e11f8;
        goto LAB_003e136c;
      }
      break;
    case 6:
      if ((uVar11 & 7) == 0) {
        pbVar15 = *(byte **)(param_1 + 8);
        pbVar13 = *(byte **)(param_1 + 0x10);
        if (pbVar15 < pbVar13) goto LAB_003e13b8;
        goto LAB_003e13e8;
      }
    }
    if ((uVar9 & 7) == 4) goto LAB_003e1444;
    uVar11 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar9);
    if ((uVar11 & 1) == 0) {
LAB_003e143c:
      uVar10 = 0;
LAB_003e1448:
      if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar10);
      }
      return;
    }
  } while( true );
}


