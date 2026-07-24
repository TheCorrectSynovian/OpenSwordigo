/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00421170
 * Function: Caver::Proto::FireEmitterComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(FireEmitterComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FireEmitterComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::FireEmitterComponent::MergePartialFromCodedStream
          (FireEmitterComponent *this,CodedInputStream *param_1)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  Vector2 *this_00;
  FloatColor *this_01;
  Vector3 *pVVar11;
  uint local_4c;
  long local_48;
  
                    /* try { // try from 00421184 to 00521273 has its CatchHandler @ 00421048 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
LAB_004211a4:
  do {
    pbVar9 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar9) || (bVar2 = *pbVar9, (char)bVar2 < '\0')) {
      uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar7 = (ulong)uVar4;
      *(uint *)(param_1 + 0x20) = uVar4;
      if (uVar4 != 0) goto LAB_004211e4;
LAB_00421768:
      uVar6 = 1;
      goto LAB_0042176c;
    }
    uVar7 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar9 + 1;
    if (bVar2 == 0) goto LAB_00421768;
LAB_004211e4:
    uVar4 = (uint)uVar7;
    switch((int)(uVar7 >> 3)) {
    case 1:
      if ((uVar7 & 7) == 0) {
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
        if ((pbVar9 < pbVar8) && (-1 < (char)*pbVar9)) {
          pbVar10 = pbVar9 + 1;
          local_4c = (uint)*pbVar9;
          *(byte **)(param_1 + 8) = pbVar10;
        }
        else {
          uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar7 & 1) == 0) goto LAB_00421760;
          pbVar10 = *(byte **)(param_1 + 8);
          pbVar8 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0xc) = local_4c;
        uVar4 = *(uint *)(this + 0x40) | 1;
        *(uint *)(this + 0x40) = uVar4;
        if ((pbVar10 < pbVar8) && (*pbVar10 == 0x12)) {
          *(byte **)(param_1 + 8) = pbVar10 + 1;
LAB_00421334:
          this_00 = *(Vector2 **)(this + 0x18);
          *(uint *)(this + 0x40) = uVar4 | 4;
          if (this_00 == (Vector2 *)0x0) {
            this_00 = operator_new(0x18);
            Vector2::Vector2(this_00);
            *(Vector2 **)(this + 0x18) = this_00;
          }
          pbVar9 = *(byte **)(param_1 + 8);
          if ((pbVar9 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar9)) {
            local_4c = (uint)*pbVar9;
            *(byte **)(param_1 + 8) = pbVar9 + 1;
          }
          else {
            uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
            if ((uVar7 & 1) == 0) goto LAB_00421760;
          }
          iVar5 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar5 + 1;
          if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_00421760;
          iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
          uVar7 = Vector2::MergePartialFromCodedStream(this_00,param_1);
          if (((uVar7 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_00421760;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pbVar9 = *(byte **)(param_1 + 8);
          pbVar8 = *(byte **)(param_1 + 0x10);
          if ((pbVar9 < pbVar8) && (*pbVar9 == 0x18)) {
            pbVar9 = pbVar9 + 1;
            *(byte **)(param_1 + 8) = pbVar9;
            if (pbVar9 < pbVar8) {
LAB_0042129c:
                    /* try { // try from 0042129c to 0052130f has its CatchHandler @ 00421048 */
                    /* catch() { ... } // from try @ 00421274 with catch @ 004212a0 */
              if ((char)*pbVar9 < '\0') goto LAB_00421410;
                    /* catch() { ... } // from try @ 004210c0 with catch @ 004212a4
                       catch() { ... } // from try @ 0042115c with catch @ 004212a4 */
              pbVar10 = pbVar9 + 1;
              local_4c = (uint)*pbVar9;
              *(byte **)(param_1 + 8) = pbVar10;
            }
            else {
LAB_00421410:
              uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                (param_1,&local_4c);
              if ((uVar7 & 1) == 0) goto LAB_00421760;
              pbVar10 = *(byte **)(param_1 + 8);
              pbVar8 = *(byte **)(param_1 + 0x10);
            }
            *(uint *)(this + 0x10) = local_4c;
            uVar4 = *(uint *)(this + 0x40) | 2;
            *(uint *)(this + 0x40) = uVar4;
            if ((pbVar10 < pbVar8) && (*pbVar10 == 0x2a)) {
              *(byte **)(param_1 + 8) = pbVar10 + 1;
LAB_00421454:
              this_01 = *(FloatColor **)(this + 0x28);
              *(uint *)(this + 0x40) = uVar4 | 0x10;
              if (this_01 == (FloatColor *)0x0) {
                this_01 = operator_new(0x20);
                FloatColor::FloatColor(this_01);
                *(FloatColor **)(this + 0x28) = this_01;
              }
              pbVar9 = *(byte **)(param_1 + 8);
              if ((pbVar9 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar9)) {
                local_4c = (uint)*pbVar9;
                *(byte **)(param_1 + 8) = pbVar9 + 1;
              }
              else {
                uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                  (param_1,&local_4c);
                if ((uVar7 & 1) == 0) goto LAB_00421760;
              }
              iVar5 = *(int *)(param_1 + 0x38);
              *(int *)(param_1 + 0x38) = iVar5 + 1;
              if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_00421760;
              iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
              uVar7 = FloatColor::MergePartialFromCodedStream(this_01,param_1);
              if (((uVar7 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_00421760;
              google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
              if (0 < *(int *)(param_1 + 0x38)) {
                *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
              }
              pcVar1 = *(char **)(param_1 + 8);
              if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '5')) {
                *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_00421528:
                uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                  (param_1,&local_4c);
                if ((uVar7 & 1) == 0) goto LAB_00421760;
                *(uint *)(this + 0x30) = local_4c;
                *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x20;
                pcVar1 = *(char **)(param_1 + 8);
                if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '=')) {
                  *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_0042156c:
                  uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                    (param_1,&local_4c);
                  if ((uVar7 & 1) == 0) goto LAB_00421760;
                  *(uint *)(this + 0x34) = local_4c;
                  uVar4 = *(uint *)(this + 0x40) | 0x40;
                  *(uint *)(this + 0x40) = uVar4;
                  pcVar1 = *(char **)(param_1 + 8);
                  if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == 'B')) {
                    *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_004215b0:
                    pVVar11 = *(Vector3 **)(this + 0x38);
                    *(uint *)(this + 0x40) = uVar4 | 0x80;
                    if (pVVar11 == (Vector3 *)0x0) {
                      pVVar11 = operator_new(0x20);
                      Vector3::Vector3(pVVar11);
                      *(Vector3 **)(this + 0x38) = pVVar11;
                    }
                    pbVar9 = *(byte **)(param_1 + 8);
                    if ((pbVar9 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar9)) {
                      local_4c = (uint)*pbVar9;
                      *(byte **)(param_1 + 8) = pbVar9 + 1;
                    }
                    else {
                      uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                        (param_1,&local_4c);
                      if ((uVar7 & 1) == 0) goto LAB_00421760;
                    }
                    iVar5 = *(int *)(param_1 + 0x38);
                    *(int *)(param_1 + 0x38) = iVar5 + 1;
                    if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_00421760;
                    iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
                    uVar7 = Vector3::MergePartialFromCodedStream(pVVar11,param_1);
                    if (((uVar7 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                    goto LAB_00421760;
                    google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
                    if (0 < *(int *)(param_1 + 0x38)) {
                      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                    }
                    pcVar1 = *(char **)(param_1 + 8);
                    if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == 'J')) {
                      *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_00421684:
                      pVVar11 = *(Vector3 **)(this + 0x20);
                      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 8;
                      if (pVVar11 == (Vector3 *)0x0) {
                        pVVar11 = operator_new(0x20);
                        Vector3::Vector3(pVVar11);
                        *(Vector3 **)(this + 0x20) = pVVar11;
                      }
                      pbVar9 = *(byte **)(param_1 + 8);
                      if ((pbVar9 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar9)) {
                        local_4c = (uint)*pbVar9;
                        *(byte **)(param_1 + 8) = pbVar9 + 1;
                      }
                      else {
                        uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                          (param_1,&local_4c);
                        if ((uVar7 & 1) == 0) goto LAB_00421760;
                      }
                      iVar5 = *(int *)(param_1 + 0x38);
                      *(int *)(param_1 + 0x38) = iVar5 + 1;
                      if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_00421760;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004217b0 with catch @ 004216fc
                       catch(type#1 @ 00000000) { ... } // from try @ 004218b4 with catch @ 004216fc
                        */
                      iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
                      uVar7 = Vector3::MergePartialFromCodedStream(pVVar11,param_1);
                      if (((uVar7 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                      goto LAB_00421760;
                      google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
                      if (0 < *(int *)(param_1 + 0x38)) {
                        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                      }
                      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
                         (*(int *)(param_1 + 0x2c) != 0)) {
                        uVar6 = 1;
                        *(undefined4 *)(param_1 + 0x20) = 0;
                        param_1[0x24] = (CodedInputStream)0x1;
                        goto LAB_0042176c;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_004211a4;
      }
      break;
    case 2:
                    /* catch() { ... } // from try @ 00421110 with catch @ 00421250 */
      if ((uVar4 & 7) == 2) {
        uVar4 = *(uint *)(this + 0x40);
        goto LAB_00421334;
      }
      break;
    case 3:
      if ((uVar7 & 7) == 0) {
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
        if (pbVar9 < pbVar8) goto LAB_0042129c;
        goto LAB_00421410;
      }
      break;
    default:
      break;
    case 5:
      if ((uVar4 & 7) == 2) {
        uVar4 = *(uint *)(this + 0x40);
        goto LAB_00421454;
      }
      break;
    case 6:
      if ((uVar4 & 7) == 5) goto LAB_00421528;
      break;
    case 7:
      if ((uVar4 & 7) == 5) goto LAB_0042156c;
      break;
    case 8:
      if ((uVar4 & 7) == 2) {
        uVar4 = *(uint *)(this + 0x40);
                    /* try { // try from 00421274 to 0052129b has its CatchHandler @ 004212a0 */
        goto LAB_004215b0;
      }
      break;
    case 9:
      if ((uVar4 & 7) == 2) goto LAB_00421684;
    }
    if ((uVar4 & 7) == 4) goto LAB_00421768;
    uVar7 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar4);
    if ((uVar7 & 1) == 0) {
LAB_00421760:
                    /* try { // try from 00421760 to 00521763 has its CatchHandler @ 00421828 */
      uVar6 = 0;
LAB_0042176c:
      if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar6);
      }
      return;
    }
  } while( true );
}


