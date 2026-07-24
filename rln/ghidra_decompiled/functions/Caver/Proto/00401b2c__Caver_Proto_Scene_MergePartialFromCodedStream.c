/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00401b2c
 * Function: Caver::Proto::Scene::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(Scene * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Scene::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */

void __thiscall
Caver::Proto::Scene::MergePartialFromCodedStream(Scene *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte *pbVar4;
  byte bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  int iVar14;
  char *pcVar15;
  SceneObject *this_00;
  ObjectLibrary *this_01;
  Rectangle *this_02;
  SceneObjectGroup *this_03;
  Program *this_04;
  uint local_7c;
  long local_78;
  
  puVar9 = PTR__default_identifier__007e5320;
  puVar7 = PTR__default_template_name__007e5070;
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  puVar1 = PTR_vtable_007e6240 + 0x10;
  puVar2 = PTR_vtable_007e6ec8 + 0x10;
  puVar3 = PTR_vtable_007e63b0 + 0x10;
LAB_00401bc4:
  pbVar4 = *(byte **)(param_1 + 8);
  if ((pbVar4 < *(byte **)(param_1 + 0x10)) && (bVar5 = *pbVar4, -1 < (char)bVar5)) {
    uVar13 = (ulong)bVar5;
    *(uint *)(param_1 + 0x20) = (uint)bVar5;
    *(byte **)(param_1 + 8) = pbVar4 + 1;
    if (bVar5 == 0) goto LAB_00402224;
LAB_00401c04:
    uVar10 = (uint)uVar13;
    switch((int)(uVar13 >> 3)) {
    case 1:
      if ((uVar10 & 7) == 2) {
        while( true ) {
          iVar11 = *(int *)(this + 0x18);
          iVar14 = *(int *)(this + 0x1c);
          if (iVar11 < iVar14) {
            *(int *)(this + 0x18) = iVar11 + 1;
            this_00 = *(SceneObject **)(*(long *)(this + 0x10) + (long)iVar11 * 8);
          }
          else {
            if (iVar14 == *(int *)(this + 0x20)) {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                        ((RepeatedPtrFieldBase *)(this + 0x10),iVar14 + 1);
              iVar11 = *(int *)(this + 0x18);
              iVar14 = *(int *)(this + 0x1c);
            }
            *(int *)(this + 0x1c) = iVar14 + 1;
            this_00 = operator_new(0x90);
            *(undefined **)this_00 = puVar1;
            *(SceneObject **)(this_00 + 0x20) = this_00 + 0x38;
            *(long *)(this_00 + 0x28) = 0;
            *(undefined4 *)(this_00 + 0x30) = 4;
            *(undefined4 *)(this_00 + 8) = 0;
            *(undefined **)(this_00 + 0x18) = puVar9;
            *(undefined **)(this_00 + 0x10) = puVar7;
            *(long *)(this_00 + 0x58) = 0;
            *(long *)(this_00 + 0x60) = 0;
            *(undefined4 *)(this_00 + 0x68) = 0x3f800000;
            *(long *)(this_00 + 0x70) = 0;
            this_00[0x78] = (SceneObject)0x0;
            *(long *)(this_00 + 0x80) = 0;
            *(undefined4 *)(this_00 + 0x88) = 0;
            *(int *)(this + 0x18) = iVar11 + 1;
            *(SceneObject **)(*(long *)(this + 0x10) + (long)iVar11 * 8) = this_00;
          }
          pbVar4 = *(byte **)(param_1 + 8);
          if ((pbVar4 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar4)) {
            local_7c = (uint)*pbVar4;
            *(byte **)(param_1 + 8) = pbVar4 + 1;
          }
          else {
            uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c)
            ;
            if ((uVar13 & 1) == 0) goto LAB_0040221c;
          }
          iVar11 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar11 + 1;
          if (*(int *)(param_1 + 0x3c) <= iVar11) goto LAB_0040221c;
          iVar11 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
          uVar13 = SceneObject::MergePartialFromCodedStream(this_00,param_1);
          if (((uVar13 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0040221c;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar11);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar15 = *(char **)(param_1 + 8);
          if (*(char **)(param_1 + 0x10) <= pcVar15) goto LAB_00401bc4;
          if (*pcVar15 != '\n') break;
          *(char **)(param_1 + 8) = pcVar15 + 1;
        }
        if (*pcVar15 != '\x12') goto LAB_00401bc4;
        *(char **)(param_1 + 8) = pcVar15 + 1;
LAB_00401dd0:
        this_01 = *(ObjectLibrary **)(this + 0x80);
        *(uint *)(this + 0x98) = *(uint *)(this + 0x98) | 4;
        if (this_01 == (ObjectLibrary *)0x0) {
          this_01 = operator_new(0x100);
          *(long *)(this_01 + 0x20) = 0;
          *(undefined4 *)(this_01 + 0x28) = 4;
          *(undefined **)this_01 = puVar2;
          puVar8 = PTR__default_name__007e6d40;
          *(long *)(this_01 + 0x58) = 0;
          *(undefined4 *)(this_01 + 0x60) = 4;
          *(undefined **)(this_01 + 0x10) = puVar8;
          *(ObjectLibrary **)(this_01 + 0x18) = this_01 + 0x30;
          *(ObjectLibrary **)(this_01 + 0x50) = this_01 + 0x68;
          *(ObjectLibrary **)(this_01 + 0x88) = this_01 + 0xa0;
          *(long *)(this_01 + 0x90) = 0;
          *(undefined4 *)(this_01 + 0x98) = 4;
          *(long *)(this_01 + 200) = 0;
          *(undefined4 *)(this_01 + 0xd0) = 4;
          *(undefined4 *)(this_01 + 8) = 0;
          *(undefined4 *)(this_01 + 0xf8) = 0;
          *(ObjectLibrary **)(this_01 + 0xc0) = this_01 + 0xd8;
          *(ObjectLibrary **)(this + 0x80) = this_01;
        }
        pbVar4 = *(byte **)(param_1 + 8);
        if ((pbVar4 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar4)) {
          local_7c = (uint)*pbVar4;
          *(byte **)(param_1 + 8) = pbVar4 + 1;
LAB_00401ea0:
          iVar11 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar11 + 1;
          if (*(int *)(param_1 + 0x3c) <= iVar11) goto LAB_0040221c;
          iVar11 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
          uVar13 = ObjectLibrary::MergePartialFromCodedStream(this_01,param_1);
          if (((uVar13 & 1) != 0) && (param_1[0x24] != (CodedInputStream)0x0)) {
            google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar11);
            if (0 < *(int *)(param_1 + 0x38)) {
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
            }
            pcVar15 = *(char **)(param_1 + 8);
            if ((pcVar15 < *(char **)(param_1 + 0x10)) && (*pcVar15 == '\x1a')) {
              *(char **)(param_1 + 8) = pcVar15 + 1;
              goto LAB_00401f18;
            }
            goto LAB_00401bc4;
          }
        }
        else {
          uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c);
          if ((uVar13 & 1) != 0) goto LAB_00401ea0;
        }
        goto LAB_0040221c;
      }
      break;
    case 2:
      if ((uVar10 & 7) == 2) goto LAB_00401dd0;
      break;
    case 3:
      if ((uVar10 & 7) == 2) {
LAB_00401f18:
        this_02 = *(Rectangle **)(this + 0x88);
        *(uint *)(this + 0x98) = *(uint *)(this + 0x98) | 8;
        if (this_02 == (Rectangle *)0x0) {
          this_02 = operator_new(0x20);
          Rectangle::Rectangle(this_02);
          *(Rectangle **)(this + 0x88) = this_02;
        }
        pbVar4 = *(byte **)(param_1 + 8);
        if ((pbVar4 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar4)) {
          local_7c = (uint)*pbVar4;
          *(byte **)(param_1 + 8) = pbVar4 + 1;
        }
        else {
          uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c);
          if ((uVar13 & 1) == 0) goto LAB_0040221c;
        }
        iVar11 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar11 + 1;
        if (*(int *)(param_1 + 0x3c) <= iVar11) goto LAB_0040221c;
        iVar11 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
        uVar13 = Rectangle::MergePartialFromCodedStream(this_02,param_1);
        if (((uVar13 & 1) != 0) && (param_1[0x24] != (CodedInputStream)0x0)) {
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar11);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar15 = *(char **)(param_1 + 8);
          if ((pcVar15 < *(char **)(param_1 + 0x10)) && (*pcVar15 == '\"')) {
            do {
              *(char **)(param_1 + 8) = pcVar15 + 1;
LAB_00401ff0:
              iVar11 = *(int *)(this + 0x50);
              iVar14 = *(int *)(this + 0x54);
              if (iVar11 < iVar14) {
                *(int *)(this + 0x50) = iVar11 + 1;
                this_03 = *(SceneObjectGroup **)(*(long *)(this + 0x48) + (long)iVar11 * 8);
              }
              else {
                if (iVar14 == *(int *)(this + 0x58)) {
                  google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                            ((RepeatedPtrFieldBase *)(this + 0x48),iVar14 + 1);
                  iVar11 = *(int *)(this + 0x50);
                  iVar14 = *(int *)(this + 0x54);
                }
                *(int *)(this + 0x54) = iVar14 + 1;
                this_03 = operator_new(0x68);
                *(undefined **)this_03 = puVar3;
                *(long *)(this_03 + 0x20) = 0;
                *(undefined4 *)(this_03 + 0x28) = 4;
                *(undefined4 *)(this_03 + 8) = 0;
                *(undefined2 *)(this_03 + 0x50) = 0;
                this_03[0x52] = (SceneObjectGroup)0x0;
                *(long *)(this_03 + 0x58) = 0;
                puVar8 = PTR__default_identifier__007e5218;
                *(undefined4 *)(this_03 + 0x60) = 0;
                *(undefined **)(this_03 + 0x10) = puVar8;
                *(SceneObjectGroup **)(this_03 + 0x18) = this_03 + 0x30;
                *(int *)(this + 0x50) = iVar11 + 1;
                *(SceneObjectGroup **)(*(long *)(this + 0x48) + (long)iVar11 * 8) = this_03;
              }
              pbVar4 = *(byte **)(param_1 + 8);
              if ((pbVar4 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar4)) {
                local_7c = (uint)*pbVar4;
                *(byte **)(param_1 + 8) = pbVar4 + 1;
              }
              else {
                uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                   (param_1,&local_7c);
                if ((uVar13 & 1) == 0) goto LAB_0040221c;
              }
              iVar11 = *(int *)(param_1 + 0x38);
              *(int *)(param_1 + 0x38) = iVar11 + 1;
              if (*(int *)(param_1 + 0x3c) <= iVar11) goto LAB_0040221c;
              iVar11 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
              uVar13 = SceneObjectGroup::MergePartialFromCodedStream(this_03,param_1);
              if (((uVar13 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
              goto LAB_0040221c;
              google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar11);
              if (0 < *(int *)(param_1 + 0x38)) {
                *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
              }
              pcVar15 = *(char **)(param_1 + 8);
              if (*(char **)(param_1 + 0x10) <= pcVar15) goto LAB_00401bc4;
            } while (*pcVar15 == '\"');
            if (*pcVar15 == '*') {
              *(char **)(param_1 + 8) = pcVar15 + 1;
              goto LAB_00402140;
            }
          }
          goto LAB_00401bc4;
        }
        goto LAB_0040221c;
      }
      break;
    case 4:
      if ((uVar10 & 7) == 2) goto LAB_00401ff0;
      break;
    case 5:
      if ((uVar10 & 7) != 2) break;
LAB_00402140:
      this_04 = *(Program **)(this + 0x90);
      *(uint *)(this + 0x98) = *(uint *)(this + 0x98) | 0x10;
      if (this_04 == (Program *)0x0) {
        this_04 = operator_new(0x30);
        Program::Program(this_04);
        *(Program **)(this + 0x90) = this_04;
      }
      pbVar4 = *(byte **)(param_1 + 8);
      if ((pbVar4 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar4)) {
        local_7c = (uint)*pbVar4;
        *(byte **)(param_1 + 8) = pbVar4 + 1;
      }
      else {
        uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c);
        if ((uVar13 & 1) == 0) goto LAB_0040221c;
      }
      iVar11 = *(int *)(param_1 + 0x38);
      *(int *)(param_1 + 0x38) = iVar11 + 1;
      if (*(int *)(param_1 + 0x3c) <= iVar11) goto LAB_0040221c;
      iVar11 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
      uVar13 = Program::MergePartialFromCodedStream(this_04,param_1);
      if (((uVar13 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0040221c;
      google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar11);
      if (0 < *(int *)(param_1 + 0x38)) {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      }
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar12 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_00402228:
        if (*(long *)(lVar6 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar12);
        }
        return;
      }
      goto LAB_00401bc4;
    }
    if ((uVar10 & 7) != 4) {
      uVar13 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar10);
      if ((uVar13 & 1) != 0) goto LAB_00401bc4;
LAB_0040221c:
      uVar12 = 0;
      goto LAB_00402228;
    }
  }
  else {
    uVar10 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar13 = (ulong)uVar10;
    *(uint *)(param_1 + 0x20) = uVar10;
    if (uVar10 != 0) goto LAB_00401c04;
  }
LAB_00402224:
  uVar12 = 1;
  goto LAB_00402228;
}


