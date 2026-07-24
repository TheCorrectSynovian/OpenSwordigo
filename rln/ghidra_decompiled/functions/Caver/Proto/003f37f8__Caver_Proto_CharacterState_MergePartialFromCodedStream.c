/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f37f8
 * Function: Caver::Proto::CharacterState::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(CharacterState * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharacterState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::CharacterState::MergePartialFromCodedStream
          (CharacterState *this,CodedInputStream *param_1)

{
  CodedInputStream *pCVar1;
  CodedInputStream *pCVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
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
  char *pcVar18;
  byte *pbVar19;
  CharacterState_ItemState *this_00;
  uint local_7c;
  long local_78;
  
  puVar9 = PTR_DAT_007e5de8;
  lVar7 = DAT_00689bc8;
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  pCVar1 = param_1 + 8;
  pCVar2 = param_1 + 0x10;
  puVar3 = PTR_vtable_007e65c0 + 0x10;
  puVar4 = PTR_DAT_007e5de8 + 0x18;
LAB_003f3874:
  do {
    pbVar16 = *(byte **)pCVar1;
    if ((*(byte **)pCVar2 <= pbVar16) || (bVar5 = *pbVar16, (char)bVar5 < '\0')) {
      uVar10 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar13 = (ulong)uVar10;
      *(uint *)(param_1 + 0x20) = uVar10;
      if (uVar10 != 0) goto LAB_003f38b8;
LAB_003f4254:
      uVar12 = 1;
      goto LAB_003f4260;
    }
    uVar13 = (ulong)bVar5;
    *(uint *)(param_1 + 0x20) = (uint)bVar5;
    *(byte **)(param_1 + 8) = pbVar16 + 1;
    if (bVar5 == 0) goto LAB_003f4254;
LAB_003f38b8:
    uVar10 = (uint)uVar13;
    switch((int)(uVar13 >> 3)) {
    case 2:
      if ((uVar13 & 7) == 0) {
        pbVar16 = *(byte **)pCVar1;
        pbVar17 = *(byte **)pCVar2;
        if ((pbVar16 < pbVar17) && (-1 < (char)*pbVar16)) {
          pbVar19 = pbVar16 + 1;
          local_7c = (uint)*pbVar16;
          *(byte **)pCVar1 = pbVar19;
        }
        else {
          uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c);
          if ((uVar13 & 1) == 0) goto LAB_003f425c;
          pbVar19 = *(byte **)pCVar1;
          pbVar17 = *(byte **)pCVar2;
        }
        *(uint *)(this + 0xc) = local_7c;
        *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 1;
        if ((pbVar19 < pbVar17) && (*pbVar19 == 0x20)) {
          pbVar19 = pbVar19 + 1;
          *(byte **)pCVar1 = pbVar19;
          if (pbVar19 < pbVar17) {
LAB_003f39c8:
            if ((char)*pbVar19 < '\0') goto LAB_003f3b60;
            pbVar16 = pbVar19 + 1;
            local_7c = (uint)*pbVar19;
            *(byte **)pCVar1 = pbVar16;
          }
          else {
LAB_003f3b60:
            uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c)
            ;
            if ((uVar13 & 1) == 0) goto LAB_003f425c;
            pbVar16 = *(byte **)pCVar1;
            pbVar17 = *(byte **)pCVar2;
          }
          *(uint *)(this + 0x10) = local_7c;
          *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 2;
          if ((pbVar16 < pbVar17) && (*pbVar16 == 0x28)) {
            pbVar16 = pbVar16 + 1;
            *(byte **)pCVar1 = pbVar16;
            if (pbVar16 < pbVar17) {
LAB_003f3974:
              if ((char)*pbVar16 < '\0') goto LAB_003f3bb0;
              pbVar19 = pbVar16 + 1;
              local_7c = (uint)*pbVar16;
              *(byte **)pCVar1 = pbVar19;
            }
            else {
LAB_003f3bb0:
              uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                 (param_1,&local_7c);
              if ((uVar13 & 1) == 0) goto LAB_003f425c;
              pbVar19 = *(byte **)pCVar1;
              pbVar17 = *(byte **)pCVar2;
            }
            *(uint *)(this + 0x14) = local_7c;
            *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 4;
            if ((pbVar19 < pbVar17) && (*pbVar19 == 0x30)) {
              pbVar19 = pbVar19 + 1;
              *(byte **)pCVar1 = pbVar19;
              if (pbVar19 < pbVar17) {
LAB_003f3a84:
                if ((char)*pbVar19 < '\0') goto LAB_003f3c00;
                pbVar16 = pbVar19 + 1;
                local_7c = (uint)*pbVar19;
                *(byte **)pCVar1 = pbVar16;
              }
              else {
LAB_003f3c00:
                uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                   (param_1,&local_7c);
                if ((uVar13 & 1) == 0) goto LAB_003f425c;
                pbVar16 = *(byte **)pCVar1;
                pbVar17 = *(byte **)pCVar2;
              }
              *(uint *)(this + 0x18) = local_7c;
              *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 8;
              if ((pbVar16 < pbVar17) && (*pbVar16 == 0x38)) {
                pbVar16 = pbVar16 + 1;
                *(byte **)pCVar1 = pbVar16;
                if (pbVar16 < pbVar17) {
LAB_003f3ab8:
                  if ((char)*pbVar16 < '\0') goto LAB_003f3c50;
                  pbVar19 = pbVar16 + 1;
                  local_7c = (uint)*pbVar16;
                  *(byte **)pCVar1 = pbVar19;
                }
                else {
LAB_003f3c50:
                  uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                     (param_1,&local_7c);
                  if ((uVar13 & 1) == 0) goto LAB_003f425c;
                  pbVar19 = *(byte **)pCVar1;
                  pbVar17 = *(byte **)pCVar2;
                }
                *(uint *)(this + 0x1c) = local_7c;
                *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 0x10;
                if ((pbVar19 < pbVar17) && (*pbVar19 == 0x5a)) {
                  do {
                    *(byte **)pCVar1 = pbVar19 + 1;
LAB_003f3c98:
                    iVar11 = *(int *)(this + 0x28);
                    iVar15 = *(int *)(this + 0x2c);
                    if (iVar11 < iVar15) {
                      *(int *)(this + 0x28) = iVar11 + 1;
                      this_00 = *(CharacterState_ItemState **)
                                 (*(long *)(this + 0x20) + (long)iVar11 * 8);
                    }
                    else {
                      if (iVar15 == *(int *)(this + 0x30)) {
                        google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                                  ((RepeatedPtrFieldBase *)(this + 0x20),iVar15 + 1);
                        iVar11 = *(int *)(this + 0x28);
                        iVar15 = *(int *)(this + 0x2c);
                      }
                      *(int *)(this + 0x2c) = iVar15 + 1;
                      this_00 = operator_new(0x20);
                      *(undefined **)this_00 = puVar3;
                      *(undefined4 *)(this_00 + 8) = 0;
                      puVar8 = PTR__default_name__007e5e50;
                      *(long *)(this_00 + 0x18) = lVar7;
                      *(undefined **)(this_00 + 0x10) = puVar8;
                      *(int *)(this + 0x28) = iVar11 + 1;
                      *(CharacterState_ItemState **)(*(long *)(this + 0x20) + (long)iVar11 * 8) =
                           this_00;
                    }
                    pbVar16 = *(byte **)pCVar1;
                    if ((pbVar16 < *(byte **)pCVar2) && (-1 < (char)*pbVar16)) {
                      local_7c = (uint)*pbVar16;
                      *(byte **)pCVar1 = pbVar16 + 1;
                    }
                    else {
                      uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                         (param_1,&local_7c);
                      if ((uVar13 & 1) == 0) goto LAB_003f425c;
                    }
                    iVar11 = *(int *)(param_1 + 0x38);
                    *(int *)(param_1 + 0x38) = iVar11 + 1;
                    if (*(int *)(param_1 + 0x3c) <= iVar11) goto LAB_003f425c;
                    iVar11 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
                    uVar13 = CharacterState_ItemState::MergePartialFromCodedStream(this_00,param_1);
                    if (((uVar13 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                    goto LAB_003f425c;
                    google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar11);
                    if (0 < *(int *)(param_1 + 0x38)) {
                      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                    }
                    pbVar19 = *(byte **)pCVar1;
                    if (*(byte **)pCVar2 <= pbVar19) goto LAB_003f3874;
                  } while (*pbVar19 == 0x5a);
                  if (*pbVar19 == 0x62) {
                    *(byte **)pCVar1 = pbVar19 + 1;
LAB_003f3dd8:
                    puVar8 = PTR__default_equipped_weapon__007e56f0;
                    psVar14 = *(string **)(this + 0x58);
                    *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 0x40;
                    if (psVar14 == (string *)puVar8) {
                      psVar14 = operator_new(8);
                      *(undefined **)psVar14 = puVar4;
                      *(string **)(this + 0x58) = psVar14;
                    }
                    uVar13 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar14)
                    ;
                    if ((uVar13 & 1) == 0) goto LAB_003f425c;
                    pcVar18 = *(char **)pCVar1;
                    if ((pcVar18 < *(char **)pCVar2) && (*pcVar18 == 'j')) {
                      *(char **)pCVar1 = pcVar18 + 1;
LAB_003f3e40:
                      puVar8 = PTR__default_equipped_armor__007e6790;
                      psVar14 = *(string **)(this + 0x60);
                      *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 0x80;
                      if (psVar14 == (string *)puVar8) {
                        psVar14 = operator_new(8);
                        *(undefined **)psVar14 = puVar9 + 0x18;
                        *(string **)(this + 0x60) = psVar14;
                      }
                      uVar13 = google::protobuf::internal::WireFormatLite::ReadString
                                         (param_1,psVar14);
                      if ((uVar13 & 1) == 0) goto LAB_003f425c;
                      pcVar18 = *(char **)pCVar1;
                      if ((pcVar18 < *(char **)pCVar2) && (*pcVar18 == 'z')) {
                        do {
                          *(char **)pCVar1 = pcVar18 + 1;
LAB_003f3ea8:
                          iVar11 = *(int *)(this + 0x70);
                          iVar15 = *(int *)(this + 0x74);
                          if (iVar11 < iVar15) {
                            *(int *)(this + 0x70) = iVar11 + 1;
                            psVar14 = *(string **)(*(long *)(this + 0x68) + (long)iVar11 * 8);
                          }
                          else {
                            if (iVar15 == *(int *)(this + 0x78)) {
                              google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                                        ((RepeatedPtrFieldBase *)(this + 0x68),iVar15 + 1);
                              iVar15 = *(int *)(this + 0x74);
                            }
                            *(int *)(this + 0x74) = iVar15 + 1;
                            psVar14 = (string *)
                                      google::protobuf::internal::StringTypeHandlerBase::New();
                            iVar11 = *(int *)(this + 0x70);
                            *(int *)(this + 0x70) = iVar11 + 1;
                            *(string **)(*(long *)(this + 0x68) + (long)iVar11 * 8) = psVar14;
                          }
                          uVar13 = google::protobuf::internal::WireFormatLite::ReadString
                                             (param_1,psVar14);
                          if ((uVar13 & 1) == 0) goto LAB_003f425c;
                          pcVar18 = *(char **)pCVar1;
                        } while ((pcVar18 < *(char **)pCVar2) && (*pcVar18 == 'z'));
                        if ((1 < (int)*(char **)pCVar2 - (int)pcVar18) &&
                           ((*pcVar18 == -0x7e && (pcVar18[1] == '\x01')))) {
                          *(char **)pCVar1 = pcVar18 + 2;
LAB_003f3f60:
                          puVar8 = PTR__default_current_skill__007e50e8;
                          psVar14 = *(string **)(this + 0xa0);
                          *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 0x200;
                          if (psVar14 == (string *)puVar8) {
                            psVar14 = operator_new(8);
                            *(undefined **)psVar14 = puVar9 + 0x18;
                            *(string **)(this + 0xa0) = psVar14;
                          }
                          uVar13 = google::protobuf::internal::WireFormatLite::ReadString
                                             (param_1,psVar14);
                          if ((uVar13 & 1) == 0) goto LAB_003f425c;
                          pcVar18 = *(char **)pCVar1;
                          if (((1 < *(int *)pCVar2 - (int)pcVar18) && (*pcVar18 == -0x76)) &&
                             (pcVar18[1] == '\x01')) {
                            *(char **)pCVar1 = pcVar18 + 2;
LAB_003f3fd8:
                            puVar8 = PTR__default_weapon_trinket__007e5d70;
                            psVar14 = *(string **)(this + 0xa8);
                            *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 0x400;
                            if (psVar14 == (string *)puVar8) {
                              psVar14 = operator_new(8);
                              *(undefined **)psVar14 = puVar9 + 0x18;
                              *(string **)(this + 0xa8) = psVar14;
                            }
                            uVar13 = google::protobuf::internal::WireFormatLite::ReadString
                                               (param_1,psVar14);
                            if ((uVar13 & 1) == 0) goto LAB_003f425c;
                            pcVar18 = *(char **)pCVar1;
                            if (((1 < *(int *)pCVar2 - (int)pcVar18) && (*pcVar18 == -0x6e)) &&
                               (pcVar18[1] == '\x01')) {
                              *(char **)pCVar1 = pcVar18 + 2;
LAB_003f4050:
                              puVar8 = PTR__default_armor_trinket__007e5360;
                              psVar14 = *(string **)(this + 0xb0);
                              *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 0x800;
                              if (psVar14 == (string *)puVar8) {
                                psVar14 = operator_new(8);
                                *(undefined **)psVar14 = puVar9 + 0x18;
                                *(string **)(this + 0xb0) = psVar14;
                              }
                              uVar13 = google::protobuf::internal::WireFormatLite::ReadString
                                                 (param_1,psVar14);
                              if ((uVar13 & 1) == 0) goto LAB_003f425c;
                              pcVar18 = *(char **)pCVar1;
                              if (((1 < *(int *)pCVar2 - (int)pcVar18) && (*pcVar18 == -0x66)) &&
                                 (pcVar18[1] == '\x01')) {
                                *(char **)pCVar1 = pcVar18 + 2;
LAB_003f40c8:
                                puVar8 = PTR__default_skill_trinket__007e61b0;
                                psVar14 = *(string **)(this + 0xb8);
                                *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 0x1000;
                                if (psVar14 == (string *)puVar8) {
                                  psVar14 = operator_new(8);
                                  *(undefined **)psVar14 = puVar9 + 0x18;
                                  *(string **)(this + 0xb8) = psVar14;
                                }
                                uVar13 = google::protobuf::internal::WireFormatLite::ReadString
                                                   (param_1,psVar14);
                                if ((uVar13 & 1) == 0) goto LAB_003f425c;
                                pbVar17 = *(byte **)pCVar2;
                                pcVar18 = *(char **)pCVar1;
                                if (((1 < (int)pbVar17 - (int)pcVar18) && (*pcVar18 == -0x60)) &&
                                   (pcVar18[1] == '\x01')) {
                                  pbVar16 = (byte *)(pcVar18 + 2);
                                  *(byte **)pCVar1 = pbVar16;
                                  if (pbVar16 < pbVar17) {
LAB_003f3920:
                                    if ((char)*pbVar16 < '\0') goto LAB_003f4148;
                                    pbVar19 = pbVar16 + 1;
                                    local_7c = (uint)*pbVar16;
                                    *(byte **)pCVar1 = pbVar19;
                                  }
                                  else {
LAB_003f4148:
                                    uVar13 = google::protobuf::io::CodedInputStream::
                                             ReadVarint32Fallback(param_1,&local_7c);
                                    if ((uVar13 & 1) == 0) goto LAB_003f425c;
                                    pbVar17 = *(byte **)pCVar2;
                                    pbVar19 = *(byte **)pCVar1;
                                  }
                                  *(uint *)(this + 0xc0) = local_7c;
                                  *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 0x2000;
                                  if (((1 < (int)pbVar17 - (int)pbVar19) && (*pbVar19 == 0xa8)) &&
                                     (pbVar19[1] == 1)) {
                                    pbVar19 = pbVar19 + 2;
                                    *(byte **)pCVar1 = pbVar19;
                                    if (pbVar19 < pbVar17) {
LAB_003f3a1c:
                                      if ((char)*pbVar19 < '\0') goto LAB_003f41a8;
                                      pbVar16 = pbVar19 + 1;
                                      local_7c = (uint)*pbVar19;
                                      *(byte **)pCVar1 = pbVar16;
                                    }
                                    else {
LAB_003f41a8:
                                      uVar13 = google::protobuf::io::CodedInputStream::
                                               ReadVarint32Fallback(param_1,&local_7c);
                                      if ((uVar13 & 1) == 0) goto LAB_003f425c;
                                      pbVar17 = *(byte **)pCVar2;
                                      pbVar16 = *(byte **)pCVar1;
                                    }
                                    *(uint *)(this + 0xc4) = local_7c;
                                    *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 0x4000;
                                    if (((1 < (int)pbVar17 - (int)pbVar16) && (*pbVar16 == 0xb0)) &&
                                       (pbVar16[1] == 1)) {
                                      pbVar16 = pbVar16 + 2;
                                      *(byte **)pCVar1 = pbVar16;
                                      if (pbVar16 < pbVar17) {
LAB_003f3a50:
                                        if ((char)*pbVar16 < '\0') goto LAB_003f4208;
                                        pbVar19 = pbVar16 + 1;
                                        local_7c = (uint)*pbVar16;
                                        *(byte **)pCVar1 = pbVar19;
                                      }
                                      else {
LAB_003f4208:
                                        uVar13 = google::protobuf::io::CodedInputStream::
                                                 ReadVarint32Fallback(param_1,&local_7c);
                                        if ((uVar13 & 1) == 0) goto LAB_003f425c;
                                        pbVar19 = *(byte **)pCVar1;
                                        pbVar17 = *(byte **)pCVar2;
                                      }
                                      *(uint *)(this + 200) = local_7c;
                                      *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 0x8000;
                                      if ((pbVar19 == pbVar17) && (*(int *)(param_1 + 0x2c) != 0)) {
                                        uVar12 = 1;
                                        *(undefined4 *)(param_1 + 0x20) = 0;
                                        param_1[0x24] = (CodedInputStream)0x1;
                                        goto LAB_003f4260;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_003f3874;
      }
      break;
    default:
      break;
    case 4:
      if ((uVar13 & 7) == 0) {
        pbVar19 = *(byte **)pCVar1;
        pbVar17 = *(byte **)pCVar2;
        if (pbVar19 < pbVar17) goto LAB_003f39c8;
        goto LAB_003f3b60;
      }
      break;
    case 5:
      if ((uVar13 & 7) == 0) {
        pbVar16 = *(byte **)pCVar1;
        pbVar17 = *(byte **)pCVar2;
        if (pbVar16 < pbVar17) goto LAB_003f3974;
        goto LAB_003f3bb0;
      }
      break;
    case 6:
      if ((uVar13 & 7) == 0) {
        pbVar19 = *(byte **)pCVar1;
        pbVar17 = *(byte **)pCVar2;
        if (pbVar19 < pbVar17) goto LAB_003f3a84;
        goto LAB_003f3c00;
      }
      break;
    case 7:
      if ((uVar13 & 7) == 0) {
        pbVar16 = *(byte **)pCVar1;
        pbVar17 = *(byte **)pCVar2;
        if (pbVar16 < pbVar17) goto LAB_003f3ab8;
        goto LAB_003f3c50;
      }
      break;
    case 0xb:
      if ((uVar10 & 7) == 2) goto LAB_003f3c98;
      break;
    case 0xc:
      if ((uVar10 & 7) == 2) goto LAB_003f3dd8;
      break;
    case 0xd:
      if ((uVar10 & 7) == 2) goto LAB_003f3e40;
      break;
    case 0xf:
      if ((uVar10 & 7) == 2) goto LAB_003f3ea8;
      break;
    case 0x10:
      if ((uVar10 & 7) == 2) goto LAB_003f3f60;
      break;
    case 0x11:
      if ((uVar10 & 7) == 2) goto LAB_003f3fd8;
      break;
    case 0x12:
      if ((uVar10 & 7) == 2) goto LAB_003f4050;
      break;
    case 0x13:
      if ((uVar10 & 7) == 2) goto LAB_003f40c8;
      break;
    case 0x14:
      if ((uVar13 & 7) == 0) {
        pbVar16 = *(byte **)pCVar1;
        pbVar17 = *(byte **)pCVar2;
        if (pbVar16 < pbVar17) goto LAB_003f3920;
        goto LAB_003f4148;
      }
      break;
    case 0x15:
      if ((uVar13 & 7) == 0) {
        pbVar19 = *(byte **)pCVar1;
        pbVar17 = *(byte **)pCVar2;
        if (pbVar19 < pbVar17) goto LAB_003f3a1c;
        goto LAB_003f41a8;
      }
      break;
    case 0x16:
      if ((uVar13 & 7) == 0) {
        pbVar16 = *(byte **)pCVar1;
        pbVar17 = *(byte **)pCVar2;
        if (pbVar16 < pbVar17) goto LAB_003f3a50;
        goto LAB_003f4208;
      }
    }
    if ((uVar10 & 7) == 4) goto LAB_003f4254;
    uVar13 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar10);
    if ((uVar13 & 1) == 0) {
LAB_003f425c:
      uVar12 = 0;
LAB_003f4260:
      if (*(long *)(lVar6 + 0x28) == local_78) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar12);
    }
  } while( true );
}


