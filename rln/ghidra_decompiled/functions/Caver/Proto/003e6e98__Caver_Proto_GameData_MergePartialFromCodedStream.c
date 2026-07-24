/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e6e98
 * Function: Caver::Proto::GameData::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(GameData * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameData::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */

void __thiscall
Caver::Proto::GameData::MergePartialFromCodedStream(GameData *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte *pbVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  uint uVar26;
  int iVar27;
  undefined8 uVar28;
  ulong uVar29;
  int iVar30;
  char *pcVar31;
  Item *this_00;
  Skill *this_01;
  Quest *this_02;
  EntityClass *this_03;
  GuideTarget *this_04;
  uint local_7c;
  long local_78;
  
  puVar25 = PTR__default_description__007e7e10;
  puVar24 = PTR__default_object_identifier__007e7520;
  puVar23 = PTR__default_title__007e7328;
  puVar22 = PTR__default_title__007e6d70;
  puVar21 = PTR__default_name__007e6d10;
  puVar20 = PTR__default_name__007e6888;
  puVar19 = PTR__default_level_name__007e6788;
  puVar18 = PTR__default_short_description__007e6118;
  puVar17 = PTR__default_name__007e5e30;
  puVar16 = PTR__default_name__007e5c18;
  puVar15 = PTR__default_follow_up_quest__007e5bb8;
  puVar14 = PTR__default_title__007e56f8;
  puVar13 = PTR__default_name__007e4fe0;
  puVar12 = PTR__default_title__007e4fd8;
  puVar11 = PTR__default_map_location__007e4c80;
  puVar10 = PTR__default_carry_object_identifier__007e49b0;
  lVar9 = DAT_0068aa60;
  lVar8 = tpidr_el0;
  local_78 = *(long *)(lVar8 + 0x28);
  puVar1 = PTR_vtable_007e72f8 + 0x10;
  puVar2 = PTR_vtable_007e5620 + 0x10;
  puVar3 = PTR_vtable_007e5b70 + 0x10;
  puVar4 = PTR_vtable_007e69c8 + 0x10;
  puVar5 = PTR_vtable_007e5c88 + 0x10;
LAB_003e702c:
  do {
    pbVar6 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar6) || (bVar7 = *pbVar6, (char)bVar7 < '\0')) {
      uVar26 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar29 = (ulong)uVar26;
      *(uint *)(param_1 + 0x20) = uVar26;
      if (uVar26 != 0) goto LAB_003e706c;
LAB_003e7770:
      uVar28 = 1;
      goto LAB_003e7774;
    }
    uVar29 = (ulong)bVar7;
    *(uint *)(param_1 + 0x20) = (uint)bVar7;
    *(byte **)(param_1 + 8) = pbVar6 + 1;
    if (bVar7 == 0) goto LAB_003e7770;
LAB_003e706c:
    uVar26 = (uint)uVar29;
    switch((int)(uVar29 >> 3)) {
    case 1:
      if ((uVar26 & 7) == 2) {
        while( true ) {
          iVar27 = *(int *)(this + 0x18);
          iVar30 = *(int *)(this + 0x1c);
          if (iVar27 < iVar30) {
            *(int *)(this + 0x18) = iVar27 + 1;
            this_00 = *(Item **)(*(long *)(this + 0x10) + (long)iVar27 * 8);
          }
          else {
            if (iVar30 == *(int *)(this + 0x20)) {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                        ((RepeatedPtrFieldBase *)(this + 0x10),iVar30 + 1);
              iVar27 = *(int *)(this + 0x18);
              iVar30 = *(int *)(this + 0x1c);
            }
            *(int *)(this + 0x1c) = iVar30 + 1;
            this_00 = operator_new(0x48);
            *(undefined **)this_00 = puVar1;
            *(long *)(this_00 + 8) = lVar9;
            *(undefined **)(this_00 + 0x18) = puVar12;
            *(undefined **)(this_00 + 0x10) = puVar20;
            this_00[0x30] = (Item)0x0;
            *(undefined8 *)(this_00 + 0x3c) = 0;
            *(undefined8 *)(this_00 + 0x34) = 0;
            *(undefined **)(this_00 + 0x28) = puVar25;
            *(undefined **)(this_00 + 0x20) = puVar18;
            *(int *)(this + 0x18) = iVar27 + 1;
            *(Item **)(*(long *)(this + 0x10) + (long)iVar27 * 8) = this_00;
          }
          pbVar6 = *(byte **)(param_1 + 8);
          if ((pbVar6 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar6)) {
            local_7c = (uint)*pbVar6;
            *(byte **)(param_1 + 8) = pbVar6 + 1;
          }
          else {
            uVar29 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c)
            ;
            if ((uVar29 & 1) == 0) goto LAB_003e7768;
          }
          iVar27 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar27 + 1;
          if (*(int *)(param_1 + 0x3c) <= iVar27) goto LAB_003e7768;
          iVar27 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
          uVar29 = Item::MergePartialFromCodedStream(this_00,param_1);
          if (((uVar29 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003e7768;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar27);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar31 = *(char **)(param_1 + 8);
          if (*(char **)(param_1 + 0x10) <= pcVar31) goto LAB_003e702c;
          if (*pcVar31 != '\n') break;
          *(char **)(param_1 + 8) = pcVar31 + 1;
        }
        if (*pcVar31 == '\x12') {
          do {
            *(char **)(param_1 + 8) = pcVar31 + 1;
LAB_003e7244:
            iVar27 = *(int *)(this + 0x50);
            iVar30 = *(int *)(this + 0x54);
            if (iVar27 < iVar30) {
              *(int *)(this + 0x50) = iVar27 + 1;
              this_01 = *(Skill **)(*(long *)(this + 0x48) + (long)iVar27 * 8);
            }
            else {
              if (iVar30 == *(int *)(this + 0x58)) {
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                          ((RepeatedPtrFieldBase *)(this + 0x48),iVar30 + 1);
                iVar27 = *(int *)(this + 0x50);
                iVar30 = *(int *)(this + 0x54);
              }
              *(int *)(this + 0x54) = iVar30 + 1;
              this_01 = operator_new(0x38);
              *(undefined4 *)(this_01 + 8) = 0;
              *(undefined **)this_01 = puVar2;
              *(undefined **)(this_01 + 0x18) = puVar23;
              *(undefined **)(this_01 + 0x10) = puVar21;
              *(long *)(this_01 + 0x30) = 0;
              *(undefined **)(this_01 + 0x20) = PTR__default_description__007e7dc0;
              *(long *)(this_01 + 0x28) = 0;
              *(int *)(this + 0x50) = iVar27 + 1;
              *(Skill **)(*(long *)(this + 0x48) + (long)iVar27 * 8) = this_01;
            }
            pbVar6 = *(byte **)(param_1 + 8);
            if ((pbVar6 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar6)) {
              local_7c = (uint)*pbVar6;
              *(byte **)(param_1 + 8) = pbVar6 + 1;
            }
            else {
              uVar29 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                 (param_1,&local_7c);
              if ((uVar29 & 1) == 0) goto LAB_003e7768;
            }
            iVar27 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar27 + 1;
            if (*(int *)(param_1 + 0x3c) <= iVar27) goto LAB_003e7768;
            iVar27 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
            uVar29 = Skill::MergePartialFromCodedStream(this_01,param_1);
            if (((uVar29 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003e7768;
            google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar27);
            if (0 < *(int *)(param_1 + 0x38)) {
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
            }
            pcVar31 = *(char **)(param_1 + 8);
            if (*(char **)(param_1 + 0x10) <= pcVar31) goto LAB_003e702c;
          } while (*pcVar31 == '\x12');
          if (*pcVar31 == '\x1a') {
            do {
              *(char **)(param_1 + 8) = pcVar31 + 1;
LAB_003e7388:
              iVar27 = *(int *)(this + 0x88);
              iVar30 = *(int *)(this + 0x8c);
              if (iVar27 < iVar30) {
                *(int *)(this + 0x88) = iVar27 + 1;
                this_02 = *(Quest **)(*(long *)(this + 0x80) + (long)iVar27 * 8);
              }
              else {
                if (iVar30 == *(int *)(this + 0x90)) {
                  google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                            ((RepeatedPtrFieldBase *)(this + 0x80),iVar30 + 1);
                  iVar27 = *(int *)(this + 0x88);
                  iVar30 = *(int *)(this + 0x8c);
                }
                *(int *)(this + 0x8c) = iVar30 + 1;
                this_02 = operator_new(0x38);
                *(undefined4 *)(this_02 + 8) = 0;
                *(undefined **)(this_02 + 0x18) = puVar22;
                *(undefined **)(this_02 + 0x10) = puVar17;
                *(undefined **)this_02 = puVar3;
                *(undefined4 *)(this_02 + 0x30) = 0;
                *(undefined **)(this_02 + 0x28) = puVar11;
                *(undefined **)(this_02 + 0x20) = puVar15;
                *(int *)(this + 0x88) = iVar27 + 1;
                *(Quest **)(*(long *)(this + 0x80) + (long)iVar27 * 8) = this_02;
              }
              pbVar6 = *(byte **)(param_1 + 8);
              if ((pbVar6 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar6)) {
                local_7c = (uint)*pbVar6;
                *(byte **)(param_1 + 8) = pbVar6 + 1;
              }
              else {
                uVar29 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                   (param_1,&local_7c);
                if ((uVar29 & 1) == 0) goto LAB_003e7768;
              }
              iVar27 = *(int *)(param_1 + 0x38);
              *(int *)(param_1 + 0x38) = iVar27 + 1;
              if (*(int *)(param_1 + 0x3c) <= iVar27) goto LAB_003e7768;
              iVar27 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
              uVar29 = Quest::MergePartialFromCodedStream(this_02,param_1);
              if (((uVar29 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
              goto LAB_003e7768;
              google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar27);
              if (0 < *(int *)(param_1 + 0x38)) {
                *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
              }
              pcVar31 = *(char **)(param_1 + 8);
              if (*(char **)(param_1 + 0x10) <= pcVar31) goto LAB_003e702c;
            } while (*pcVar31 == '\x1a');
            if (*pcVar31 == '\"') {
              do {
                *(char **)(param_1 + 8) = pcVar31 + 1;
LAB_003e74c8:
                iVar27 = *(int *)(this + 0xc0);
                iVar30 = *(int *)(this + 0xc4);
                if (iVar27 < iVar30) {
                  *(int *)(this + 0xc0) = iVar27 + 1;
                  this_03 = *(EntityClass **)(*(long *)(this + 0xb8) + (long)iVar27 * 8);
                }
                else {
                  if (iVar30 == *(int *)(this + 200)) {
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                              ((RepeatedPtrFieldBase *)(this + 0xb8),iVar30 + 1);
                    iVar27 = *(int *)(this + 0xc0);
                    iVar30 = *(int *)(this + 0xc4);
                  }
                  *(int *)(this + 0xc4) = iVar30 + 1;
                  this_03 = operator_new(0x30);
                  *(undefined **)this_03 = puVar4;
                  *(undefined4 *)(this_03 + 8) = 0;
                  *(undefined **)(this_03 + 0x18) = puVar14;
                  *(undefined **)(this_03 + 0x10) = puVar16;
                  *(undefined4 *)(this_03 + 0x20) = 0x1010100;
                  *(undefined4 *)(this_03 + 0x24) = 0;
                  *(long *)(this_03 + 0x28) = 0;
                  *(int *)(this + 0xc0) = iVar27 + 1;
                  *(EntityClass **)(*(long *)(this + 0xb8) + (long)iVar27 * 8) = this_03;
                }
                pbVar6 = *(byte **)(param_1 + 8);
                if ((pbVar6 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar6)) {
                  local_7c = (uint)*pbVar6;
                  *(byte **)(param_1 + 8) = pbVar6 + 1;
                }
                else {
                  uVar29 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                     (param_1,&local_7c);
                  if ((uVar29 & 1) == 0) goto LAB_003e7768;
                }
                iVar27 = *(int *)(param_1 + 0x38);
                *(int *)(param_1 + 0x38) = iVar27 + 1;
                if (*(int *)(param_1 + 0x3c) <= iVar27) goto LAB_003e7768;
                iVar27 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
                uVar29 = EntityClass::MergePartialFromCodedStream(this_03,param_1);
                if (((uVar29 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                goto LAB_003e7768;
                google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar27);
                if (0 < *(int *)(param_1 + 0x38)) {
                  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                }
                pcVar31 = *(char **)(param_1 + 8);
                if (*(char **)(param_1 + 0x10) <= pcVar31) goto LAB_003e702c;
              } while (*pcVar31 == '\"');
              if (*pcVar31 == '*') {
                do {
                  *(char **)(param_1 + 8) = pcVar31 + 1;
LAB_003e7608:
                  iVar27 = *(int *)(this + 0xf8);
                  iVar30 = *(int *)(this + 0xfc);
                  if (iVar27 < iVar30) {
                    *(int *)(this + 0xf8) = iVar27 + 1;
                    this_04 = *(GuideTarget **)(*(long *)(this + 0xf0) + (long)iVar27 * 8);
                  }
                  else {
                    if (iVar30 == *(int *)(this + 0x100)) {
                      google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                                ((RepeatedPtrFieldBase *)(this + 0xf0),iVar30 + 1);
                      iVar27 = *(int *)(this + 0xf8);
                      iVar30 = *(int *)(this + 0xfc);
                    }
                    *(int *)(this + 0xfc) = iVar30 + 1;
                    this_04 = operator_new(0x78);
                    *(undefined **)(this_04 + 0x18) = puVar19;
                    *(undefined **)(this_04 + 0x10) = puVar13;
                    *(undefined **)this_04 = puVar5;
                    *(long *)(this_04 + 0x40) = 0;
                    *(undefined4 *)(this_04 + 0x48) = 4;
                    *(long *)(this_04 + 8) = 0;
                    *(undefined **)(this_04 + 0x28) = puVar10;
                    *(undefined **)(this_04 + 0x20) = puVar24;
                    this_04[0x30] = (GuideTarget)0x0;
                    *(GuideTarget **)(this_04 + 0x38) = this_04 + 0x50;
                    *(undefined4 *)(this_04 + 0x70) = 0;
                    *(int *)(this + 0xf8) = iVar27 + 1;
                    *(GuideTarget **)(*(long *)(this + 0xf0) + (long)iVar27 * 8) = this_04;
                  }
                  pbVar6 = *(byte **)(param_1 + 8);
                  if ((pbVar6 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar6)) {
                    local_7c = (uint)*pbVar6;
                    *(byte **)(param_1 + 8) = pbVar6 + 1;
                  }
                  else {
                    uVar29 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                       (param_1,&local_7c);
                    if ((uVar29 & 1) == 0) goto LAB_003e7768;
                  }
                  iVar27 = *(int *)(param_1 + 0x38);
                  *(int *)(param_1 + 0x38) = iVar27 + 1;
                  if (*(int *)(param_1 + 0x3c) <= iVar27) goto LAB_003e7768;
                  iVar27 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
                  uVar29 = GuideTarget::MergePartialFromCodedStream(this_04,param_1);
                  if (((uVar29 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                  goto LAB_003e7768;
                  google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar27);
                  if (0 < *(int *)(param_1 + 0x38)) {
                    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                  }
                  pcVar31 = *(char **)(param_1 + 8);
                } while ((pcVar31 < *(char **)(param_1 + 0x10)) && (*pcVar31 == '*'));
                if ((pcVar31 == *(char **)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0)) {
                  uVar28 = 1;
                  *(undefined4 *)(param_1 + 0x20) = 0;
                  param_1[0x24] = (CodedInputStream)0x1;
                  goto LAB_003e7774;
                }
              }
            }
          }
        }
        goto LAB_003e702c;
      }
      break;
    case 2:
      if ((uVar26 & 7) == 2) goto LAB_003e7244;
      break;
    case 3:
      if ((uVar26 & 7) == 2) goto LAB_003e7388;
      break;
    case 4:
      if ((uVar26 & 7) == 2) goto LAB_003e74c8;
      break;
    case 5:
      if ((uVar26 & 7) == 2) goto LAB_003e7608;
    }
    if ((uVar26 & 7) == 4) goto LAB_003e7770;
    uVar29 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar26);
    if ((uVar29 & 1) == 0) {
LAB_003e7768:
      uVar28 = 0;
LAB_003e7774:
      if (*(long *)(lVar8 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar28);
      }
      return;
    }
  } while( true );
}


