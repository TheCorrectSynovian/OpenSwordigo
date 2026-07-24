/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d8398
 * Function: Caver::Proto::SoundLibrary::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(SoundLibrary * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SoundLibrary::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::SoundLibrary::MergePartialFromCodedStream
          (SoundLibrary *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  int iVar13;
  SoundEffect *this_00;
  uint local_5c;
  long local_58;
  
  puVar8 = PTR__default_name__007e7200;
  puVar7 = PTR__default_resource_name__007e66e8;
  lVar6 = DAT_0068a310;
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_vtable_007e5368 + 0x10;
  do {
    while ((pbVar2 = *(byte **)(param_1 + 8), *(byte **)(param_1 + 0x10) <= pbVar2 ||
           (bVar4 = *pbVar2, (char)bVar4 < '\0'))) {
      uVar9 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      *(uint *)(param_1 + 0x20) = uVar9;
      if (uVar9 != 10) goto LAB_003d842c;
LAB_003d8470:
      while( true ) {
        iVar10 = *(int *)(this + 0x18);
        iVar13 = *(int *)(this + 0x1c);
        if (iVar10 < iVar13) {
          *(int *)(this + 0x18) = iVar10 + 1;
          this_00 = *(SoundEffect **)(*(long *)(this + 0x10) + (long)iVar10 * 8);
        }
        else {
          if (iVar13 == *(int *)(this + 0x20)) {
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                      ((RepeatedPtrFieldBase *)(this + 0x10),iVar13 + 1);
            iVar10 = *(int *)(this + 0x18);
            iVar13 = *(int *)(this + 0x1c);
          }
          *(int *)(this + 0x1c) = iVar13 + 1;
          this_00 = operator_new(0x30);
          *(undefined **)this_00 = puVar1;
          *(undefined4 *)(this_00 + 8) = 0;
          *(undefined **)(this_00 + 0x18) = puVar7;
          *(undefined **)(this_00 + 0x10) = puVar8;
          *(long *)(this_00 + 0x20) = lVar6;
          *(undefined4 *)(this_00 + 0x28) = 0;
          *(int *)(this + 0x18) = iVar10 + 1;
          *(SoundEffect **)(*(long *)(this + 0x10) + (long)iVar10 * 8) = this_00;
        }
        pbVar2 = *(byte **)(param_1 + 8);
        if ((pbVar2 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar2)) {
          local_5c = (uint)*pbVar2;
          *(byte **)(param_1 + 8) = pbVar2 + 1;
        }
        else {
          uVar11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
          if ((uVar11 & 1) == 0) goto LAB_003d85b4;
        }
        iVar10 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar10 + 1;
        if (*(int *)(param_1 + 0x3c) <= iVar10) goto LAB_003d85b4;
        iVar10 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_5c);
        uVar11 = SoundEffect::MergePartialFromCodedStream(this_00,param_1);
        if (((uVar11 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003d85b4;
        google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar10);
        if (0 < *(int *)(param_1 + 0x38)) {
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
        }
        pcVar3 = *(char **)(param_1 + 8);
        if ((*(char **)(param_1 + 0x10) <= pcVar3) || (*pcVar3 != '\n')) break;
        *(char **)(param_1 + 8) = pcVar3 + 1;
      }
      if ((pcVar3 == *(char **)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0)) {
        uVar12 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_003d85b8:
        if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar12);
        }
        return;
      }
    }
    uVar9 = (uint)bVar4;
    *(uint *)(param_1 + 0x20) = (uint)bVar4;
    *(byte **)(param_1 + 8) = pbVar2 + 1;
    if (bVar4 == 10) goto LAB_003d8470;
LAB_003d842c:
    if ((uVar9 == 0) || ((uVar9 & 7) == 4)) {
      uVar12 = 1;
      goto LAB_003d85b8;
    }
    uVar11 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar9);
  } while ((uVar11 & 1) != 0);
LAB_003d85b4:
  uVar12 = 0;
  goto LAB_003d85b8;
}


