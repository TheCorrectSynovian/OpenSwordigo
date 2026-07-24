/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ef658
 * Function: Caver::Proto::GameState::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(GameState * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */

void __thiscall
Caver::Proto::GameState::MergePartialFromCodedStream(GameState *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  CodedInputStream *pCVar6;
  CodedInputStream *pCVar7;
  undefined *puVar8;
  byte bVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  uint uVar19;
  int iVar20;
  undefined8 uVar21;
  string *psVar22;
  ulong uVar23;
  int iVar24;
  byte *pbVar25;
  byte *pbVar26;
  char *pcVar27;
  byte *pbVar28;
  CharacterState *this_00;
  LevelState *this_01;
  QuestState *this_02;
  StateProperties *this_03;
  QuestText *this_04;
  uint local_7c;
  long local_78;
  
  puVar18 = PTR__default_equipped_armor__007e6790;
  puVar17 = PTR__default_skill_trinket__007e61b0;
  puVar16 = PTR_DAT_007e5de8;
  puVar15 = PTR__default_weapon_trinket__007e5d70;
  puVar14 = PTR__default_equipped_weapon__007e56f0;
  puVar13 = PTR__default_armor_trinket__007e5360;
  puVar12 = PTR__default_current_skill__007e50e8;
  lVar10 = tpidr_el0;
  puVar1 = PTR_vtable_007e59a0 + 0x10;
  local_78 = *(long *)(lVar10 + 0x28);
  puVar2 = PTR_vtable_007e4a60 + 0x10;
  puVar3 = PTR_DAT_007e5de8 + 0x18;
  puVar4 = PTR_vtable_007e7118 + 0x10;
  puVar5 = PTR_vtable_007e6290 + 0x10;
  pCVar6 = param_1 + 8;
  pCVar7 = param_1 + 0x10;
  puVar8 = PTR_vtable_007e4c28 + 0x10;
LAB_003f060c:
  do {
    pbVar26 = *(byte **)pCVar6;
    if ((*(byte **)pCVar7 <= pbVar26) || (bVar9 = *pbVar26, (char)bVar9 < '\0')) {
      uVar19 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar23 = (ulong)uVar19;
      *(uint *)(param_1 + 0x20) = uVar19;
      if (uVar19 != 0) goto LAB_003ef78c;
LAB_003f0638:
      uVar21 = 1;
      goto LAB_003f0644;
    }
    uVar23 = (ulong)bVar9;
    *(uint *)(param_1 + 0x20) = (uint)bVar9;
    *(byte **)(param_1 + 8) = pbVar26 + 1;
    if (bVar9 == 0) goto LAB_003f0638;
LAB_003ef78c:
    uVar19 = (uint)uVar23;
    switch((int)(uVar23 >> 3)) {
    case 1:
      if ((uVar19 & 7) == 2) {
        this_00 = *(CharacterState **)(this + 0x10);
        *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 1;
        if (this_00 == (CharacterState *)0x0) {
          this_00 = operator_new(0xd0);
          *(undefined4 *)(this_00 + 0x30) = 4;
          *(undefined **)(this_00 + 0x60) = puVar18;
          *(undefined **)(this_00 + 0x58) = puVar14;
          *(undefined4 *)(this_00 + 0x78) = 4;
          *(undefined **)(this_00 + 0xa8) = puVar15;
          *(undefined **)(this_00 + 0xa0) = puVar12;
          *(long *)(this_00 + 0x18) = 0;
          *(CharacterState **)(this_00 + 0x20) = this_00 + 0x38;
          *(long *)(this_00 + 0x28) = 0;
          *(long *)(this_00 + 0x70) = 0;
          *(undefined **)this_00 = puVar1;
          *(long *)(this_00 + 8) = 0;
          *(long *)(this_00 + 0x10) = 0;
          *(undefined **)(this_00 + 0xb8) = puVar17;
          *(undefined **)(this_00 + 0xb0) = puVar13;
          *(long *)(this_00 + 0xc0) = 0;
          *(long *)(this_00 + 200) = 0;
          *(CharacterState **)(this_00 + 0x68) = this_00 + 0x80;
          *(CharacterState **)(this + 0x10) = this_00;
        }
        pbVar26 = *(byte **)pCVar6;
        if ((pbVar26 < *(byte **)pCVar7) && (-1 < (char)*pbVar26)) {
          local_7c = (uint)*pbVar26;
          *(byte **)pCVar6 = pbVar26 + 1;
        }
        else {
          uVar23 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c);
          if ((uVar23 & 1) == 0) goto LAB_003f0640;
        }
        iVar20 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar20 + 1;
        if (*(int *)(param_1 + 0x3c) <= iVar20) goto LAB_003f0640;
        iVar20 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
        uVar23 = CharacterState::MergePartialFromCodedStream(this_00,param_1);
        if (((uVar23 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003f0640;
        google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar20);
        if (0 < *(int *)(param_1 + 0x38)) {
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
        }
        pcVar27 = *(char **)pCVar6;
        if ((pcVar27 < *(char **)pCVar7) && (*pcVar27 == '\x12')) {
          do {
            *(char **)pCVar6 = pcVar27 + 1;
LAB_003efe48:
            iVar20 = *(int *)(this + 0x20);
            iVar24 = *(int *)(this + 0x24);
            if (iVar20 < iVar24) {
              *(int *)(this + 0x20) = iVar20 + 1;
              this_01 = *(LevelState **)(*(long *)(this + 0x18) + (long)iVar20 * 8);
            }
            else {
              if (iVar24 == *(int *)(this + 0x28)) {
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                          ((RepeatedPtrFieldBase *)(this + 0x18),iVar24 + 1);
                iVar20 = *(int *)(this + 0x20);
                iVar24 = *(int *)(this + 0x24);
              }
              *(int *)(this + 0x24) = iVar24 + 1;
              this_01 = operator_new(0x38);
              *(undefined4 *)(this_01 + 8) = 0;
              *(undefined **)this_01 = puVar2;
              puVar11 = PTR__default_level_name__007e5098;
              this_01[0x18] = (LevelState)0x0;
              *(long *)(this_01 + 0x20) = 0;
              *(long *)(this_01 + 0x28) = 0xffffffff;
              *(undefined **)(this_01 + 0x10) = puVar11;
              *(undefined4 *)(this_01 + 0x30) = 0;
              *(int *)(this + 0x20) = iVar20 + 1;
              *(LevelState **)(*(long *)(this + 0x18) + (long)iVar20 * 8) = this_01;
            }
            pbVar26 = *(byte **)pCVar6;
            if ((pbVar26 < *(byte **)pCVar7) && (-1 < (char)*pbVar26)) {
              local_7c = (uint)*pbVar26;
              *(byte **)pCVar6 = pbVar26 + 1;
            }
            else {
              uVar23 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                 (param_1,&local_7c);
              if ((uVar23 & 1) == 0) goto LAB_003f0640;
            }
            iVar20 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar20 + 1;
            if (*(int *)(param_1 + 0x3c) <= iVar20) goto LAB_003f0640;
            iVar20 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
            uVar23 = LevelState::MergePartialFromCodedStream(this_01,param_1);
            if (((uVar23 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003f0640;
            google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar20);
            if (0 < *(int *)(param_1 + 0x38)) {
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
            }
            pcVar27 = *(char **)pCVar6;
            if (*(char **)pCVar7 <= pcVar27) goto LAB_003f060c;
          } while (*pcVar27 == '\x12');
          if (*pcVar27 == '\x1a') {
            *(char **)pCVar6 = pcVar27 + 1;
LAB_003eff98:
            puVar11 = PTR__default_current_level__007e5760;
            psVar22 = *(string **)(this + 0x50);
            *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 4;
            if (psVar22 == (string *)puVar11) {
              psVar22 = operator_new(8);
              *(undefined **)psVar22 = puVar3;
              *(string **)(this + 0x50) = psVar22;
            }
            uVar23 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar22);
            if ((uVar23 & 1) == 0) goto LAB_003f0640;
            pcVar27 = *(char **)pCVar6;
            if ((pcVar27 < *(char **)pCVar7) && (*pcVar27 == '\"')) {
              *(char **)pCVar6 = pcVar27 + 1;
LAB_003f0000:
              puVar11 = PTR__default_current_spawn_point__007e6dd0;
              psVar22 = *(string **)(this + 0x58);
              *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 8;
              if (psVar22 == (string *)puVar11) {
                psVar22 = operator_new(8);
                *(undefined **)psVar22 = puVar16 + 0x18;
                *(string **)(this + 0x58) = psVar22;
              }
              uVar23 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar22);
              if ((uVar23 & 1) == 0) goto LAB_003f0640;
              pcVar27 = *(char **)pCVar6;
              if ((pcVar27 < *(char **)pCVar7) && (*pcVar27 == '*')) {
                *(char **)pCVar6 = pcVar27 + 1;
LAB_003f0068:
                puVar11 = PTR__default_current_map_node_name__007e49b8;
                psVar22 = *(string **)(this + 0x68);
                *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 0x20;
                if (psVar22 == (string *)puVar11) {
                  psVar22 = operator_new(8);
                  *(undefined **)psVar22 = puVar16 + 0x18;
                  *(string **)(this + 0x68) = psVar22;
                }
                uVar23 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar22);
                if ((uVar23 & 1) == 0) goto LAB_003f0640;
                pcVar27 = *(char **)pCVar6;
                if ((pcVar27 < *(char **)pCVar7) && (*pcVar27 == ':')) {
                  do {
                    *(char **)pCVar6 = pcVar27 + 1;
LAB_003f00d0:
                    iVar20 = *(int *)(this + 0x88);
                    iVar24 = *(int *)(this + 0x8c);
                    if (iVar20 < iVar24) {
                      *(int *)(this + 0x88) = iVar20 + 1;
                      this_02 = *(QuestState **)(*(long *)(this + 0x80) + (long)iVar20 * 8);
                    }
                    else {
                      if (iVar24 == *(int *)(this + 0x90)) {
                        google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                                  ((RepeatedPtrFieldBase *)(this + 0x80),iVar24 + 1);
                        iVar20 = *(int *)(this + 0x88);
                        iVar24 = *(int *)(this + 0x8c);
                      }
                      *(int *)(this + 0x8c) = iVar24 + 1;
                      this_02 = operator_new(0x20);
                      *(undefined4 *)(this_02 + 8) = 0;
                      *(undefined **)this_02 = puVar4;
                      puVar11 = PTR__default_quest_name__007e6f40;
                      this_02[0x18] = (QuestState)0x0;
                      *(undefined4 *)(this_02 + 0x1c) = 0;
                      *(undefined **)(this_02 + 0x10) = puVar11;
                      *(int *)(this + 0x88) = iVar20 + 1;
                      *(QuestState **)(*(long *)(this + 0x80) + (long)iVar20 * 8) = this_02;
                    }
                    pbVar26 = *(byte **)pCVar6;
                    if ((pbVar26 < *(byte **)pCVar7) && (-1 < (char)*pbVar26)) {
                      local_7c = (uint)*pbVar26;
                      *(byte **)pCVar6 = pbVar26 + 1;
                    }
                    else {
                      uVar23 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                         (param_1,&local_7c);
                      if ((uVar23 & 1) == 0) goto LAB_003f0640;
                    }
                    iVar20 = *(int *)(param_1 + 0x38);
                    *(int *)(param_1 + 0x38) = iVar20 + 1;
                    if (*(int *)(param_1 + 0x3c) <= iVar20) goto LAB_003f0640;
                    iVar20 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
                    uVar23 = QuestState::MergePartialFromCodedStream(this_02,param_1);
                    if (((uVar23 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                    goto LAB_003f0640;
                    google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar20);
                    if (0 < *(int *)(param_1 + 0x38)) {
                      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                    }
                    pcVar27 = *(char **)pCVar6;
                    if (*(char **)pCVar7 <= pcVar27) goto LAB_003f060c;
                  } while (*pcVar27 == ':');
                  if (*pcVar27 == 'B') {
                    *(char **)pCVar6 = pcVar27 + 1;
LAB_003f0218:
                    this_03 = *(StateProperties **)(this + 0xb8);
                    *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 0x200;
                    if (this_03 == (StateProperties *)0x0) {
                      this_03 = operator_new(0x50);
                      *(undefined4 *)(this_03 + 0x20) = 4;
                      *(undefined4 *)(this_03 + 8) = 0;
                      *(undefined **)this_03 = puVar5;
                      *(StateProperties **)(this_03 + 0x10) = this_03 + 0x28;
                      *(long *)(this_03 + 0x18) = 0;
                      *(undefined4 *)(this_03 + 0x48) = 0;
                      *(StateProperties **)(this + 0xb8) = this_03;
                    }
                    pbVar26 = *(byte **)pCVar6;
                    if ((pbVar26 < *(byte **)pCVar7) && (-1 < (char)*pbVar26)) {
                      local_7c = (uint)*pbVar26;
                      *(byte **)pCVar6 = pbVar26 + 1;
                    }
                    else {
                      uVar23 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                         (param_1,&local_7c);
                      if ((uVar23 & 1) == 0) goto LAB_003f0640;
                    }
                    iVar20 = *(int *)(param_1 + 0x38);
                    *(int *)(param_1 + 0x38) = iVar20 + 1;
                    if (*(int *)(param_1 + 0x3c) <= iVar20) goto LAB_003f0640;
                    iVar20 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
                    uVar23 = StateProperties::MergePartialFromCodedStream(this_03,param_1);
                    if (((uVar23 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                    goto LAB_003f0640;
                    google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar20);
                    if (0 < *(int *)(param_1 + 0x38)) {
                      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                    }
                    pcVar27 = *(char **)pCVar6;
                    if ((pcVar27 < *(char **)pCVar7) && (*pcVar27 == 'J')) {
                      *(char **)pCVar6 = pcVar27 + 1;
LAB_003f0310:
                      puVar11 = PTR__default_selected_menu_tab__007e6ec0;
                      psVar22 = *(string **)(this + 0xc0);
                      *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 0x400;
                      if (psVar22 == (string *)puVar11) {
                        psVar22 = operator_new(8);
                        *(undefined **)psVar22 = puVar16 + 0x18;
                        *(string **)(this + 0xc0) = psVar22;
                      }
                      uVar23 = google::protobuf::internal::WireFormatLite::ReadString
                                         (param_1,psVar22);
                      if ((uVar23 & 1) == 0) goto LAB_003f0640;
                      pcVar27 = *(char **)pCVar6;
                      if ((pcVar27 < *(char **)pCVar7) && (*pcVar27 == 'R')) {
                        *(char **)pCVar6 = pcVar27 + 1;
LAB_003f0378:
                        puVar11 = PTR__default_carried_object_template__007e66a8;
                        psVar22 = *(string **)(this + 0x70);
                        *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 0x40;
                        if (psVar22 == (string *)puVar11) {
                          psVar22 = operator_new(8);
                          *(undefined **)psVar22 = puVar16 + 0x18;
                          *(string **)(this + 0x70) = psVar22;
                        }
                        uVar23 = google::protobuf::internal::WireFormatLite::ReadString
                                           (param_1,psVar22);
                        if ((uVar23 & 1) == 0) goto LAB_003f0640;
                        pcVar27 = *(char **)pCVar6;
                        if ((pcVar27 < *(char **)pCVar7) && (*pcVar27 == 'Z')) {
                          *(char **)pCVar6 = pcVar27 + 1;
LAB_003f03e0:
                          puVar11 = PTR__default_carried_object_identifier__007e6520;
                          psVar22 = *(string **)(this + 0x78);
                          *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 0x80;
                          if (psVar22 == (string *)puVar11) {
                            psVar22 = operator_new(8);
                            *(undefined **)psVar22 = puVar16 + 0x18;
                            *(string **)(this + 0x78) = psVar22;
                          }
                          uVar23 = google::protobuf::internal::WireFormatLite::ReadString
                                             (param_1,psVar22);
                          if ((uVar23 & 1) == 0) goto LAB_003f0640;
                          pcVar27 = *(char **)pCVar6;
                          if ((pcVar27 < *(char **)pCVar7) && (*pcVar27 == 'b')) {
                            do {
                              *(char **)pCVar6 = pcVar27 + 1;
LAB_003f0448:
                              iVar20 = *(int *)(this + 0xe8);
                              iVar24 = *(int *)(this + 0xec);
                              if (iVar20 < iVar24) {
                                *(int *)(this + 0xe8) = iVar20 + 1;
                                this_04 = *(QuestText **)(*(long *)(this + 0xe0) + (long)iVar20 * 8)
                                ;
                              }
                              else {
                                if (iVar24 == *(int *)(this + 0xf0)) {
                                  google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                                            ((RepeatedPtrFieldBase *)(this + 0xe0),iVar24 + 1);
                                  iVar20 = *(int *)(this + 0xe8);
                                  iVar24 = *(int *)(this + 0xec);
                                }
                                *(int *)(this + 0xec) = iVar24 + 1;
                                this_04 = operator_new(0x58);
                                *(long *)(this_04 + 0x20) = 0;
                                *(undefined4 *)(this_04 + 0x28) = 4;
                                *(undefined **)this_04 = puVar8;
                                *(undefined4 *)(this_04 + 8) = 0;
                                puVar11 = PTR__default_quest_name__007e6638;
                                *(undefined4 *)(this_04 + 0x50) = 0;
                                *(undefined **)(this_04 + 0x10) = puVar11;
                                *(QuestText **)(this_04 + 0x18) = this_04 + 0x30;
                                *(int *)(this + 0xe8) = iVar20 + 1;
                                *(QuestText **)(*(long *)(this + 0xe0) + (long)iVar20 * 8) = this_04
                                ;
                              }
                              pbVar26 = *(byte **)pCVar6;
                              if ((pbVar26 < *(byte **)pCVar7) && (-1 < (char)*pbVar26)) {
                                local_7c = (uint)*pbVar26;
                                *(byte **)pCVar6 = pbVar26 + 1;
                              }
                              else {
                                uVar23 = google::protobuf::io::CodedInputStream::
                                         ReadVarint32Fallback(param_1,&local_7c);
                                if ((uVar23 & 1) == 0) goto LAB_003f0640;
                              }
                              iVar20 = *(int *)(param_1 + 0x38);
                              *(int *)(param_1 + 0x38) = iVar20 + 1;
                              if (*(int *)(param_1 + 0x3c) <= iVar20) goto LAB_003f0640;
                              iVar20 = google::protobuf::io::CodedInputStream::PushLimit
                                                 (param_1,local_7c);
                              uVar23 = QuestText::MergePartialFromCodedStream(this_04,param_1);
                              if (((uVar23 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                              goto LAB_003f0640;
                              google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar20);
                              if (0 < *(int *)(param_1 + 0x38)) {
                                *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                              }
                              pcVar27 = *(char **)pCVar6;
                              if (*(char **)pCVar7 <= pcVar27) goto LAB_003f060c;
                            } while (*pcVar27 == 'b');
                            if (*pcVar27 == 'j') {
                              *(char **)pCVar6 = pcVar27 + 1;
LAB_003f0598:
                              puVar11 = PTR__default_previous_portal_level__007e7670;
                              psVar22 = *(string **)(this + 0x60);
                              *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 0x10;
                              if (psVar22 == (string *)puVar11) {
                                psVar22 = operator_new(8);
                                *(undefined **)psVar22 = puVar16 + 0x18;
                                *(string **)(this + 0x60) = psVar22;
                              }
                              uVar23 = google::protobuf::internal::WireFormatLite::ReadString
                                                 (param_1,psVar22);
                              if ((uVar23 & 1) == 0) goto LAB_003f0640;
                              pbVar28 = *(byte **)pCVar6;
                              pbVar25 = *(byte **)pCVar7;
                              if ((pbVar28 < pbVar25) && (*pbVar28 == 0x70)) {
                                pbVar28 = pbVar28 + 1;
                                *(byte **)pCVar6 = pbVar28;
                                if (pbVar28 < pbVar25) {
LAB_003ef8e4:
                                  if ((char)*pbVar28 < '\0') goto LAB_003efde4;
                                  pbVar26 = pbVar28 + 1;
                                  local_7c = (uint)*pbVar28;
                                  *(byte **)pCVar6 = pbVar26;
                                }
                                else {
LAB_003efde4:
                                  uVar23 = google::protobuf::io::CodedInputStream::
                                           ReadVarint32Fallback(param_1,&local_7c);
                                  if ((uVar23 & 1) == 0) goto LAB_003f0640;
                                  pbVar26 = *(byte **)pCVar6;
                                  pbVar25 = *(byte **)pCVar7;
                                }
                                this[200] = (GameState)(local_7c != 0);
                                *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 0x800;
                                if ((pbVar26 < pbVar25) && (*pbVar26 == 0x78)) {
                                  pbVar26 = pbVar26 + 1;
                                  *(byte **)pCVar6 = pbVar26;
                                  if (pbVar26 < pbVar25) {
LAB_003ef8a0:
                                    iVar20 = (int)pbVar25;
                                    if ((char)*pbVar26 < '\0') goto LAB_003efb10;
                                    pbVar25 = pbVar26 + 1;
                                    local_7c = (uint)*pbVar26;
                                    *(byte **)pCVar6 = pbVar25;
                                  }
                                  else {
LAB_003efb10:
                                    uVar23 = google::protobuf::io::CodedInputStream::
                                             ReadVarint32Fallback(param_1,&local_7c);
                                    if ((uVar23 & 1) == 0) goto LAB_003f0640;
                                    iVar20 = (int)*(ulong *)pCVar7;
                                    pbVar25 = *(byte **)pCVar6;
                                  }
                                  this[0xc9] = (GameState)(local_7c != 0);
                                  uVar19 = *(uint *)(this + 0x11c) | 0x1000;
                                  *(uint *)(this + 0x11c) = uVar19;
                                  if (((1 < iVar20 - (int)pbVar25) && (*pbVar25 == 0x82)) &&
                                     (pbVar25[1] == 1)) {
                                    *(byte **)pCVar6 = pbVar25 + 2;
LAB_003efb70:
                                    puVar11 = PTR__default_flashing_item_name__007e5158;
                                    psVar22 = *(string **)(this + 0xd0);
                                    *(uint *)(this + 0x11c) = uVar19 | 0x2000;
                                    if (psVar22 == (string *)puVar11) {
                                      psVar22 = operator_new(8);
                                      *(undefined **)psVar22 = puVar16 + 0x18;
                                      *(string **)(this + 0xd0) = psVar22;
                                    }
                                    uVar23 = google::protobuf::internal::WireFormatLite::ReadString
                                                       (param_1,psVar22);
                                    if ((uVar23 & 1) == 0) goto LAB_003f0640;
                                    pcVar27 = *(char **)pCVar6;
                                    if (((1 < *(int *)pCVar7 - (int)pcVar27) && (*pcVar27 == -0x76))
                                       && (pcVar27[1] == '\x01')) {
                                      *(char **)pCVar6 = pcVar27 + 2;
LAB_003efbe4:
                                      puVar11 = PTR__default_flashing_skill_name__007e63c0;
                                      psVar22 = *(string **)(this + 0xd8);
                                      *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 0x4000;
                                      if (psVar22 == (string *)puVar11) {
                                        psVar22 = operator_new(8);
                                        *(undefined **)psVar22 = puVar16 + 0x18;
                                        *(string **)(this + 0xd8) = psVar22;
                                      }
                                      uVar23 = google::protobuf::internal::WireFormatLite::
                                               ReadString(param_1,psVar22);
                                      if ((uVar23 & 1) == 0) goto LAB_003f0640;
                                      pbVar25 = *(byte **)pCVar7;
                                      pcVar27 = *(char **)pCVar6;
                                      if (((1 < (int)pbVar25 - (int)pcVar27) && (*pcVar27 == -0x70))
                                         && (pcVar27[1] == '\x01')) {
                                        pbVar28 = (byte *)(pcVar27 + 2);
                                        *(byte **)pCVar6 = pbVar28;
                                        if (pbVar28 < pbVar25) {
LAB_003efa6c:
                                          if ((char)*pbVar28 < '\0') goto LAB_003efc64;
                                          pbVar26 = pbVar28 + 1;
                                          local_7c = (uint)*pbVar28;
                                          *(byte **)pCVar6 = pbVar26;
                                        }
                                        else {
LAB_003efc64:
                                          uVar23 = google::protobuf::io::CodedInputStream::
                                                   ReadVarint32Fallback(param_1,&local_7c);
                                          if ((uVar23 & 1) == 0) goto LAB_003f0640;
                                          pbVar25 = *(byte **)pCVar7;
                                          pbVar26 = *(byte **)pCVar6;
                                        }
                                        this[0x118] = (GameState)(local_7c != 0);
                                        *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 0x10000;
                                        if (((1 < (int)pbVar25 - (int)pbVar26) && (*pbVar26 == 0x98)
                                            ) && (pbVar26[1] == 1)) {
                                          pbVar26 = pbVar26 + 2;
                                          *(byte **)pCVar6 = pbVar26;
                                          if (pbVar26 < pbVar25) {
LAB_003efa20:
                                            if ((char)*pbVar26 < '\0') goto LAB_003efccc;
                                            pbVar28 = pbVar26 + 1;
                                            local_7c = (uint)*pbVar26;
                                            *(byte **)pCVar6 = pbVar28;
                                          }
                                          else {
LAB_003efccc:
                                            uVar23 = google::protobuf::io::CodedInputStream::
                                                     ReadVarint32Fallback(param_1,&local_7c);
                                            if ((uVar23 & 1) == 0) goto LAB_003f0640;
                                            pbVar25 = *(byte **)pCVar7;
                                            pbVar28 = *(byte **)pCVar6;
                                          }
                                          this[0x119] = (GameState)(local_7c != 0);
                                          *(uint *)(this + 0x11c) =
                                               *(uint *)(this + 0x11c) | 0x20000;
                                          if (((1 < (int)pbVar25 - (int)pbVar28) &&
                                              (*pbVar28 == 0xa0)) && (pbVar28[1] == 1)) {
                                            pbVar28 = pbVar28 + 2;
                                            *(byte **)pCVar6 = pbVar28;
                                            if (pbVar28 < pbVar25) {
LAB_003ef86c:
                                              if ((char)*pbVar28 < '\0') goto LAB_003efd34;
                                              pbVar26 = pbVar28 + 1;
                                              local_7c = (uint)*pbVar28;
                                              *(byte **)pCVar6 = pbVar26;
                                            }
                                            else {
LAB_003efd34:
                                              uVar23 = google::protobuf::io::CodedInputStream::
                                                       ReadVarint32Fallback(param_1,&local_7c);
                                              if ((uVar23 & 1) == 0) goto LAB_003f0640;
                                              pbVar25 = *(byte **)pCVar7;
                                              pbVar26 = *(byte **)pCVar6;
                                            }
                                            this[0x11a] = (GameState)(local_7c != 0);
                                            *(uint *)(this + 0x11c) =
                                                 *(uint *)(this + 0x11c) | 0x40000;
                                            if (((1 < (int)pbVar25 - (int)pbVar26) &&
                                                (*pbVar26 == 0xa8)) && (pbVar26[1] == 1)) {
                                              pbVar26 = pbVar26 + 2;
                                              *(byte **)pCVar6 = pbVar26;
                                              if (pbVar26 < pbVar25) {
LAB_003ef918:
                                                if ((char)*pbVar26 < '\0') goto LAB_003efd9c;
                                                pbVar28 = pbVar26 + 1;
                                                local_7c = (uint)*pbVar26;
                                                *(byte **)pCVar6 = pbVar28;
                                              }
                                              else {
LAB_003efd9c:
                                                uVar23 = google::protobuf::io::CodedInputStream::
                                                         ReadVarint32Fallback(param_1,&local_7c);
                                                if ((uVar23 & 1) == 0) goto LAB_003f0640;
                                                pbVar28 = *(byte **)pCVar6;
                                                pbVar25 = *(byte **)pCVar7;
                                              }
                                              this[0x11b] = (GameState)(local_7c != 0);
                                              *(uint *)(this + 0x11c) =
                                                   *(uint *)(this + 0x11c) | 0x80000;
                                              if ((pbVar28 == pbVar25) &&
                                                 (*(int *)(param_1 + 0x2c) != 0)) {
                                                uVar21 = 1;
                                                *(undefined4 *)(param_1 + 0x20) = 0;
                                                param_1[0x24] = (CodedInputStream)0x1;
                                                goto LAB_003f0644;
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
              }
            }
          }
        }
        goto LAB_003f060c;
      }
      break;
    case 2:
      if ((uVar19 & 7) == 2) goto LAB_003efe48;
      break;
    case 3:
      if ((uVar19 & 7) == 2) goto LAB_003eff98;
      break;
    case 4:
      if ((uVar19 & 7) == 2) goto LAB_003f0000;
      break;
    case 5:
      if ((uVar19 & 7) == 2) goto LAB_003f0068;
      break;
    default:
      break;
    case 7:
      if ((uVar19 & 7) == 2) goto LAB_003f00d0;
      break;
    case 8:
      if ((uVar19 & 7) == 2) goto LAB_003f0218;
      break;
    case 9:
      if ((uVar19 & 7) == 2) goto LAB_003f0310;
      break;
    case 10:
      if ((uVar19 & 7) == 2) goto LAB_003f0378;
      break;
    case 0xb:
      if ((uVar19 & 7) == 2) goto LAB_003f03e0;
      break;
    case 0xc:
      if ((uVar19 & 7) == 2) goto LAB_003f0448;
      break;
    case 0xd:
      if ((uVar19 & 7) == 2) goto LAB_003f0598;
      break;
    case 0xe:
      if ((uVar23 & 7) == 0) {
        pbVar28 = *(byte **)pCVar6;
        pbVar25 = *(byte **)pCVar7;
        if (pbVar28 < pbVar25) goto LAB_003ef8e4;
        goto LAB_003efde4;
      }
      break;
    case 0xf:
      if ((uVar23 & 7) == 0) {
        pbVar26 = *(byte **)pCVar6;
        pbVar25 = *(byte **)pCVar7;
        if (pbVar26 < pbVar25) goto LAB_003ef8a0;
        goto LAB_003efb10;
      }
      break;
    case 0x10:
      if ((uVar19 & 7) == 2) {
        uVar19 = *(uint *)(this + 0x11c);
        goto LAB_003efb70;
      }
      break;
    case 0x11:
      if ((uVar19 & 7) == 2) goto LAB_003efbe4;
      break;
    case 0x12:
      if ((uVar23 & 7) == 0) {
        pbVar28 = *(byte **)pCVar6;
        pbVar25 = *(byte **)pCVar7;
        if (pbVar28 < pbVar25) goto LAB_003efa6c;
        goto LAB_003efc64;
      }
      break;
    case 0x13:
      if ((uVar23 & 7) == 0) {
        pbVar26 = *(byte **)pCVar6;
        pbVar25 = *(byte **)pCVar7;
        if (pbVar26 < pbVar25) goto LAB_003efa20;
        goto LAB_003efccc;
      }
      break;
    case 0x14:
      if ((uVar23 & 7) == 0) {
        pbVar28 = *(byte **)pCVar6;
        pbVar25 = *(byte **)pCVar7;
        if (pbVar28 < pbVar25) goto LAB_003ef86c;
        goto LAB_003efd34;
      }
      break;
    case 0x15:
      if ((uVar23 & 7) == 0) {
        pbVar26 = *(byte **)pCVar6;
        pbVar25 = *(byte **)pCVar7;
        if (pbVar26 < pbVar25) goto LAB_003ef918;
        goto LAB_003efd9c;
      }
    }
    if ((uVar19 & 7) == 4) goto LAB_003f0638;
    uVar23 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar19);
    if ((uVar23 & 1) == 0) {
LAB_003f0640:
      uVar21 = 0;
LAB_003f0644:
      if (*(long *)(lVar10 + 0x28) == local_78) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar21);
    }
  } while( true );
}


