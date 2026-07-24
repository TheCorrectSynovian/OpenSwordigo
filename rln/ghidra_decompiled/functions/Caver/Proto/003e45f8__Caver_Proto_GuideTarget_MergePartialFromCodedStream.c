/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e45f8
 * Function: Caver::Proto::GuideTarget::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(GuideTarget * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GuideTarget::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::GuideTarget::MergePartialFromCodedStream(GuideTarget *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  byte bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  string *psVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  GuideTarget_LevelObject *this_00;
  uint local_6c;
  long local_68;
  
  puVar9 = PTR__default_object_identifier__007e7308;
  puVar8 = PTR__default_level_name__007e6158;
  puVar7 = PTR_DAT_007e5de8;
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e53b0 + 0x10;
LAB_003e466c:
  do {
    pbVar17 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar17) || (bVar4 = *pbVar17, (char)bVar4 < '\0')) {
      uVar10 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar13 = (ulong)uVar10;
      *(uint *)(param_1 + 0x20) = uVar10;
      if (uVar10 != 0) goto LAB_003e46ac;
LAB_003e4b1c:
      uVar12 = 1;
      goto LAB_003e4b20;
    }
    uVar13 = (ulong)bVar4;
    *(uint *)(param_1 + 0x20) = (uint)bVar4;
    *(byte **)(param_1 + 8) = pbVar17 + 1;
    if (bVar4 == 0) goto LAB_003e4b1c;
LAB_003e46ac:
    uVar10 = (uint)uVar13;
    switch((int)(uVar13 >> 3)) {
    case 1:
      if ((uVar13 & 7) == 0) {
        pbVar17 = *(byte **)(param_1 + 8);
        if ((pbVar17 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar17)) {
          local_6c = (uint)*pbVar17;
          *(byte **)(param_1 + 8) = pbVar17 + 1;
        }
        else {
          uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
          if ((uVar13 & 1) == 0) goto LAB_003e4b14;
        }
        if (local_6c < 5) {
          *(uint *)(this + 0xc) = local_6c;
          *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 1;
        }
        pcVar3 = *(char **)(param_1 + 8);
        if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\x12')) {
          *(char **)(param_1 + 8) = pcVar3 + 1;
LAB_003e477c:
          puVar6 = PTR__default_name__007e4fe0;
          psVar14 = *(string **)(this + 0x10);
          *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 2;
          if (psVar14 == (string *)puVar6) {
            psVar14 = operator_new(8);
            *(undefined **)psVar14 = puVar1;
            *(string **)(this + 0x10) = psVar14;
          }
          uVar13 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar14);
          if ((uVar13 & 1) == 0) goto LAB_003e4b14;
          pcVar3 = *(char **)(param_1 + 8);
          if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\x1a')) {
            *(char **)(param_1 + 8) = pcVar3 + 1;
LAB_003e47dc:
            puVar6 = PTR__default_level_name__007e6788;
            psVar14 = *(string **)(this + 0x18);
            *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 4;
            if (psVar14 == (string *)puVar6) {
              psVar14 = operator_new(8);
              *(undefined **)psVar14 = puVar7 + 0x18;
              *(string **)(this + 0x18) = psVar14;
            }
            uVar13 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar14);
            if ((uVar13 & 1) == 0) goto LAB_003e4b14;
            pcVar3 = *(char **)(param_1 + 8);
            if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\"')) {
              *(char **)(param_1 + 8) = pcVar3 + 1;
LAB_003e4840:
              puVar6 = PTR__default_object_identifier__007e7520;
              psVar14 = *(string **)(this + 0x20);
              *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 8;
              if (psVar14 == (string *)puVar6) {
                psVar14 = operator_new(8);
                *(undefined **)psVar14 = puVar7 + 0x18;
                *(string **)(this + 0x20) = psVar14;
              }
              uVar13 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar14);
              if ((uVar13 & 1) == 0) goto LAB_003e4b14;
              pcVar3 = *(char **)(param_1 + 8);
              if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '*')) {
                *(char **)(param_1 + 8) = pcVar3 + 1;
LAB_003e48a4:
                puVar6 = PTR__default_carry_object_identifier__007e49b0;
                psVar14 = *(string **)(this + 0x28);
                *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 0x10;
                if (psVar14 == (string *)puVar6) {
                  psVar14 = operator_new(8);
                  *(undefined **)psVar14 = puVar7 + 0x18;
                  *(string **)(this + 0x28) = psVar14;
                }
                uVar13 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar14);
                if ((uVar13 & 1) == 0) goto LAB_003e4b14;
                pbVar17 = *(byte **)(param_1 + 8);
                pbVar16 = *(byte **)(param_1 + 0x10);
                if ((pbVar17 < pbVar16) && (*pbVar17 == 0x30)) {
                  pbVar17 = pbVar17 + 1;
                  *(byte **)(param_1 + 8) = pbVar17;
                  if (pbVar17 < pbVar16) {
LAB_003e4910:
                    if ((char)*pbVar17 < '\0') goto LAB_003e4940;
                    pbVar18 = pbVar17 + 1;
                    local_6c = (uint)*pbVar17;
                    *(byte **)(param_1 + 8) = pbVar18;
                  }
                  else {
LAB_003e4940:
                    uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                       (param_1,&local_6c);
                    if ((uVar13 & 1) == 0) goto LAB_003e4b14;
                    pbVar18 = *(byte **)(param_1 + 8);
                    pbVar16 = *(byte **)(param_1 + 0x10);
                  }
                  this[0x30] = (GuideTarget)(local_6c != 0);
                  *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 0x20;
                  if ((pbVar18 < pbVar16) && (*pbVar18 == 0x3a)) {
                    do {
                      *(byte **)(param_1 + 8) = pbVar18 + 1;
LAB_003e49d4:
                      iVar11 = *(int *)(this + 0x40);
                      iVar15 = *(int *)(this + 0x44);
                      if (iVar11 < iVar15) {
                        *(int *)(this + 0x40) = iVar11 + 1;
                        this_00 = *(GuideTarget_LevelObject **)
                                   (*(long *)(this + 0x38) + (long)iVar11 * 8);
                      }
                      else {
                        if (iVar15 == *(int *)(this + 0x48)) {
                          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                                    ((RepeatedPtrFieldBase *)(this + 0x38),iVar15 + 1);
                          iVar11 = *(int *)(this + 0x40);
                          iVar15 = *(int *)(this + 0x44);
                        }
                        *(int *)(this + 0x44) = iVar15 + 1;
                        this_00 = operator_new(0x28);
                        *(undefined **)this_00 = puVar2;
                        *(undefined4 *)(this_00 + 8) = 0;
                        *(undefined **)(this_00 + 0x18) = puVar9;
                        *(undefined **)(this_00 + 0x10) = puVar8;
                        *(undefined4 *)(this_00 + 0x20) = 0;
                        *(int *)(this + 0x40) = iVar11 + 1;
                        *(GuideTarget_LevelObject **)(*(long *)(this + 0x38) + (long)iVar11 * 8) =
                             this_00;
                      }
                      pbVar17 = *(byte **)(param_1 + 8);
                      if ((pbVar17 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar17)) {
                        local_6c = (uint)*pbVar17;
                        *(byte **)(param_1 + 8) = pbVar17 + 1;
                      }
                      else {
                        uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                           (param_1,&local_6c);
                        if ((uVar13 & 1) == 0) goto LAB_003e4b14;
                      }
                      iVar11 = *(int *)(param_1 + 0x38);
                      *(int *)(param_1 + 0x38) = iVar11 + 1;
                      if (*(int *)(param_1 + 0x3c) <= iVar11) goto LAB_003e4b14;
                      iVar11 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
                      uVar13 = GuideTarget_LevelObject::MergePartialFromCodedStream(this_00,param_1)
                      ;
                      if (((uVar13 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                      goto LAB_003e4b14;
                      google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar11);
                      if (0 < *(int *)(param_1 + 0x38)) {
                        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                      }
                      pbVar18 = *(byte **)(param_1 + 8);
                    } while ((pbVar18 < *(byte **)(param_1 + 0x10)) && (*pbVar18 == 0x3a));
                    if ((pbVar18 == *(byte **)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
                    {
                      uVar12 = 1;
                      *(undefined4 *)(param_1 + 0x20) = 0;
                      param_1[0x24] = (CodedInputStream)0x1;
                      goto LAB_003e4b20;
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_003e466c;
      }
      break;
    case 2:
      if ((uVar10 & 7) == 2) goto LAB_003e477c;
      break;
    case 3:
      if ((uVar10 & 7) == 2) goto LAB_003e47dc;
      break;
    case 4:
      if ((uVar10 & 7) == 2) goto LAB_003e4840;
      break;
    case 5:
      if ((uVar10 & 7) == 2) goto LAB_003e48a4;
      break;
    case 6:
      if ((uVar13 & 7) == 0) {
        pbVar17 = *(byte **)(param_1 + 8);
        pbVar16 = *(byte **)(param_1 + 0x10);
        if (pbVar17 < pbVar16) goto LAB_003e4910;
        goto LAB_003e4940;
      }
      break;
    case 7:
      if ((uVar10 & 7) == 2) goto LAB_003e49d4;
      break;
    default:
    }
    if ((uVar10 & 7) == 4) goto LAB_003e4b1c;
    uVar13 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar10);
    if ((uVar13 & 1) == 0) {
LAB_003e4b14:
      uVar12 = 0;
LAB_003e4b20:
      if (*(long *)(lVar5 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar12);
    }
  } while( true );
}


