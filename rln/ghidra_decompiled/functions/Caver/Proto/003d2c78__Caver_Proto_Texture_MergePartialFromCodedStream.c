/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d2c78
 * Function: Caver::Proto::Texture::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(Texture * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */

void __thiscall
Caver::Proto::Texture::MergePartialFromCodedStream(Texture *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  byte bVar5;
  long lVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  string *psVar11;
  ulong uVar12;
  int iVar13;
  byte *pbVar14;
  Texture_ConversionInfo *this_00;
  Texture_Subtexture *this_01;
  uint local_6c;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e4860 + 0x10;
  puVar3 = PTR_vtable_007e5950 + 0x10;
LAB_003d30e8:
  pbVar14 = *(byte **)(param_1 + 8);
  if ((pbVar14 < *(byte **)(param_1 + 0x10)) && (bVar5 = *pbVar14, -1 < (char)bVar5)) {
    uVar12 = (ulong)bVar5;
    *(uint *)(param_1 + 0x20) = (uint)bVar5;
    *(byte **)(param_1 + 8) = pbVar14 + 1;
    if (bVar5 == 0) goto LAB_003d3110;
LAB_003d2cf4:
    puVar7 = PTR__default_name__007e5bc0;
    uVar8 = (uint)uVar12;
    switch((int)(uVar12 >> 3)) {
    case 1:
      if ((uVar8 & 7) == 2) {
        psVar11 = *(string **)(this + 0x10);
        *(uint *)(this + 0x68) = *(uint *)(this + 0x68) | 1;
        if (psVar11 == (string *)puVar7) {
          psVar11 = operator_new(8);
          *(undefined **)psVar11 = puVar1;
          *(string **)(this + 0x10) = psVar11;
        }
        uVar12 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar11);
        if ((uVar12 & 1) == 0) goto LAB_003d3118;
        pbVar14 = *(byte **)(param_1 + 8);
        if ((pbVar14 < *(byte **)(param_1 + 0x10)) && (*pbVar14 == 0x10)) {
          pbVar14 = pbVar14 + 1;
          *(byte **)(param_1 + 8) = pbVar14;
          if (pbVar14 < *(byte **)(param_1 + 0x10)) goto LAB_003d2d84;
          goto LAB_003d2ebc;
        }
        goto LAB_003d30e8;
      }
      break;
    case 2:
      if ((uVar12 & 7) != 0) break;
      pbVar14 = *(byte **)(param_1 + 8);
      if (pbVar14 < *(byte **)(param_1 + 0x10)) {
LAB_003d2d84:
        if ((char)*pbVar14 < '\0') goto LAB_003d2ebc;
        local_6c = (uint)*pbVar14;
        *(byte **)(param_1 + 8) = pbVar14 + 1;
      }
      else {
LAB_003d2ebc:
        uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
        if ((uVar12 & 1) == 0) goto LAB_003d3118;
      }
      if (local_6c < 9) {
        *(uint *)(this + 0x18) = local_6c;
        *(uint *)(this + 0x68) = *(uint *)(this + 0x68) | 2;
      }
      pbVar14 = *(byte **)(param_1 + 8);
      if ((pbVar14 < *(byte **)(param_1 + 0x10)) && (*pbVar14 == 0x1a)) {
        do {
          *(byte **)(param_1 + 8) = pbVar14 + 1;
LAB_003d2f78:
          iVar9 = *(int *)(this + 0x28);
          iVar13 = *(int *)(this + 0x2c);
          if (iVar9 < iVar13) {
            *(int *)(this + 0x28) = iVar9 + 1;
            this_01 = *(Texture_Subtexture **)(*(long *)(this + 0x20) + (long)iVar9 * 8);
          }
          else {
            if (iVar13 == *(int *)(this + 0x30)) {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                        ((RepeatedPtrFieldBase *)(this + 0x20),iVar13 + 1);
              iVar9 = *(int *)(this + 0x28);
              iVar13 = *(int *)(this + 0x2c);
            }
            *(int *)(this + 0x2c) = iVar13 + 1;
            this_01 = operator_new(0x28);
            *(undefined **)this_01 = puVar2;
            *(undefined4 *)(this_01 + 8) = 0;
            *(undefined **)(this_01 + 0x10) = PTR__default_name__007e57e8;
            *(long *)(this_01 + 0x18) = 0;
            *(long *)(this_01 + 0x20) = 0x3f800000;
            *(int *)(this + 0x28) = iVar9 + 1;
            *(Texture_Subtexture **)(*(long *)(this + 0x20) + (long)iVar9 * 8) = this_01;
          }
          pbVar14 = *(byte **)(param_1 + 8);
          if ((pbVar14 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar14)) {
            local_6c = (uint)*pbVar14;
            *(byte **)(param_1 + 8) = pbVar14 + 1;
          }
          else {
            uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c)
            ;
            if ((uVar12 & 1) == 0) goto LAB_003d3118;
          }
          iVar9 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar9 + 1;
          if (*(int *)(param_1 + 0x3c) <= iVar9) goto LAB_003d3118;
          iVar9 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
          uVar12 = Texture_Subtexture::MergePartialFromCodedStream(this_01,param_1);
          if (((uVar12 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003d3118;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar9);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pbVar14 = *(byte **)(param_1 + 8);
          if (*(byte **)(param_1 + 0x10) <= pbVar14) goto LAB_003d30e8;
        } while (*pbVar14 == 0x1a);
        if (*pbVar14 == 0x20) {
          pbVar14 = pbVar14 + 1;
          *(byte **)(param_1 + 8) = pbVar14;
          if (pbVar14 < *(byte **)(param_1 + 0x10)) {
LAB_003d2e04:
            if ((char)*pbVar14 < '\0') goto LAB_003d30c8;
            local_6c = (uint)*pbVar14;
            *(byte **)(param_1 + 8) = pbVar14 + 1;
          }
          else {
LAB_003d30c8:
            uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c)
            ;
            if ((uVar12 & 1) == 0) goto LAB_003d3118;
          }
          if (local_6c < 4) {
            *(uint *)(this + 0x58) = local_6c;
            *(uint *)(this + 0x68) = *(uint *)(this + 0x68) | 8;
          }
          pcVar4 = *(char **)(param_1 + 8);
          if ((pcVar4 < *(char **)(param_1 + 0x10)) && (*pcVar4 == '*')) {
            *(char **)(param_1 + 8) = pcVar4 + 1;
LAB_003d2e54:
            this_00 = *(Texture_ConversionInfo **)(this + 0x60);
            *(uint *)(this + 0x68) = *(uint *)(this + 0x68) | 0x10;
            if (this_00 == (Texture_ConversionInfo *)0x0) {
              this_00 = operator_new(0x20);
              *(long *)(this_00 + 0x10) = 0;
              *(long *)(this_00 + 0x18) = 0;
              *(undefined **)this_00 = puVar3;
              *(long *)(this_00 + 8) = 0;
              *(Texture_ConversionInfo **)(this + 0x60) = this_00;
            }
            pbVar14 = *(byte **)(param_1 + 8);
            if ((pbVar14 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar14)) {
              local_6c = (uint)*pbVar14;
              *(byte **)(param_1 + 8) = pbVar14 + 1;
            }
            else {
              uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                 (param_1,&local_6c);
              if ((uVar12 & 1) == 0) goto LAB_003d3118;
            }
            iVar9 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar9 + 1;
            if (*(int *)(param_1 + 0x3c) <= iVar9) goto LAB_003d3118;
            iVar9 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
            uVar12 = Texture_ConversionInfo::MergePartialFromCodedStream(this_00,param_1);
            if (((uVar12 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003d3118;
            google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar9);
            if (0 < *(int *)(param_1 + 0x38)) {
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
            }
            if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
               (*(int *)(param_1 + 0x2c) != 0)) {
              uVar10 = 1;
              *(undefined4 *)(param_1 + 0x20) = 0;
              param_1[0x24] = (CodedInputStream)0x1;
LAB_003d311c:
              if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail(uVar10);
              }
              return;
            }
          }
        }
      }
      goto LAB_003d30e8;
    case 3:
      if ((uVar8 & 7) == 2) goto LAB_003d2f78;
      break;
    case 4:
      if ((uVar12 & 7) == 0) {
        pbVar14 = *(byte **)(param_1 + 8);
        if (pbVar14 < *(byte **)(param_1 + 0x10)) goto LAB_003d2e04;
        goto LAB_003d30c8;
      }
      break;
    case 5:
      if ((uVar8 & 7) == 2) goto LAB_003d2e54;
    }
    if ((uVar8 & 7) != 4) {
      uVar12 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar8);
      if ((uVar12 & 1) == 0) {
LAB_003d3118:
        uVar10 = 0;
        goto LAB_003d311c;
      }
      goto LAB_003d30e8;
    }
  }
  else {
    uVar8 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar12 = (ulong)uVar8;
    *(uint *)(param_1 + 0x20) = uVar8;
    if (uVar8 != 0) goto LAB_003d2cf4;
  }
LAB_003d3110:
  uVar10 = 1;
  goto LAB_003d311c;
}


