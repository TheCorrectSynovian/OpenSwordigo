/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fd4ac
 * Function: Caver::Proto::ObjectLibrary::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(ObjectLibrary * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectLibrary::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::ObjectLibrary::MergePartialFromCodedStream
          (ObjectLibrary *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  string *psVar11;
  int iVar12;
  char *pcVar13;
  ObjectTemplate *this_00;
  Texture *this_01;
  Program *this_02;
  uint local_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e5e80 + 0x10;
LAB_003fd518:
  pbVar3 = *(byte **)(param_1 + 8);
  if ((pbVar3 < *(byte **)(param_1 + 0x10)) && (bVar4 = *pbVar3, -1 < (char)bVar4)) {
    uVar10 = (ulong)bVar4;
    *(uint *)(param_1 + 0x20) = (uint)bVar4;
    *(byte **)(param_1 + 8) = pbVar3 + 1;
    if (bVar4 == 0) goto LAB_003fda74;
LAB_003fd558:
    puVar6 = PTR__default_name__007e6d40;
    uVar7 = (uint)uVar10;
    switch((int)(uVar10 >> 3)) {
    case 1:
      if ((uVar7 & 7) != 2) break;
      psVar11 = *(string **)(this + 0x10);
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 1;
      if (psVar11 == (string *)puVar6) {
        psVar11 = operator_new(8);
        *(undefined **)psVar11 = puVar1;
        *(string **)(this + 0x10) = psVar11;
      }
      uVar10 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar11);
      if ((uVar10 & 1) == 0) goto LAB_003fda6c;
      pcVar13 = *(char **)(param_1 + 8);
      if ((pcVar13 < *(char **)(param_1 + 0x10)) && (*pcVar13 == '\x12')) {
        do {
          *(char **)(param_1 + 8) = pcVar13 + 1;
LAB_003fd644:
          iVar8 = *(int *)(this + 0x20);
          iVar12 = *(int *)(this + 0x24);
          if (iVar8 < iVar12) {
            *(int *)(this + 0x20) = iVar8 + 1;
            this_00 = *(ObjectTemplate **)(*(long *)(this + 0x18) + (long)iVar8 * 8);
          }
          else {
            if (iVar12 == *(int *)(this + 0x28)) {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                        ((RepeatedPtrFieldBase *)(this + 0x18),iVar12 + 1);
              iVar8 = *(int *)(this + 0x20);
              iVar12 = *(int *)(this + 0x24);
            }
            *(int *)(this + 0x24) = iVar12 + 1;
            this_00 = operator_new(0x20);
            *(undefined **)this_00 = puVar2;
            *(undefined4 *)(this_00 + 8) = 0;
            *(long *)(this_00 + 0x10) = 0;
            *(long *)(this_00 + 0x18) = 0x3f800000;
            *(int *)(this + 0x20) = iVar8 + 1;
            *(ObjectTemplate **)(*(long *)(this + 0x18) + (long)iVar8 * 8) = this_00;
          }
          pbVar3 = *(byte **)(param_1 + 8);
          if ((pbVar3 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar3)) {
            local_6c = (uint)*pbVar3;
            *(byte **)(param_1 + 8) = pbVar3 + 1;
          }
          else {
            uVar10 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c)
            ;
            if ((uVar10 & 1) == 0) goto LAB_003fda6c;
          }
          iVar8 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar8 + 1;
          if (*(int *)(param_1 + 0x3c) <= iVar8) goto LAB_003fda6c;
          iVar8 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
          uVar10 = ObjectTemplate::MergePartialFromCodedStream(this_00,param_1);
          if (((uVar10 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003fda6c;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar8);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar13 = *(char **)(param_1 + 8);
          if (*(char **)(param_1 + 0x10) <= pcVar13) goto LAB_003fd518;
        } while (*pcVar13 == '\x12');
        if (*pcVar13 == '\x1a') {
          do {
            *(char **)(param_1 + 8) = pcVar13 + 1;
LAB_003fd774:
            iVar8 = *(int *)(this + 0x58);
            iVar12 = *(int *)(this + 0x5c);
            if (iVar8 < iVar12) {
              *(int *)(this + 0x58) = iVar8 + 1;
              psVar11 = *(string **)(*(long *)(this + 0x50) + (long)iVar8 * 8);
            }
            else {
              if (iVar12 == *(int *)(this + 0x60)) {
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                          ((RepeatedPtrFieldBase *)(this + 0x50),iVar12 + 1);
                iVar12 = *(int *)(this + 0x5c);
              }
              *(int *)(this + 0x5c) = iVar12 + 1;
              psVar11 = (string *)google::protobuf::internal::StringTypeHandlerBase::New();
              iVar8 = *(int *)(this + 0x58);
              *(int *)(this + 0x58) = iVar8 + 1;
              *(string **)(*(long *)(this + 0x50) + (long)iVar8 * 8) = psVar11;
            }
            uVar10 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar11);
            if ((uVar10 & 1) == 0) goto LAB_003fda6c;
            pcVar13 = *(char **)(param_1 + 8);
            if (*(char **)(param_1 + 0x10) <= pcVar13) goto LAB_003fd518;
          } while (*pcVar13 == '\x1a');
          if (*pcVar13 == '\"') {
            do {
              *(char **)(param_1 + 8) = pcVar13 + 1;
LAB_003fd810:
              iVar8 = *(int *)(this + 0x90);
              iVar12 = *(int *)(this + 0x94);
              if (iVar8 < iVar12) {
                *(int *)(this + 0x90) = iVar8 + 1;
                this_01 = *(Texture **)(*(long *)(this + 0x88) + (long)iVar8 * 8);
              }
              else {
                if (iVar12 == *(int *)(this + 0x98)) {
                  google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                            ((RepeatedPtrFieldBase *)(this + 0x88),iVar12 + 1);
                  iVar12 = *(int *)(this + 0x94);
                }
                *(int *)(this + 0x94) = iVar12 + 1;
                this_01 = operator_new(0x70);
                Texture::Texture(this_01);
                iVar8 = *(int *)(this + 0x90);
                *(int *)(this + 0x90) = iVar8 + 1;
                *(Texture **)(*(long *)(this + 0x88) + (long)iVar8 * 8) = this_01;
              }
              pbVar3 = *(byte **)(param_1 + 8);
              if ((pbVar3 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar3)) {
                local_6c = (uint)*pbVar3;
                *(byte **)(param_1 + 8) = pbVar3 + 1;
              }
              else {
                uVar10 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                   (param_1,&local_6c);
                if ((uVar10 & 1) == 0) goto LAB_003fda6c;
              }
              iVar8 = *(int *)(param_1 + 0x38);
              *(int *)(param_1 + 0x38) = iVar8 + 1;
              if (*(int *)(param_1 + 0x3c) <= iVar8) goto LAB_003fda6c;
              iVar8 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
              uVar10 = Texture::MergePartialFromCodedStream(this_01,param_1);
              if (((uVar10 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
              goto LAB_003fda6c;
              google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar8);
              if (0 < *(int *)(param_1 + 0x38)) {
                *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
              }
              pcVar13 = *(char **)(param_1 + 8);
              if (*(char **)(param_1 + 0x10) <= pcVar13) goto LAB_003fd518;
            } while (*pcVar13 == '\"');
            if (*pcVar13 == '*') goto LAB_003fd930;
          }
        }
      }
      goto LAB_003fd518;
    case 2:
      if ((uVar7 & 7) == 2) goto LAB_003fd644;
      break;
    case 3:
      if ((uVar7 & 7) == 2) goto LAB_003fd774;
      break;
    case 4:
      if ((uVar7 & 7) == 2) goto LAB_003fd810;
      break;
    case 5:
      if ((uVar7 & 7) == 2) goto LAB_003fd938;
    }
    if ((uVar7 & 7) != 4) {
      uVar10 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar7);
      if ((uVar10 & 1) == 0) {
LAB_003fda6c:
        uVar9 = 0;
        goto LAB_003fda78;
      }
      goto LAB_003fd518;
    }
  }
  else {
    uVar7 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar10 = (ulong)uVar7;
    *(uint *)(param_1 + 0x20) = uVar7;
    if (uVar7 != 0) goto LAB_003fd558;
  }
LAB_003fda74:
  uVar9 = 1;
  goto LAB_003fda78;
LAB_003fd930:
  do {
    *(char **)(param_1 + 8) = pcVar13 + 1;
LAB_003fd938:
    iVar8 = *(int *)(this + 200);
    iVar12 = *(int *)(this + 0xcc);
    if (iVar8 < iVar12) {
      *(int *)(this + 200) = iVar8 + 1;
      this_02 = *(Program **)(*(long *)(this + 0xc0) + (long)iVar8 * 8);
    }
    else {
      if (iVar12 == *(int *)(this + 0xd0)) {
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                  ((RepeatedPtrFieldBase *)(this + 0xc0),iVar12 + 1);
        iVar12 = *(int *)(this + 0xcc);
      }
      *(int *)(this + 0xcc) = iVar12 + 1;
      this_02 = operator_new(0x30);
      Program::Program(this_02);
      iVar8 = *(int *)(this + 200);
      *(int *)(this + 200) = iVar8 + 1;
      *(Program **)(*(long *)(this + 0xc0) + (long)iVar8 * 8) = this_02;
    }
    pbVar3 = *(byte **)(param_1 + 8);
    if ((pbVar3 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar3)) {
      local_6c = (uint)*pbVar3;
      *(byte **)(param_1 + 8) = pbVar3 + 1;
    }
    else {
      uVar10 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
      if ((uVar10 & 1) == 0) goto LAB_003fda6c;
    }
    iVar8 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar8 + 1;
    if (*(int *)(param_1 + 0x3c) <= iVar8) goto LAB_003fda6c;
    iVar8 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
    uVar10 = Program::MergePartialFromCodedStream(this_02,param_1);
    if (((uVar10 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003fda6c;
    google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar8);
    if (0 < *(int *)(param_1 + 0x38)) {
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
    }
    pcVar13 = *(char **)(param_1 + 8);
  } while ((pcVar13 < *(char **)(param_1 + 0x10)) && (*pcVar13 == '*'));
  if ((pcVar13 == *(char **)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0)) {
    uVar9 = 1;
    *(undefined4 *)(param_1 + 0x20) = 0;
    param_1[0x24] = (CodedInputStream)0x1;
LAB_003fda78:
    if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar9);
    }
    return;
  }
  goto LAB_003fd518;
}


