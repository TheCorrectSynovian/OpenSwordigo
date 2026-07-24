/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041e3f0
 * Function: Caver::Proto::ParticleEmitterComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(ParticleEmitterComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitterComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::ParticleEmitterComponent::MergePartialFromCodedStream
          (ParticleEmitterComponent *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  long lVar6;
  long lVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  void *__dest;
  undefined8 uVar11;
  ulong uVar12;
  int iVar13;
  byte *pbVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  ParticleEmitterComponent *__src;
  ParticleEmitter *this_00;
  Vector3 *pVVar18;
  uint local_7c;
  long local_78;
  
                    /* catch() { ... } // from try @ 0041e3e0 with catch @ 0041e3f0 */
  lVar7 = DAT_0068b470;
                    /* catch() { ... } // from try @ 0041e3ec with catch @ 0041e400 */
                    /* try { // try from 0041e404 to 0051e407 has its CatchHandler @ 0041e410 */
                    /* try { // try from 0041e408 to 0051e413 has its CatchHandler @ 0041e33c */
                    /* catch() { ... } // from try @ 0041e404 with catch @ 0041e410 */
                    /* catch() { ... } // from try @ 0041e468 with catch @ 0041e418 */
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  puVar1 = PTR_vtable_007e5278 + 0x10;
LAB_0041e454:
  pbVar17 = *(byte **)(param_1 + 8);
                    /* try { // try from 0041e464 to 0051e467 has its CatchHandler @ 0041e484 */
  if ((pbVar17 < *(byte **)(param_1 + 0x10)) && (bVar3 = *pbVar17, -1 < (char)bVar3)) {
                    /* try { // try from 0041e468 to 0051e497 has its CatchHandler @ 0041e418 */
    uVar12 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
    *(byte **)(param_1 + 8) = pbVar17 + 1;
    if (bVar3 == 0) goto LAB_0041ec50;
LAB_0041e494:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0041e600 with catch @ 0041e4a0
                        */
    uVar9 = (uint)uVar12;
    switch((int)(uVar12 >> 3)) {
    case 2:
      if ((uVar9 & 7) == 2) {
        bVar8 = google::protobuf::internal::WireFormatLite::
                ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>
                          (param_1,(RepeatedField *)(this + 0x20));
        if (bVar8) goto LAB_0041e7cc;
        goto LAB_0041ec48;
      }
      if ((uVar12 & 7) == 0) {
        pbVar17 = *(byte **)(param_1 + 8);
        if (*(byte **)(param_1 + 0x10) <= pbVar17) goto LAB_0041e680;
LAB_0041e4cc:
        if ((char)*pbVar17 < '\0') goto LAB_0041e680;
        local_7c = (uint)*pbVar17;
        *(byte **)(param_1 + 8) = pbVar17 + 1;
        do {
          uVar9 = local_7c;
          iVar10 = *(int *)(this + 0x28);
          if (iVar10 == *(int *)(this + 0x2c)) {
            uVar4 = iVar10 * 2;
            if ((int)uVar4 < iVar10 + 1) {
              uVar4 = iVar10 + 1;
            }
            __src = *(ParticleEmitterComponent **)(this + 0x20);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (long)(int)uVar4;
            *(uint *)(this + 0x2c) = uVar4;
            uVar12 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
            if (SUB168(auVar5 * ZEXT816(4),8) != 0) {
              uVar12 = 0xffffffffffffffff;
            }
            __dest = operator_new__(uVar12);
            *(void **)(this + 0x20) = __dest;
            memcpy(__dest,__src,(long)iVar10 << 2);
            if ((__src != this + 0x30) && (__src != (ParticleEmitterComponent *)0x0)) {
              operator_delete__(__src);
              iVar10 = *(int *)(this + 0x28);
            }
          }
          lVar15 = *(long *)(this + 0x20);
          *(int *)(this + 0x28) = iVar10 + 1;
          *(uint *)(lVar15 + (long)iVar10 * 4) = uVar9;
          if (0 < *(int *)(this + 0x2c) - *(int *)(this + 0x28)) {
            iVar10 = (*(int *)(this + 0x2c) + 1) - *(int *)(this + 0x28);
            do {
              pbVar17 = *(byte **)(param_1 + 8);
              if ((*(byte **)(param_1 + 0x10) <= pbVar17) || (*pbVar17 != 0x10)) break;
              pbVar14 = pbVar17 + 1;
              *(byte **)(param_1 + 8) = pbVar14;
              if ((pbVar14 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar14)) {
                local_7c = (uint)*pbVar14;
                *(byte **)(param_1 + 8) = pbVar17 + 2;
              }
              else {
                uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                   (param_1,&local_7c);
                if ((uVar12 & 1) == 0) goto LAB_0041ec48;
                lVar15 = *(long *)(this + 0x20);
              }
              iVar13 = *(int *)(this + 0x28);
              iVar10 = iVar10 + -1;
              *(int *)(this + 0x28) = iVar13 + 1;
              *(uint *)(lVar15 + (long)iVar13 * 4) = local_7c;
            } while (1 < iVar10);
          }
LAB_0041e7cc:
          pbVar17 = *(byte **)(param_1 + 8);
          pbVar16 = *(byte **)(param_1 + 0x10);
          if (pbVar16 <= pbVar17) goto LAB_0041e454;
          if (*pbVar17 != 0x10) {
            if (*pbVar17 != 0x18) goto LAB_0041e454;
            pbVar17 = pbVar17 + 1;
            *(byte **)(param_1 + 8) = pbVar17;
            if (pbVar17 < pbVar16) goto LAB_0041e5a0;
            goto LAB_0041e814;
          }
          pbVar17 = pbVar17 + 1;
          *(byte **)(param_1 + 8) = pbVar17;
          if (pbVar17 < pbVar16) goto LAB_0041e4cc;
LAB_0041e680:
          uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c);
          if ((uVar12 & 1) == 0) goto LAB_0041ec48;
        } while( true );
      }
      break;
    case 3:
      if ((uVar12 & 7) == 0) {
        pbVar17 = *(byte **)(param_1 + 8);
        pbVar16 = *(byte **)(param_1 + 0x10);
        if (pbVar17 < pbVar16) {
LAB_0041e5a0:
          if ((char)*pbVar17 < '\0') goto LAB_0041e814;
                    /* try { // try from 0041e5ac to 0051e5ff has its CatchHandler @ 0041e608 */
          pbVar14 = pbVar17 + 1;
          local_7c = (uint)*pbVar17;
          *(byte **)(param_1 + 8) = pbVar14;
        }
        else {
LAB_0041e814:
          uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c);
          if ((uVar12 & 1) == 0) goto LAB_0041ec48;
          pbVar14 = *(byte **)(param_1 + 8);
          pbVar16 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0x10) = local_7c;
                    /* try { // try from 0041e83c to 0051e8db has its CatchHandler @ 0041e83c
                       catch(type#1 @ 00000000) { ... } // from try @ 0041e83c with catch @ 0041e83c
                       catch(type#1 @ 00000000) { ... } // from try @ 0041e8e0 with catch @ 0041e83c
                       catch(type#1 @ 00000000) { ... } // from try @ 0041e97c with catch @ 0041e83c
                        */
        *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 2;
        if ((pbVar16 <= pbVar14) || (*pbVar14 != 0x20)) goto LAB_0041e454;
        pbVar14 = pbVar14 + 1;
        *(byte **)(param_1 + 8) = pbVar14;
        if (pbVar14 < pbVar16) {
LAB_0041e52c:
          if ((char)*pbVar14 < '\0') goto LAB_0041e860;
          pbVar17 = pbVar14 + 1;
          local_7c = (uint)*pbVar14;
          *(byte **)(param_1 + 8) = pbVar17;
        }
        else {
LAB_0041e860:
          uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c);
          if ((uVar12 & 1) == 0) goto LAB_0041ec48;
          pbVar17 = *(byte **)(param_1 + 8);
          pbVar16 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0x18) = local_7c;
        *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 8;
        if ((pbVar16 <= pbVar17) || (*pbVar17 != 0x28)) goto LAB_0041e454;
        pbVar17 = pbVar17 + 1;
        *(byte **)(param_1 + 8) = pbVar17;
        if (pbVar17 < pbVar16) {
LAB_0041e55c:
                    /* try { // try from 0041e55c to 0051e55f has its CatchHandler @ 0041e588 */
          if ((char)*pbVar17 < '\0') goto LAB_0041e8ac;
          pbVar14 = pbVar17 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0041e524 with catch @ 0041e56c
                        */
          local_7c = (uint)*pbVar17;
          *(byte **)(param_1 + 8) = pbVar14;
        }
        else {
LAB_0041e8ac:
          uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c);
          if ((uVar12 & 1) == 0) goto LAB_0041ec48;
          pbVar14 = *(byte **)(param_1 + 8);
          pbVar16 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0xc) = local_7c;
        *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 1;
                    /* try { // try from 0041e8dc to 0051e8df has its CatchHandler @ 0041e954 */
                    /* try { // try from 0041e8e0 to 0051e973 has its CatchHandler @ 0041e83c */
        if ((pbVar16 <= pbVar14) || (*pbVar14 != 0x30)) goto LAB_0041e454;
        pbVar14 = pbVar14 + 1;
        *(byte **)(param_1 + 8) = pbVar14;
        if (pbVar14 < pbVar16) {
LAB_0041e4fc:
          if ((char)*pbVar14 < '\0') goto LAB_0041e638;
          pbVar17 = pbVar14 + 1;
          local_7c = (uint)*pbVar14;
          *(byte **)(param_1 + 8) = pbVar17;
        }
        else {
LAB_0041e638:
          uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c);
          if ((uVar12 & 1) == 0) goto LAB_0041ec48;
          pbVar17 = *(byte **)(param_1 + 8);
          pbVar16 = *(byte **)(param_1 + 0x10);
        }
        this[0x1c] = (ParticleEmitterComponent)(local_7c != 0);
        *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 0x10;
        if ((pbVar16 <= pbVar17) || (*pbVar17 != 0x3a)) goto LAB_0041e454;
        do {
          *(byte **)(param_1 + 8) = pbVar17 + 1;
LAB_0041e904:
          iVar10 = *(int *)(this + 0x48);
          iVar13 = *(int *)(this + 0x4c);
          if (iVar10 < iVar13) {
            *(int *)(this + 0x48) = iVar10 + 1;
            this_00 = *(ParticleEmitter **)(*(long *)(this + 0x40) + (long)iVar10 * 8);
          }
          else {
            if (iVar13 == *(int *)(this + 0x50)) {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                        ((RepeatedPtrFieldBase *)(this + 0x40),iVar13 + 1);
              iVar10 = *(int *)(this + 0x48);
              iVar13 = *(int *)(this + 0x4c);
            }
            *(int *)(this + 0x4c) = iVar13 + 1;
            this_00 = operator_new(0x58);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0041e8dc with catch @ 0041e954
                        */
            *(long *)(this_00 + 0x38) = lVar7;
            *(undefined4 *)(this_00 + 0x50) = 0;
            *(undefined4 *)(this_00 + 0x28) = 0;
            *(long *)(this_00 + 0x18) = 0;
            *(long *)(this_00 + 0x20) = 0;
            *(long *)(this_00 + 8) = 0;
            *(long *)(this_00 + 0x10) = 0;
            *(ParticleEmitter **)(this_00 + 0x30) = this_00 + 0x40;
                    /* try { // try from 0041e974 to 0051e97b has its CatchHandler @ 0041e984 */
            *(undefined **)this_00 = puVar1;
                    /* try { // try from 0041e97c to 0051e987 has its CatchHandler @ 0041e83c */
            *(int *)(this + 0x48) = iVar10 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0041e974 with catch @ 0041e984
                        */
            *(ParticleEmitter **)(*(long *)(this + 0x40) + (long)iVar10 * 8) = this_00;
          }
                    /* try { // try from 0041e988 to 0051ea27 has its CatchHandler @ 0041e988
                       catch(type#1 @ 00000000) { ... } // from try @ 0041e988 with catch @ 0041e988
                       catch(type#1 @ 00000000) { ... } // from try @ 0041ea2c with catch @ 0041e988
                       catch(type#1 @ 00000000) { ... } // from try @ 0041eac8 with catch @ 0041e988
                        */
          pbVar17 = *(byte **)(param_1 + 8);
          if ((pbVar17 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar17)) {
            local_7c = (uint)*pbVar17;
            *(byte **)(param_1 + 8) = pbVar17 + 1;
          }
          else {
            uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c)
            ;
            if ((uVar12 & 1) == 0) goto LAB_0041ec48;
          }
          iVar10 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar10 + 1;
          if (*(int *)(param_1 + 0x3c) <= iVar10) goto LAB_0041ec48;
          iVar10 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
          uVar12 = ParticleEmitter::MergePartialFromCodedStream(this_00,param_1);
          if (((uVar12 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0041ec48;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar10);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pbVar17 = *(byte **)(param_1 + 8);
          pbVar14 = *(byte **)(param_1 + 0x10);
          if (pbVar14 <= pbVar17) goto LAB_0041e454;
                    /* try { // try from 0041ea28 to 0051ea2b has its CatchHandler @ 0041eaa0 */
                    /* try { // try from 0041ea2c to 0051eabf has its CatchHandler @ 0041e988 */
        } while (*pbVar17 == 0x3a);
        if (*pbVar17 != 0x40) goto LAB_0041e454;
        pbVar17 = pbVar17 + 1;
        *(byte **)(param_1 + 8) = pbVar17;
        if (pbVar17 < pbVar14) {
LAB_0041e5e0:
          if ((char)*pbVar17 < '\0') goto LAB_0041ea4c;
          pbVar16 = pbVar17 + 1;
          local_7c = (uint)*pbVar17;
          *(byte **)(param_1 + 8) = pbVar16;
        }
        else {
LAB_0041ea4c:
          uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c);
          if ((uVar12 & 1) == 0) goto LAB_0041ec48;
          pbVar16 = *(byte **)(param_1 + 8);
          pbVar14 = *(byte **)(param_1 + 0x10);
        }
        this[0x14] = (ParticleEmitterComponent)(local_7c != 0);
        uVar9 = *(uint *)(this + 0x88) | 4;
        *(uint *)(this + 0x88) = uVar9;
        if ((pbVar14 <= pbVar16) || (*pbVar16 != 0x4a)) goto LAB_0041e454;
        *(byte **)(param_1 + 8) = pbVar16 + 1;
LAB_0041ea98:
        pVVar18 = *(Vector3 **)(this + 0x78);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0041ea28 with catch @ 0041eaa0
                        */
        *(uint *)(this + 0x88) = uVar9 | 0x80;
        if (pVVar18 == (Vector3 *)0x0) {
          pVVar18 = operator_new(0x20);
          Vector3::Vector3(pVVar18);
          *(Vector3 **)(this + 0x78) = pVVar18;
        }
        pbVar17 = *(byte **)(param_1 + 8);
                    /* try { // try from 0041eac0 to 0051eac7 has its CatchHandler @ 0041ead0 */
                    /* try { // try from 0041eac8 to 0051ead3 has its CatchHandler @ 0041e988 */
        if ((pbVar17 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar17)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0041eac0 with catch @ 0041ead0
                        */
                    /* catch() { ... } // from try @ 0041eda8 with catch @ 0041ead4 */
          local_7c = (uint)*pbVar17;
          *(byte **)(param_1 + 8) = pbVar17 + 1;
        }
        else {
          uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c);
          if ((uVar12 & 1) == 0) goto LAB_0041ec48;
        }
        iVar10 = *(int *)(param_1 + 0x38);
                    /* try { // try from 0041eb00 to 0051eb13 has its CatchHandler @ 0041f2b0 */
        *(int *)(param_1 + 0x38) = iVar10 + 1;
        if (iVar10 < *(int *)(param_1 + 0x3c)) {
          iVar10 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
                    /* try { // try from 0041eb20 to 0051eb2b has its CatchHandler @ 0041f244 */
          uVar12 = Vector3::MergePartialFromCodedStream(pVVar18,param_1);
          if (((uVar12 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0041ec48;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar10);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar2 = *(char **)(param_1 + 8);
                    /* try { // try from 0041eb58 to 0051eb93 has its CatchHandler @ 0041f1e0 */
          if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == 'R')) {
            *(char **)(param_1 + 8) = pcVar2 + 1;
            goto LAB_0041eb6c;
          }
          goto LAB_0041e454;
        }
        goto LAB_0041ec48;
      }
      break;
    case 4:
                    /* try { // try from 0041e518 to 0051e523 has its CatchHandler @ 0041e588 */
      if ((uVar12 & 7) == 0) {
        pbVar14 = *(byte **)(param_1 + 8);
        pbVar16 = *(byte **)(param_1 + 0x10);
                    /* try { // try from 0041e524 to 0051e52b has its CatchHandler @ 0041e56c */
        if (pbVar14 < pbVar16) goto LAB_0041e52c;
        goto LAB_0041e860;
      }
      break;
    case 5:
      if ((uVar12 & 7) == 0) {
        pbVar17 = *(byte **)(param_1 + 8);
        pbVar16 = *(byte **)(param_1 + 0x10);
        if (pbVar17 < pbVar16) goto LAB_0041e55c;
        goto LAB_0041e8ac;
      }
      break;
    case 6:
      if ((uVar12 & 7) == 0) {
        pbVar14 = *(byte **)(param_1 + 8);
        pbVar16 = *(byte **)(param_1 + 0x10);
        if (pbVar14 < pbVar16) goto LAB_0041e4fc;
        goto LAB_0041e638;
      }
      break;
    case 7:
      if ((uVar9 & 7) == 2) goto LAB_0041e904;
      break;
    case 8:
      if ((uVar12 & 7) == 0) {
        pbVar17 = *(byte **)(param_1 + 8);
        pbVar14 = *(byte **)(param_1 + 0x10);
        if (pbVar17 < pbVar14) goto LAB_0041e5e0;
        goto LAB_0041ea4c;
      }
      break;
    case 9:
      if ((uVar9 & 7) == 2) {
        uVar9 = *(uint *)(this + 0x88);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0041e518 with catch @ 0041e588
                       catch(type#1 @ 00000000) { ... } // from try @ 0041e55c with catch @ 0041e588
                        */
        goto LAB_0041ea98;
      }
      break;
    case 10:
                    /* try { // try from 0041e600 to 0051e60b has its CatchHandler @ 0041e4a0 */
      if ((uVar9 & 7) != 2) break;
LAB_0041eb6c:
      pVVar18 = *(Vector3 **)(this + 0x80);
      *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 0x100;
      if (pVVar18 == (Vector3 *)0x0) {
        pVVar18 = operator_new(0x20);
        Vector3::Vector3(pVVar18);
        *(Vector3 **)(this + 0x80) = pVVar18;
      }
      pbVar17 = *(byte **)(param_1 + 8);
      if ((pbVar17 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar17)) {
        local_7c = (uint)*pbVar17;
        *(byte **)(param_1 + 8) = pbVar17 + 1;
      }
      else {
                    /* try { // try from 0041ebbc to 0051ebcf has its CatchHandler @ 0041f1dc */
        uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c);
        if ((uVar12 & 1) == 0) goto LAB_0041ec48;
      }
      iVar10 = *(int *)(param_1 + 0x38);
      *(int *)(param_1 + 0x38) = iVar10 + 1;
      if (*(int *)(param_1 + 0x3c) <= iVar10) goto LAB_0041ec48;
                    /* try { // try from 0041ebe0 to 0051ebeb has its CatchHandler @ 0041f1a4 */
      iVar10 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
      uVar12 = Vector3::MergePartialFromCodedStream(pVVar18,param_1);
      if (((uVar12 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0041ec48;
                    /* try { // try from 0041ec0c to 0051ec47 has its CatchHandler @ 0041f148 */
      google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar10);
      if (0 < *(int *)(param_1 + 0x38)) {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      }
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar11 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_0041ec54:
        if (*(long *)(lVar6 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar11);
        }
                    /* try { // try from 0041ec68 to 0051ec7b has its CatchHandler @ 0041f144 */
        return;
      }
      goto LAB_0041e454;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0041e5ac with catch @ 0041e608
                        */
    if ((uVar9 & 7) != 4) {
      uVar12 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar9);
      if ((uVar12 & 1) != 0) goto LAB_0041e454;
LAB_0041ec48:
      uVar11 = 0;
      goto LAB_0041ec54;
    }
  }
  else {
                    /* catch() { ... } // from try @ 0041e464 with catch @ 0041e484 */
    uVar9 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar12 = (ulong)uVar9;
    *(uint *)(param_1 + 0x20) = uVar9;
    if (uVar9 != 0) goto LAB_0041e494;
  }
LAB_0041ec50:
  uVar11 = 1;
  goto LAB_0041ec54;
}


