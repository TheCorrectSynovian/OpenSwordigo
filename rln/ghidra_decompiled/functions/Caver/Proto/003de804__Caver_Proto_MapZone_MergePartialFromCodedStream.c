/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003de804
 * Function: Caver::Proto::MapZone::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(MapZone * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapZone::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */

void __thiscall
Caver::Proto::MapZone::MergePartialFromCodedStream(MapZone *this,CodedInputStream *param_1)

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
  MapNode *this_00;
  undefined8 uVar10;
  ulong uVar11;
  string *psVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint local_6c;
  long local_68;
  
  puVar7 = PTR_DAT_007e5de8;
  puVar6 = PTR__default_music__007e5568;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_003de858:
  pbVar14 = *(byte **)(param_1 + 8);
  if ((pbVar14 < *(byte **)(param_1 + 0x10)) && (bVar3 = *pbVar14, -1 < (char)bVar3)) {
    uVar11 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
    *(byte **)(param_1 + 8) = pbVar14 + 1;
    if (bVar3 == 0) goto LAB_003deb84;
LAB_003de898:
    puVar5 = PTR__default_name__007e5428;
    uVar8 = (uint)uVar11;
    switch((int)(uVar11 >> 3)) {
    case 1:
      if ((uVar8 & 7) != 2) break;
      psVar12 = *(string **)(this + 0x10);
      *(uint *)(this + 0x68) = *(uint *)(this + 0x68) | 1;
      if (psVar12 == (string *)puVar5) {
        psVar12 = operator_new(8);
        *(undefined **)psVar12 = puVar1;
        *(string **)(this + 0x10) = psVar12;
      }
      uVar11 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar12);
      if ((uVar11 & 1) == 0) goto LAB_003deb7c;
      pcVar2 = *(char **)(param_1 + 8);
      if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x12')) {
        *(char **)(param_1 + 8) = pcVar2 + 1;
        goto LAB_003de984;
      }
      goto LAB_003de858;
    case 2:
      if ((uVar8 & 7) == 2) {
LAB_003de984:
        puVar5 = PTR__default_title__007e7d78;
        psVar12 = *(string **)(this + 0x18);
        *(uint *)(this + 0x68) = *(uint *)(this + 0x68) | 2;
        if (psVar12 == (string *)puVar5) {
          psVar12 = operator_new(8);
          *(undefined **)psVar12 = puVar7 + 0x18;
          *(string **)(this + 0x18) = psVar12;
        }
        uVar11 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar12);
        if ((uVar11 & 1) == 0) goto LAB_003deb7c;
        pbVar14 = *(byte **)(param_1 + 8);
        if ((pbVar14 < *(byte **)(param_1 + 0x10)) && (*pbVar14 == 0x1a)) {
          do {
            *(byte **)(param_1 + 8) = pbVar14 + 1;
LAB_003dea00:
            this_00 = (MapNode *)
                      google::protobuf::RepeatedPtrField<Caver::Proto::MapNode>::Add
                                ((RepeatedPtrField<Caver::Proto::MapNode> *)(this + 0x20));
            pbVar14 = *(byte **)(param_1 + 8);
            if ((pbVar14 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar14)) {
              local_6c = (uint)*pbVar14;
              *(byte **)(param_1 + 8) = pbVar14 + 1;
            }
            else {
              uVar11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                 (param_1,&local_6c);
              if ((uVar11 & 1) == 0) goto LAB_003deb7c;
            }
            iVar9 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar9 + 1;
            if (*(int *)(param_1 + 0x3c) <= iVar9) goto LAB_003deb7c;
            iVar9 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
            uVar11 = MapNode::MergePartialFromCodedStream(this_00,param_1);
            if (((uVar11 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003deb7c;
            google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar9);
            if (0 < *(int *)(param_1 + 0x38)) {
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
            }
            pbVar14 = *(byte **)(param_1 + 8);
            pbVar13 = *(byte **)(param_1 + 0x10);
            if (pbVar13 <= pbVar14) goto LAB_003de858;
          } while (*pbVar14 == 0x1a);
          if (*pbVar14 == 0x20) {
            pbVar14 = pbVar14 + 1;
            *(byte **)(param_1 + 8) = pbVar14;
            if (pbVar14 < pbVar13) goto LAB_003de95c;
            goto LAB_003deadc;
          }
        }
        goto LAB_003de858;
      }
      break;
    case 3:
      if ((uVar8 & 7) == 2) goto LAB_003dea00;
      break;
    case 4:
      if ((uVar11 & 7) != 0) break;
      pbVar14 = *(byte **)(param_1 + 8);
      pbVar13 = *(byte **)(param_1 + 0x10);
      if (pbVar14 < pbVar13) {
LAB_003de95c:
        if ((char)*pbVar14 < '\0') goto LAB_003deadc;
        pbVar15 = pbVar14 + 1;
        local_6c = (uint)*pbVar14;
        *(byte **)(param_1 + 8) = pbVar15;
      }
      else {
LAB_003deadc:
        uVar11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
        if ((uVar11 & 1) == 0) goto LAB_003deb7c;
        pbVar15 = *(byte **)(param_1 + 8);
        pbVar13 = *(byte **)(param_1 + 0x10);
      }
      *(uint *)(this + 0x58) = local_6c;
      uVar8 = *(uint *)(this + 0x68) | 8;
      *(uint *)(this + 0x68) = uVar8;
      if ((pbVar15 < pbVar13) && (*pbVar15 == 0x2a)) {
        *(byte **)(param_1 + 8) = pbVar15 + 1;
LAB_003deb20:
        psVar12 = *(string **)(this + 0x60);
        *(uint *)(this + 0x68) = uVar8 | 0x10;
        if (psVar12 == (string *)puVar6) {
          psVar12 = operator_new(8);
          *(undefined **)psVar12 = puVar7 + 0x18;
          *(string **)(this + 0x60) = psVar12;
        }
        uVar11 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar12);
        if ((uVar11 & 1) == 0) goto LAB_003deb7c;
        if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0)
           ) {
          uVar10 = 1;
          *(undefined4 *)(param_1 + 0x20) = 0;
          param_1[0x24] = (CodedInputStream)0x1;
LAB_003deb88:
          if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(uVar10);
          }
          return;
        }
      }
      goto LAB_003de858;
    case 5:
      if ((uVar8 & 7) == 2) {
        uVar8 = *(uint *)(this + 0x68);
        goto LAB_003deb20;
      }
    }
    if ((uVar8 & 7) != 4) {
      uVar11 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar8);
      if ((uVar11 & 1) == 0) {
LAB_003deb7c:
        uVar10 = 0;
        goto LAB_003deb88;
      }
      goto LAB_003de858;
    }
  }
  else {
    uVar8 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar11 = (ulong)uVar8;
    *(uint *)(param_1 + 0x20) = uVar8;
    if (uVar8 != 0) goto LAB_003de898;
  }
LAB_003deb84:
  uVar10 = 1;
  goto LAB_003deb88;
}


