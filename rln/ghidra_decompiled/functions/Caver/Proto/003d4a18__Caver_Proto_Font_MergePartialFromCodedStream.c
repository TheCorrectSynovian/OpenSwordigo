/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d4a18
 * Function: Caver::Proto::Font::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(Font * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Font::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */

void __thiscall
Caver::Proto::Font::MergePartialFromCodedStream(Font *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  char *pcVar15;
  byte *pbVar16;
  byte *pbVar17;
  Texture *this_00;
  Rectangle *this_01;
  Font_Glyph *this_02;
  uint local_6c;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e58d8 + 0x10;
  puVar3 = PTR_vtable_007e7d90 + 0x10;
  puVar4 = PTR_vtable_007e4bb8 + 0x10;
LAB_003d4f94:
  pbVar16 = *(byte **)(param_1 + 8);
  if ((pbVar16 < *(byte **)(param_1 + 0x10)) && (bVar5 = *pbVar16, -1 < (char)bVar5)) {
    uVar12 = (ulong)bVar5;
    *(uint *)(param_1 + 0x20) = (uint)bVar5;
    *(byte **)(param_1 + 8) = pbVar16 + 1;
    if (bVar5 == 0) goto LAB_003d4fbc;
LAB_003d4aa4:
    puVar7 = PTR__default_name__007e6280;
    uVar8 = (uint)uVar12;
    switch((int)(uVar12 >> 3)) {
    case 1:
      if ((uVar8 & 7) == 2) {
        psVar11 = *(string **)(this + 0x10);
        *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 1;
        if (psVar11 == (string *)puVar7) {
          psVar11 = operator_new(8);
          *(undefined **)psVar11 = puVar1;
          *(string **)(this + 0x10) = psVar11;
        }
        uVar12 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar11);
        if ((uVar12 & 1) == 0) goto LAB_003d4fc4;
        pcVar15 = *(char **)(param_1 + 8);
        if ((pcVar15 < *(char **)(param_1 + 0x10)) && (*pcVar15 == '\x12')) {
          *(char **)(param_1 + 8) = pcVar15 + 1;
          goto LAB_003d4b90;
        }
        goto LAB_003d4f94;
      }
      break;
    case 2:
      if ((uVar8 & 7) == 2) {
LAB_003d4b90:
        this_00 = *(Texture **)(this + 0x18);
        *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 2;
        if (this_00 == (Texture *)0x0) {
          this_00 = operator_new(0x70);
          *(undefined **)this_00 = puVar2;
          *(long *)(this_00 + 0x28) = 0;
          *(undefined4 *)(this_00 + 0x30) = 4;
          *(undefined4 *)(this_00 + 8) = 0;
          puVar7 = PTR__default_name__007e5bc0;
          *(undefined4 *)(this_00 + 0x58) = 0;
          *(long *)(this_00 + 0x60) = 0;
          *(undefined **)(this_00 + 0x10) = puVar7;
          *(undefined4 *)(this_00 + 0x18) = 1;
          *(undefined4 *)(this_00 + 0x68) = 0;
          *(Texture **)(this_00 + 0x20) = this_00 + 0x38;
          *(Texture **)(this + 0x18) = this_00;
        }
        pbVar16 = *(byte **)(param_1 + 8);
        if ((pbVar16 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar16)) {
          local_6c = (uint)*pbVar16;
          *(byte **)(param_1 + 8) = pbVar16 + 1;
        }
        else {
          uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
          if ((uVar12 & 1) == 0) goto LAB_003d4fc4;
        }
        iVar9 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar9 + 1;
        if (iVar9 < *(int *)(param_1 + 0x3c)) {
          iVar9 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
          uVar12 = Texture::MergePartialFromCodedStream(this_00,param_1);
          if (((uVar12 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003d4fc4;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar9);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar15 = *(char **)(param_1 + 8);
          if ((pcVar15 < *(char **)(param_1 + 0x10)) && (*pcVar15 == '\x1a')) {
            do {
              *(char **)(param_1 + 8) = pcVar15 + 1;
LAB_003d4de8:
              iVar9 = *(int *)(this + 0x28);
              iVar13 = *(int *)(this + 0x2c);
              if (iVar9 < iVar13) {
                *(int *)(this + 0x28) = iVar9 + 1;
                this_02 = *(Font_Glyph **)(*(long *)(this + 0x20) + (long)iVar9 * 8);
              }
              else {
                if (iVar13 == *(int *)(this + 0x30)) {
                  google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                            ((RepeatedPtrFieldBase *)(this + 0x20),iVar13 + 1);
                  iVar9 = *(int *)(this + 0x28);
                  iVar13 = *(int *)(this + 0x2c);
                }
                *(int *)(this + 0x2c) = iVar13 + 1;
                this_02 = operator_new(0x30);
                *(long *)(this_02 + 0x20) = 0;
                *(undefined4 *)(this_02 + 0x28) = 0;
                *(undefined4 *)(this_02 + 0x18) = 0;
                *(long *)(this_02 + 8) = 0;
                *(long *)(this_02 + 0x10) = 0;
                *(undefined **)this_02 = puVar3;
                *(int *)(this + 0x28) = iVar9 + 1;
                *(Font_Glyph **)(*(long *)(this + 0x20) + (long)iVar9 * 8) = this_02;
              }
              pbVar16 = *(byte **)(param_1 + 8);
              if ((pbVar16 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar16)) {
                local_6c = (uint)*pbVar16;
                *(byte **)(param_1 + 8) = pbVar16 + 1;
              }
              else {
                uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                   (param_1,&local_6c);
                if ((uVar12 & 1) == 0) goto LAB_003d4fc4;
              }
              iVar9 = *(int *)(param_1 + 0x38);
              *(int *)(param_1 + 0x38) = iVar9 + 1;
              if (*(int *)(param_1 + 0x3c) <= iVar9) goto LAB_003d4fc4;
              iVar9 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
              uVar12 = Font_Glyph::MergePartialFromCodedStream(this_02,param_1);
              if (((uVar12 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
              goto LAB_003d4fc4;
              google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar9);
              if (0 < *(int *)(param_1 + 0x38)) {
                *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
              }
              pcVar15 = *(char **)(param_1 + 8);
              if (*(char **)(param_1 + 0x10) <= pcVar15) goto LAB_003d4f94;
            } while (*pcVar15 == '\x1a');
            if (*pcVar15 == '\"') {
              *(char **)(param_1 + 8) = pcVar15 + 1;
              goto LAB_003d4f1c;
            }
          }
          goto LAB_003d4f94;
        }
        goto LAB_003d4fc4;
      }
      break;
    case 3:
      if ((uVar8 & 7) == 2) goto LAB_003d4de8;
      break;
    case 4:
      if ((uVar8 & 7) == 2) {
LAB_003d4f1c:
        puVar7 = PTR__default_kerning__007e5500;
        psVar11 = *(string **)(this + 0x58);
        *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 8;
        if (psVar11 == (string *)puVar7) {
          psVar11 = operator_new(8);
          *(undefined **)psVar11 = PTR_DAT_007e5de8 + 0x18;
          *(string **)(this + 0x58) = psVar11;
        }
        uVar12 = google::protobuf::internal::WireFormatLite::ReadBytes(param_1,psVar11);
        if ((uVar12 & 1) == 0) goto LAB_003d4fc4;
        pbVar16 = *(byte **)(param_1 + 8);
        pbVar14 = *(byte **)(param_1 + 0x10);
        if ((pbVar16 < pbVar14) && (*pbVar16 == 0x28)) {
          pbVar16 = pbVar16 + 1;
          *(byte **)(param_1 + 8) = pbVar16;
          if (pbVar16 < pbVar14) goto LAB_003d4b48;
          goto LAB_003d4ccc;
        }
        goto LAB_003d4f94;
      }
      break;
    case 5:
      if ((uVar12 & 7) != 0) break;
      pbVar16 = *(byte **)(param_1 + 8);
      pbVar14 = *(byte **)(param_1 + 0x10);
      if (pbVar16 < pbVar14) {
LAB_003d4b48:
        if ((char)*pbVar16 < '\0') goto LAB_003d4ccc;
        pbVar17 = pbVar16 + 1;
        local_6c = (uint)*pbVar16;
        *(byte **)(param_1 + 8) = pbVar17;
      }
      else {
LAB_003d4ccc:
        uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
        if ((uVar12 & 1) == 0) goto LAB_003d4fc4;
        pbVar17 = *(byte **)(param_1 + 8);
        pbVar14 = *(byte **)(param_1 + 0x10);
      }
      *(uint *)(this + 0x60) = local_6c;
      uVar8 = *(uint *)(this + 0x70) | 0x10;
      *(uint *)(this + 0x70) = uVar8;
      if ((pbVar17 < pbVar14) && (*pbVar17 == 0x32)) {
        *(byte **)(param_1 + 8) = pbVar17 + 1;
LAB_003d4d10:
        this_01 = *(Rectangle **)(this + 0x68);
        *(uint *)(this + 0x70) = uVar8 | 0x20;
        if (this_01 == (Rectangle *)0x0) {
          this_01 = operator_new(0x20);
          *(long *)(this_01 + 0x10) = 0;
          *(long *)(this_01 + 0x18) = 0;
          *(undefined **)this_01 = puVar4;
          *(long *)(this_01 + 8) = 0;
          *(Rectangle **)(this + 0x68) = this_01;
        }
        pbVar16 = *(byte **)(param_1 + 8);
        if ((pbVar16 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar16)) {
          local_6c = (uint)*pbVar16;
          *(byte **)(param_1 + 8) = pbVar16 + 1;
        }
        else {
          uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
          if ((uVar12 & 1) == 0) goto LAB_003d4fc4;
        }
        iVar9 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar9 + 1;
        if (*(int *)(param_1 + 0x3c) <= iVar9) goto LAB_003d4fc4;
        iVar9 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
        uVar12 = Rectangle::MergePartialFromCodedStream(this_01,param_1);
        if (((uVar12 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003d4fc4;
        google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar9);
        if (0 < *(int *)(param_1 + 0x38)) {
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
        }
        if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0)
           ) {
          uVar10 = 1;
          *(undefined4 *)(param_1 + 0x20) = 0;
          param_1[0x24] = (CodedInputStream)0x1;
LAB_003d4fc8:
          if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(uVar10);
          }
          return;
        }
      }
      goto LAB_003d4f94;
    case 6:
      if ((uVar8 & 7) == 2) {
        uVar8 = *(uint *)(this + 0x70);
        goto LAB_003d4d10;
      }
    }
    if ((uVar8 & 7) != 4) {
      uVar12 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar8);
      if ((uVar12 & 1) != 0) goto LAB_003d4f94;
LAB_003d4fc4:
      uVar10 = 0;
      goto LAB_003d4fc8;
    }
  }
  else {
    uVar8 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar12 = (ulong)uVar8;
    *(uint *)(param_1 + 0x20) = uVar8;
    if (uVar8 != 0) goto LAB_003d4aa4;
  }
LAB_003d4fbc:
  uVar10 = 1;
  goto LAB_003d4fc8;
}


