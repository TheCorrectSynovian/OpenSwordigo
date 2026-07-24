/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f1ee8
 * Function: Caver::Proto::LevelState::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(LevelState * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LevelState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */

void __thiscall
Caver::Proto::LevelState::MergePartialFromCodedStream(LevelState *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  string *psVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  StateProperties *this_00;
  uint local_6c;
  long local_68;
  
  puVar5 = PTR__default_level_name__007e5098;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e6290 + 0x10;
LAB_003f1f48:
  pbVar12 = *(byte **)(param_1 + 8);
  if ((pbVar12 < *(byte **)(param_1 + 0x10)) && (bVar3 = *pbVar12, -1 < (char)bVar3)) {
    uVar9 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
    *(byte **)(param_1 + 8) = pbVar12 + 1;
    if (bVar3 == 0) goto LAB_003f22a0;
LAB_003f1f88:
    uVar6 = (uint)uVar9;
    switch((int)(uVar9 >> 3)) {
    case 1:
      if ((uVar6 & 7) != 2) break;
      psVar10 = *(string **)(this + 0x10);
      *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 1;
      if (psVar10 == (string *)puVar5) {
        psVar10 = operator_new(8);
        *(undefined **)psVar10 = puVar1;
        *(string **)(this + 0x10) = psVar10;
      }
      uVar9 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar10);
      if ((uVar9 & 1) == 0) goto LAB_003f22a8;
      pbVar12 = *(byte **)(param_1 + 8);
      pbVar11 = *(byte **)(param_1 + 0x10);
      if ((pbVar12 < pbVar11) && (*pbVar12 == 0x10)) {
        pbVar12 = pbVar12 + 1;
        *(byte **)(param_1 + 8) = pbVar12;
        if (pbVar12 < pbVar11) goto LAB_003f2010;
        goto LAB_003f20b4;
      }
      goto LAB_003f1f48;
    case 2:
      if ((uVar9 & 7) == 0) {
        pbVar12 = *(byte **)(param_1 + 8);
        pbVar11 = *(byte **)(param_1 + 0x10);
        if (pbVar12 < pbVar11) {
LAB_003f2010:
          if ((char)*pbVar12 < '\0') goto LAB_003f20b4;
          pbVar13 = pbVar12 + 1;
          local_6c = (uint)*pbVar12;
          *(byte **)(param_1 + 8) = pbVar13;
        }
        else {
LAB_003f20b4:
          uVar9 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
          if ((uVar9 & 1) == 0) goto LAB_003f22a8;
          pbVar13 = *(byte **)(param_1 + 8);
          pbVar11 = *(byte **)(param_1 + 0x10);
        }
        this[0x18] = (LevelState)(local_6c != 0);
        uVar6 = *(uint *)(this + 0x30) | 2;
        *(uint *)(this + 0x30) = uVar6;
        if ((pbVar11 <= pbVar13) || (*pbVar13 != 0x1a)) goto LAB_003f1f48;
        *(byte **)(param_1 + 8) = pbVar13 + 1;
LAB_003f2100:
        this_00 = *(StateProperties **)(this + 0x20);
        *(uint *)(this + 0x30) = uVar6 | 4;
        if (this_00 == (StateProperties *)0x0) {
          this_00 = operator_new(0x50);
          *(undefined **)this_00 = puVar2;
          *(StateProperties **)(this_00 + 0x10) = this_00 + 0x28;
          *(long *)(this_00 + 0x18) = 0;
          *(undefined4 *)(this_00 + 0x20) = 4;
          *(undefined4 *)(this_00 + 8) = 0;
          *(undefined4 *)(this_00 + 0x48) = 0;
          *(StateProperties **)(this + 0x20) = this_00;
        }
        pbVar12 = *(byte **)(param_1 + 8);
        if ((pbVar12 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar12)) {
          local_6c = (uint)*pbVar12;
          *(byte **)(param_1 + 8) = pbVar12 + 1;
        }
        else {
          uVar9 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
          if ((uVar9 & 1) == 0) goto LAB_003f22a8;
        }
        iVar7 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar7 + 1;
        if (iVar7 < *(int *)(param_1 + 0x3c)) {
          iVar7 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
          uVar9 = StateProperties::MergePartialFromCodedStream(this_00,param_1);
          if (((uVar9 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003f22a8;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar7);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pbVar13 = *(byte **)(param_1 + 8);
          pbVar11 = *(byte **)(param_1 + 0x10);
          if ((pbVar13 < pbVar11) && (*pbVar13 == 0x20)) {
            pbVar13 = pbVar13 + 1;
            *(byte **)(param_1 + 8) = pbVar13;
            if (pbVar13 < pbVar11) goto LAB_003f2084;
            goto LAB_003f220c;
          }
          goto LAB_003f1f48;
        }
        goto LAB_003f22a8;
      }
      break;
    case 3:
      if ((uVar6 & 7) == 2) {
        uVar6 = *(uint *)(this + 0x30);
        goto LAB_003f2100;
      }
      break;
    case 4:
      if ((uVar9 & 7) != 0) break;
      pbVar13 = *(byte **)(param_1 + 8);
      pbVar11 = *(byte **)(param_1 + 0x10);
      if (pbVar13 < pbVar11) {
LAB_003f2084:
        if ((char)*pbVar13 < '\0') goto LAB_003f220c;
        pbVar12 = pbVar13 + 1;
        local_6c = (uint)*pbVar13;
        *(byte **)(param_1 + 8) = pbVar12;
      }
      else {
LAB_003f220c:
        uVar9 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
        if ((uVar9 & 1) == 0) goto LAB_003f22a8;
        pbVar12 = *(byte **)(param_1 + 8);
        pbVar11 = *(byte **)(param_1 + 0x10);
      }
      *(uint *)(this + 0x28) = local_6c;
      *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 8;
      if ((pbVar12 < pbVar11) && (*pbVar12 == 0x28)) {
        pbVar12 = pbVar12 + 1;
        *(byte **)(param_1 + 8) = pbVar12;
        if (pbVar12 < pbVar11) {
LAB_003f2040:
          if ((char)*pbVar12 < '\0') goto LAB_003f2258;
          pbVar13 = pbVar12 + 1;
          local_6c = (uint)*pbVar12;
          *(byte **)(param_1 + 8) = pbVar13;
        }
        else {
LAB_003f2258:
          uVar9 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
          if ((uVar9 & 1) == 0) goto LAB_003f22a8;
          pbVar13 = *(byte **)(param_1 + 8);
          pbVar11 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0x2c) = local_6c;
        *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 0x10;
        if ((pbVar13 == pbVar11) && (*(int *)(param_1 + 0x2c) != 0)) {
          uVar8 = 1;
          *(undefined4 *)(param_1 + 0x20) = 0;
          param_1[0x24] = (CodedInputStream)0x1;
LAB_003f22ac:
          if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(uVar8);
          }
          return;
        }
      }
      goto LAB_003f1f48;
    case 5:
      if ((uVar9 & 7) == 0) {
        pbVar12 = *(byte **)(param_1 + 8);
        pbVar11 = *(byte **)(param_1 + 0x10);
        if (pbVar12 < pbVar11) goto LAB_003f2040;
        goto LAB_003f2258;
      }
    }
    if ((uVar6 & 7) != 4) {
      uVar9 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar6);
      if ((uVar9 & 1) != 0) goto LAB_003f1f48;
LAB_003f22a8:
      uVar8 = 0;
      goto LAB_003f22ac;
    }
  }
  else {
    uVar6 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar9 = (ulong)uVar6;
    *(uint *)(param_1 + 0x20) = uVar6;
    if (uVar6 != 0) goto LAB_003f1f88;
  }
LAB_003f22a0:
  uVar8 = 1;
  goto LAB_003f22ac;
}


