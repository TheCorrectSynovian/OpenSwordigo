/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043ce1c
 * Function: Caver::Proto::UnpackedMesh::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(UnpackedMesh * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::UnpackedMesh::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::UnpackedMesh::MergePartialFromCodedStream
          (UnpackedMesh *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long lVar10;
  undefined *puVar11;
  bool bVar12;
  uint uVar13;
  void *pvVar14;
  undefined8 uVar15;
  ulong uVar16;
  string *psVar17;
  char *pcVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  UnpackedMesh *pUVar22;
  int iVar23;
  uint local_6c;
  long local_68;
  
                    /* catch() { ... } // from try @ 0043cd9c with catch @ 0043ce2c */
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
                    /* catch() { ... } // from try @ 0043cd84 with catch @ 0043ce9c */
LAB_0043cea0:
  do {
                    /* try { // try from 0043cea0 to 0053cedf has its CatchHandler @ 0043cea0
                       catch() { ... } // from try @ 0043cea0 with catch @ 0043cea0
                       catch() { ... } // from try @ 0043cee4 with catch @ 0043cea0
                       catch() { ... } // from try @ 0043cfd4 with catch @ 0043cea0
                       catch() { ... } // from try @ 0043d05c with catch @ 0043cea0
                       catch() { ... } // from try @ 0043d178 with catch @ 0043cea0
                       catch() { ... } // from try @ 0043d1ac with catch @ 0043cea0 */
    pbVar2 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar2) || (bVar4 = *pbVar2, (char)bVar4 < '\0')) {
      uVar13 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar16 = (ulong)uVar13;
      *(uint *)(param_1 + 0x20) = uVar13;
      if (uVar13 != 0) goto LAB_0043cee0;
LAB_0043d3e0:
      uVar15 = 1;
      goto LAB_0043d3e4;
    }
    uVar16 = (ulong)bVar4;
    *(uint *)(param_1 + 0x20) = (uint)bVar4;
    *(byte **)(param_1 + 8) = pbVar2 + 1;
    if (bVar4 == 0) goto LAB_0043d3e0;
LAB_0043cee0:
                    /* try { // try from 0043cee0 to 0053cee3 has its CatchHandler @ 0043d1b8 */
                    /* try { // try from 0043cee4 to 0053cf6f has its CatchHandler @ 0043cea0 */
    uVar13 = (uint)uVar16;
    switch((int)(uVar16 >> 3)) {
    case 1:
      if ((uVar13 & 7) == 2) {
                    /* try { // try from 0043cf84 to 0053cf97 has its CatchHandler @ 0043d204 */
        bVar12 = google::protobuf::internal::WireFormatLite::
                 ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>
                           (param_1,(RepeatedField *)(this + 0x10));
        if (!bVar12) goto LAB_0043d3d8;
        while (pcVar18 = *(char **)(param_1 + 8), pcVar18 < *(char **)(param_1 + 0x10)) {
          if (*pcVar18 != '\r') {
            if (*pcVar18 == '\x15') goto LAB_0043d0ec;
            break;
          }
          *(char **)(param_1 + 8) = pcVar18 + 1;
LAB_0043cfa8:
          uVar16 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                             (param_1,&local_6c);
          uVar13 = local_6c;
          if ((uVar16 & 1) == 0) goto LAB_0043d3d8;
          iVar23 = *(int *)(this + 0x18);
          if (iVar23 == *(int *)(this + 0x1c)) {
            uVar5 = iVar23 * 2;
                    /* try { // try from 0043cfd0 to 0053cfd3 has its CatchHandler @ 0043d204 */
                    /* try { // try from 0043cfd4 to 0053cff7 has its CatchHandler @ 0043cea0 */
            if ((int)uVar5 < iVar23 + 1) {
              uVar5 = iVar23 + 1;
            }
            pUVar22 = *(UnpackedMesh **)(this + 0x10);
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (long)(int)uVar5;
            *(uint *)(this + 0x1c) = uVar5;
            uVar16 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
            if (SUB168(auVar7 * ZEXT816(4),8) != 0) {
              uVar16 = 0xffffffffffffffff;
            }
                    /* try { // try from 0043cff8 to 0053d00b has its CatchHandler @ 0043d17c */
            pvVar14 = operator_new__(uVar16);
            *(void **)(this + 0x10) = pvVar14;
            memcpy(pvVar14,pUVar22,(long)iVar23 << 2);
                    /* try { // try from 0043d00c to 0053d01f has its CatchHandler @ 0043d1cc */
            if ((pUVar22 != this + 0x20) && (pUVar22 != (UnpackedMesh *)0x0)) {
              operator_delete__(pUVar22);
              iVar23 = *(int *)(this + 0x18);
            }
          }
                    /* try { // try from 0043d028 to 0053d037 has its CatchHandler @ 0043d14c */
          lVar20 = *(long *)(this + 0x10);
          iVar21 = (int)((long)iVar23 + 1);
          *(int *)(this + 0x18) = iVar21;
          *(uint *)(lVar20 + (long)iVar23 * 4) = uVar13;
          pcVar18 = *(char **)(param_1 + 8);
          uVar13 = *(int *)(param_1 + 0x10) - (int)pcVar18;
          if (0 < (int)uVar13) {
                    /* try { // try from 0043d058 to 0053d05b has its CatchHandler @ 0043d1cc */
                    /* try { // try from 0043d05c to 0053d16f has its CatchHandler @ 0043cea0 */
            uVar6 = *(int *)(this + 0x1c) - iVar21;
            uVar5 = uVar13 / 5;
            if ((int)uVar6 <= (int)(uVar13 / 5)) {
              uVar5 = uVar6;
            }
            if (0 < (int)uVar5) {
              lVar19 = 0;
              do {
                if (*pcVar18 != '\r') break;
                uVar3 = *(undefined4 *)(pcVar18 + 1);
                *(int *)(this + 0x18) = iVar23 + 2 + (int)lVar19;
                pcVar18 = pcVar18 + 5;
                *(undefined4 *)(lVar20 + ((long)iVar23 + 1) * 4 + lVar19 * 4) = uVar3;
                lVar19 = lVar19 + 1;
              } while ((int)lVar19 < (int)uVar5);
              if (0 < (int)lVar19) {
                google::protobuf::io::CodedInputStream::Skip(param_1,(int)lVar19 * 5);
              }
            }
          }
        }
        goto LAB_0043cea0;
      }
      if ((uVar13 & 7) == 5) goto LAB_0043cfa8;
      break;
    case 2:
      if ((uVar13 & 7) == 2) {
        bVar12 = google::protobuf::internal::WireFormatLite::
                 ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>
                           (param_1,(RepeatedField *)(this + 0x30));
                    /* try { // try from 0043cfa0 to 0053cfaf has its CatchHandler @ 0043d180 */
        if (bVar12) goto LAB_0043d208;
        goto LAB_0043d3d8;
      }
      if ((uVar13 & 7) == 5) goto LAB_0043d0f4;
      break;
    case 3:
      if ((uVar13 & 7) == 2) {
                    /* try { // try from 0043cf70 to 0053cf83 has its CatchHandler @ 0043d1b4 */
        bVar12 = google::protobuf::internal::WireFormatLite::
                 ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>
                           (param_1,(RepeatedField *)(this + 0x50));
        if (bVar12) goto LAB_0043d344;
        goto LAB_0043d3d8;
      }
      if ((uVar13 & 7) == 5) goto LAB_0043d234;
      break;
    case 4:
      if ((uVar13 & 7) != 2) break;
      goto LAB_0043d370;
    }
    if ((uVar13 & 7) == 4) goto LAB_0043d3e0;
    uVar16 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar13);
    if ((uVar16 & 1) == 0) {
LAB_0043d3d8:
      uVar15 = 0;
LAB_0043d3e4:
      if (*(long *)(lVar10 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar15);
      }
      return;
    }
  } while( true );
LAB_0043d0ec:
  do {
    *(char **)(param_1 + 8) = pcVar18 + 1;
LAB_0043d0f4:
    uVar16 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(param_1,&local_6c);
    uVar13 = local_6c;
    if ((uVar16 & 1) == 0) goto LAB_0043d3d8;
    iVar23 = *(int *)(this + 0x38);
    if (iVar23 == *(int *)(this + 0x3c)) {
      uVar5 = iVar23 * 2;
      if ((int)uVar5 < iVar23 + 1) {
        uVar5 = iVar23 + 1;
      }
      pUVar22 = *(UnpackedMesh **)(this + 0x30);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (long)(int)uVar5;
      *(uint *)(this + 0x3c) = uVar5;
      uVar16 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
      if (SUB168(auVar8 * ZEXT816(4),8) != 0) {
        uVar16 = 0xffffffffffffffff;
      }
      pvVar14 = operator_new__(uVar16);
                    /* catch() { ... } // from try @ 0043d028 with catch @ 0043d14c */
      *(void **)(this + 0x30) = pvVar14;
      memcpy(pvVar14,pUVar22,(long)iVar23 << 2);
      if ((pUVar22 != this + 0x40) && (pUVar22 != (UnpackedMesh *)0x0)) {
        operator_delete__(pUVar22);
                    /* try { // try from 0043d170 to 0053d177 has its CatchHandler @ 0043d1b0 */
        iVar23 = *(int *)(this + 0x38);
      }
    }
    lVar20 = *(long *)(this + 0x30);
                    /* try { // try from 0043d178 to 0053d1a3 has its CatchHandler @ 0043cea0 */
                    /* catch() { ... } // from try @ 0043cff8 with catch @ 0043d17c */
                    /* catch() { ... } // from try @ 0043cfa0 with catch @ 0043d180 */
    iVar21 = (int)((long)iVar23 + 1);
    *(int *)(this + 0x38) = iVar21;
    *(uint *)(lVar20 + (long)iVar23 * 4) = uVar13;
    pcVar18 = *(char **)(param_1 + 8);
    uVar13 = *(int *)(param_1 + 0x10) - (int)pcVar18;
    if (0 < (int)uVar13) {
                    /* try { // try from 0043d1a4 to 0053d1ab has its CatchHandler @ 0043d1b0 */
      uVar6 = *(int *)(this + 0x3c) - iVar21;
                    /* try { // try from 0043d1ac to 0053d26f has its CatchHandler @ 0043cea0 */
                    /* catch() { ... } // from try @ 0043d170 with catch @ 0043d1b0
                       catch() { ... } // from try @ 0043d1a4 with catch @ 0043d1b0 */
      uVar5 = uVar13 / 5;
      if ((int)uVar6 <= (int)(uVar13 / 5)) {
        uVar5 = uVar6;
      }
                    /* catch() { ... } // from try @ 0043cf70 with catch @ 0043d1b4 */
                    /* catch() { ... } // from try @ 0043cee0 with catch @ 0043d1b8 */
      if (0 < (int)uVar5) {
        lVar19 = 0;
        do {
                    /* catch() { ... } // from try @ 0043d00c with catch @ 0043d1cc
                       catch() { ... } // from try @ 0043d058 with catch @ 0043d1cc */
          if (*pcVar18 != '\x15') break;
          uVar3 = *(undefined4 *)(pcVar18 + 1);
          *(int *)(this + 0x38) = iVar23 + 2 + (int)lVar19;
          pcVar18 = pcVar18 + 5;
          *(undefined4 *)(lVar20 + ((long)iVar23 + 1) * 4 + lVar19 * 4) = uVar3;
          lVar19 = lVar19 + 1;
        } while ((int)lVar19 < (int)uVar5);
        if (0 < (int)lVar19) {
                    /* catch() { ... } // from try @ 0043cf84 with catch @ 0043d204
                       catch() { ... } // from try @ 0043cfd0 with catch @ 0043d204 */
          google::protobuf::io::CodedInputStream::Skip(param_1,(int)lVar19 * 5);
        }
      }
    }
LAB_0043d208:
    pcVar18 = *(char **)(param_1 + 8);
    if (*(char **)(param_1 + 0x10) <= pcVar18) goto LAB_0043cea0;
  } while (*pcVar18 == '\x15');
  if (*pcVar18 == '\x1d') {
    do {
      *(char **)(param_1 + 8) = pcVar18 + 1;
LAB_0043d234:
      uVar16 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(param_1,&local_6c)
      ;
      uVar13 = local_6c;
      if ((uVar16 & 1) == 0) goto LAB_0043d3d8;
      iVar23 = *(int *)(this + 0x58);
      if (iVar23 == *(int *)(this + 0x5c)) {
        uVar5 = iVar23 * 2;
        if ((int)uVar5 < iVar23 + 1) {
          uVar5 = iVar23 + 1;
        }
        pUVar22 = *(UnpackedMesh **)(this + 0x50);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (long)(int)uVar5;
        *(uint *)(this + 0x5c) = uVar5;
        uVar16 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
        if (SUB168(auVar9 * ZEXT816(4),8) != 0) {
          uVar16 = 0xffffffffffffffff;
        }
        pvVar14 = operator_new__(uVar16);
        *(void **)(this + 0x50) = pvVar14;
        memcpy(pvVar14,pUVar22,(long)iVar23 << 2);
        if ((pUVar22 != this + 0x60) && (pUVar22 != (UnpackedMesh *)0x0)) {
          operator_delete__(pUVar22);
          iVar23 = *(int *)(this + 0x58);
        }
      }
      lVar20 = *(long *)(this + 0x50);
      iVar21 = (int)((long)iVar23 + 1);
      *(int *)(this + 0x58) = iVar21;
      *(uint *)(lVar20 + (long)iVar23 * 4) = uVar13;
      pcVar18 = *(char **)(param_1 + 8);
      uVar13 = *(int *)(param_1 + 0x10) - (int)pcVar18;
      if (0 < (int)uVar13) {
        uVar6 = *(int *)(this + 0x5c) - iVar21;
        uVar5 = uVar13 / 5;
        if ((int)uVar6 <= (int)(uVar13 / 5)) {
          uVar5 = uVar6;
        }
        if (0 < (int)uVar5) {
          lVar19 = 0;
          do {
            if (*pcVar18 != '\x1d') break;
            uVar3 = *(undefined4 *)(pcVar18 + 1);
            *(int *)(this + 0x58) = iVar23 + 2 + (int)lVar19;
            pcVar18 = pcVar18 + 5;
            *(undefined4 *)(lVar20 + ((long)iVar23 + 1) * 4 + lVar19 * 4) = uVar3;
            lVar19 = lVar19 + 1;
          } while ((int)lVar19 < (int)uVar5);
          if (0 < (int)lVar19) {
            google::protobuf::io::CodedInputStream::Skip(param_1,(int)lVar19 * 5);
          }
        }
      }
LAB_0043d344:
      pcVar18 = *(char **)(param_1 + 8);
      if (*(char **)(param_1 + 0x10) <= pcVar18) goto LAB_0043cea0;
    } while (*pcVar18 == '\x1d');
    if (*pcVar18 == '\"') {
      *(char **)(param_1 + 8) = pcVar18 + 1;
LAB_0043d370:
      puVar11 = PTR__default_vertex_data__007e7148;
      psVar17 = *(string **)(this + 0x70);
      *(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 8;
      if (psVar17 == (string *)puVar11) {
        psVar17 = operator_new(8);
        *(undefined **)psVar17 = puVar1;
        *(string **)(this + 0x70) = psVar17;
      }
      uVar16 = google::protobuf::internal::WireFormatLite::ReadBytes(param_1,psVar17);
      if ((uVar16 & 1) == 0) goto LAB_0043d3d8;
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar15 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
        goto LAB_0043d3e4;
      }
    }
  }
  goto LAB_0043cea0;
}


