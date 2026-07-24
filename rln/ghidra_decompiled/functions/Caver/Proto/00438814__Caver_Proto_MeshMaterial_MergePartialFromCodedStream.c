/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00438814
 * Function: Caver::Proto::MeshMaterial::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(MeshMaterial * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MeshMaterial::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::MeshMaterial::MergePartialFromCodedStream
          (MeshMaterial *this,CodedInputStream *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  FloatColor *pFVar9;
  Texture *this_00;
  uint local_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
LAB_00438848:
  do {
    pbVar1 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar1) || (bVar3 = *pbVar1, (char)bVar3 < '\0')) {
      uVar5 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar8 = (ulong)uVar5;
      *(uint *)(param_1 + 0x20) = uVar5;
      if (uVar5 != 0) goto LAB_00438888;
LAB_00438cbc:
      uVar7 = 1;
      goto LAB_00438cc0;
    }
    uVar8 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
    *(byte **)(param_1 + 8) = pbVar1 + 1;
    if (bVar3 == 0) goto LAB_00438cbc;
LAB_00438888:
    uVar5 = (uint)uVar8;
    switch((int)(uVar8 >> 3)) {
    case 1:
      if ((uVar5 & 7) == 2) {
        pFVar9 = *(FloatColor **)(this + 0x10);
        *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 1;
        if (pFVar9 == (FloatColor *)0x0) {
          pFVar9 = operator_new(0x20);
          FloatColor::FloatColor(pFVar9);
          *(FloatColor **)(this + 0x10) = pFVar9;
        }
        pbVar1 = *(byte **)(param_1 + 8);
        if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
                    /* try { // try from 004388ec to 005388f7 has its CatchHandler @ 00438b1c */
          local_4c = (uint)*pbVar1;
                    /* try { // try from 004388f8 to 00538993 has its CatchHandler @ 00438650 */
          *(byte **)(param_1 + 8) = pbVar1 + 1;
        }
        else {
          uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar8 & 1) == 0) goto LAB_00438cb4;
        }
        iVar6 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar6 + 1;
        if (*(int *)(param_1 + 0x3c) <= iVar6) goto LAB_00438cb4;
        iVar6 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
                    /* try { // try from 00438994 to 0053899f has its CatchHandler @ 00438b6c */
        uVar8 = FloatColor::MergePartialFromCodedStream(pFVar9,param_1);
                    /* try { // try from 004389a0 to 00538b3f has its CatchHandler @ 00438650 */
        if (((uVar8 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_00438cb4;
        google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar6);
        if (0 < *(int *)(param_1 + 0x38)) {
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
        }
        pcVar2 = *(char **)(param_1 + 8);
        if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x12')) {
          *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_004389e8:
          pFVar9 = *(FloatColor **)(this + 0x18);
          *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 2;
          if (pFVar9 == (FloatColor *)0x0) {
            pFVar9 = operator_new(0x20);
            FloatColor::FloatColor(pFVar9);
            *(FloatColor **)(this + 0x18) = pFVar9;
          }
          pbVar1 = *(byte **)(param_1 + 8);
          if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
            local_4c = (uint)*pbVar1;
            *(byte **)(param_1 + 8) = pbVar1 + 1;
          }
          else {
            uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
            if ((uVar8 & 1) == 0) goto LAB_00438cb4;
          }
          iVar6 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar6 + 1;
          if (*(int *)(param_1 + 0x3c) <= iVar6) goto LAB_00438cb4;
          iVar6 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
          uVar8 = FloatColor::MergePartialFromCodedStream(pFVar9,param_1);
          if (((uVar8 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_00438cb4;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar6);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar2 = *(char **)(param_1 + 8);
          if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x1a')) {
            *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_00438ac0:
            pFVar9 = *(FloatColor **)(this + 0x20);
            *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 4;
            if (pFVar9 == (FloatColor *)0x0) {
              pFVar9 = operator_new(0x20);
              FloatColor::FloatColor(pFVar9);
              *(FloatColor **)(this + 0x20) = pFVar9;
            }
            pbVar1 = *(byte **)(param_1 + 8);
            if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
              local_4c = (uint)*pbVar1;
              *(byte **)(param_1 + 8) = pbVar1 + 1;
            }
            else {
              uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                (param_1,&local_4c);
                    /* catch() { ... } // from try @ 004388ec with catch @ 00438b1c */
              if ((uVar8 & 1) == 0) goto LAB_00438cb4;
            }
            iVar6 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar6 + 1;
            if (*(int *)(param_1 + 0x3c) <= iVar6) goto LAB_00438cb4;
            iVar6 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
                    /* try { // try from 00438b40 to 00538bb7 has its CatchHandler @ 00438bc0 */
            uVar8 = FloatColor::MergePartialFromCodedStream(pFVar9,param_1);
            if (((uVar8 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_00438cb4;
            google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar6);
                    /* catch() { ... } // from try @ 00438994 with catch @ 00438b6c */
            if (0 < *(int *)(param_1 + 0x38)) {
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
            }
            pcVar2 = *(char **)(param_1 + 8);
            if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '%')) {
              *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_00438b98:
              uVar8 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                (param_1,&local_4c);
              if ((uVar8 & 1) == 0) goto LAB_00438cb4;
              *(uint *)(this + 0x28) = local_4c;
              uVar5 = *(uint *)(this + 0x38) | 8;
                    /* try { // try from 00438bb8 to 00538bc3 has its CatchHandler @ 00438650 */
              *(uint *)(this + 0x38) = uVar5;
              pcVar2 = *(char **)(param_1 + 8);
                    /* catch() { ... } // from try @ 00438b40 with catch @ 00438bc0 */
              if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '*')) {
                    /* try { // try from 00438bd4 to 00538c27 has its CatchHandler @ 00438bd4
                       catch() { ... } // from try @ 00438bd4 with catch @ 00438bd4
                       catch() { ... } // from try @ 00438c34 with catch @ 00438bd4
                       catch() { ... } // from try @ 00438c64 with catch @ 00438bd4
                       catch() { ... } // from try @ 00438d70 with catch @ 00438bd4 */
                *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_00438bdc:
                this_00 = *(Texture **)(this + 0x30);
                *(uint *)(this + 0x38) = uVar5 | 0x10;
                if (this_00 == (Texture *)0x0) {
                  this_00 = operator_new(0x70);
                  Texture::Texture(this_00);
                  *(Texture **)(this + 0x30) = this_00;
                }
                pbVar1 = *(byte **)(param_1 + 8);
                if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
                  local_4c = (uint)*pbVar1;
                  *(byte **)(param_1 + 8) = pbVar1 + 1;
                }
                else {
                    /* try { // try from 00438c28 to 00538c33 has its CatchHandler @ 00438d24 */
                  uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                    (param_1,&local_4c);
                    /* try { // try from 00438c34 to 00538c57 has its CatchHandler @ 00438bd4 */
                  if ((uVar8 & 1) == 0) goto LAB_00438cb4;
                }
                iVar6 = *(int *)(param_1 + 0x38);
                *(int *)(param_1 + 0x38) = iVar6 + 1;
                if (*(int *)(param_1 + 0x3c) <= iVar6) goto LAB_00438cb4;
                iVar6 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
                    /* try { // try from 00438c58 to 00538c63 has its CatchHandler @ 00438cd4 */
                    /* try { // try from 00438c64 to 00538cf7 has its CatchHandler @ 00438bd4 */
                uVar8 = Texture::MergePartialFromCodedStream(this_00,param_1);
                if (((uVar8 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                goto LAB_00438cb4;
                google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar6);
                if (0 < *(int *)(param_1 + 0x38)) {
                  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                }
                if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
                   (*(int *)(param_1 + 0x2c) != 0)) {
                  uVar7 = 1;
                  *(undefined4 *)(param_1 + 0x20) = 0;
                  param_1[0x24] = (CodedInputStream)0x1;
                  goto LAB_00438cc0;
                }
              }
            }
          }
        }
        goto LAB_00438848;
      }
      break;
    case 2:
      if ((uVar5 & 7) == 2) goto LAB_004389e8;
      break;
    case 3:
      if ((uVar5 & 7) == 2) goto LAB_00438ac0;
      break;
    case 4:
      if ((uVar5 & 7) == 5) goto LAB_00438b98;
      break;
    case 5:
      if ((uVar5 & 7) == 2) {
        uVar5 = *(uint *)(this + 0x38);
        goto LAB_00438bdc;
      }
    }
    if ((uVar5 & 7) == 4) goto LAB_00438cbc;
    uVar8 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar5);
    if ((uVar8 & 1) == 0) {
LAB_00438cb4:
      uVar7 = 0;
LAB_00438cc0:
      if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar7);
      }
                    /* catch() { ... } // from try @ 00438c58 with catch @ 00438cd4 */
      return;
    }
  } while( true );
}


