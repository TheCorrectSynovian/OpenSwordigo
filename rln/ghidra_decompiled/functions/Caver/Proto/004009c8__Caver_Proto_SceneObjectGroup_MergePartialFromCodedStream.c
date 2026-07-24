/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004009c8
 * Function: Caver::Proto::SceneObjectGroup::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(SceneObjectGroup * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SceneObjectGroup::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::SceneObjectGroup::MergePartialFromCodedStream
          (SceneObjectGroup *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  string *psVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  Program *this_00;
  uint local_6c;
  long local_68;
  
  puVar4 = PTR__default_identifier__007e5218;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_00400a1c:
  pbVar13 = *(byte **)(param_1 + 8);
  if ((pbVar13 < *(byte **)(param_1 + 0x10)) && (bVar2 = *pbVar13, -1 < (char)bVar2)) {
    uVar8 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar13 + 1;
    if (bVar2 == 0) goto LAB_00400e20;
LAB_00400a5c:
    uVar5 = (uint)uVar8;
    switch((int)(uVar8 >> 3)) {
    case 1:
      if ((uVar5 & 7) != 2) break;
      psVar9 = *(string **)(this + 0x10);
      *(uint *)(this + 0x60) = *(uint *)(this + 0x60) | 1;
      if (psVar9 == (string *)puVar4) {
        psVar9 = operator_new(8);
        *(undefined **)psVar9 = puVar1;
        *(string **)(this + 0x10) = psVar9;
      }
      uVar8 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar9);
      if ((uVar8 & 1) == 0) goto LAB_00400e28;
      pbVar13 = *(byte **)(param_1 + 8);
      if ((pbVar13 < *(byte **)(param_1 + 0x10)) && (*pbVar13 == 0x12)) {
        do {
          *(byte **)(param_1 + 8) = pbVar13 + 1;
LAB_00400bb0:
          iVar6 = *(int *)(this + 0x20);
          iVar10 = *(int *)(this + 0x24);
          if (iVar6 < iVar10) {
            *(int *)(this + 0x20) = iVar6 + 1;
            psVar9 = *(string **)(*(long *)(this + 0x18) + (long)iVar6 * 8);
          }
          else {
            if (iVar10 == *(int *)(this + 0x28)) {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                        ((RepeatedPtrFieldBase *)(this + 0x18),iVar10 + 1);
              iVar10 = *(int *)(this + 0x24);
            }
            *(int *)(this + 0x24) = iVar10 + 1;
            psVar9 = (string *)google::protobuf::internal::StringTypeHandlerBase::New();
            iVar6 = *(int *)(this + 0x20);
            *(int *)(this + 0x20) = iVar6 + 1;
            *(string **)(*(long *)(this + 0x18) + (long)iVar6 * 8) = psVar9;
          }
          uVar8 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar9);
          if ((uVar8 & 1) == 0) goto LAB_00400e28;
          pbVar13 = *(byte **)(param_1 + 8);
          pbVar11 = *(byte **)(param_1 + 0x10);
          if (pbVar11 <= pbVar13) goto LAB_00400a1c;
        } while (*pbVar13 == 0x12);
        if (*pbVar13 == 0x18) {
          pbVar13 = pbVar13 + 1;
          *(byte **)(param_1 + 8) = pbVar13;
          if (pbVar13 < pbVar11) goto LAB_00400b1c;
          goto LAB_00400c54;
        }
      }
      goto LAB_00400a1c;
    case 2:
      if ((uVar5 & 7) == 2) goto LAB_00400bb0;
      break;
    case 3:
      if ((uVar8 & 7) == 0) {
        pbVar13 = *(byte **)(param_1 + 8);
        pbVar11 = *(byte **)(param_1 + 0x10);
        if (pbVar13 < pbVar11) {
LAB_00400b1c:
          if ((char)*pbVar13 < '\0') goto LAB_00400c54;
          pbVar12 = pbVar13 + 1;
          local_6c = (uint)*pbVar13;
          *(byte **)(param_1 + 8) = pbVar12;
        }
        else {
LAB_00400c54:
          uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
          if ((uVar8 & 1) == 0) goto LAB_00400e28;
          pbVar12 = *(byte **)(param_1 + 8);
          pbVar11 = *(byte **)(param_1 + 0x10);
        }
        this[0x50] = (SceneObjectGroup)(local_6c != 0);
        uVar5 = *(uint *)(this + 0x60) | 4;
        *(uint *)(this + 0x60) = uVar5;
        if ((pbVar11 <= pbVar12) || (*pbVar12 != 0x22)) goto LAB_00400a1c;
        *(byte **)(param_1 + 8) = pbVar12 + 1;
LAB_00400ca0:
        this_00 = *(Program **)(this + 0x58);
        *(uint *)(this + 0x60) = uVar5 | 0x20;
        if (this_00 == (Program *)0x0) {
          this_00 = operator_new(0x30);
          Program::Program(this_00);
          *(Program **)(this + 0x58) = this_00;
        }
        pbVar13 = *(byte **)(param_1 + 8);
        if ((pbVar13 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar13)) {
          local_6c = (uint)*pbVar13;
          *(byte **)(param_1 + 8) = pbVar13 + 1;
        }
        else {
          uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
          if ((uVar8 & 1) == 0) goto LAB_00400e28;
        }
        iVar6 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar6 + 1;
        if (iVar6 < *(int *)(param_1 + 0x3c)) {
          iVar6 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
          uVar8 = Program::MergePartialFromCodedStream(this_00,param_1);
          if (((uVar8 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_00400e28;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar6);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pbVar12 = *(byte **)(param_1 + 8);
          pbVar11 = *(byte **)(param_1 + 0x10);
          if ((pbVar12 < pbVar11) && (*pbVar12 == 0x28)) {
            pbVar12 = pbVar12 + 1;
            *(byte **)(param_1 + 8) = pbVar12;
            if (pbVar12 < pbVar11) goto LAB_00400aec;
            goto LAB_00400d7c;
          }
          goto LAB_00400a1c;
        }
        goto LAB_00400e28;
      }
      break;
    case 4:
      if ((uVar5 & 7) == 2) {
        uVar5 = *(uint *)(this + 0x60);
        goto LAB_00400ca0;
      }
      break;
    case 5:
      if ((uVar8 & 7) != 0) break;
      pbVar12 = *(byte **)(param_1 + 8);
      pbVar11 = *(byte **)(param_1 + 0x10);
      if (pbVar12 < pbVar11) {
LAB_00400aec:
        if ((char)*pbVar12 < '\0') goto LAB_00400d7c;
        pbVar13 = pbVar12 + 1;
        local_6c = (uint)*pbVar12;
        *(byte **)(param_1 + 8) = pbVar13;
      }
      else {
LAB_00400d7c:
        uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
        if ((uVar8 & 1) == 0) goto LAB_00400e28;
        pbVar13 = *(byte **)(param_1 + 8);
        pbVar11 = *(byte **)(param_1 + 0x10);
      }
      this[0x52] = (SceneObjectGroup)(local_6c != 0);
      *(uint *)(this + 0x60) = *(uint *)(this + 0x60) | 0x10;
      if ((pbVar13 < pbVar11) && (*pbVar13 == 0x30)) {
        pbVar13 = pbVar13 + 1;
        *(byte **)(param_1 + 8) = pbVar13;
        if (pbVar13 < pbVar11) {
LAB_00400b70:
          if ((char)*pbVar13 < '\0') goto LAB_00400dd0;
          pbVar12 = pbVar13 + 1;
          local_6c = (uint)*pbVar13;
          *(byte **)(param_1 + 8) = pbVar12;
        }
        else {
LAB_00400dd0:
          uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
          if ((uVar8 & 1) == 0) goto LAB_00400e28;
          pbVar12 = *(byte **)(param_1 + 8);
          pbVar11 = *(byte **)(param_1 + 0x10);
        }
        this[0x51] = (SceneObjectGroup)(local_6c != 0);
        *(uint *)(this + 0x60) = *(uint *)(this + 0x60) | 8;
        if ((pbVar12 == pbVar11) && (*(int *)(param_1 + 0x2c) != 0)) {
          uVar7 = 1;
          *(undefined4 *)(param_1 + 0x20) = 0;
          param_1[0x24] = (CodedInputStream)0x1;
LAB_00400e2c:
          if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(uVar7);
          }
          return;
        }
      }
      goto LAB_00400a1c;
    case 6:
      if ((uVar8 & 7) == 0) {
        pbVar13 = *(byte **)(param_1 + 8);
        pbVar11 = *(byte **)(param_1 + 0x10);
        if (pbVar13 < pbVar11) goto LAB_00400b70;
        goto LAB_00400dd0;
      }
    }
    if ((uVar5 & 7) != 4) {
      uVar8 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar5);
      if ((uVar8 & 1) != 0) goto LAB_00400a1c;
LAB_00400e28:
      uVar7 = 0;
      goto LAB_00400e2c;
    }
  }
  else {
    uVar5 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar8 = (ulong)uVar5;
    *(uint *)(param_1 + 0x20) = uVar5;
    if (uVar5 != 0) goto LAB_00400a5c;
  }
LAB_00400e20:
  uVar7 = 1;
  goto LAB_00400e2c;
}


