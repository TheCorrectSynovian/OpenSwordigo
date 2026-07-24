/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d3ab8
 * Function: Caver::Proto::Font_Glyph::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(Font_Glyph * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Font_Glyph::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */

void __thiscall
Caver::Proto::Font_Glyph::MergePartialFromCodedStream(Font_Glyph *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  Rectangle *pRVar12;
  uint local_5c;
  long local_58;
  
  puVar4 = PTR_vtable_007e4bb8;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  puVar1 = PTR_vtable_007e4bb8 + 0x10;
LAB_003d3afc:
  do {
    pbVar10 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar10) || (bVar2 = *pbVar10, (char)bVar2 < '\0')) {
      uVar5 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar8 = (ulong)uVar5;
      *(uint *)(param_1 + 0x20) = uVar5;
      if (uVar5 != 0) goto LAB_003d3b3c;
LAB_003d3e4c:
      uVar7 = 1;
      goto LAB_003d3e50;
    }
    uVar8 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar10 + 1;
    if (bVar2 == 0) goto LAB_003d3e4c;
LAB_003d3b3c:
    uVar5 = (uint)uVar8;
    switch((int)(uVar8 >> 3)) {
    case 1:
      if ((uVar8 & 7) == 0) {
        pbVar10 = *(byte **)(param_1 + 8);
        pbVar9 = *(byte **)(param_1 + 0x10);
        if ((pbVar10 < pbVar9) && (-1 < (char)*pbVar10)) {
          pbVar11 = pbVar10 + 1;
          local_5c = (uint)*pbVar10;
          *(byte **)(param_1 + 8) = pbVar11;
        }
        else {
          uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
          if ((uVar8 & 1) == 0) goto LAB_003d3e44;
          pbVar11 = *(byte **)(param_1 + 8);
          pbVar9 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0xc) = local_5c;
        uVar5 = *(uint *)(this + 0x28) | 1;
        *(uint *)(this + 0x28) = uVar5;
        if ((pbVar11 < pbVar9) && (*pbVar11 == 0x12)) {
          *(byte **)(param_1 + 8) = pbVar11 + 1;
LAB_003d3c40:
          pRVar12 = *(Rectangle **)(this + 0x10);
          *(uint *)(this + 0x28) = uVar5 | 2;
          if (pRVar12 == (Rectangle *)0x0) {
            pRVar12 = operator_new(0x20);
            *(long *)(pRVar12 + 0x10) = 0;
            *(long *)(pRVar12 + 0x18) = 0;
            *(undefined **)pRVar12 = puVar1;
            *(long *)(pRVar12 + 8) = 0;
            *(Rectangle **)(this + 0x10) = pRVar12;
          }
          pbVar10 = *(byte **)(param_1 + 8);
          if ((pbVar10 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar10)) {
            local_5c = (uint)*pbVar10;
            *(byte **)(param_1 + 8) = pbVar10 + 1;
          }
          else {
            uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
            if ((uVar8 & 1) == 0) goto LAB_003d3e44;
          }
          iVar6 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar6 + 1;
          if (*(int *)(param_1 + 0x3c) <= iVar6) goto LAB_003d3e44;
          iVar6 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_5c);
          uVar8 = Rectangle::MergePartialFromCodedStream(pRVar12,param_1);
          if (((uVar8 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003d3e44;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar6);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pbVar10 = *(byte **)(param_1 + 8);
          pbVar9 = *(byte **)(param_1 + 0x10);
          if ((pbVar10 < pbVar9) && (*pbVar10 == 0x18)) {
            pbVar10 = pbVar10 + 1;
            *(byte **)(param_1 + 8) = pbVar10;
            if (pbVar10 < pbVar9) {
LAB_003d3b9c:
              if ((char)*pbVar10 < '\0') goto LAB_003d3d20;
              pbVar11 = pbVar10 + 1;
              local_5c = (uint)*pbVar10;
              *(byte **)(param_1 + 8) = pbVar11;
            }
            else {
LAB_003d3d20:
              uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                (param_1,&local_5c);
              if ((uVar8 & 1) == 0) goto LAB_003d3e44;
              pbVar11 = *(byte **)(param_1 + 8);
              pbVar9 = *(byte **)(param_1 + 0x10);
            }
            *(uint *)(this + 0x18) = local_5c;
            uVar5 = *(uint *)(this + 0x28) | 4;
            *(uint *)(this + 0x28) = uVar5;
            if ((pbVar11 < pbVar9) && (*pbVar11 == 0x22)) {
              *(byte **)(param_1 + 8) = pbVar11 + 1;
LAB_003d3d64:
              pRVar12 = *(Rectangle **)(this + 0x20);
              *(uint *)(this + 0x28) = uVar5 | 8;
              if (pRVar12 == (Rectangle *)0x0) {
                pRVar12 = operator_new(0x20);
                *(long *)(pRVar12 + 0x10) = 0;
                *(long *)(pRVar12 + 0x18) = 0;
                *(undefined **)pRVar12 = puVar4 + 0x10;
                *(long *)(pRVar12 + 8) = 0;
                *(Rectangle **)(this + 0x20) = pRVar12;
              }
              pbVar10 = *(byte **)(param_1 + 8);
              if ((pbVar10 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar10)) {
                local_5c = (uint)*pbVar10;
                *(byte **)(param_1 + 8) = pbVar10 + 1;
              }
              else {
                uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                  (param_1,&local_5c);
                if ((uVar8 & 1) == 0) goto LAB_003d3e44;
              }
              iVar6 = *(int *)(param_1 + 0x38);
              *(int *)(param_1 + 0x38) = iVar6 + 1;
              if (*(int *)(param_1 + 0x3c) <= iVar6) goto LAB_003d3e44;
              iVar6 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_5c);
              uVar8 = Rectangle::MergePartialFromCodedStream(pRVar12,param_1);
              if (((uVar8 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003d3e44;
              google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar6);
              if (0 < *(int *)(param_1 + 0x38)) {
                *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
              }
              if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
                 (*(int *)(param_1 + 0x2c) != 0)) {
                uVar7 = 1;
                *(undefined4 *)(param_1 + 0x20) = 0;
                param_1[0x24] = (CodedInputStream)0x1;
                goto LAB_003d3e50;
              }
            }
          }
        }
        goto LAB_003d3afc;
      }
      break;
    case 2:
      if ((uVar5 & 7) == 2) {
        uVar5 = *(uint *)(this + 0x28);
        goto LAB_003d3c40;
      }
      break;
    case 3:
      if ((uVar8 & 7) == 0) {
        pbVar10 = *(byte **)(param_1 + 8);
        pbVar9 = *(byte **)(param_1 + 0x10);
        if (pbVar10 < pbVar9) goto LAB_003d3b9c;
        goto LAB_003d3d20;
      }
      break;
    case 4:
      if ((uVar5 & 7) == 2) {
        uVar5 = *(uint *)(this + 0x28);
        goto LAB_003d3d64;
      }
    }
    if ((uVar5 & 7) == 4) goto LAB_003d3e4c;
    uVar8 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar5);
    if ((uVar8 & 1) == 0) {
LAB_003d3e44:
      uVar7 = 0;
LAB_003d3e50:
      if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar7);
      }
      return;
    }
  } while( true );
}


