/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041d0f4
 * Function: Caver::Proto::ParticleEmitter::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(ParticleEmitter * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitter::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::ParticleEmitter::MergePartialFromCodedStream
          (ParticleEmitter *this,CodedInputStream *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  long lVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  void *__dest;
  undefined8 uVar11;
  ulong uVar12;
  char *pcVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  FloatColor *this_00;
  ParticleEmitter *__src;
  Vector3 *this_01;
  uint local_6c;
  long local_68;
  
                    /* try { // try from 0041d0fc to 0051d0ff has its CatchHandler @ 0041d188 */
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
                    /* try { // try from 0041d130 to 0051d133 has its CatchHandler @ 0041d180 */
LAB_0041d140:
  pbVar1 = *(byte **)(param_1 + 8);
  if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (bVar3 = *pbVar1, -1 < (char)bVar3)) {
    uVar12 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
    *(byte **)(param_1 + 8) = pbVar1 + 1;
                    /* try { // try from 0041d164 to 0051d167 has its CatchHandler @ 0041d178 */
    if (bVar3 == 0) goto LAB_0041d690;
LAB_0041d180:
                    /* catch() { ... } // from try @ 0041d130 with catch @ 0041d180 */
                    /* catch() { ... } // from try @ 0041d0fc with catch @ 0041d188 */
    uVar9 = (uint)uVar12;
                    /* catch() { ... } // from try @ 0041d0d8 with catch @ 0041d190 */
    switch((int)(uVar12 >> 3)) {
    case 1:
      if ((uVar12 & 7) == 0) {
        pbVar1 = *(byte **)(param_1 + 8);
                    /* try { // try from 0041d1b4 to 0051d22b has its CatchHandler @ 0041d234 */
        if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
          local_6c = (uint)*pbVar1;
          *(byte **)(param_1 + 8) = pbVar1 + 1;
        }
        else {
          uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
          if ((uVar12 & 1) == 0) goto LAB_0041d688;
        }
        if (local_6c < 6) {
          *(uint *)(this + 0xc) = local_6c;
          *(uint *)(this + 0x50) = *(uint *)(this + 0x50) | 1;
        }
        pcVar13 = *(char **)(param_1 + 8);
        if ((*(char **)(param_1 + 0x10) <= pcVar13) || (*pcVar13 != '\x12')) goto LAB_0041d140;
        *(char **)(param_1 + 8) = pcVar13 + 1;
LAB_0041d248:
                    /* try { // try from 0041d248 to 0051d24b has its CatchHandler @ 0041d25c */
                    /* try { // try from 0041d24c to 0051d26f has its CatchHandler @ 0041d238 */
        this_00 = *(FloatColor **)(this + 0x18);
        *(uint *)(this + 0x50) = *(uint *)(this + 0x50) | 4;
        if (this_00 == (FloatColor *)0x0) {
                    /* catch() { ... } // from try @ 0041d248 with catch @ 0041d25c */
          this_00 = operator_new(0x20);
          FloatColor::FloatColor(this_00);
          *(FloatColor **)(this + 0x18) = this_00;
        }
                    /* try { // try from 0041d270 to 0051d28b has its CatchHandler @ 0041d270
                       catch() { ... } // from try @ 0041d270 with catch @ 0041d270
                       catch() { ... } // from try @ 0041d290 with catch @ 0041d270 */
        pbVar1 = *(byte **)(param_1 + 8);
        if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
                    /* try { // try from 0041d28c to 0051d28f has its CatchHandler @ 0041d2cc */
          local_6c = (uint)*pbVar1;
                    /* try { // try from 0041d290 to 0051d2df has its CatchHandler @ 0041d270 */
          *(byte **)(param_1 + 8) = pbVar1 + 1;
        }
        else {
          uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
          if ((uVar12 & 1) == 0) goto LAB_0041d688;
        }
        iVar10 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar10 + 1;
        if (iVar10 < *(int *)(param_1 + 0x3c)) {
          iVar10 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
          uVar12 = FloatColor::MergePartialFromCodedStream(this_00,param_1);
          if (((uVar12 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0041d688;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar10);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar13 = *(char **)(param_1 + 8);
                    /* catch() { ... } // from try @ 0041d398 with catch @ 0041d368 */
          if ((pcVar13 < *(char **)(param_1 + 0x10)) && (*pcVar13 == '\x1d')) {
            do {
              *(char **)(param_1 + 8) = pcVar13 + 1;
LAB_0041d390:
                    /* try { // try from 0041d398 to 0051d3bf has its CatchHandler @ 0041d368 */
              uVar12 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                 (param_1,&local_6c);
              uVar9 = local_6c;
              if ((uVar12 & 1) == 0) goto LAB_0041d688;
              iVar10 = *(int *)(this + 0x38);
              if (iVar10 == *(int *)(this + 0x3c)) {
                uVar4 = iVar10 * 2;
                    /* catch() { ... } // from try @ 0041d384 with catch @ 0041d3bc */
                if ((int)uVar4 < iVar10 + 1) {
                  uVar4 = iVar10 + 1;
                }
                __src = *(ParticleEmitter **)(this + 0x30);
                auVar6._8_8_ = 0;
                auVar6._0_8_ = (long)(int)uVar4;
                *(uint *)(this + 0x3c) = uVar4;
                uVar12 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
                if (SUB168(auVar6 * ZEXT816(4),8) != 0) {
                  uVar12 = 0xffffffffffffffff;
                }
                __dest = operator_new__(uVar12);
                *(void **)(this + 0x30) = __dest;
                memcpy(__dest,__src,(long)iVar10 << 2);
                if ((__src != this + 0x40) && (__src != (ParticleEmitter *)0x0)) {
                  operator_delete__(__src);
                  iVar10 = *(int *)(this + 0x38);
                }
              }
              lVar15 = *(long *)(this + 0x30);
              iVar16 = (int)((long)iVar10 + 1);
              *(int *)(this + 0x38) = iVar16;
              *(uint *)(lVar15 + (long)iVar10 * 4) = uVar9;
              pcVar13 = *(char **)(param_1 + 8);
              uVar9 = *(int *)(param_1 + 0x10) - (int)pcVar13;
              if (0 < (int)uVar9) {
                uVar5 = *(int *)(this + 0x3c) - iVar16;
                uVar4 = uVar9 / 5;
                if ((int)uVar5 <= (int)(uVar9 / 5)) {
                  uVar4 = uVar5;
                }
                if (0 < (int)uVar4) {
                  lVar14 = 0;
                  do {
                    if (*pcVar13 != '\x1d') break;
                    uVar2 = *(undefined4 *)(pcVar13 + 1);
                    *(int *)(this + 0x38) = iVar10 + 2 + (int)lVar14;
                    pcVar13 = pcVar13 + 5;
                    *(undefined4 *)(lVar15 + ((long)iVar10 + 1) * 4 + lVar14 * 4) = uVar2;
                    lVar14 = lVar14 + 1;
                  } while ((int)lVar14 < (int)uVar4);
                  if (0 < (int)lVar14) {
                    /* catch() { ... } // from try @ 0041d5d4 with catch @ 0041d4a8
                       catch() { ... } // from try @ 0041d650 with catch @ 0041d4a8 */
                    google::protobuf::io::CodedInputStream::Skip(param_1,(int)lVar14 * 5);
                  }
                }
              }
LAB_0041d4ac:
              pcVar13 = *(char **)(param_1 + 8);
              if (*(char **)(param_1 + 0x10) <= pcVar13) goto LAB_0041d140;
            } while (*pcVar13 == '\x1d');
            if (*pcVar13 == '%') {
              *(char **)(param_1 + 8) = pcVar13 + 1;
              goto LAB_0041d4e4;
            }
          }
          goto LAB_0041d140;
        }
        goto LAB_0041d688;
      }
      break;
    case 2:
      if ((uVar9 & 7) == 2) goto LAB_0041d248;
      break;
    case 3:
      if ((uVar9 & 7) == 2) {
        bVar8 = google::protobuf::internal::WireFormatLite::
                ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>
                          (param_1,(RepeatedField *)(this + 0x30));
        if (bVar8) goto LAB_0041d4ac;
        goto LAB_0041d688;
      }
      if ((uVar9 & 7) == 5) goto LAB_0041d390;
      break;
    case 4:
                    /* try { // try from 0041d22c to 0051d237 has its CatchHandler @ 0041d084 */
                    /* catch() { ... } // from try @ 0041d1b4 with catch @ 0041d234 */
      if ((uVar9 & 7) == 5) {
LAB_0041d4e4:
        uVar12 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                           (param_1,&local_6c);
        if ((uVar12 & 1) == 0) goto LAB_0041d688;
        *(uint *)(this + 0x20) = local_6c;
        *(uint *)(this + 0x50) = *(uint *)(this + 0x50) | 8;
        pcVar13 = *(char **)(param_1 + 8);
        if ((pcVar13 < *(char **)(param_1 + 0x10)) && (*pcVar13 == '-')) {
          *(char **)(param_1 + 8) = pcVar13 + 1;
          goto LAB_0041d528;
        }
        goto LAB_0041d140;
      }
      break;
    case 5:
      if ((uVar9 & 7) == 5) {
LAB_0041d528:
                    /* try { // try from 0041d52c to 0051d5d3 has its CatchHandler @ 0041d5fc */
        uVar12 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                           (param_1,&local_6c);
        if ((uVar12 & 1) == 0) goto LAB_0041d688;
        *(uint *)(this + 0x24) = local_6c;
        *(uint *)(this + 0x50) = *(uint *)(this + 0x50) | 0x10;
        pcVar13 = *(char **)(param_1 + 8);
        if ((pcVar13 < *(char **)(param_1 + 0x10)) && (*pcVar13 == '5')) {
          *(char **)(param_1 + 8) = pcVar13 + 1;
          goto LAB_0041d56c;
        }
        goto LAB_0041d140;
      }
      break;
    case 6:
      if ((uVar9 & 7) == 5) {
LAB_0041d56c:
        uVar12 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                           (param_1,&local_6c);
        if ((uVar12 & 1) == 0) goto LAB_0041d688;
        *(uint *)(this + 0x28) = local_6c;
        uVar9 = *(uint *)(this + 0x50) | 0x20;
        *(uint *)(this + 0x50) = uVar9;
        pcVar13 = *(char **)(param_1 + 8);
        if ((pcVar13 < *(char **)(param_1 + 0x10)) && (*pcVar13 == ':')) {
          *(char **)(param_1 + 8) = pcVar13 + 1;
          goto LAB_0041d5b0;
        }
        goto LAB_0041d140;
      }
      break;
    case 7:
      if ((uVar9 & 7) != 2) break;
      uVar9 = *(uint *)(this + 0x50);
LAB_0041d5b0:
      this_01 = *(Vector3 **)(this + 0x10);
      *(uint *)(this + 0x50) = uVar9 | 2;
      if (this_01 == (Vector3 *)0x0) {
        this_01 = operator_new(0x20);
        Vector3::Vector3(this_01);
        *(Vector3 **)(this + 0x10) = this_01;
      }
                    /* try { // try from 0041d5d4 to 0051d61f has its CatchHandler @ 0041d4a8 */
      pbVar1 = *(byte **)(param_1 + 8);
      if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
        local_6c = (uint)*pbVar1;
        *(byte **)(param_1 + 8) = pbVar1 + 1;
      }
      else {
                    /* catch() { ... } // from try @ 0041d52c with catch @ 0041d5fc */
        uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
        if ((uVar12 & 1) == 0) goto LAB_0041d688;
      }
      iVar10 = *(int *)(param_1 + 0x38);
      *(int *)(param_1 + 0x38) = iVar10 + 1;
      if (*(int *)(param_1 + 0x3c) <= iVar10) goto LAB_0041d688;
                    /* try { // try from 0041d620 to 0051d64f has its CatchHandler @ 0041d658 */
      iVar10 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
      uVar12 = Vector3::MergePartialFromCodedStream(this_01,param_1);
      if (((uVar12 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0041d688;
                    /* try { // try from 0041d650 to 0051d65b has its CatchHandler @ 0041d4a8 */
      google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar10);
                    /* catch() { ... } // from try @ 0041d620 with catch @ 0041d658 */
      if (0 < *(int *)(param_1 + 0x38)) {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      }
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar11 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_0041d694:
        if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar11);
        }
        return;
      }
      goto LAB_0041d140;
    }
    if ((uVar9 & 7) != 4) {
                    /* catch() { ... } // from try @ 0041d28c with catch @ 0041d2cc */
      uVar12 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar9);
      if ((uVar12 & 1) != 0) goto LAB_0041d140;
LAB_0041d688:
      uVar11 = 0;
      goto LAB_0041d694;
    }
  }
  else {
    uVar9 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar12 = (ulong)uVar9;
                    /* catch() { ... } // from try @ 0041d164 with catch @ 0041d178 */
    *(uint *)(param_1 + 0x20) = uVar9;
    if (uVar9 != 0) goto LAB_0041d180;
  }
LAB_0041d690:
  uVar11 = 1;
  goto LAB_0041d694;
}


