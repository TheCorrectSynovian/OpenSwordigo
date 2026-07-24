/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00409a5c
 * Function: Caver::Proto::TextureMappingComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(TextureMappingComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::TextureMappingComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::TextureMappingComponent::MergePartialFromCodedStream
          (TextureMappingComponent *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  string *psVar12;
  Vector2 *this_00;
  uint local_5c;
  long local_58;
  
  puVar6 = PTR__default_texture_name__007e7c58;
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_00409aa0:
  do {
    pbVar2 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar2) || (bVar4 = *pbVar2, (char)bVar4 < '\0')) {
      uVar8 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar11 = uVar8 & 0xffffffff;
      *(int *)(param_1 + 0x20) = (int)uVar8;
      if ((int)uVar8 != 0) goto LAB_00409ae0;
LAB_00409cbc:
      uVar9 = 1;
      goto LAB_00409cc8;
    }
    uVar11 = (ulong)bVar4;
    *(uint *)(param_1 + 0x20) = (uint)bVar4;
    *(byte **)(param_1 + 8) = pbVar2 + 1;
    if (bVar4 == 0) goto LAB_00409cbc;
LAB_00409ae0:
    iVar7 = (int)(uVar11 >> 3);
    uVar10 = (uint)uVar11;
    if (iVar7 != 1) {
      if (iVar7 == 2) {
        if ((uVar10 & 7) == 5) {
LAB_00409b84:
          uVar8 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                            (param_1,&local_5c);
          if ((uVar8 & 1) == 0) goto LAB_00409cc4;
          *(uint *)(this + 0x18) = local_5c;
          uVar10 = *(uint *)(this + 0x28) | 2;
          *(uint *)(this + 0x28) = uVar10;
          pcVar3 = *(char **)(param_1 + 8);
          if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\x1a')) {
            *(char **)(param_1 + 8) = pcVar3 + 1;
            goto LAB_00409bc8;
          }
        }
        else {
LAB_00409c18:
          if ((uVar10 & 7) == 4) goto LAB_00409cbc;
          uVar8 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar10);
          if ((uVar8 & 1) == 0) {
LAB_00409cc4:
            uVar9 = 0;
            goto LAB_00409cc8;
          }
        }
      }
      else {
        if ((iVar7 != 3) || ((uVar10 & 7) != 2)) goto LAB_00409c18;
        uVar10 = *(uint *)(this + 0x28);
LAB_00409bc8:
        this_00 = *(Vector2 **)(this + 0x20);
        *(uint *)(this + 0x28) = uVar10 | 4;
        if (this_00 == (Vector2 *)0x0) {
          this_00 = operator_new(0x18);
          Vector2::Vector2(this_00);
          *(Vector2 **)(this + 0x20) = this_00;
        }
        pbVar2 = *(byte **)(param_1 + 8);
        if ((pbVar2 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar2)) {
          local_5c = (uint)*pbVar2;
          *(byte **)(param_1 + 8) = pbVar2 + 1;
        }
        else {
          uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
          if ((uVar8 & 1) == 0) goto LAB_00409cc4;
        }
        iVar7 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar7 + 1;
        if (*(int *)(param_1 + 0x3c) <= iVar7) goto LAB_00409cc4;
        iVar7 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_5c);
        uVar8 = Vector2::MergePartialFromCodedStream(this_00,param_1);
        if (((uVar8 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_00409cc4;
        google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar7);
        if (0 < *(int *)(param_1 + 0x38)) {
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
        }
        if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0)
           ) {
          uVar9 = 1;
          *(undefined4 *)(param_1 + 0x20) = 0;
          param_1[0x24] = (CodedInputStream)0x1;
LAB_00409cc8:
          if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(uVar9);
          }
          return;
        }
      }
      goto LAB_00409aa0;
    }
    if ((uVar10 & 7) != 2) goto LAB_00409c18;
    psVar12 = *(string **)(this + 0x10);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 1;
    if (psVar12 == (string *)puVar6) {
      psVar12 = operator_new(8);
      *(undefined **)psVar12 = puVar1;
      *(string **)(this + 0x10) = psVar12;
    }
    uVar8 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar12);
    if ((uVar8 & 1) == 0) goto LAB_00409cc4;
    pcVar3 = *(char **)(param_1 + 8);
    if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\x15')) {
      *(char **)(param_1 + 8) = pcVar3 + 1;
      goto LAB_00409b84;
    }
  } while( true );
}


