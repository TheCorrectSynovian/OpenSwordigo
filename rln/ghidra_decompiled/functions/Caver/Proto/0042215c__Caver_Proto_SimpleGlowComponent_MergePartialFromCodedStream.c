/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042215c
 * Function: Caver::Proto::SimpleGlowComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(SimpleGlowComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SimpleGlowComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::SimpleGlowComponent::MergePartialFromCodedStream
          (SimpleGlowComponent *this,CodedInputStream *param_1)

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
  FloatColor *this_00;
  Vector2 *this_01;
  uint local_4c;
  long local_48;
  
                    /* try { // try from 00422170 to 00522183 has its CatchHandler @ 004226d8 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
LAB_00422190:
  do {
    pbVar9 = *(byte **)(param_1 + 8);
                    /* try { // try from 00422194 to 0052219f has its CatchHandler @ 004226a0 */
    if ((*(byte **)(param_1 + 0x10) <= pbVar9) || (bVar2 = *pbVar9, (char)bVar2 < '\0')) {
                    /* try { // try from 004221c0 to 005221fb has its CatchHandler @ 00422644 */
      uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar7 = (ulong)uVar4;
      *(uint *)(param_1 + 0x20) = uVar4;
      if (uVar4 != 0) goto LAB_004221d0;
LAB_004225a8:
      uVar6 = 1;
                    /* catch() { ... } // from try @ 00422274 with catch @ 004225ac */
      goto LAB_004225b4;
    }
    uVar7 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar9 + 1;
    if (bVar2 == 0) goto LAB_004225a8;
LAB_004221d0:
    uVar4 = (uint)uVar7;
    switch((int)(uVar7 >> 3)) {
    case 1:
      if ((uVar4 & 7) == 2) {
        this_00 = *(FloatColor **)(this + 0x10);
        *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 1;
        if (this_00 == (FloatColor *)0x0) {
          this_00 = operator_new(0x20);
          FloatColor::FloatColor(this_00);
                    /* try { // try from 0042221c to 0052222f has its CatchHandler @ 00422640 */
          *(FloatColor **)(this + 0x10) = this_00;
        }
        pbVar9 = *(byte **)(param_1 + 8);
        if ((pbVar9 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar9)) {
          local_4c = (uint)*pbVar9;
                    /* try { // try from 00422240 to 0052224b has its CatchHandler @ 00422608 */
          *(byte **)(param_1 + 8) = pbVar9 + 1;
        }
        else {
          uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar7 & 1) == 0) goto LAB_004225b0;
        }
        iVar5 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar5 + 1;
        if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_004225b0;
        iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
        uVar7 = FloatColor::MergePartialFromCodedStream(this_00,param_1);
        if (((uVar7 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_004225b0;
        google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
        if (0 < *(int *)(param_1 + 0x38)) {
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
        }
        pcVar1 = *(char **)(param_1 + 8);
        if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '\x15')) {
          *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_00422374:
          uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                            (param_1,&local_4c);
          if ((uVar7 & 1) == 0) goto LAB_004225b0;
          *(uint *)(this + 0x18) = local_4c;
          *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 2;
          pbVar9 = *(byte **)(param_1 + 8);
          pbVar8 = *(byte **)(param_1 + 0x10);
          if ((pbVar9 < pbVar8) && (*pbVar9 == 0x18)) {
            pbVar9 = pbVar9 + 1;
            *(byte **)(param_1 + 8) = pbVar9;
            if (pbVar9 < pbVar8) {
LAB_0042226c:
              if ((char)*pbVar9 < '\0') goto LAB_004223c0;
                    /* try { // try from 00422274 to 005222af has its CatchHandler @ 004225ac */
              pbVar10 = pbVar9 + 1;
              local_4c = (uint)*pbVar9;
              *(byte **)(param_1 + 8) = pbVar10;
            }
            else {
LAB_004223c0:
              uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                (param_1,&local_4c);
              if ((uVar7 & 1) == 0) goto LAB_004225b0;
              pbVar10 = *(byte **)(param_1 + 8);
              pbVar8 = *(byte **)(param_1 + 0x10);
            }
            *(uint *)(this + 0x1c) = local_4c;
            *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 4;
            if ((pbVar10 < pbVar8) && (*pbVar10 == 0x25)) {
              *(byte **)(param_1 + 8) = pbVar10 + 1;
LAB_00422404:
              uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                (param_1,&local_4c);
              if ((uVar7 & 1) == 0) goto LAB_004225b0;
              *(uint *)(this + 0x20) = local_4c;
              *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 8;
              pcVar1 = *(char **)(param_1 + 8);
              if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '-')) {
                *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_00422448:
                uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                  (param_1,&local_4c);
                if ((uVar7 & 1) == 0) goto LAB_004225b0;
                *(uint *)(this + 0x30) = local_4c;
                *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x20;
                pcVar1 = *(char **)(param_1 + 8);
                if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '5')) {
                  *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_0042248c:
                  uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                    (param_1,&local_4c);
                  if ((uVar7 & 1) == 0) goto LAB_004225b0;
                  *(uint *)(this + 0x34) = local_4c;
                  uVar4 = *(uint *)(this + 0x38) | 0x40;
                  *(uint *)(this + 0x38) = uVar4;
                  pcVar1 = *(char **)(param_1 + 8);
                  if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == ':')) {
                    *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_004224d0:
                    this_01 = *(Vector2 **)(this + 0x28);
                    *(uint *)(this + 0x38) = uVar4 | 0x10;
                    if (this_01 == (Vector2 *)0x0) {
                      this_01 = operator_new(0x18);
                      Vector2::Vector2(this_01);
                      *(Vector2 **)(this + 0x28) = this_01;
                    }
                    pbVar9 = *(byte **)(param_1 + 8);
                    if ((pbVar9 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar9)) {
                      local_4c = (uint)*pbVar9;
                      *(byte **)(param_1 + 8) = pbVar9 + 1;
                    }
                    else {
                      uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                        (param_1,&local_4c);
                      if ((uVar7 & 1) == 0) goto LAB_004225b0;
                    }
                    iVar5 = *(int *)(param_1 + 0x38);
                    *(int *)(param_1 + 0x38) = iVar5 + 1;
                    if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_004225b0;
                    iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
                    uVar7 = Vector2::MergePartialFromCodedStream(this_01,param_1);
                    if (((uVar7 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                    goto LAB_004225b0;
                    google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
                    if (0 < *(int *)(param_1 + 0x38)) {
                      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                    }
                    if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
                       (*(int *)(param_1 + 0x2c) != 0)) {
                      uVar6 = 1;
                      *(undefined4 *)(param_1 + 0x20) = 0;
                      param_1[0x24] = (CodedInputStream)0x1;
                      goto LAB_004225b4;
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_00422190;
      }
      break;
    case 2:
      if ((uVar4 & 7) == 5) goto LAB_00422374;
      break;
    case 3:
      if ((uVar7 & 7) == 0) {
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
        if (pbVar9 < pbVar8) goto LAB_0042226c;
        goto LAB_004223c0;
      }
      break;
    case 4:
      if ((uVar4 & 7) == 5) goto LAB_00422404;
      break;
    case 5:
      if ((uVar4 & 7) == 5) goto LAB_00422448;
      break;
    case 6:
                    /* try { // try from 004222b0 to 005228e7 has its CatchHandler @ 00421f10 */
      if ((uVar4 & 7) == 5) goto LAB_0042248c;
      break;
    case 7:
      if ((uVar4 & 7) == 2) {
        uVar4 = *(uint *)(this + 0x38);
        goto LAB_004224d0;
      }
    }
    if ((uVar4 & 7) == 4) goto LAB_004225a8;
    uVar7 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar4);
    if ((uVar7 & 1) == 0) {
LAB_004225b0:
      uVar6 = 0;
LAB_004225b4:
      if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar6);
      }
      return;
    }
  } while( true );
}


