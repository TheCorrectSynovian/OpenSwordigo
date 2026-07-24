/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dd018
 * Function: Caver::Proto::MapNode::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(MapNode * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapNode::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */

void __thiscall
Caver::Proto::MapNode::MergePartialFromCodedStream(MapNode *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  string *psVar12;
  ulong uVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  Vector2 *this_00;
  MapNode_Portal *this_01;
  uint local_7c;
  long local_78;
  
  puVar8 = PTR_DAT_007e5de8;
  lVar6 = DAT_00689bc8;
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e78c0 + 0x10;
LAB_003dd760:
  pbVar15 = *(byte **)(param_1 + 8);
  if ((pbVar15 < *(byte **)(param_1 + 0x10)) && (bVar4 = *pbVar15, -1 < (char)bVar4)) {
    uVar13 = (ulong)bVar4;
    *(uint *)(param_1 + 0x20) = (uint)bVar4;
    *(byte **)(param_1 + 8) = pbVar15 + 1;
    if (bVar4 == 0) goto LAB_003dd788;
LAB_003dd094:
    uVar9 = (uint)uVar13;
    switch((int)(uVar13 >> 3)) {
    case 1:
      if ((uVar9 & 7) != 2) break;
      this_00 = *(Vector2 **)(this + 0x10);
      *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 1;
      if (this_00 == (Vector2 *)0x0) {
        this_00 = operator_new(0x18);
        Vector2::Vector2(this_00);
        *(Vector2 **)(this + 0x10) = this_00;
      }
      pbVar15 = *(byte **)(param_1 + 8);
      if ((pbVar15 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar15)) {
        local_7c = (uint)*pbVar15;
        *(byte **)(param_1 + 8) = pbVar15 + 1;
LAB_003dd520:
        iVar10 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar10 + 1;
        if (iVar10 < *(int *)(param_1 + 0x3c)) {
          iVar10 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
          uVar13 = Vector2::MergePartialFromCodedStream(this_00,param_1);
          if (((uVar13 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003dd790;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar10);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar3 = *(char **)(param_1 + 8);
          if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\x12')) {
            *(char **)(param_1 + 8) = pcVar3 + 1;
            goto LAB_003dd598;
          }
          goto LAB_003dd760;
        }
      }
      else {
        uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c);
        if ((uVar13 & 1) != 0) goto LAB_003dd520;
      }
      goto LAB_003dd790;
    case 2:
      if ((uVar9 & 7) == 2) {
LAB_003dd598:
        puVar7 = PTR__default_level_name__007e5878;
        psVar12 = *(string **)(this + 0x18);
        *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 2;
        if (psVar12 == (string *)puVar7) {
          psVar12 = operator_new(8);
          *(undefined **)psVar12 = puVar1;
          *(string **)(this + 0x18) = psVar12;
        }
        uVar13 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar12);
        if ((uVar13 & 1) == 0) goto LAB_003dd790;
        pbVar15 = *(byte **)(param_1 + 8);
        if ((pbVar15 < *(byte **)(param_1 + 0x10)) && (*pbVar15 == 0x1a)) {
          do {
            *(byte **)(param_1 + 8) = pbVar15 + 1;
LAB_003dd5f8:
            iVar10 = *(int *)(this + 0x30);
            iVar14 = *(int *)(this + 0x34);
            if (iVar10 < iVar14) {
              *(int *)(this + 0x30) = iVar10 + 1;
              this_01 = *(MapNode_Portal **)(*(long *)(this + 0x28) + (long)iVar10 * 8);
            }
            else {
              if (iVar14 == *(int *)(this + 0x38)) {
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                          ((RepeatedPtrFieldBase *)(this + 0x28),iVar14 + 1);
                iVar10 = *(int *)(this + 0x30);
                iVar14 = *(int *)(this + 0x34);
              }
              *(int *)(this + 0x34) = iVar14 + 1;
              this_01 = operator_new(0x28);
              *(undefined **)this_01 = puVar2;
              *(undefined4 *)(this_01 + 8) = 0;
              puVar7 = PTR__default_destination_name__007e6b58;
              *(long *)(this_01 + 0x18) = lVar6;
              this_01[0x20] = (MapNode_Portal)0x0;
              *(undefined4 *)(this_01 + 0x24) = 0;
              *(undefined **)(this_01 + 0x10) = puVar7;
              *(int *)(this + 0x30) = iVar10 + 1;
              *(MapNode_Portal **)(*(long *)(this + 0x28) + (long)iVar10 * 8) = this_01;
            }
            pbVar15 = *(byte **)(param_1 + 8);
            if ((pbVar15 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar15)) {
              local_7c = (uint)*pbVar15;
              *(byte **)(param_1 + 8) = pbVar15 + 1;
            }
            else {
              uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                 (param_1,&local_7c);
              if ((uVar13 & 1) == 0) goto LAB_003dd790;
            }
            iVar10 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar10 + 1;
            if (*(int *)(param_1 + 0x3c) <= iVar10) goto LAB_003dd790;
            iVar10 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
            uVar13 = MapNode_Portal::MergePartialFromCodedStream(this_01,param_1);
            if (((uVar13 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003dd790;
            google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar10);
            if (0 < *(int *)(param_1 + 0x38)) {
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
            }
            pbVar15 = *(byte **)(param_1 + 8);
            if (*(byte **)(param_1 + 0x10) <= pbVar15) goto LAB_003dd760;
          } while (*pbVar15 == 0x1a);
          if (*pbVar15 == 0x20) {
            pbVar15 = pbVar15 + 1;
            *(byte **)(param_1 + 8) = pbVar15;
            if (pbVar15 < *(byte **)(param_1 + 0x10)) goto LAB_003dd174;
            goto LAB_003dd740;
          }
        }
        goto LAB_003dd760;
      }
      break;
    case 3:
      if ((uVar9 & 7) == 2) goto LAB_003dd5f8;
      break;
    case 4:
      if ((uVar13 & 7) == 0) {
        pbVar15 = *(byte **)(param_1 + 8);
        if (pbVar15 < *(byte **)(param_1 + 0x10)) {
LAB_003dd174:
          if ((char)*pbVar15 < '\0') goto LAB_003dd740;
          local_7c = (uint)*pbVar15;
          *(byte **)(param_1 + 8) = pbVar15 + 1;
        }
        else {
LAB_003dd740:
          uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c);
          if ((uVar13 & 1) == 0) goto LAB_003dd790;
        }
        if (local_7c < 4) {
          *(uint *)(this + 0x60) = local_7c;
          *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x10;
        }
        pbVar17 = *(byte **)(param_1 + 8);
        pbVar16 = *(byte **)(param_1 + 0x10);
        if ((pbVar17 < pbVar16) && (*pbVar17 == 0x28)) {
          pbVar17 = pbVar17 + 1;
          *(byte **)(param_1 + 8) = pbVar17;
          if (pbVar17 < pbVar16) {
LAB_003dd120:
            if ((char)*pbVar17 < '\0') goto LAB_003dd1cc;
            pbVar15 = pbVar17 + 1;
            local_7c = (uint)*pbVar17;
            *(byte **)(param_1 + 8) = pbVar15;
          }
          else {
LAB_003dd1cc:
            uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c)
            ;
            if ((uVar13 & 1) == 0) goto LAB_003dd790;
            pbVar15 = *(byte **)(param_1 + 8);
            pbVar16 = *(byte **)(param_1 + 0x10);
          }
          this[100] = (MapNode)(local_7c != 0);
          *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x20;
          if ((pbVar15 < pbVar16) && (*pbVar15 == 0x30)) {
            pbVar15 = pbVar15 + 1;
            *(byte **)(param_1 + 8) = pbVar15;
            if (pbVar15 < pbVar16) {
LAB_003dd220:
              if ((char)*pbVar15 < '\0') goto LAB_003dd290;
              pbVar17 = pbVar15 + 1;
              local_7c = (uint)*pbVar15;
              *(byte **)(param_1 + 8) = pbVar17;
            }
            else {
LAB_003dd290:
              uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                 (param_1,&local_7c);
              if ((uVar13 & 1) == 0) goto LAB_003dd790;
              pbVar17 = *(byte **)(param_1 + 8);
              pbVar16 = *(byte **)(param_1 + 0x10);
            }
            *(uint *)(this + 0x68) = local_7c;
            uVar9 = *(uint *)(this + 0x84) | 0x40;
            *(uint *)(this + 0x84) = uVar9;
            if ((pbVar17 < pbVar16) && (*pbVar17 == 0x3a)) {
              *(byte **)(param_1 + 8) = pbVar17 + 1;
LAB_003dd2e8:
              puVar7 = PTR__default_music__007e7748;
              psVar12 = *(string **)(this + 0x70);
              *(uint *)(this + 0x84) = uVar9 | 0x80;
              if (psVar12 == (string *)puVar7) {
                psVar12 = operator_new(8);
                *(undefined **)psVar12 = puVar8 + 0x18;
                *(string **)(this + 0x70) = psVar12;
              }
              uVar13 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar12);
              if ((uVar13 & 1) == 0) goto LAB_003dd790;
              pbVar17 = *(byte **)(param_1 + 8);
              pbVar16 = *(byte **)(param_1 + 0x10);
              if ((pbVar17 < pbVar16) && (*pbVar17 == 0x40)) {
                pbVar17 = pbVar17 + 1;
                *(byte **)(param_1 + 8) = pbVar17;
                if (pbVar17 < pbVar16) goto LAB_003dd250;
                goto LAB_003dd350;
              }
            }
          }
        }
        goto LAB_003dd760;
      }
      break;
    case 5:
      if ((uVar13 & 7) == 0) {
        pbVar17 = *(byte **)(param_1 + 8);
        pbVar16 = *(byte **)(param_1 + 0x10);
        if (pbVar17 < pbVar16) goto LAB_003dd120;
        goto LAB_003dd1cc;
      }
      break;
    case 6:
      if ((uVar13 & 7) == 0) {
        pbVar15 = *(byte **)(param_1 + 8);
        pbVar16 = *(byte **)(param_1 + 0x10);
        if (pbVar15 < pbVar16) goto LAB_003dd220;
        goto LAB_003dd290;
      }
      break;
    case 7:
      if ((uVar9 & 7) == 2) {
        uVar9 = *(uint *)(this + 0x84);
        goto LAB_003dd2e8;
      }
      break;
    case 8:
      if ((uVar13 & 7) == 0) {
        pbVar17 = *(byte **)(param_1 + 8);
        pbVar16 = *(byte **)(param_1 + 0x10);
        if (pbVar17 < pbVar16) {
LAB_003dd250:
          if ((char)*pbVar17 < '\0') goto LAB_003dd350;
          pbVar15 = pbVar17 + 1;
          local_7c = (uint)*pbVar17;
          *(byte **)(param_1 + 8) = pbVar15;
        }
        else {
LAB_003dd350:
          uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c);
          if ((uVar13 & 1) == 0) goto LAB_003dd790;
          pbVar15 = *(byte **)(param_1 + 8);
          pbVar16 = *(byte **)(param_1 + 0x10);
        }
        this[0x78] = (MapNode)(local_7c != 0);
        *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x100;
        if ((pbVar15 < pbVar16) && (*pbVar15 == 0x48)) {
          pbVar15 = pbVar15 + 1;
          *(byte **)(param_1 + 8) = pbVar15;
          if (pbVar15 < pbVar16) {
LAB_003dd3a4:
            if ((char)*pbVar15 < '\0') goto LAB_003dd3d4;
            pbVar17 = pbVar15 + 1;
            local_7c = (uint)*pbVar15;
            *(byte **)(param_1 + 8) = pbVar17;
          }
          else {
LAB_003dd3d4:
            uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c)
            ;
            if ((uVar13 & 1) == 0) goto LAB_003dd790;
            pbVar17 = *(byte **)(param_1 + 8);
            pbVar16 = *(byte **)(param_1 + 0x10);
          }
          *(uint *)(this + 0x7c) = local_7c;
          uVar9 = *(uint *)(this + 0x84) | 0x200;
          *(uint *)(this + 0x84) = uVar9;
          if ((pbVar17 < pbVar16) && (*pbVar17 == 0x52)) {
            *(byte **)(param_1 + 8) = pbVar17 + 1;
LAB_003dd418:
            puVar7 = PTR__default_title__007e6348;
            psVar12 = *(string **)(this + 0x20);
            *(uint *)(this + 0x84) = uVar9 | 4;
            if (psVar12 == (string *)puVar7) {
              psVar12 = operator_new(8);
              *(undefined **)psVar12 = puVar8 + 0x18;
              *(string **)(this + 0x20) = psVar12;
            }
            uVar13 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar12);
            if ((uVar13 & 1) == 0) goto LAB_003dd790;
            pbVar15 = *(byte **)(param_1 + 8);
            pbVar16 = *(byte **)(param_1 + 0x10);
            if ((pbVar15 < pbVar16) && (*pbVar15 == 0x58)) {
              pbVar15 = pbVar15 + 1;
              *(byte **)(param_1 + 8) = pbVar15;
              if (pbVar15 < pbVar16) goto LAB_003dd480;
              goto LAB_003dd4b0;
            }
          }
        }
        goto LAB_003dd760;
      }
      break;
    case 9:
      if ((uVar13 & 7) == 0) {
        pbVar15 = *(byte **)(param_1 + 8);
        pbVar16 = *(byte **)(param_1 + 0x10);
        if (pbVar15 < pbVar16) goto LAB_003dd3a4;
        goto LAB_003dd3d4;
      }
      break;
    case 10:
      if ((uVar9 & 7) == 2) {
        uVar9 = *(uint *)(this + 0x84);
        goto LAB_003dd418;
      }
      break;
    case 0xb:
      if ((uVar13 & 7) != 0) break;
      pbVar15 = *(byte **)(param_1 + 8);
      pbVar16 = *(byte **)(param_1 + 0x10);
      if (pbVar15 < pbVar16) {
LAB_003dd480:
        if ((char)*pbVar15 < '\0') goto LAB_003dd4b0;
        pbVar17 = pbVar15 + 1;
        local_7c = (uint)*pbVar15;
        *(byte **)(param_1 + 8) = pbVar17;
      }
      else {
LAB_003dd4b0:
        uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c);
        if ((uVar13 & 1) == 0) goto LAB_003dd790;
        pbVar17 = *(byte **)(param_1 + 8);
        pbVar16 = *(byte **)(param_1 + 0x10);
      }
      this[0x80] = (MapNode)(local_7c != 0);
      *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x400;
      if ((pbVar17 == pbVar16) && (*(int *)(param_1 + 0x2c) != 0)) {
        uVar11 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_003dd794:
        if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar11);
        }
        return;
      }
      goto LAB_003dd760;
    }
    if ((uVar9 & 7) != 4) {
      uVar13 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar9);
      if ((uVar13 & 1) != 0) goto LAB_003dd760;
LAB_003dd790:
      uVar11 = 0;
      goto LAB_003dd794;
    }
  }
  else {
    uVar9 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar13 = (ulong)uVar9;
    *(uint *)(param_1 + 0x20) = uVar9;
    if (uVar9 != 0) goto LAB_003dd094;
  }
LAB_003dd788:
  uVar11 = 1;
  goto LAB_003dd794;
}


