/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ea650
 * Function: Caver::Proto::PlayerProfile::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(PlayerProfile * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PlayerProfile::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::PlayerProfile::MergePartialFromCodedStream
          (PlayerProfile *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  byte bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  uint uVar15;
  int iVar16;
  undefined8 uVar17;
  string *psVar18;
  ulong uVar19;
  int iVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  GameState *this_00;
  DateTime *this_01;
  PlayerProfile_Counter *this_02;
  undefined8 local_80;
  long local_78;
  
  puVar14 = PTR__default_previous_portal_level__007e7670;
  puVar13 = PTR__default_current_spawn_point__007e6dd0;
  puVar12 = PTR__default_carried_object_template__007e66a8;
  puVar11 = PTR__default_flashing_skill_name__007e63c0;
  puVar10 = PTR_DAT_007e5de8;
  puVar9 = PTR__default_flashing_item_name__007e5158;
  puVar7 = PTR__default_current_map_node_name__007e49b8;
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e5898 + 0x10;
  puVar3 = PTR_vtable_007e4b40 + 0x10;
LAB_003eafc0:
  pbVar22 = *(byte **)(param_1 + 8);
  if ((pbVar22 < *(byte **)(param_1 + 0x10)) && (bVar5 = *pbVar22, -1 < (char)bVar5)) {
    uVar19 = (ulong)bVar5;
    *(uint *)(param_1 + 0x20) = (uint)bVar5;
    *(byte **)(param_1 + 8) = pbVar22 + 1;
    if (bVar5 == 0) goto LAB_003eafe8;
LAB_003ea728:
    puVar8 = PTR__default_name__007e7d58;
    uVar15 = (uint)uVar19;
    switch((int)(uVar19 >> 3)) {
    case 1:
      if ((uVar15 & 7) != 2) break;
      psVar18 = *(string **)(this + 0x10);
      *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) | 1;
      if (psVar18 == (string *)puVar8) {
        psVar18 = operator_new(8);
        *(undefined **)psVar18 = puVar1;
        *(string **)(this + 0x10) = psVar18;
      }
      uVar19 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar18);
      if ((uVar19 & 1) == 0) goto LAB_003eaff0;
      pbVar22 = *(byte **)(param_1 + 8);
      pbVar21 = *(byte **)(param_1 + 0x10);
      if ((pbVar22 < pbVar21) && (*pbVar22 == 0x10)) {
        pbVar22 = pbVar22 + 1;
        *(byte **)(param_1 + 8) = pbVar22;
        if (pbVar22 < pbVar21) goto LAB_003ea7bc;
        goto LAB_003ea880;
      }
      goto LAB_003eafc0;
    case 2:
      if ((uVar19 & 7) == 0) {
        pbVar22 = *(byte **)(param_1 + 8);
        pbVar21 = *(byte **)(param_1 + 0x10);
        if (pbVar22 < pbVar21) {
LAB_003ea7bc:
          if ((char)*pbVar22 < '\0') goto LAB_003ea880;
          pbVar23 = pbVar22 + 1;
          local_80._0_4_ = (uint)*pbVar22;
          *(byte **)(param_1 + 8) = pbVar23;
        }
        else {
LAB_003ea880:
          uVar19 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                             (param_1,(uint *)&local_80);
          if ((uVar19 & 1) == 0) goto LAB_003eaff0;
          pbVar23 = *(byte **)(param_1 + 8);
          pbVar21 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0x28) = (uint)local_80;
        *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) | 8;
        if ((pbVar23 < pbVar21) && (*pbVar23 == 0x19)) {
          *(byte **)(param_1 + 8) = pbVar23 + 1;
LAB_003ea8c4:
          uVar19 = google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback
                             (param_1,&local_80);
          if ((uVar19 & 1) == 0) goto LAB_003eaff0;
          *(ulong *)(this + 0x30) = CONCAT44(local_80._4_4_,(uint)local_80);
          uVar15 = *(uint *)(this + 0xa8) | 0x20;
          *(uint *)(this + 0xa8) = uVar15;
          pcVar4 = *(char **)(param_1 + 8);
          if ((pcVar4 < *(char **)(param_1 + 0x10)) && (*pcVar4 == '\"')) {
            *(char **)(param_1 + 8) = pcVar4 + 1;
            goto LAB_003ea908;
          }
        }
        goto LAB_003eafc0;
      }
      break;
    case 3:
      if ((uVar15 & 7) == 1) goto LAB_003ea8c4;
      break;
    case 4:
      if ((uVar15 & 7) == 2) {
        uVar15 = *(uint *)(this + 0xa8);
LAB_003ea908:
        this_00 = *(GameState **)(this + 0x38);
        *(uint *)(this + 0xa8) = uVar15 | 0x40;
        if (this_00 == (GameState *)0x0) {
          this_00 = operator_new(0x120);
          *(undefined **)this_00 = puVar2;
          *(long *)(this_00 + 0x20) = 0;
          *(undefined4 *)(this_00 + 0x28) = 4;
          *(long *)(this_00 + 0x10) = 0;
          *(GameState **)(this_00 + 0x18) = this_00 + 0x30;
          *(long *)(this_00 + 0x88) = 0;
          *(undefined4 *)(this_00 + 0x90) = 4;
          puVar8 = PTR__default_carried_object_identifier__007e6520;
          *(long *)(this_00 + 0xe8) = 0;
          *(undefined4 *)(this_00 + 0xf0) = 4;
          *(undefined **)(this_00 + 0x78) = puVar8;
          *(GameState **)(this_00 + 0x80) = this_00 + 0x98;
          *(undefined4 *)(this_00 + 8) = 0;
          puVar8 = PTR__default_current_level__007e5760;
          *(long *)(this_00 + 0xb8) = 0;
          *(undefined **)(this_00 + 0x50) = puVar8;
          *(undefined **)(this_00 + 0x60) = puVar14;
          *(undefined **)(this_00 + 0x58) = puVar13;
          *(undefined **)(this_00 + 0x70) = puVar12;
          *(undefined **)(this_00 + 0x68) = puVar7;
          puVar8 = PTR__default_selected_menu_tab__007e6ec0;
          *(undefined2 *)(this_00 + 200) = 0;
          *(long *)(this_00 + 0x118) = 0;
          *(undefined **)(this_00 + 0xc0) = puVar8;
          *(undefined **)(this_00 + 0xd8) = puVar11;
          *(undefined **)(this_00 + 0xd0) = puVar9;
          *(GameState **)(this_00 + 0xe0) = this_00 + 0xf8;
          *(GameState **)(this + 0x38) = this_00;
        }
        pbVar22 = *(byte **)(param_1 + 8);
        if ((pbVar22 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar22)) {
          local_80._0_4_ = (uint)*pbVar22;
          *(byte **)(param_1 + 8) = pbVar22 + 1;
        }
        else {
          uVar19 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                             (param_1,(uint *)&local_80);
          if ((uVar19 & 1) == 0) goto LAB_003eaff0;
        }
        iVar16 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar16 + 1;
        if (iVar16 < *(int *)(param_1 + 0x3c)) {
          iVar16 = google::protobuf::io::CodedInputStream::PushLimit(param_1,(uint)local_80);
          uVar19 = GameState::MergePartialFromCodedStream(this_00,param_1);
          if (((uVar19 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003eaff0;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar16);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar4 = *(char **)(param_1 + 8);
          if ((pcVar4 < *(char **)(param_1 + 0x10)) && (*pcVar4 == '*')) {
            *(char **)(param_1 + 8) = pcVar4 + 1;
            goto LAB_003eaac8;
          }
          goto LAB_003eafc0;
        }
        goto LAB_003eaff0;
      }
      break;
    case 5:
      if ((uVar15 & 7) == 2) {
LAB_003eaac8:
        puVar8 = PTR__default_equipped_weapon_name__007e59b0;
        psVar18 = *(string **)(this + 0x40);
        *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) | 0x80;
        if (psVar18 == (string *)puVar8) {
          psVar18 = operator_new(8);
          *(undefined **)psVar18 = puVar10 + 0x18;
          *(string **)(this + 0x40) = psVar18;
        }
        uVar19 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar18);
        if ((uVar19 & 1) == 0) goto LAB_003eaff0;
        pcVar4 = *(char **)(param_1 + 8);
        if ((pcVar4 < *(char **)(param_1 + 0x10)) && (*pcVar4 == '2')) {
          *(char **)(param_1 + 8) = pcVar4 + 1;
          goto LAB_003eab2c;
        }
        goto LAB_003eafc0;
      }
      break;
    case 6:
      if ((uVar15 & 7) == 2) {
LAB_003eab2c:
        puVar8 = PTR__default_equipped_armor_name__007e6ea0;
        psVar18 = *(string **)(this + 0x48);
        *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) | 0x100;
        if (psVar18 == (string *)puVar8) {
          psVar18 = operator_new(8);
          *(undefined **)psVar18 = puVar10 + 0x18;
          *(string **)(this + 0x48) = psVar18;
        }
        uVar19 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar18);
        if ((uVar19 & 1) == 0) goto LAB_003eaff0;
        pcVar4 = *(char **)(param_1 + 8);
        if ((pcVar4 < *(char **)(param_1 + 0x10)) && (*pcVar4 == ':')) {
          *(char **)(param_1 + 8) = pcVar4 + 1;
          goto LAB_003eab90;
        }
        goto LAB_003eafc0;
      }
      break;
    case 7:
      if ((uVar15 & 7) == 2) {
LAB_003eab90:
        puVar8 = PTR__default_weapon_trinket_name__007e6df0;
        psVar18 = *(string **)(this + 0x50);
        *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) | 0x200;
        if (psVar18 == (string *)puVar8) {
          psVar18 = operator_new(8);
          *(undefined **)psVar18 = puVar10 + 0x18;
          *(string **)(this + 0x50) = psVar18;
        }
        uVar19 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar18);
        if ((uVar19 & 1) == 0) goto LAB_003eaff0;
        pcVar4 = *(char **)(param_1 + 8);
        if ((pcVar4 < *(char **)(param_1 + 0x10)) && (*pcVar4 == 'B')) {
          *(char **)(param_1 + 8) = pcVar4 + 1;
          goto LAB_003eabf4;
        }
        goto LAB_003eafc0;
      }
      break;
    case 8:
      if ((uVar15 & 7) == 2) {
LAB_003eabf4:
        puVar8 = PTR__default_armor_trinket_name__007e7ba0;
        psVar18 = *(string **)(this + 0x58);
        *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) | 0x400;
        if (psVar18 == (string *)puVar8) {
          psVar18 = operator_new(8);
          *(undefined **)psVar18 = puVar10 + 0x18;
          *(string **)(this + 0x58) = psVar18;
        }
        uVar19 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar18);
        if ((uVar19 & 1) == 0) goto LAB_003eaff0;
        pcVar4 = *(char **)(param_1 + 8);
        if ((pcVar4 < *(char **)(param_1 + 0x10)) && (*pcVar4 == 'J')) {
          *(char **)(param_1 + 8) = pcVar4 + 1;
          goto LAB_003eac58;
        }
        goto LAB_003eafc0;
      }
      break;
    case 9:
      if ((uVar15 & 7) == 2) {
LAB_003eac58:
        puVar8 = PTR__default_current_level_title__007e50a0;
        psVar18 = *(string **)(this + 0x20);
        *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) | 4;
        if (psVar18 == (string *)puVar8) {
          psVar18 = operator_new(8);
          *(undefined **)psVar18 = puVar10 + 0x18;
          *(string **)(this + 0x20) = psVar18;
        }
        uVar19 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar18);
        if ((uVar19 & 1) == 0) goto LAB_003eaff0;
        pcVar4 = *(char **)(param_1 + 8);
        if ((pcVar4 < *(char **)(param_1 + 0x10)) && (*pcVar4 == 'R')) {
          *(char **)(param_1 + 8) = pcVar4 + 1;
          goto LAB_003eacbc;
        }
        goto LAB_003eafc0;
      }
      break;
    case 10:
      if ((uVar15 & 7) == 2) {
LAB_003eacbc:
        this_01 = *(DateTime **)(this + 0x18);
        *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) | 2;
        if (this_01 == (DateTime *)0x0) {
          this_01 = operator_new(0x20);
          DateTime::DateTime(this_01);
          *(DateTime **)(this + 0x18) = this_01;
        }
        pbVar22 = *(byte **)(param_1 + 8);
        if ((pbVar22 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar22)) {
          local_80._0_4_ = (uint)*pbVar22;
          *(byte **)(param_1 + 8) = pbVar22 + 1;
        }
        else {
          uVar19 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                             (param_1,(uint *)&local_80);
          if ((uVar19 & 1) == 0) goto LAB_003eaff0;
        }
        iVar16 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar16 + 1;
        if (iVar16 < *(int *)(param_1 + 0x3c)) {
          iVar16 = google::protobuf::io::CodedInputStream::PushLimit(param_1,(uint)local_80);
          uVar19 = DateTime::MergePartialFromCodedStream(this_01,param_1);
          if (((uVar19 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003eaff0;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar16);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar4 = *(char **)(param_1 + 8);
          if ((pcVar4 < *(char **)(param_1 + 0x10)) && (*pcVar4 == ']')) {
            *(char **)(param_1 + 8) = pcVar4 + 1;
            goto LAB_003ead94;
          }
          goto LAB_003eafc0;
        }
        goto LAB_003eaff0;
      }
      break;
    case 0xb:
      if ((uVar15 & 7) == 5) {
LAB_003ead94:
        uVar19 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                           (param_1,(uint *)&local_80);
        if ((uVar19 & 1) == 0) goto LAB_003eaff0;
        *(uint *)(this + 0x2c) = (uint)local_80;
        *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) | 0x10;
        pbVar22 = *(byte **)(param_1 + 8);
        if ((pbVar22 < *(byte **)(param_1 + 0x10)) && (*pbVar22 == 0x62)) {
          do {
            *(byte **)(param_1 + 8) = pbVar22 + 1;
LAB_003eae80:
            iVar16 = *(int *)(this + 0x68);
            iVar20 = *(int *)(this + 0x6c);
            if (iVar16 < iVar20) {
              *(int *)(this + 0x68) = iVar16 + 1;
              this_02 = *(PlayerProfile_Counter **)(*(long *)(this + 0x60) + (long)iVar16 * 8);
            }
            else {
              if (iVar20 == *(int *)(this + 0x70)) {
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                          ((RepeatedPtrFieldBase *)(this + 0x60),iVar20 + 1);
                iVar16 = *(int *)(this + 0x68);
                iVar20 = *(int *)(this + 0x6c);
              }
              *(int *)(this + 0x6c) = iVar20 + 1;
              this_02 = operator_new(0x20);
              *(undefined **)this_02 = puVar3;
              *(undefined4 *)(this_02 + 8) = 0;
              *(undefined **)(this_02 + 0x10) = PTR__default_name__007e6560;
              *(long *)(this_02 + 0x18) = 0;
              *(int *)(this + 0x68) = iVar16 + 1;
              *(PlayerProfile_Counter **)(*(long *)(this + 0x60) + (long)iVar16 * 8) = this_02;
            }
            pbVar22 = *(byte **)(param_1 + 8);
            if ((pbVar22 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar22)) {
              local_80._0_4_ = (uint)*pbVar22;
              *(byte **)(param_1 + 8) = pbVar22 + 1;
            }
            else {
              uVar19 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                 (param_1,(uint *)&local_80);
              if ((uVar19 & 1) == 0) goto LAB_003eaff0;
            }
            iVar16 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar16 + 1;
            if (*(int *)(param_1 + 0x3c) <= iVar16) goto LAB_003eaff0;
            iVar16 = google::protobuf::io::CodedInputStream::PushLimit(param_1,(uint)local_80);
            uVar19 = PlayerProfile_Counter::MergePartialFromCodedStream(this_02,param_1);
            if (((uVar19 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003eaff0;
            google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar16);
            if (0 < *(int *)(param_1 + 0x38)) {
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
            }
            pbVar22 = *(byte **)(param_1 + 8);
            pbVar21 = *(byte **)(param_1 + 0x10);
            if (pbVar21 <= pbVar22) goto LAB_003eafc0;
          } while (*pbVar22 == 0x62);
          if (*pbVar22 == 0x68) {
            pbVar22 = pbVar22 + 1;
            *(byte **)(param_1 + 8) = pbVar22;
            if (pbVar22 < pbVar21) goto LAB_003ea80c;
            goto LAB_003eadd4;
          }
        }
        goto LAB_003eafc0;
      }
      break;
    case 0xc:
      if ((uVar15 & 7) == 2) goto LAB_003eae80;
      break;
    case 0xd:
      if ((uVar19 & 7) != 0) break;
      pbVar22 = *(byte **)(param_1 + 8);
      pbVar21 = *(byte **)(param_1 + 0x10);
      if (pbVar22 < pbVar21) {
LAB_003ea80c:
        if ((char)*pbVar22 < '\0') goto LAB_003eadd4;
        pbVar23 = pbVar22 + 1;
        local_80._0_4_ = (uint)*pbVar22;
        *(byte **)(param_1 + 8) = pbVar23;
      }
      else {
LAB_003eadd4:
        uVar19 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                           (param_1,(uint *)&local_80);
        if ((uVar19 & 1) == 0) goto LAB_003eaff0;
        pbVar23 = *(byte **)(param_1 + 8);
        pbVar21 = *(byte **)(param_1 + 0x10);
      }
      this[0x98] = (PlayerProfile)((uint)local_80 != 0);
      uVar15 = *(uint *)(this + 0xa8) | 0x1000;
      *(uint *)(this + 0xa8) = uVar15;
      if ((pbVar23 < pbVar21) && (*pbVar23 == 0x72)) {
        *(byte **)(param_1 + 8) = pbVar23 + 1;
LAB_003eae20:
        puVar8 = PTR__default_identifier__007e5ce8;
        psVar18 = *(string **)(this + 0xa0);
        *(uint *)(this + 0xa8) = uVar15 | 0x2000;
        if (psVar18 == (string *)puVar8) {
          psVar18 = operator_new(8);
          *(undefined **)psVar18 = puVar10 + 0x18;
          *(string **)(this + 0xa0) = psVar18;
        }
        uVar19 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar18);
        if ((uVar19 & 1) == 0) goto LAB_003eaff0;
        if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0)
           ) {
          uVar17 = 1;
          *(undefined4 *)(param_1 + 0x20) = 0;
          param_1[0x24] = (CodedInputStream)0x1;
LAB_003eaff4:
          if (*(long *)(lVar6 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(uVar17);
          }
          return;
        }
      }
      goto LAB_003eafc0;
    case 0xe:
      if ((uVar15 & 7) == 2) {
        uVar15 = *(uint *)(this + 0xa8);
        goto LAB_003eae20;
      }
    }
    if ((uVar15 & 7) != 4) {
      uVar19 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar15);
      if ((uVar19 & 1) != 0) goto LAB_003eafc0;
LAB_003eaff0:
      uVar17 = 0;
      goto LAB_003eaff4;
    }
  }
  else {
    uVar15 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar19 = (ulong)uVar15;
    *(uint *)(param_1 + 0x20) = uVar15;
    if (uVar15 != 0) goto LAB_003ea728;
  }
LAB_003eafe8:
  uVar17 = 1;
  goto LAB_003eaff4;
}


