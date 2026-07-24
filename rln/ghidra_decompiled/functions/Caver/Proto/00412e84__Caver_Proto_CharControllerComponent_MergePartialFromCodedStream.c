/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00412e84
 * Function: Caver::Proto::CharControllerComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(CharControllerComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::CharControllerComponent::MergePartialFromCodedStream
          (CharControllerComponent *this,CodedInputStream *param_1)

{
  CodedInputStream *pCVar1;
  CodedInputStream *pCVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  long lVar7;
  bool bVar8;
  uint uVar9;
  void *__dest;
  undefined8 uVar10;
  ulong uVar11;
  int iVar12;
  byte *pbVar13;
  long lVar14;
  byte *pbVar15;
  char *pcVar16;
  byte *pbVar17;
  CharControllerComponent *__src;
  uint local_6c;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  pCVar1 = param_1 + 8;
  pCVar2 = param_1 + 0x10;
LAB_00413a30:
  pbVar15 = *(byte **)pCVar1;
  if ((pbVar15 < *(byte **)pCVar2) && (bVar3 = *pbVar15, -1 < (char)bVar3)) {
    uVar11 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
    *(byte **)(param_1 + 8) = pbVar15 + 1;
    if (bVar3 == 0) goto LAB_00413a5c;
LAB_00412eec:
    uVar9 = (uint)uVar11;
    switch((int)(uVar11 >> 3)) {
    case 1:
      if ((uVar11 & 7) != 0) break;
      pbVar17 = *(byte **)pCVar1;
      pbVar13 = *(byte **)pCVar2;
      if ((pbVar17 < pbVar13) && (-1 < (char)*pbVar17)) {
        pbVar15 = pbVar17 + 1;
        local_6c = (uint)*pbVar17;
        *(byte **)pCVar1 = pbVar15;
      }
      else {
        uVar11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
                    /* try { // try from 004132a8 to 005132cf has its CatchHandler @ 004132d8 */
        if ((uVar11 & 1) == 0) goto LAB_00413a64;
        pbVar15 = *(byte **)pCVar1;
        pbVar13 = *(byte **)pCVar2;
      }
      *(uint *)(this + 0x10) = local_6c;
      *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 2;
                    /* try { // try from 004132d0 to 005132db has its CatchHandler @ 00413200 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004132a8 with catch @ 004132d8
                        */
      if ((pbVar15 < pbVar13) && (*pbVar15 == 0x10)) {
                    /* catch() { ... } // from try @ 004133b4 with catch @ 004132dc */
        pbVar15 = pbVar15 + 1;
        *(byte **)pCVar1 = pbVar15;
        if (pbVar15 < pbVar13) {
LAB_004130b0:
          if ((char)*pbVar15 < '\0') goto LAB_004132ec;
          pbVar17 = pbVar15 + 1;
          local_6c = (uint)*pbVar15;
          *(byte **)pCVar1 = pbVar17;
        }
        else {
LAB_004132ec:
          uVar11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
          if ((uVar11 & 1) == 0) goto LAB_00413a64;
                    /* try { // try from 00413300 to 00513303 has its CatchHandler @ 00413368 */
          pbVar17 = *(byte **)pCVar1;
          pbVar13 = *(byte **)pCVar2;
        }
        *(uint *)(this + 0x3c) = local_6c;
        *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x1000;
                    /* try { // try from 00413324 to 0051334b has its CatchHandler @ 00413360 */
        if ((pbVar17 < pbVar13) && (*pbVar17 == 0x1d)) {
          *(byte **)pCVar1 = pbVar17 + 1;
LAB_00413334:
          uVar11 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                             (param_1,&local_6c);
          if ((uVar11 & 1) == 0) goto LAB_00413a64;
          *(uint *)(this + 0x68) = local_6c;
          *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x8000;
          pcVar16 = *(char **)pCVar1;
                    /* catch() { ... } // from try @ 00413324 with catch @ 00413360 */
                    /* catch() { ... } // from try @ 00413300 with catch @ 00413368 */
          if ((pcVar16 < *(char **)pCVar2) && (*pcVar16 == '%')) {
            *(char **)pCVar1 = pcVar16 + 1;
            goto LAB_0041337c;
          }
        }
      }
      goto LAB_00413a30;
    case 2:
      if ((uVar11 & 7) == 0) {
        pbVar15 = *(byte **)pCVar1;
        pbVar13 = *(byte **)pCVar2;
        if (pbVar15 < pbVar13) goto LAB_004130b0;
        goto LAB_004132ec;
      }
      break;
    case 3:
      if ((uVar9 & 7) == 5) goto LAB_00413334;
      break;
    case 4:
      if ((uVar9 & 7) == 5) {
LAB_0041337c:
        uVar11 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                           (param_1,&local_6c);
        if ((uVar11 & 1) == 0) goto LAB_00413a64;
                    /* try { // try from 0041338c to 005133b3 has its CatchHandler @ 004133c4 */
        *(uint *)(this + 0x6c) = local_6c;
        *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x10000;
        pcVar16 = *(char **)pCVar1;
                    /* try { // try from 004133b4 to 005133c7 has its CatchHandler @ 004132dc */
        if ((pcVar16 < *(char **)pCVar2) && (*pcVar16 == '-')) {
          *(char **)pCVar1 = pcVar16 + 1;
          goto LAB_004133c4;
        }
        goto LAB_00413a30;
      }
      break;
    case 5:
      if ((uVar9 & 7) == 5) {
LAB_004133c4:
                    /* catch() { ... } // from try @ 0041338c with catch @ 004133c4 */
        uVar11 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                           (param_1,&local_6c);
        if ((uVar11 & 1) == 0) goto LAB_00413a64;
        *(uint *)(this + 0x70) = local_6c;
        *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x20000;
        pbVar15 = *(byte **)pCVar1;
        pbVar13 = *(byte **)pCVar2;
        if ((pbVar15 < pbVar13) && (*pbVar15 == 0x30)) {
          pbVar15 = pbVar15 + 1;
          *(byte **)pCVar1 = pbVar15;
          if (pbVar15 < pbVar13) goto LAB_00413118;
          goto LAB_00413414;
        }
        goto LAB_00413a30;
      }
      break;
    case 6:
      if ((uVar11 & 7) == 0) {
        pbVar15 = *(byte **)pCVar1;
        pbVar13 = *(byte **)pCVar2;
        if (pbVar15 < pbVar13) {
LAB_00413118:
          if ((char)*pbVar15 < '\0') goto LAB_00413414;
          pbVar17 = pbVar15 + 1;
          local_6c = (uint)*pbVar15;
          *(byte **)pCVar1 = pbVar17;
        }
        else {
LAB_00413414:
          uVar11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
          if ((uVar11 & 1) == 0) goto LAB_00413a64;
          pbVar17 = *(byte **)pCVar1;
          pbVar13 = *(byte **)pCVar2;
        }
        *(uint *)(this + 0x40) = local_6c;
        *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x2000;
        if ((pbVar17 < pbVar13) && (*pbVar17 == 0x38)) {
          pbVar17 = pbVar17 + 1;
          *(byte **)pCVar1 = pbVar17;
          if (pbVar17 < pbVar13) {
LAB_0041314c:
            if ((char)*pbVar17 < '\0') goto LAB_00413464;
            pbVar15 = pbVar17 + 1;
            local_6c = (uint)*pbVar17;
            *(byte **)pCVar1 = pbVar15;
          }
          else {
LAB_00413464:
            uVar11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c)
            ;
            if ((uVar11 & 1) == 0) goto LAB_00413a64;
            pbVar15 = *(byte **)pCVar1;
            pbVar13 = *(byte **)pCVar2;
          }
          *(uint *)(this + 0xc) = local_6c;
          *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 1;
          if ((pbVar15 < pbVar13) && (*pbVar15 == 0x40)) {
            do {
              pbVar15 = pbVar15 + 1;
              *(byte **)pCVar1 = pbVar15;
              if (pbVar15 < pbVar13) {
LAB_0041307c:
                if ((char)*pbVar15 < '\0') goto LAB_00413850;
                local_6c = (uint)*pbVar15;
                *(byte **)pCVar1 = pbVar15 + 1;
              }
              else {
LAB_00413850:
                uVar11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                   (param_1,&local_6c);
                if ((uVar11 & 1) == 0) goto LAB_00413a64;
              }
              uVar9 = local_6c;
              iVar12 = *(int *)(this + 0x50);
              if (iVar12 == *(int *)(this + 0x54)) {
                uVar5 = iVar12 * 2;
                if ((int)uVar5 < iVar12 + 1) {
                  uVar5 = iVar12 + 1;
                }
                __src = *(CharControllerComponent **)(this + 0x48);
                auVar6._8_8_ = 0;
                auVar6._0_8_ = (long)(int)uVar5;
                *(uint *)(this + 0x54) = uVar5;
                uVar11 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
                if (SUB168(auVar6 * ZEXT816(4),8) != 0) {
                  uVar11 = 0xffffffffffffffff;
                }
                __dest = operator_new__(uVar11);
                *(void **)(this + 0x48) = __dest;
                memcpy(__dest,__src,(long)iVar12 << 2);
                if ((__src != this + 0x58) && (__src != (CharControllerComponent *)0x0)) {
                  operator_delete__(__src);
                  iVar12 = *(int *)(this + 0x50);
                }
              }
              lVar14 = *(long *)(this + 0x48);
              *(int *)(this + 0x50) = iVar12 + 1;
              *(uint *)(lVar14 + (long)iVar12 * 4) = uVar9;
              if (0 < *(int *)(this + 0x54) - *(int *)(this + 0x50)) {
                iVar12 = (*(int *)(this + 0x54) + 1) - *(int *)(this + 0x50);
                do {
                  pbVar15 = *(byte **)pCVar1;
                  if ((*(byte **)pCVar2 <= pbVar15) || (*pbVar15 != 0x40)) break;
                  pbVar13 = pbVar15 + 1;
                  *(byte **)pCVar1 = pbVar13;
                  if ((pbVar13 < *(byte **)pCVar2) && (-1 < (char)*pbVar13)) {
                    /* try { // try from 0041394c to 005139c3 has its CatchHandler @ 0041394c
                       catch() { ... } // from try @ 0041394c with catch @ 0041394c
                       catch() { ... } // from try @ 004139f0 with catch @ 0041394c
                       catch() { ... } // from try @ 00413b54 with catch @ 0041394c */
                    local_6c = (uint)*pbVar13;
                    *(byte **)pCVar1 = pbVar15 + 2;
                  }
                  else {
                    uVar11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                       (param_1,&local_6c);
                    if ((uVar11 & 1) == 0) goto LAB_00413a64;
                    lVar14 = *(long *)(this + 0x48);
                  }
                  iVar4 = *(int *)(this + 0x50);
                  iVar12 = iVar12 + -1;
                  *(int *)(this + 0x50) = iVar4 + 1;
                  *(uint *)(lVar14 + (long)iVar4 * 4) = local_6c;
                } while (1 < iVar12);
              }
LAB_00413990:
              pbVar15 = *(byte **)pCVar1;
              pbVar13 = *(byte **)pCVar2;
              if (pbVar13 <= pbVar15) goto LAB_00413a30;
            } while (*pbVar15 == 0x40);
                    /* try { // try from 004139c4 to 005139d7 has its CatchHandler @ 00413ad8 */
            if (*pbVar15 == 0x48) {
              pbVar15 = pbVar15 + 1;
              *(byte **)pCVar1 = pbVar15;
              if (pbVar15 < pbVar13) {
LAB_004131b4:
                if ((char)*pbVar15 < '\0') goto LAB_004139dc;
                pbVar17 = pbVar15 + 1;
                local_6c = (uint)*pbVar15;
                *(byte **)pCVar1 = pbVar17;
              }
              else {
LAB_004139dc:
                    /* try { // try from 004139dc to 005139ef has its CatchHandler @ 00413a74 */
                uVar11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                   (param_1,&local_6c);
                if ((uVar11 & 1) == 0) goto LAB_00413a64;
                    /* try { // try from 004139f0 to 00513b47 has its CatchHandler @ 0041394c */
                pbVar17 = *(byte **)pCVar1;
                pbVar13 = *(byte **)pCVar2;
              }
              *(uint *)(this + 0x14) = local_6c;
              *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 4;
              if ((pbVar17 < pbVar13) && (*pbVar17 == 0x50)) {
                pbVar17 = pbVar17 + 1;
                *(byte **)pCVar1 = pbVar17;
                if (pbVar17 < pbVar13) {
LAB_00413010:
                  if ((char)*pbVar17 < '\0') goto LAB_004137ac;
                  pbVar15 = pbVar17 + 1;
                  local_6c = (uint)*pbVar17;
                  *(byte **)pCVar1 = pbVar15;
                }
                else {
LAB_004137ac:
                  uVar11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                     (param_1,&local_6c);
                  if ((uVar11 & 1) == 0) goto LAB_00413a64;
                  pbVar15 = *(byte **)pCVar1;
                  pbVar13 = *(byte **)pCVar2;
                }
                *(uint *)(this + 0x18) = local_6c;
                *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 8;
                if ((pbVar15 < pbVar13) && (*pbVar15 == 0x58)) {
                  pbVar15 = pbVar15 + 1;
                  *(byte **)pCVar1 = pbVar15;
                  if (pbVar15 < pbVar13) {
LAB_004131e8:
                    if ((char)*pbVar15 < '\0') goto LAB_004137fc;
                    pbVar17 = pbVar15 + 1;
                    local_6c = (uint)*pbVar15;
                    *(byte **)pCVar1 = pbVar17;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0041326c with catch @ 00413200
                       catch(type#1 @ 00000000) { ... } // from try @ 004132d0 with catch @ 00413200
                        */
                  }
                  else {
LAB_004137fc:
                    uVar11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                       (param_1,&local_6c);
                    if ((uVar11 & 1) == 0) goto LAB_00413a64;
                    pbVar17 = *(byte **)pCVar1;
                    pbVar13 = *(byte **)pCVar2;
                  }
                  *(uint *)(this + 0x1c) = local_6c;
                  *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x10;
                  if ((pbVar17 < pbVar13) && (*pbVar17 == 0x60)) {
                    pbVar17 = pbVar17 + 1;
                    *(byte **)pCVar1 = pbVar17;
                    if (pbVar17 < pbVar13) {
LAB_00412f98:
                      if ((char)*pbVar17 < '\0') goto LAB_004136b8;
                      pbVar15 = pbVar17 + 1;
                      local_6c = (uint)*pbVar17;
                      *(byte **)pCVar1 = pbVar15;
                    }
                    else {
LAB_004136b8:
                      uVar11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                         (param_1,&local_6c);
                      if ((uVar11 & 1) == 0) goto LAB_00413a64;
                      pbVar15 = *(byte **)pCVar1;
                      pbVar13 = *(byte **)pCVar2;
                    }
                    *(uint *)(this + 0x20) = local_6c;
                    *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x20;
                    if ((pbVar15 < pbVar13) && (*pbVar15 == 0x68)) {
                      pbVar15 = pbVar15 + 1;
                      *(byte **)pCVar1 = pbVar15;
                      if (pbVar15 < pbVar13) {
LAB_00412fdc:
                        if ((char)*pbVar15 < '\0') goto LAB_00413708;
                        pbVar17 = pbVar15 + 1;
                        local_6c = (uint)*pbVar15;
                        *(byte **)pCVar1 = pbVar17;
                      }
                      else {
LAB_00413708:
                        uVar11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                           (param_1,&local_6c);
                        if ((uVar11 & 1) == 0) goto LAB_00413a64;
                        pbVar17 = *(byte **)pCVar1;
                        pbVar13 = *(byte **)pCVar2;
                      }
                      *(uint *)(this + 0x28) = local_6c;
                      *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x80;
                      if ((pbVar17 < pbVar13) && (*pbVar17 == 0x70)) {
                        pbVar17 = pbVar17 + 1;
                        *(byte **)pCVar1 = pbVar17;
                        if (pbVar17 < pbVar13) {
LAB_00413180:
                          if ((char)*pbVar17 < '\0') goto LAB_00413758;
                          pbVar15 = pbVar17 + 1;
                          local_6c = (uint)*pbVar17;
                          *(byte **)pCVar1 = pbVar15;
                        }
                        else {
LAB_00413758:
                          uVar11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                             (param_1,&local_6c);
                          if ((uVar11 & 1) == 0) goto LAB_00413a64;
                          pbVar15 = *(byte **)pCVar1;
                          pbVar13 = *(byte **)pCVar2;
                        }
                        *(uint *)(this + 0x2c) = local_6c;
                        *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x100;
                        if ((pbVar15 < pbVar13) && (*pbVar15 == 0x78)) {
                          pbVar15 = pbVar15 + 1;
                          *(byte **)pCVar1 = pbVar15;
                          if (pbVar15 < pbVar13) {
LAB_00412f64:
                            iVar12 = (int)pbVar13;
                            if ((char)*pbVar15 < '\0') goto LAB_004134a8;
                            pbVar13 = pbVar15 + 1;
                            local_6c = (uint)*pbVar15;
                            *(byte **)pCVar1 = pbVar13;
                          }
                          else {
LAB_004134a8:
                            uVar11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                               (param_1,&local_6c);
                            if ((uVar11 & 1) == 0) goto LAB_00413a64;
                            iVar12 = (int)*(ulong *)pCVar2;
                            pbVar13 = *(byte **)pCVar1;
                          }
                          *(uint *)(this + 0x24) = local_6c;
                          *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x40;
                          if (((1 < iVar12 - (int)pbVar13) && (*pbVar13 == 0x85)) &&
                             (pbVar13[1] == 1)) {
                            *(byte **)pCVar1 = pbVar13 + 2;
LAB_00413500:
                            uVar11 = google::protobuf::io::CodedInputStream::
                                     ReadLittleEndian32Fallback(param_1,&local_6c);
                            if ((uVar11 & 1) == 0) goto LAB_00413a64;
                            *(uint *)(this + 0x74) = local_6c;
                            *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x40000;
                            pcVar16 = *(char **)pCVar1;
                            if (((1 < *(int *)pCVar2 - (int)pcVar16) && (*pcVar16 == -0x73)) &&
                               (pcVar16[1] == '\x01')) {
                              *(char **)pCVar1 = pcVar16 + 2;
                              goto LAB_00413558;
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
        goto LAB_00413a30;
      }
      break;
    case 7:
      if ((uVar11 & 7) == 0) {
        pbVar17 = *(byte **)pCVar1;
        pbVar13 = *(byte **)pCVar2;
        if (pbVar17 < pbVar13) goto LAB_0041314c;
        goto LAB_00413464;
      }
      break;
    case 8:
      if ((uVar9 & 7) == 2) {
        bVar8 = google::protobuf::internal::WireFormatLite::
                ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>
                          (param_1,(RepeatedField *)(this + 0x48));
        if (bVar8) goto LAB_00413990;
        goto LAB_00413a64;
      }
      if ((uVar11 & 7) == 0) {
        pbVar15 = *(byte **)pCVar1;
        if (*(byte **)pCVar2 <= pbVar15) goto LAB_00413850;
        goto LAB_0041307c;
      }
      break;
    case 9:
      if ((uVar11 & 7) == 0) {
        pbVar15 = *(byte **)pCVar1;
        pbVar13 = *(byte **)pCVar2;
        if (pbVar15 < pbVar13) goto LAB_004131b4;
        goto LAB_004139dc;
      }
      break;
    case 10:
      if ((uVar11 & 7) == 0) {
        pbVar17 = *(byte **)pCVar1;
        pbVar13 = *(byte **)pCVar2;
        if (pbVar17 < pbVar13) goto LAB_00413010;
        goto LAB_004137ac;
      }
      break;
    case 0xb:
      if ((uVar11 & 7) == 0) {
        pbVar15 = *(byte **)pCVar1;
        pbVar13 = *(byte **)pCVar2;
        if (pbVar15 < pbVar13) goto LAB_004131e8;
        goto LAB_004137fc;
      }
      break;
    case 0xc:
      if ((uVar11 & 7) == 0) {
        pbVar17 = *(byte **)pCVar1;
        pbVar13 = *(byte **)pCVar2;
        if (pbVar17 < pbVar13) goto LAB_00412f98;
        goto LAB_004136b8;
      }
      break;
    case 0xd:
      if ((uVar11 & 7) == 0) {
        pbVar15 = *(byte **)pCVar1;
        pbVar13 = *(byte **)pCVar2;
        if (pbVar15 < pbVar13) goto LAB_00412fdc;
        goto LAB_00413708;
      }
      break;
    case 0xe:
      if ((uVar11 & 7) == 0) {
        pbVar17 = *(byte **)pCVar1;
        pbVar13 = *(byte **)pCVar2;
        if (pbVar17 < pbVar13) goto LAB_00413180;
        goto LAB_00413758;
      }
      break;
    case 0xf:
      if ((uVar11 & 7) == 0) {
        pbVar15 = *(byte **)pCVar1;
        pbVar13 = *(byte **)pCVar2;
        if (pbVar15 < pbVar13) goto LAB_00412f64;
        goto LAB_004134a8;
      }
      break;
    case 0x10:
      if ((uVar9 & 7) == 5) goto LAB_00413500;
      break;
    case 0x11:
      if ((uVar9 & 7) == 5) {
LAB_00413558:
        uVar11 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                           (param_1,&local_6c);
        if ((uVar11 & 1) == 0) goto LAB_00413a64;
        *(uint *)(this + 0x78) = local_6c;
        *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x80000;
        pbVar13 = *(byte **)pCVar2;
        pcVar16 = *(char **)pCVar1;
        if (((1 < (int)pbVar13 - (int)pcVar16) && (*pcVar16 == -0x70)) && (pcVar16[1] == '\x01')) {
          pbVar15 = (byte *)(pcVar16 + 2);
          *(byte **)pCVar1 = pbVar15;
          if (pbVar15 < pbVar13) goto LAB_004130e4;
          goto LAB_004135b8;
        }
        goto LAB_00413a30;
      }
      break;
    case 0x12:
      if ((uVar11 & 7) != 0) break;
      pbVar15 = *(byte **)pCVar1;
      pbVar13 = *(byte **)pCVar2;
      if (pbVar15 < pbVar13) {
LAB_004130e4:
        if ((char)*pbVar15 < '\0') goto LAB_004135b8;
        pbVar17 = pbVar15 + 1;
        local_6c = (uint)*pbVar15;
        *(byte **)pCVar1 = pbVar17;
      }
      else {
LAB_004135b8:
        uVar11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
        if ((uVar11 & 1) == 0) goto LAB_00413a64;
        pbVar13 = *(byte **)pCVar2;
        pbVar17 = *(byte **)pCVar1;
      }
      *(uint *)(this + 0x30) = local_6c;
      *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x200;
      if (((1 < (int)pbVar13 - (int)pbVar17) && (*pbVar17 == 0x98)) && (pbVar17[1] == 1)) {
        pbVar17 = pbVar17 + 2;
        *(byte **)pCVar1 = pbVar17;
        if (pbVar17 < pbVar13) {
LAB_0041321c:
                    /* try { // try from 00413220 to 00513223 has its CatchHandler @ 00413284 */
          if ((char)*pbVar17 < '\0') goto LAB_00413618;
          pbVar15 = pbVar17 + 1;
          local_6c = (uint)*pbVar17;
          *(byte **)pCVar1 = pbVar15;
        }
        else {
LAB_00413618:
          uVar11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
          if ((uVar11 & 1) == 0) goto LAB_00413a64;
          pbVar13 = *(byte **)pCVar2;
          pbVar15 = *(byte **)pCVar1;
        }
        *(uint *)(this + 0x34) = local_6c;
        *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x400;
        if (((1 < (int)pbVar13 - (int)pbVar15) && (*pbVar15 == 0xa0)) && (pbVar15[1] == 1)) {
          pbVar15 = pbVar15 + 2;
          *(byte **)pCVar1 = pbVar15;
          if (pbVar15 < pbVar13) {
LAB_0041326c:
                    /* try { // try from 0041326c to 005132a7 has its CatchHandler @ 00413200 */
            if ((char)*pbVar15 < '\0') goto LAB_00413678;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00413244 with catch @ 00413278
                        */
            pbVar17 = pbVar15 + 1;
            local_6c = (uint)*pbVar15;
            *(byte **)pCVar1 = pbVar17;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00413220 with catch @ 00413284
                        */
          }
          else {
LAB_00413678:
            uVar11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c)
            ;
            if ((uVar11 & 1) == 0) goto LAB_00413a64;
            pbVar17 = *(byte **)pCVar1;
            pbVar13 = *(byte **)pCVar2;
          }
          *(uint *)(this + 0x38) = local_6c;
          *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x800;
          if ((pbVar17 == pbVar13) && (*(int *)(param_1 + 0x2c) != 0)) {
            uVar10 = 1;
            *(undefined4 *)(param_1 + 0x20) = 0;
            param_1[0x24] = (CodedInputStream)0x1;
LAB_00413a68:
                    /* catch() { ... } // from try @ 004139dc with catch @ 00413a74 */
            if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail(uVar10);
            }
            return;
          }
        }
      }
      goto LAB_00413a30;
    case 0x13:
      if ((uVar11 & 7) == 0) {
        pbVar17 = *(byte **)pCVar1;
        pbVar13 = *(byte **)pCVar2;
        if (pbVar17 < pbVar13) goto LAB_0041321c;
        goto LAB_00413618;
      }
      break;
    case 0x14:
      if ((uVar11 & 7) == 0) {
        pbVar15 = *(byte **)pCVar1;
        pbVar13 = *(byte **)pCVar2;
        if (pbVar15 < pbVar13) goto LAB_0041326c;
        goto LAB_00413678;
      }
    }
                    /* try { // try from 00413244 to 0051326b has its CatchHandler @ 00413278 */
    if ((uVar9 & 7) != 4) {
      uVar11 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar9);
      if ((uVar11 & 1) == 0) {
LAB_00413a64:
        uVar10 = 0;
        goto LAB_00413a68;
      }
      goto LAB_00413a30;
    }
  }
  else {
    uVar9 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar11 = (ulong)uVar9;
    *(uint *)(param_1 + 0x20) = uVar9;
    if (uVar9 != 0) goto LAB_00412eec;
  }
LAB_00413a5c:
  uVar10 = 1;
  goto LAB_00413a68;
}


