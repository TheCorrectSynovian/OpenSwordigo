/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fe598
 * Function: Caver::Proto::SceneObject::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(SceneObject * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SceneObject::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::SceneObject::MergePartialFromCodedStream(SceneObject *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  Type *this_00;
  undefined8 uVar9;
  ulong uVar10;
  string *psVar11;
  byte *pbVar12;
  char *pcVar13;
  byte *pbVar14;
  byte *pbVar15;
  Vector2 *this_01;
  Rectangle *this_02;
  Program *this_03;
  uint local_6c;
  long local_68;
  
  puVar6 = PTR_DAT_007e5de8;
  puVar5 = PTR__default_identifier__007e5320;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_003fe5ec:
  pbVar14 = *(byte **)(param_1 + 8);
  if ((pbVar14 < *(byte **)(param_1 + 0x10)) && (bVar2 = *pbVar14, -1 < (char)bVar2)) {
    uVar10 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar14 + 1;
    if (bVar2 == 0) goto LAB_003fec6c;
LAB_003fe62c:
    puVar4 = PTR__default_template_name__007e5070;
    uVar7 = (uint)uVar10;
    switch((int)(uVar10 >> 3)) {
    case 1:
      if ((uVar7 & 7) == 2) {
        psVar11 = *(string **)(this + 0x10);
        *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 1;
        if (psVar11 == (string *)puVar4) {
          psVar11 = operator_new(8);
          *(undefined **)psVar11 = puVar1;
          *(string **)(this + 0x10) = psVar11;
        }
        uVar10 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar11);
        if ((uVar10 & 1) == 0) goto LAB_003fec64;
        pcVar13 = *(char **)(param_1 + 8);
        if ((pcVar13 < *(char **)(param_1 + 0x10)) && (*pcVar13 == '\x12')) {
          *(char **)(param_1 + 8) = pcVar13 + 1;
          goto LAB_003fe71c;
        }
        goto LAB_003fe5ec;
      }
      break;
    case 2:
      if ((uVar7 & 7) == 2) {
LAB_003fe71c:
        psVar11 = *(string **)(this + 0x18);
        *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 2;
        if (psVar11 == (string *)puVar5) {
          psVar11 = operator_new(8);
          *(undefined **)psVar11 = puVar6 + 0x18;
          *(string **)(this + 0x18) = psVar11;
        }
        uVar10 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar11);
        if ((uVar10 & 1) == 0) goto LAB_003fec64;
        pcVar13 = *(char **)(param_1 + 8);
        if ((pcVar13 < *(char **)(param_1 + 0x10)) && (*pcVar13 == '\x1a')) {
          do {
            *(char **)(param_1 + 8) = pcVar13 + 1;
LAB_003fe7ec:
            this_00 = google::protobuf::internal::RepeatedPtrFieldBase::
                      Add<google::protobuf::RepeatedPtrField<Caver::Proto::Component>::TypeHandler>
                                ((RepeatedPtrFieldBase *)(this + 0x20));
            pbVar14 = *(byte **)(param_1 + 8);
            if ((pbVar14 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar14)) {
              local_6c = (uint)*pbVar14;
              *(byte **)(param_1 + 8) = pbVar14 + 1;
            }
            else {
              uVar10 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                 (param_1,&local_6c);
              if ((uVar10 & 1) == 0) goto LAB_003fec64;
            }
            iVar8 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar8 + 1;
            if (*(int *)(param_1 + 0x3c) <= iVar8) goto LAB_003fec64;
            iVar8 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
            uVar10 = Component::MergePartialFromCodedStream((Component *)this_00,param_1);
            if (((uVar10 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003fec64;
            google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar8);
            if (0 < *(int *)(param_1 + 0x38)) {
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
            }
            pcVar13 = *(char **)(param_1 + 8);
            if (*(char **)(param_1 + 0x10) <= pcVar13) goto LAB_003fe5ec;
          } while (*pcVar13 == '\x1a');
          if (*pcVar13 == '\"') {
            *(char **)(param_1 + 8) = pcVar13 + 1;
            goto LAB_003fe8c0;
          }
        }
        goto LAB_003fe5ec;
      }
      break;
    case 3:
      if ((uVar7 & 7) == 2) goto LAB_003fe7ec;
      break;
    case 4:
      if ((uVar7 & 7) == 2) {
LAB_003fe8c0:
        this_01 = *(Vector2 **)(this + 0x58);
        *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 8;
        if (this_01 == (Vector2 *)0x0) {
          this_01 = operator_new(0x18);
          Vector2::Vector2(this_01);
          *(Vector2 **)(this + 0x58) = this_01;
        }
        pbVar14 = *(byte **)(param_1 + 8);
        if ((pbVar14 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar14)) {
          local_6c = (uint)*pbVar14;
          *(byte **)(param_1 + 8) = pbVar14 + 1;
        }
        else {
          uVar10 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
          if ((uVar10 & 1) == 0) goto LAB_003fec64;
        }
        iVar8 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar8 + 1;
        if (iVar8 < *(int *)(param_1 + 0x3c)) {
          iVar8 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
          uVar10 = Vector2::MergePartialFromCodedStream(this_01,param_1);
          if (((uVar10 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003fec64;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar8);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar13 = *(char **)(param_1 + 8);
          if ((pcVar13 < *(char **)(param_1 + 0x10)) && (*pcVar13 == '-')) {
            *(char **)(param_1 + 8) = pcVar13 + 1;
            goto LAB_003fe998;
          }
          goto LAB_003fe5ec;
        }
        goto LAB_003fec64;
      }
      break;
    case 5:
      if ((uVar7 & 7) == 5) {
LAB_003fe998:
        uVar10 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                           (param_1,&local_6c);
        if ((uVar10 & 1) == 0) goto LAB_003fec64;
        *(uint *)(this + 0x60) = local_6c;
        *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 0x10;
        pcVar13 = *(char **)(param_1 + 8);
        if ((pcVar13 < *(char **)(param_1 + 0x10)) && (*pcVar13 == '5')) {
          *(char **)(param_1 + 8) = pcVar13 + 1;
          goto LAB_003fe9dc;
        }
        goto LAB_003fe5ec;
      }
      break;
    case 6:
      if ((uVar7 & 7) == 5) {
LAB_003fe9dc:
        uVar10 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                           (param_1,&local_6c);
        if ((uVar10 & 1) == 0) goto LAB_003fec64;
        *(uint *)(this + 100) = local_6c;
        *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 0x20;
        pcVar13 = *(char **)(param_1 + 8);
        if ((pcVar13 < *(char **)(param_1 + 0x10)) && (*pcVar13 == '=')) {
          *(char **)(param_1 + 8) = pcVar13 + 1;
          goto LAB_003fea20;
        }
        goto LAB_003fe5ec;
      }
      break;
    case 7:
      if ((uVar7 & 7) == 5) {
LAB_003fea20:
        uVar10 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                           (param_1,&local_6c);
        if ((uVar10 & 1) == 0) goto LAB_003fec64;
        *(uint *)(this + 0x68) = local_6c;
        uVar7 = *(uint *)(this + 0x88) | 0x40;
        *(uint *)(this + 0x88) = uVar7;
        pcVar13 = *(char **)(param_1 + 8);
        if ((pcVar13 < *(char **)(param_1 + 0x10)) && (*pcVar13 == 'B')) {
          *(char **)(param_1 + 8) = pcVar13 + 1;
          goto LAB_003fea64;
        }
        goto LAB_003fe5ec;
      }
      break;
    case 8:
      if ((uVar7 & 7) == 2) {
        uVar7 = *(uint *)(this + 0x88);
LAB_003fea64:
        this_02 = *(Rectangle **)(this + 0x70);
        *(uint *)(this + 0x88) = uVar7 | 0x80;
        if (this_02 == (Rectangle *)0x0) {
          this_02 = operator_new(0x20);
          Rectangle::Rectangle(this_02);
          *(Rectangle **)(this + 0x70) = this_02;
        }
        pbVar14 = *(byte **)(param_1 + 8);
        if ((pbVar14 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar14)) {
          local_6c = (uint)*pbVar14;
          *(byte **)(param_1 + 8) = pbVar14 + 1;
        }
        else {
          uVar10 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
          if ((uVar10 & 1) == 0) goto LAB_003fec64;
        }
        iVar8 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar8 + 1;
        if (iVar8 < *(int *)(param_1 + 0x3c)) {
          iVar8 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
          uVar10 = Rectangle::MergePartialFromCodedStream(this_02,param_1);
          if (((uVar10 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003fec64;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar8);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pbVar14 = *(byte **)(param_1 + 8);
          pbVar12 = *(byte **)(param_1 + 0x10);
          if ((pbVar14 < pbVar12) && (*pbVar14 == 0x48)) {
            pbVar14 = pbVar14 + 1;
            *(byte **)(param_1 + 8) = pbVar14;
            if (pbVar14 < pbVar12) goto LAB_003fe7d0;
            goto LAB_003feb40;
          }
          goto LAB_003fe5ec;
        }
        goto LAB_003fec64;
      }
      break;
    case 9:
      if ((uVar10 & 7) != 0) break;
      pbVar14 = *(byte **)(param_1 + 8);
      pbVar12 = *(byte **)(param_1 + 0x10);
      if (pbVar14 < pbVar12) {
LAB_003fe7d0:
        if ((char)*pbVar14 < '\0') goto LAB_003feb40;
        pbVar15 = pbVar14 + 1;
        local_6c = (uint)*pbVar14;
        *(byte **)(param_1 + 8) = pbVar15;
      }
      else {
LAB_003feb40:
        uVar10 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
        if ((uVar10 & 1) == 0) goto LAB_003fec64;
        pbVar15 = *(byte **)(param_1 + 8);
        pbVar12 = *(byte **)(param_1 + 0x10);
      }
      this[0x78] = (SceneObject)(local_6c != 0);
      uVar7 = *(uint *)(this + 0x88) | 0x100;
      *(uint *)(this + 0x88) = uVar7;
      if ((pbVar15 < pbVar12) && (*pbVar15 == 0x52)) {
        *(byte **)(param_1 + 8) = pbVar15 + 1;
LAB_003feb8c:
        this_03 = *(Program **)(this + 0x80);
        *(uint *)(this + 0x88) = uVar7 | 0x200;
        if (this_03 == (Program *)0x0) {
          this_03 = operator_new(0x30);
          Program::Program(this_03);
          *(Program **)(this + 0x80) = this_03;
        }
        pbVar14 = *(byte **)(param_1 + 8);
        if ((pbVar14 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar14)) {
          local_6c = (uint)*pbVar14;
          *(byte **)(param_1 + 8) = pbVar14 + 1;
        }
        else {
          uVar10 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
          if ((uVar10 & 1) == 0) goto LAB_003fec64;
        }
        iVar8 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar8 + 1;
        if (*(int *)(param_1 + 0x3c) <= iVar8) goto LAB_003fec64;
        iVar8 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
        uVar10 = Program::MergePartialFromCodedStream(this_03,param_1);
        if (((uVar10 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003fec64;
        google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar8);
        if (0 < *(int *)(param_1 + 0x38)) {
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
        }
        if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0)
           ) {
          uVar9 = 1;
          *(undefined4 *)(param_1 + 0x20) = 0;
          param_1[0x24] = (CodedInputStream)0x1;
LAB_003fec70:
          if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(uVar9);
          }
          return;
        }
      }
      goto LAB_003fe5ec;
    case 10:
      if ((uVar7 & 7) == 2) {
        uVar7 = *(uint *)(this + 0x88);
        goto LAB_003feb8c;
      }
      break;
    default:
      if ((uVar7 & 7) == 4) goto LAB_003fec6c;
      goto LAB_003fe7b4;
    }
    if ((uVar7 & 7) != 4) {
LAB_003fe7b4:
      uVar10 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar7);
      if ((uVar10 & 1) != 0) goto LAB_003fe5ec;
LAB_003fec64:
      uVar9 = 0;
      goto LAB_003fec70;
    }
  }
  else {
    uVar7 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar10 = (ulong)uVar7;
    *(uint *)(param_1 + 0x20) = uVar7;
    if (uVar7 != 0) goto LAB_003fe62c;
  }
LAB_003fec6c:
  uVar9 = 1;
  goto LAB_003fec70;
}


