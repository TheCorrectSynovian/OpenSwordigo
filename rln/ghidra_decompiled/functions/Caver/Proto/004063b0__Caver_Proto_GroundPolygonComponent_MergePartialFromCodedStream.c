/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004063b0
 * Function: Caver::Proto::GroundPolygonComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(GroundPolygonComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundPolygonComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::GroundPolygonComponent::MergePartialFromCodedStream
          (GroundPolygonComponent *this,CodedInputStream *param_1)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  Vector2 *this_00;
  Polygon *this_01;
  Program *this_02;
  uint local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
LAB_004063ec:
  do {
    pbVar10 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar10) || (bVar2 = *pbVar10, (char)bVar2 < '\0')) {
                    /* try { // try from 0040641c to 00506467 has its CatchHandler @ 0040641c
                       catch() { ... } // from try @ 0040641c with catch @ 0040641c
                       catch() { ... } // from try @ 004064b4 with catch @ 0040641c */
      uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar7 = (ulong)uVar4;
      *(uint *)(param_1 + 0x20) = uVar4;
      if (uVar4 != 0) goto LAB_0040642c;
LAB_00406984:
      uVar6 = 1;
      goto LAB_00406988;
    }
    uVar7 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar10 + 1;
    if (bVar2 == 0) goto LAB_00406984;
LAB_0040642c:
    uVar4 = (uint)uVar7;
    switch((int)(uVar7 >> 3)) {
    case 1:
      if ((uVar4 & 7) == 2) {
        while( true ) {
          iVar5 = *(int *)(this + 0x20);
          iVar8 = *(int *)(this + 0x24);
                    /* try { // try from 00406468 to 00506483 has its CatchHandler @ 0040657c */
          if (iVar5 < iVar8) {
            *(int *)(this + 0x20) = iVar5 + 1;
            this_00 = *(Vector2 **)(*(long *)(this + 0x18) + (long)iVar5 * 8);
          }
          else {
                    /* try { // try from 00406484 to 0050649b has its CatchHandler @ 004064fc */
            if (iVar8 == *(int *)(this + 0x28)) {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                        ((RepeatedPtrFieldBase *)(this + 0x18),iVar8 + 1);
                    /* try { // try from 0040649c to 005064b3 has its CatchHandler @ 004064f8 */
              iVar8 = *(int *)(this + 0x24);
            }
            *(int *)(this + 0x24) = iVar8 + 1;
            this_00 = operator_new(0x18);
                    /* try { // try from 004064b4 to 0050657f has its CatchHandler @ 0040641c */
            Vector2::Vector2(this_00);
            iVar5 = *(int *)(this + 0x20);
            *(int *)(this + 0x20) = iVar5 + 1;
            *(Vector2 **)(*(long *)(this + 0x18) + (long)iVar5 * 8) = this_00;
          }
          pbVar10 = *(byte **)(param_1 + 8);
          if ((pbVar10 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar10)) {
            local_5c = (uint)*pbVar10;
            *(byte **)(param_1 + 8) = pbVar10 + 1;
          }
          else {
                    /* catch() { ... } // from try @ 0040649c with catch @ 004064f8 */
                    /* catch() { ... } // from try @ 00406484 with catch @ 004064fc */
            uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
            if ((uVar7 & 1) == 0) goto LAB_0040697c;
          }
          iVar5 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar5 + 1;
          if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_0040697c;
          iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_5c);
          uVar7 = Vector2::MergePartialFromCodedStream(this_00,param_1);
          if (((uVar7 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0040697c;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar1 = *(char **)(param_1 + 8);
          if (*(char **)(param_1 + 0x10) <= pcVar1) goto LAB_004063ec;
          if (*pcVar1 != '\n') break;
          *(char **)(param_1 + 8) = pcVar1 + 1;
        }
                    /* catch() { ... } // from try @ 00406468 with catch @ 0040657c */
        if (*pcVar1 == '\x12') {
          *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_00406618:
          this_01 = *(Polygon **)(this + 0x50);
          *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 4;
          if (this_01 == (Polygon *)0x0) {
            this_01 = operator_new(0x50);
            Polygon::Polygon(this_01);
            *(Polygon **)(this + 0x50) = this_01;
          }
          pbVar10 = *(byte **)(param_1 + 8);
          if ((pbVar10 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar10)) {
            local_5c = (uint)*pbVar10;
            *(byte **)(param_1 + 8) = pbVar10 + 1;
          }
          else {
            uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
            if ((uVar7 & 1) == 0) goto LAB_0040697c;
          }
          iVar5 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar5 + 1;
          if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_0040697c;
          iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_5c);
          uVar7 = Polygon::MergePartialFromCodedStream(this_01,param_1);
          if (((uVar7 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0040697c;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pbVar10 = *(byte **)(param_1 + 8);
          pbVar9 = *(byte **)(param_1 + 0x10);
          if ((pbVar10 < pbVar9) && (*pbVar10 == 0x18)) {
            pbVar10 = pbVar10 + 1;
            *(byte **)(param_1 + 8) = pbVar10;
            if (pbVar10 < pbVar9) {
LAB_004065b0:
              if ((char)*pbVar10 < '\0') goto LAB_00406738;
              pbVar11 = pbVar10 + 1;
              local_5c = (uint)*pbVar10;
              *(byte **)(param_1 + 8) = pbVar11;
            }
            else {
LAB_00406738:
              uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                (param_1,&local_5c);
              if ((uVar7 & 1) == 0) goto LAB_0040697c;
              pbVar11 = *(byte **)(param_1 + 8);
              pbVar9 = *(byte **)(param_1 + 0x10);
            }
            this[0x58] = (GroundPolygonComponent)(local_5c != 0);
            *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 8;
                    /* try { // try from 00406770 to 005067b3 has its CatchHandler @ 00406770
                       catch() { ... } // from try @ 00406770 with catch @ 00406770
                       catch() { ... } // from try @ 004067e4 with catch @ 00406770 */
            if ((pbVar11 < pbVar9) && (*pbVar11 == 0x25)) {
              *(byte **)(param_1 + 8) = pbVar11 + 1;
LAB_00406784:
              uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                (param_1,&local_5c);
              if ((uVar7 & 1) == 0) goto LAB_0040697c;
              *(uint *)(this + 0x5c) = local_5c;
              *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 0x10;
              pcVar1 = *(char **)(param_1 + 8);
                    /* try { // try from 004067b4 to 005067cf has its CatchHandler @ 00406890 */
              if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '-')) {
                *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_004067c8:
                    /* try { // try from 004067d0 to 005067e3 has its CatchHandler @ 00406820 */
                uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                  (param_1,&local_5c);
                if ((uVar7 & 1) == 0) goto LAB_0040697c;
                *(uint *)(this + 0x60) = local_5c;
                    /* try { // try from 004067e4 to 00506893 has its CatchHandler @ 00406770 */
                uVar4 = *(uint *)(this + 0x6c) | 0x20;
                *(uint *)(this + 0x6c) = uVar4;
                pcVar1 = *(char **)(param_1 + 8);
                if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '2')) {
                  *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_0040680c:
                  this_02 = *(Program **)(this + 0x10);
                  *(uint *)(this + 0x6c) = uVar4 | 1;
                  if (this_02 == (Program *)0x0) {
                    /* catch() { ... } // from try @ 004067d0 with catch @ 00406820 */
                    this_02 = operator_new(0x30);
                    Program::Program(this_02);
                    *(Program **)(this + 0x10) = this_02;
                  }
                  pbVar10 = *(byte **)(param_1 + 8);
                  if ((pbVar10 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar10)) {
                    local_5c = (uint)*pbVar10;
                    *(byte **)(param_1 + 8) = pbVar10 + 1;
                  }
                  else {
                    uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                      (param_1,&local_5c);
                    if ((uVar7 & 1) == 0) goto LAB_0040697c;
                  }
                  iVar5 = *(int *)(param_1 + 0x38);
                  *(int *)(param_1 + 0x38) = iVar5 + 1;
                  if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_0040697c;
                  iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_5c);
                    /* catch() { ... } // from try @ 004067b4 with catch @ 00406890 */
                  uVar7 = Program::MergePartialFromCodedStream(this_02,param_1);
                  if (((uVar7 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                  goto LAB_0040697c;
                  google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
                  if (0 < *(int *)(param_1 + 0x38)) {
                    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                  }
                  pcVar1 = *(char **)(param_1 + 8);
                  if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '=')) {
                    *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_004068e0:
                    uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                      (param_1,&local_5c);
                    if ((uVar7 & 1) == 0) goto LAB_0040697c;
                    *(uint *)(this + 100) = local_5c;
                    *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 0x40;
                    pbVar10 = *(byte **)(param_1 + 8);
                    pbVar9 = *(byte **)(param_1 + 0x10);
                    if ((pbVar10 < pbVar9) && (*pbVar10 == 0x40)) {
                      pbVar10 = pbVar10 + 1;
                      *(byte **)(param_1 + 8) = pbVar10;
                      if (pbVar10 < pbVar9) {
LAB_004065f0:
                        if ((char)*pbVar10 < '\0') goto LAB_0040692c;
                        pbVar11 = pbVar10 + 1;
                        local_5c = (uint)*pbVar10;
                        *(byte **)(param_1 + 8) = pbVar11;
                      }
                      else {
LAB_0040692c:
                        uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                          (param_1,&local_5c);
                        if ((uVar7 & 1) == 0) goto LAB_0040697c;
                        pbVar11 = *(byte **)(param_1 + 8);
                        pbVar9 = *(byte **)(param_1 + 0x10);
                      }
                      this[0x68] = (GroundPolygonComponent)(local_5c != 0);
                      *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 0x80;
                      if ((pbVar11 == pbVar9) && (*(int *)(param_1 + 0x2c) != 0)) {
                        uVar6 = 1;
                        *(undefined4 *)(param_1 + 0x20) = 0;
                        param_1[0x24] = (CodedInputStream)0x1;
                        goto LAB_00406988;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_004063ec;
      }
      break;
    case 2:
      if ((uVar4 & 7) == 2) goto LAB_00406618;
      break;
    case 3:
      if ((uVar7 & 7) == 0) {
        pbVar10 = *(byte **)(param_1 + 8);
        pbVar9 = *(byte **)(param_1 + 0x10);
        if (pbVar10 < pbVar9) goto LAB_004065b0;
        goto LAB_00406738;
      }
      break;
    case 4:
      if ((uVar4 & 7) == 5) goto LAB_00406784;
      break;
    case 5:
      if ((uVar4 & 7) == 5) goto LAB_004067c8;
      break;
    case 6:
      if ((uVar4 & 7) == 2) {
        uVar4 = *(uint *)(this + 0x6c);
        goto LAB_0040680c;
      }
      break;
    case 7:
      if ((uVar4 & 7) == 5) goto LAB_004068e0;
      break;
    case 8:
      if ((uVar7 & 7) == 0) {
        pbVar10 = *(byte **)(param_1 + 8);
        pbVar9 = *(byte **)(param_1 + 0x10);
        if (pbVar10 < pbVar9) goto LAB_004065f0;
        goto LAB_0040692c;
      }
    }
    if ((uVar4 & 7) == 4) goto LAB_00406984;
    uVar7 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar4);
    if ((uVar7 & 1) == 0) {
LAB_0040697c:
      uVar6 = 0;
LAB_00406988:
      if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar6);
      }
      return;
    }
  } while( true );
}


