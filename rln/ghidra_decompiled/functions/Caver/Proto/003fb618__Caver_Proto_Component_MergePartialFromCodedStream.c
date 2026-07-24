/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fb618
 * Function: Caver::Proto::Component::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(Component * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Component::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */

void __thiscall
Caver::Proto::Component::MergePartialFromCodedStream(Component *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
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
  uint local_6c;
  long local_68;
  
  puVar7 = PTR_default_instance__007e6e98;
  puVar6 = PTR__default_label__007e6320;
  puVar5 = PTR_DAT_007e5de8;
  puVar4 = PTR__default_class_name__007e5328;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_003fb67c:
  do {
    pbVar13 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar13) || (bVar2 = *pbVar13, (char)bVar2 < '\0')) {
      uVar8 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar10 = (ulong)uVar8;
      *(uint *)(param_1 + 0x20) = uVar8;
      if (uVar8 != 0) goto LAB_003fb6bc;
LAB_003fb8d8:
      uVar9 = 1;
      goto LAB_003fb8dc;
    }
    uVar10 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar13 + 1;
    if (bVar2 == 0) goto LAB_003fb8d8;
LAB_003fb6bc:
    uVar8 = (uint)uVar10;
    switch((int)(uVar10 >> 3)) {
    case 1:
      if ((uVar8 & 7) == 2) {
        psVar11 = *(string **)(this + 0x40);
        *(uint *)(this + 0x58) = *(uint *)(this + 0x58) | 1;
        if (psVar11 == (string *)puVar4) {
          psVar11 = operator_new(8);
          *(undefined **)psVar11 = puVar1;
          *(string **)(this + 0x40) = psVar11;
        }
        uVar10 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar11);
        if ((uVar10 & 1) == 0) goto LAB_003fb8d0;
        pbVar13 = *(byte **)(param_1 + 8);
        pbVar12 = *(byte **)(param_1 + 0x10);
        if ((pbVar13 < pbVar12) && (*pbVar13 == 0x10)) {
          pbVar13 = pbVar13 + 1;
          *(byte **)(param_1 + 8) = pbVar13;
          if (pbVar13 < pbVar12) {
LAB_003fb744:
            if ((char)*pbVar13 < '\0') goto LAB_003fb7b8;
            pbVar14 = pbVar13 + 1;
            local_6c = (uint)*pbVar13;
            *(byte **)(param_1 + 8) = pbVar14;
          }
          else {
LAB_003fb7b8:
            uVar10 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c)
            ;
            if ((uVar10 & 1) == 0) goto LAB_003fb8d0;
            pbVar14 = *(byte **)(param_1 + 8);
            pbVar12 = *(byte **)(param_1 + 0x10);
          }
          *(uint *)(this + 0x48) = local_6c;
          uVar8 = *(uint *)(this + 0x58) | 2;
          *(uint *)(this + 0x58) = uVar8;
          if ((pbVar14 < pbVar12) && (*pbVar14 == 0x1a)) {
            *(byte **)(param_1 + 8) = pbVar14 + 1;
LAB_003fb7fc:
            psVar11 = *(string **)(this + 0x50);
            *(uint *)(this + 0x58) = uVar8 | 8;
            if (psVar11 == (string *)puVar6) {
              psVar11 = operator_new(8);
              *(undefined **)psVar11 = puVar5 + 0x18;
              *(string **)(this + 0x50) = psVar11;
            }
            uVar10 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar11);
            if ((uVar10 & 1) == 0) goto LAB_003fb8d0;
            pbVar13 = *(byte **)(param_1 + 8);
            pbVar12 = *(byte **)(param_1 + 0x10);
            if ((pbVar13 < pbVar12) && (*pbVar13 == 0x20)) {
              pbVar13 = pbVar13 + 1;
              *(byte **)(param_1 + 8) = pbVar13;
              if (pbVar13 < pbVar12) {
LAB_003fb788:
                if ((char)*pbVar13 < '\0') goto LAB_003fb85c;
                pbVar14 = pbVar13 + 1;
                local_6c = (uint)*pbVar13;
                *(byte **)(param_1 + 8) = pbVar14;
              }
              else {
LAB_003fb85c:
                uVar10 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                   (param_1,&local_6c);
                if ((uVar10 & 1) == 0) goto LAB_003fb8d0;
                pbVar14 = *(byte **)(param_1 + 8);
                pbVar12 = *(byte **)(param_1 + 0x10);
              }
              *(uint *)(this + 0x4c) = local_6c;
              *(uint *)(this + 0x58) = *(uint *)(this + 0x58) | 4;
              if ((pbVar14 == pbVar12) && (*(int *)(param_1 + 0x2c) != 0)) {
                uVar9 = 1;
                *(undefined4 *)(param_1 + 0x20) = 0;
                param_1[0x24] = (CodedInputStream)0x1;
                goto LAB_003fb8dc;
              }
            }
          }
        }
        goto LAB_003fb67c;
      }
      break;
    case 2:
      if ((uVar10 & 7) == 0) {
        pbVar13 = *(byte **)(param_1 + 8);
        pbVar12 = *(byte **)(param_1 + 0x10);
        if (pbVar13 < pbVar12) goto LAB_003fb744;
        goto LAB_003fb7b8;
      }
      break;
    case 3:
      if ((uVar8 & 7) == 2) {
        uVar8 = *(uint *)(this + 0x58);
        goto LAB_003fb7fc;
      }
      break;
    case 4:
      if ((uVar10 & 7) == 0) {
        pbVar13 = *(byte **)(param_1 + 8);
        pbVar12 = *(byte **)(param_1 + 0x10);
        if (pbVar13 < pbVar12) goto LAB_003fb788;
        goto LAB_003fb85c;
      }
    }
    if ((uVar8 & 7) == 4) goto LAB_003fb8d8;
    if (uVar8 < 800) {
      uVar10 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar8);
    }
    else {
      uVar10 = google::protobuf::internal::ExtensionSet::ParseField
                         ((ExtensionSet *)(this + 8),uVar8,param_1,*(MessageLite **)puVar7);
    }
    if ((uVar10 & 1) == 0) {
LAB_003fb8d0:
      uVar9 = 0;
LAB_003fb8dc:
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar9);
    }
  } while( true );
}


