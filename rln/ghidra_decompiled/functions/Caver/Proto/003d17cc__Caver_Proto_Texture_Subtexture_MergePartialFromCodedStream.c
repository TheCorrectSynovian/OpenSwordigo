/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d17cc
 * Function: Caver::Proto::Texture_Subtexture::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(Texture_Subtexture * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture_Subtexture::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::Texture_Subtexture::MergePartialFromCodedStream
          (Texture_Subtexture *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte *pbVar3;
  char *pcVar4;
  byte bVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  string *psVar13;
  Rectangle *this_00;
  uint local_5c;
  long local_58;
  
  puVar7 = PTR__default_name__007e57e8;
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e4bb8 + 0x10;
LAB_003d181c:
  pbVar3 = *(byte **)(param_1 + 8);
  if ((*(byte **)(param_1 + 0x10) <= pbVar3) || (bVar5 = *pbVar3, (char)bVar5 < '\0')) {
    uVar9 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar12 = uVar9 & 0xffffffff;
    *(int *)(param_1 + 0x20) = (int)uVar9;
    if ((int)uVar9 != 0) goto LAB_003d185c;
LAB_003d1a3c:
    uVar10 = 1;
    goto LAB_003d1a48;
  }
  uVar12 = (ulong)bVar5;
  *(uint *)(param_1 + 0x20) = (uint)bVar5;
  *(byte **)(param_1 + 8) = pbVar3 + 1;
  if (bVar5 == 0) goto LAB_003d1a3c;
LAB_003d185c:
  iVar8 = (int)(uVar12 >> 3);
  uVar11 = (uint)uVar12;
  if (iVar8 == 1) {
    if ((uVar11 & 7) != 2) goto LAB_003d1954;
    psVar13 = *(string **)(this + 0x10);
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 1;
    if (psVar13 == (string *)puVar7) {
      psVar13 = operator_new(8);
      *(undefined **)psVar13 = puVar1;
      *(string **)(this + 0x10) = psVar13;
    }
    uVar9 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar13);
    if ((uVar9 & 1) != 0) {
      pcVar4 = *(char **)(param_1 + 8);
      if ((pcVar4 < *(char **)(param_1 + 0x10)) && (*pcVar4 == '\x12')) {
        *(char **)(param_1 + 8) = pcVar4 + 1;
        goto LAB_003d18fc;
      }
      goto LAB_003d181c;
    }
  }
  else {
    if (iVar8 != 2) {
      if ((iVar8 != 3) || ((uVar11 & 7) != 5)) goto LAB_003d1954;
LAB_003d19f4:
      uVar9 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(param_1,&local_5c);
      if ((uVar9 & 1) == 0) goto LAB_003d1a44;
      *(uint *)(this + 0x20) = local_5c;
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 4;
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar10 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_003d1a48:
        if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar10);
        }
        return;
      }
      goto LAB_003d181c;
    }
    if ((uVar11 & 7) != 2) {
LAB_003d1954:
      if ((uVar11 & 7) == 4) goto LAB_003d1a3c;
      uVar9 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar11);
      if ((uVar9 & 1) == 0) goto LAB_003d1a44;
      goto LAB_003d181c;
    }
LAB_003d18fc:
    this_00 = *(Rectangle **)(this + 0x18);
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 2;
    if (this_00 == (Rectangle *)0x0) {
      this_00 = operator_new(0x20);
      *(long *)(this_00 + 0x10) = 0;
      *(long *)(this_00 + 0x18) = 0;
      *(undefined **)this_00 = puVar2;
      *(long *)(this_00 + 8) = 0;
      *(Rectangle **)(this + 0x18) = this_00;
    }
    pbVar3 = *(byte **)(param_1 + 8);
    if ((pbVar3 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar3)) {
      local_5c = (uint)*pbVar3;
      *(byte **)(param_1 + 8) = pbVar3 + 1;
    }
    else {
      uVar9 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
      if ((uVar9 & 1) == 0) goto LAB_003d1a44;
    }
    iVar8 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar8 + 1;
    if (iVar8 < *(int *)(param_1 + 0x3c)) {
      iVar8 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_5c);
      uVar9 = Rectangle::MergePartialFromCodedStream(this_00,param_1);
      if (((uVar9 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003d1a44;
      google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar8);
      if (0 < *(int *)(param_1 + 0x38)) {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      }
      pcVar4 = *(char **)(param_1 + 8);
      if ((pcVar4 < *(char **)(param_1 + 0x10)) && (*pcVar4 == '\x1d')) {
        *(char **)(param_1 + 8) = pcVar4 + 1;
        goto LAB_003d19f4;
      }
      goto LAB_003d181c;
    }
  }
LAB_003d1a44:
  uVar10 = 0;
  goto LAB_003d1a48;
}


