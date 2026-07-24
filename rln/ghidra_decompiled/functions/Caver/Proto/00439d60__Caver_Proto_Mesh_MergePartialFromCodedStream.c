/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00439d60
 * Function: Caver::Proto::Mesh::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(Mesh * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Mesh::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */

void __thiscall
Caver::Proto::Mesh::MergePartialFromCodedStream(Mesh *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  CodedInputStream *pCVar2;
  CodedInputStream *pCVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  ulong uVar14;
  string *psVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  char *pcVar19;
  byte *pbVar20;
  MeshData *pMVar21;
  MeshMaterial *this_00;
  Box *this_01;
  uint local_7c;
  long local_78;
  
  puVar10 = PTR_vtable_007e7be0;
  lVar8 = DAT_0068aa60;
                    /* try { // try from 00439d80 to 00539d87 has its CatchHandler @ 00439d90 */
                    /* try { // try from 00439d88 to 00539d93 has its CatchHandler @ 00439c98 */
  lVar7 = tpidr_el0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00439d80 with catch @ 00439d90
                        */
                    /* try { // try from 00439d94 to 00539dc3 has its CatchHandler @ 00439d94
                       catch() { ... } // from try @ 00439d94 with catch @ 00439d94
                       catch() { ... } // from try @ 00439fb8 with catch @ 00439d94 */
  local_78 = *(long *)(lVar7 + 0x28);
                    /* try { // try from 00439dc4 to 00539dd7 has its CatchHandler @ 0043a3a0 */
  puVar1 = PTR_vtable_007e5a10 + 0x10;
  pCVar2 = param_1 + 8;
  pCVar3 = param_1 + 0x10;
  puVar4 = PTR_vtable_007e7be0 + 0x10;
                    /* try { // try from 00439de4 to 00539def has its CatchHandler @ 0043a334 */
  puVar5 = PTR_DAT_007e5de8 + 0x18;
LAB_00439df4:
  do {
    pbVar17 = *(byte **)pCVar2;
    if ((*(byte **)pCVar3 <= pbVar17) || (bVar6 = *pbVar17, (char)bVar6 < '\0')) {
      uVar11 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar14 = (ulong)uVar11;
      *(uint *)(param_1 + 0x20) = uVar11;
      if (uVar11 != 0) goto LAB_00439e38;
LAB_0043a9bc:
      uVar13 = 1;
      goto LAB_0043a9c0;
    }
    uVar14 = (ulong)bVar6;
                    /* try { // try from 00439e14 to 00539e4f has its CatchHandler @ 0043a2d0 */
    *(uint *)(param_1 + 0x20) = (uint)bVar6;
    *(byte **)(param_1 + 8) = pbVar17 + 1;
    if (bVar6 == 0) goto LAB_0043a9bc;
LAB_00439e38:
    uVar11 = (uint)uVar14;
    switch((int)(uVar14 >> 3)) {
    case 1:
      if ((uVar14 & 7) == 0) {
        pbVar20 = *(byte **)pCVar2;
        pbVar18 = *(byte **)pCVar3;
        if ((pbVar20 < pbVar18) && (-1 < (char)*pbVar20)) {
                    /* try { // try from 00439e78 to 00539e8b has its CatchHandler @ 0043a2cc */
          pbVar17 = pbVar20 + 1;
          *(uint *)(this + 0xc) = (uint)*pbVar20;
          *(byte **)pCVar2 = pbVar17;
        }
        else {
          uVar14 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                             (param_1,(uint *)(this + 0xc));
          if ((uVar14 & 1) == 0) goto LAB_0043a9b4;
          pbVar17 = *(byte **)pCVar2;
          pbVar18 = *(byte **)pCVar3;
        }
                    /* try { // try from 00439fb8 to 0053a3a3 has its CatchHandler @ 00439d94 */
        *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) | 1;
        if ((pbVar17 < pbVar18) && (*pbVar17 == 0x10)) {
          pbVar17 = pbVar17 + 1;
          *(byte **)pCVar2 = pbVar17;
          if (pbVar17 < pbVar18) {
LAB_00439f28:
                    /* try { // try from 00439f2c to 00539f3f has its CatchHandler @ 0043a234 */
            if ((char)*pbVar17 < '\0') goto LAB_00439fe0;
            pbVar20 = pbVar17 + 1;
            *(uint *)(this + 0x10) = (uint)*pbVar17;
            *(byte **)pCVar2 = pbVar20;
          }
          else {
LAB_00439fe0:
            uVar14 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                               (param_1,(uint *)(this + 0x10));
            if ((uVar14 & 1) == 0) goto LAB_0043a9b4;
            pbVar20 = *(byte **)pCVar2;
            pbVar18 = *(byte **)pCVar3;
          }
          uVar11 = *(uint *)(this + 0xa0) | 2;
          *(uint *)(this + 0xa0) = uVar11;
          if ((pbVar20 < pbVar18) && (*pbVar20 == 0x1a)) {
            *(byte **)pCVar2 = pbVar20 + 1;
LAB_0043a020:
            pMVar21 = *(MeshData **)(this + 0x18);
            *(uint *)(this + 0xa0) = uVar11 | 4;
            if (pMVar21 == (MeshData *)0x0) {
              pMVar21 = operator_new(0x20);
              *(long *)(pMVar21 + 8) = lVar8;
              *(long *)(pMVar21 + 0x10) = 0;
              *(long *)(pMVar21 + 0x18) = 0;
              *(undefined **)pMVar21 = puVar4;
              *(MeshData **)(this + 0x18) = pMVar21;
            }
            pbVar17 = *(byte **)pCVar2;
            if ((pbVar17 < *(byte **)pCVar3) && (-1 < (char)*pbVar17)) {
              local_7c = (uint)*pbVar17;
              *(byte **)pCVar2 = pbVar17 + 1;
            }
            else {
              uVar14 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                 (param_1,&local_7c);
              if ((uVar14 & 1) == 0) goto LAB_0043a9b4;
            }
            iVar12 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar12 + 1;
            if (*(int *)(param_1 + 0x3c) <= iVar12) goto LAB_0043a9b4;
            iVar12 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
            uVar14 = MeshData::MergePartialFromCodedStream(pMVar21,param_1);
            if (((uVar14 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0043a9b4;
            google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar12);
            if (0 < *(int *)(param_1 + 0x38)) {
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
            }
            pcVar19 = *(char **)pCVar2;
            if ((pcVar19 < *(char **)pCVar3) && (*pcVar19 == '\"')) {
              *(char **)pCVar2 = pcVar19 + 1;
LAB_0043a108:
              pMVar21 = *(MeshData **)(this + 0x20);
              *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) | 8;
              if (pMVar21 == (MeshData *)0x0) {
                pMVar21 = operator_new(0x20);
                *(long *)(pMVar21 + 8) = lVar8;
                *(long *)(pMVar21 + 0x10) = 0;
                *(long *)(pMVar21 + 0x18) = 0;
                *(undefined **)pMVar21 = puVar10 + 0x10;
                *(MeshData **)(this + 0x20) = pMVar21;
              }
              pbVar17 = *(byte **)pCVar2;
              if ((pbVar17 < *(byte **)pCVar3) && (-1 < (char)*pbVar17)) {
                local_7c = (uint)*pbVar17;
                *(byte **)pCVar2 = pbVar17 + 1;
              }
              else {
                uVar14 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                   (param_1,&local_7c);
                if ((uVar14 & 1) == 0) goto LAB_0043a9b4;
              }
              iVar12 = *(int *)(param_1 + 0x38);
              *(int *)(param_1 + 0x38) = iVar12 + 1;
              if (*(int *)(param_1 + 0x3c) <= iVar12) goto LAB_0043a9b4;
              iVar12 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
                    /* catch() { ... } // from try @ 00439f7c with catch @ 0043a1a0 */
              uVar14 = MeshData::MergePartialFromCodedStream(pMVar21,param_1);
              if (((uVar14 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
              goto LAB_0043a9b4;
              google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar12);
              if (0 < *(int *)(param_1 + 0x38)) {
                *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
              }
              pcVar19 = *(char **)pCVar2;
              if ((pcVar19 < *(char **)pCVar3) && (*pcVar19 == '*')) {
                *(char **)pCVar2 = pcVar19 + 1;
LAB_0043a1f4:
                pMVar21 = *(MeshData **)(this + 0x28);
                    /* catch() { ... } // from try @ 00439f50 with catch @ 0043a1fc */
                *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) | 0x10;
                if (pMVar21 == (MeshData *)0x0) {
                  pMVar21 = operator_new(0x20);
                  *(long *)(pMVar21 + 8) = lVar8;
                  *(long *)(pMVar21 + 0x10) = 0;
                  *(long *)(pMVar21 + 0x18) = 0;
                  *(undefined **)pMVar21 = puVar10 + 0x10;
                  *(MeshData **)(this + 0x28) = pMVar21;
                }
                pbVar17 = *(byte **)pCVar2;
                    /* catch() { ... } // from try @ 00439f2c with catch @ 0043a234 */
                    /* catch() { ... } // from try @ 00439ed0 with catch @ 0043a238 */
                if ((pbVar17 < *(byte **)pCVar3) && (-1 < (char)*pbVar17)) {
                  local_7c = (uint)*pbVar17;
                  *(byte **)pCVar2 = pbVar17 + 1;
                }
                else {
                  uVar14 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                     (param_1,&local_7c);
                  if ((uVar14 & 1) == 0) goto LAB_0043a9b4;
                }
                iVar12 = *(int *)(param_1 + 0x38);
                *(int *)(param_1 + 0x38) = iVar12 + 1;
                if (*(int *)(param_1 + 0x3c) <= iVar12) goto LAB_0043a9b4;
                iVar12 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
                uVar14 = MeshData::MergePartialFromCodedStream(pMVar21,param_1);
                    /* catch() { ... } // from try @ 00439e9c with catch @ 0043a294 */
                if (((uVar14 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                goto LAB_0043a9b4;
                google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar12);
                if (0 < *(int *)(param_1 + 0x38)) {
                  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                }
                pcVar19 = *(char **)pCVar2;
                    /* catch() { ... } // from try @ 00439e78 with catch @ 0043a2cc */
                    /* catch() { ... } // from try @ 00439e14 with catch @ 0043a2d0 */
                if ((pcVar19 < *(char **)pCVar3) && (*pcVar19 == '2')) {
                  do {
                    *(char **)pCVar2 = pcVar19 + 1;
LAB_0043a2e0:
                    iVar12 = *(int *)(this + 0x38);
                    iVar16 = *(int *)(this + 0x3c);
                    if (iVar12 < iVar16) {
                      *(int *)(this + 0x38) = iVar12 + 1;
                      pMVar21 = *(MeshData **)(*(long *)(this + 0x30) + (long)iVar12 * 8);
                    }
                    else {
                      if (iVar16 == *(int *)(this + 0x40)) {
                        google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                                  ((RepeatedPtrFieldBase *)(this + 0x30),iVar16 + 1);
                        iVar12 = *(int *)(this + 0x38);
                        iVar16 = *(int *)(this + 0x3c);
                      }
                      *(int *)(this + 0x3c) = iVar16 + 1;
                      pMVar21 = operator_new(0x20);
                    /* catch() { ... } // from try @ 00439de4 with catch @ 0043a334 */
                      *(long *)(pMVar21 + 8) = lVar8;
                      *(undefined **)pMVar21 = puVar10 + 0x10;
                      *(long *)(pMVar21 + 0x10) = 0;
                      *(long *)(pMVar21 + 0x18) = 0;
                      *(int *)(this + 0x38) = iVar12 + 1;
                      *(MeshData **)(*(long *)(this + 0x30) + (long)iVar12 * 8) = pMVar21;
                    }
                    pbVar17 = *(byte **)pCVar2;
                    if ((pbVar17 < *(byte **)pCVar3) && (-1 < (char)*pbVar17)) {
                      local_7c = (uint)*pbVar17;
                      *(byte **)pCVar2 = pbVar17 + 1;
                    }
                    else {
                      uVar14 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                         (param_1,&local_7c);
                      if ((uVar14 & 1) == 0) goto LAB_0043a9b4;
                    }
                    iVar12 = *(int *)(param_1 + 0x38);
                    *(int *)(param_1 + 0x38) = iVar12 + 1;
                    /* catch() { ... } // from try @ 00439dc4 with catch @ 0043a3a0 */
                    if (*(int *)(param_1 + 0x3c) <= iVar12) goto LAB_0043a9b4;
                    iVar12 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
                    uVar14 = MeshData::MergePartialFromCodedStream(pMVar21,param_1);
                    if (((uVar14 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                    goto LAB_0043a9b4;
                    google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar12);
                    if (0 < *(int *)(param_1 + 0x38)) {
                      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                    }
                    pcVar19 = *(char **)pCVar2;
                    if (*(char **)pCVar3 <= pcVar19) goto LAB_00439df4;
                  } while (*pcVar19 == '2');
                  if (*pcVar19 == ':') {
                    *(char **)pCVar2 = pcVar19 + 1;
LAB_0043a418:
                    /* try { // try from 0043a41c to 0053a46b has its CatchHandler @ 0043a41c
                       catch() { ... } // from try @ 0043a41c with catch @ 0043a41c
                       catch() { ... } // from try @ 0043a504 with catch @ 0043a41c
                       catch() { ... } // from try @ 0043a6b0 with catch @ 0043a41c */
                    pMVar21 = *(MeshData **)(this + 0x68);
                    *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) | 0x40;
                    if (pMVar21 == (MeshData *)0x0) {
                      pMVar21 = operator_new(0x20);
                      *(long *)(pMVar21 + 8) = lVar8;
                      *(long *)(pMVar21 + 0x10) = 0;
                      *(long *)(pMVar21 + 0x18) = 0;
                      *(undefined **)pMVar21 = puVar10 + 0x10;
                      *(MeshData **)(this + 0x68) = pMVar21;
                    }
                    pbVar17 = *(byte **)pCVar2;
                    if ((pbVar17 < *(byte **)pCVar3) && (-1 < (char)*pbVar17)) {
                    /* try { // try from 0043a46c to 0053a47b has its CatchHandler @ 0043a6b8 */
                      local_7c = (uint)*pbVar17;
                      *(byte **)pCVar2 = pbVar17 + 1;
                    }
                    else {
                      uVar14 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                         (param_1,&local_7c);
                      if ((uVar14 & 1) == 0) goto LAB_0043a9b4;
                    }
                    iVar12 = *(int *)(param_1 + 0x38);
                    *(int *)(param_1 + 0x38) = iVar12 + 1;
                    if (*(int *)(param_1 + 0x3c) <= iVar12) goto LAB_0043a9b4;
                    /* try { // try from 0043a4a0 to 0053a4a7 has its CatchHandler @ 0043a688 */
                    iVar12 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
                    /* try { // try from 0043a4ac to 0053a4b3 has its CatchHandler @ 0043a61c */
                    uVar14 = MeshData::MergePartialFromCodedStream(pMVar21,param_1);
                    if (((uVar14 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                    goto LAB_0043a9b4;
                    google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar12);
                    if (0 < *(int *)(param_1 + 0x38)) {
                      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                    }
                    pcVar19 = *(char **)pCVar2;
                    if ((pcVar19 < *(char **)pCVar3) && (*pcVar19 == 'B')) {
                    /* try { // try from 0043a4fc to 0053a503 has its CatchHandler @ 0043a618 */
                      *(char **)pCVar2 = pcVar19 + 1;
LAB_0043a504:
                    /* try { // try from 0043a504 to 0053a6ab has its CatchHandler @ 0043a41c */
                      pMVar21 = *(MeshData **)(this + 0x70);
                      *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) | 0x80;
                      if (pMVar21 == (MeshData *)0x0) {
                        pMVar21 = operator_new(0x20);
                        *(long *)(pMVar21 + 8) = lVar8;
                        *(long *)(pMVar21 + 0x10) = 0;
                        *(long *)(pMVar21 + 0x18) = 0;
                        *(undefined **)pMVar21 = puVar10 + 0x10;
                        *(MeshData **)(this + 0x70) = pMVar21;
                      }
                      pbVar17 = *(byte **)pCVar2;
                      if ((pbVar17 < *(byte **)pCVar3) && (-1 < (char)*pbVar17)) {
                        local_7c = (uint)*pbVar17;
                        *(byte **)pCVar2 = pbVar17 + 1;
                      }
                      else {
                        uVar14 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                           (param_1,&local_7c);
                        if ((uVar14 & 1) == 0) goto LAB_0043a9b4;
                      }
                      iVar12 = *(int *)(param_1 + 0x38);
                      *(int *)(param_1 + 0x38) = iVar12 + 1;
                      if (*(int *)(param_1 + 0x3c) <= iVar12) goto LAB_0043a9b4;
                      iVar12 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
                      uVar14 = MeshData::MergePartialFromCodedStream(pMVar21,param_1);
                      if (((uVar14 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                      goto LAB_0043a9b4;
                      google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar12);
                      if (0 < *(int *)(param_1 + 0x38)) {
                        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                      }
                      pcVar19 = *(char **)pCVar2;
                      if ((pcVar19 < *(char **)pCVar3) && (*pcVar19 == 'J')) {
                        *(char **)pCVar2 = pcVar19 + 1;
LAB_0043a5f0:
                        pMVar21 = *(MeshData **)(this + 0x78);
                        *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) | 0x100;
                        if (pMVar21 == (MeshData *)0x0) {
                          pMVar21 = operator_new(0x20);
                          *(long *)(pMVar21 + 8) = lVar8;
                    /* catch() { ... } // from try @ 0043a4fc with catch @ 0043a618 */
                          *(long *)(pMVar21 + 0x10) = 0;
                          *(long *)(pMVar21 + 0x18) = 0;
                    /* catch() { ... } // from try @ 0043a4ac with catch @ 0043a61c */
                          *(undefined **)pMVar21 = puVar10 + 0x10;
                          *(MeshData **)(this + 0x78) = pMVar21;
                        }
                        pbVar17 = *(byte **)pCVar2;
                        if ((pbVar17 < *(byte **)pCVar3) && (-1 < (char)*pbVar17)) {
                          local_7c = (uint)*pbVar17;
                          *(byte **)pCVar2 = pbVar17 + 1;
                        }
                        else {
                          uVar14 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                             (param_1,&local_7c);
                          if ((uVar14 & 1) == 0) goto LAB_0043a9b4;
                        }
                        iVar12 = *(int *)(param_1 + 0x38);
                        *(int *)(param_1 + 0x38) = iVar12 + 1;
                        if (*(int *)(param_1 + 0x3c) <= iVar12) goto LAB_0043a9b4;
                        iVar12 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c)
                        ;
                    /* catch() { ... } // from try @ 0043a4a0 with catch @ 0043a688 */
                        uVar14 = MeshData::MergePartialFromCodedStream(pMVar21,param_1);
                        if (((uVar14 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                        goto LAB_0043a9b4;
                        google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar12);
                    /* try { // try from 0043a6ac to 0053a6af has its CatchHandler @ 0043a6b4 */
                    /* try { // try from 0043a6b0 to 0053a72b has its CatchHandler @ 0043a41c */
                        if (0 < *(int *)(param_1 + 0x38)) {
                    /* catch() { ... } // from try @ 0043a6ac with catch @ 0043a6b4 */
                          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                        }
                    /* catch() { ... } // from try @ 0043a46c with catch @ 0043a6b8 */
                        pcVar19 = *(char **)pCVar2;
                        if ((pcVar19 < *(char **)pCVar3) && (*pcVar19 == 'R')) {
                          *(char **)pCVar2 = pcVar19 + 1;
LAB_0043a6dc:
                          this_00 = *(MeshMaterial **)(this + 0x80);
                          *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) | 0x200;
                          if (this_00 == (MeshMaterial *)0x0) {
                            this_00 = operator_new(0x40);
                            *(undefined4 *)(this_00 + 8) = 0;
                            *(long *)(this_00 + 0x30) = 0;
                            *(undefined **)this_00 = puVar1;
                            *(undefined4 *)(this_00 + 0x38) = 0;
                            *(undefined4 *)(this_00 + 0x28) = 0;
                            *(long *)(this_00 + 0x18) = 0;
                            *(long *)(this_00 + 0x20) = 0;
                            *(long *)(this_00 + 0x10) = 0;
                            *(MeshMaterial **)(this + 0x80) = this_00;
                          }
                          pbVar17 = *(byte **)pCVar2;
                          if ((pbVar17 < *(byte **)pCVar3) && (-1 < (char)*pbVar17)) {
                            local_7c = (uint)*pbVar17;
                    /* try { // try from 0043a744 to 0053a7cb has its CatchHandler @ 0043a744
                       catch(type#1 @ 00000000) { ... } // from try @ 0043a744 with catch @ 0043a744
                       catch(type#1 @ 00000000) { ... } // from try @ 0043a7d4 with catch @ 0043a744
                       catch(type#1 @ 00000000) { ... } // from try @ 0043a850 with catch @ 0043a744
                        */
                            *(byte **)pCVar2 = pbVar17 + 1;
                          }
                          else {
                            uVar14 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                               (param_1,&local_7c);
                            if ((uVar14 & 1) == 0) goto LAB_0043a9b4;
                          }
                          iVar12 = *(int *)(param_1 + 0x38);
                          *(int *)(param_1 + 0x38) = iVar12 + 1;
                          if (*(int *)(param_1 + 0x3c) <= iVar12) goto LAB_0043a9b4;
                          iVar12 = google::protobuf::io::CodedInputStream::PushLimit
                                             (param_1,local_7c);
                          uVar14 = MeshMaterial::MergePartialFromCodedStream(this_00,param_1);
                          if (((uVar14 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                          goto LAB_0043a9b4;
                          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar12);
                          if (0 < *(int *)(param_1 + 0x38)) {
                            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                          }
                          pcVar19 = *(char **)pCVar2;
                    /* try { // try from 0043a7cc to 0053a7d3 has its CatchHandler @ 0043a824 */
                          if ((pcVar19 < *(char **)pCVar3) && (*pcVar19 == 'Z')) {
                    /* try { // try from 0043a7d4 to 0053a847 has its CatchHandler @ 0043a744 */
                            *(char **)pCVar2 = pcVar19 + 1;
LAB_0043a7d8:
                            this_01 = *(Box **)(this + 0x88);
                            *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) | 0x400;
                            if (this_01 == (Box *)0x0) {
                              this_01 = operator_new(0x28);
                              Box::Box(this_01);
                              *(Box **)(this + 0x88) = this_01;
                            }
                            pbVar17 = *(byte **)pCVar2;
                            if ((pbVar17 < *(byte **)pCVar3) && (-1 < (char)*pbVar17)) {
                              local_7c = (uint)*pbVar17;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0043a7cc with catch @ 0043a824
                        */
                              *(byte **)pCVar2 = pbVar17 + 1;
                            }
                            else {
                              uVar14 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                                 (param_1,&local_7c);
                              if ((uVar14 & 1) == 0) goto LAB_0043a9b4;
                            }
                            iVar12 = *(int *)(param_1 + 0x38);
                    /* try { // try from 0043a848 to 0053a84f has its CatchHandler @ 0043a858 */
                            *(int *)(param_1 + 0x38) = iVar12 + 1;
                            if (*(int *)(param_1 + 0x3c) <= iVar12) goto LAB_0043a9b4;
                    /* try { // try from 0043a850 to 0053a85b has its CatchHandler @ 0043a744 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0043a848 with catch @ 0043a858
                        */
                            iVar12 = google::protobuf::io::CodedInputStream::PushLimit
                                               (param_1,local_7c);
                            uVar14 = Box::MergePartialFromCodedStream(this_01,param_1);
                            if (((uVar14 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                            goto LAB_0043a9b4;
                            google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar12);
                            if (0 < *(int *)(param_1 + 0x38)) {
                              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                            }
                            pcVar19 = *(char **)pCVar2;
                            if (((1 < *(int *)pCVar3 - (int)pcVar19) && (*pcVar19 == -0x6e)) &&
                               (pcVar19[1] == '\x03')) {
                              *(char **)pCVar2 = pcVar19 + 2;
LAB_0043a8c8:
                              puVar9 = PTR__default_vertex_data__007e5ae0;
                              psVar15 = *(string **)(this + 0x90);
                              *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) | 0x800;
                              if (psVar15 == (string *)puVar9) {
                                psVar15 = operator_new(8);
                                *(undefined **)psVar15 = puVar5;
                                *(string **)(this + 0x90) = psVar15;
                              }
                              uVar14 = google::protobuf::internal::WireFormatLite::ReadBytes
                                                 (param_1,psVar15);
                              if ((uVar14 & 1) == 0) goto LAB_0043a9b4;
                              pcVar19 = *(char **)pCVar2;
                              if (((1 < *(int *)pCVar3 - (int)pcVar19) && (*pcVar19 == -0x66)) &&
                                 (pcVar19[1] == '\x03')) {
                                *(char **)pCVar2 = pcVar19 + 2;
LAB_0043a940:
                                puVar9 = PTR__default_index_data__007e6c48;
                                psVar15 = *(string **)(this + 0x98);
                                *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) | 0x1000;
                                if (psVar15 == (string *)puVar9) {
                                  psVar15 = operator_new(8);
                                  *(undefined **)psVar15 = PTR_DAT_007e5de8 + 0x18;
                                  *(string **)(this + 0x98) = psVar15;
                                }
                                uVar14 = google::protobuf::internal::WireFormatLite::ReadBytes
                                                   (param_1,psVar15);
                                if ((uVar14 & 1) == 0) goto LAB_0043a9b4;
                                if ((*(ulong *)pCVar2 == *(ulong *)pCVar3) &&
                                   (*(int *)(param_1 + 0x2c) != 0)) {
                                  uVar13 = 1;
                                  *(undefined4 *)(param_1 + 0x20) = 0;
                                  param_1[0x24] = (CodedInputStream)0x1;
                                  goto LAB_0043a9c0;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_00439df4;
      }
      break;
    case 2:
      if ((uVar14 & 7) == 0) {
        pbVar17 = *(byte **)pCVar2;
        pbVar18 = *(byte **)pCVar3;
        if (pbVar17 < pbVar18) goto LAB_00439f28;
        goto LAB_00439fe0;
      }
      break;
    case 3:
      if ((uVar11 & 7) == 2) {
        uVar11 = *(uint *)(this + 0xa0);
        goto LAB_0043a020;
      }
      break;
    case 4:
      if ((uVar11 & 7) == 2) goto LAB_0043a108;
      break;
    case 5:
                    /* try { // try from 00439e9c to 00539ea7 has its CatchHandler @ 0043a294 */
      if ((uVar11 & 7) == 2) goto LAB_0043a1f4;
      break;
    case 6:
      if ((uVar11 & 7) == 2) goto LAB_0043a2e0;
      break;
    case 7:
      if ((uVar11 & 7) == 2) goto LAB_0043a418;
      break;
    case 8:
      if ((uVar11 & 7) == 2) goto LAB_0043a504;
      break;
    case 9:
                    /* try { // try from 00439f7c to 00539fb7 has its CatchHandler @ 0043a1a0 */
      if ((uVar11 & 7) == 2) goto LAB_0043a5f0;
      break;
    case 10:
      if ((uVar11 & 7) == 2) goto LAB_0043a6dc;
      break;
    case 0xb:
      if ((uVar11 & 7) == 2) goto LAB_0043a7d8;
      break;
    default:
      break;
    case 0x32:
                    /* try { // try from 00439ed0 to 00539f0b has its CatchHandler @ 0043a238 */
      if ((uVar11 & 7) == 2) goto LAB_0043a8c8;
      break;
    case 0x33:
      if ((uVar11 & 7) == 2) goto LAB_0043a940;
    }
    if ((uVar11 & 7) == 4) goto LAB_0043a9bc;
    uVar14 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar11);
    if ((uVar14 & 1) == 0) {
LAB_0043a9b4:
      uVar13 = 0;
LAB_0043a9c0:
      if (*(long *)(lVar7 + 0x28) == local_78) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar13);
    }
  } while( true );
}


