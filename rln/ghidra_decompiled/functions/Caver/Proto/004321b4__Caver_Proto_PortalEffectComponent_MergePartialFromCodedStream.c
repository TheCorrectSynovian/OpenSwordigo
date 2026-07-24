/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004321b4
 * Function: Caver::Proto::PortalEffectComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(PortalEffectComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PortalEffectComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::PortalEffectComponent::MergePartialFromCodedStream
          (PortalEffectComponent *this,CodedInputStream *param_1)

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
  Vector3 *this_01;
  uint local_4c;
  long local_48;
  
                    /* catch() { ... } // from try @ 00432128 with catch @ 004321bc */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 004321e0 to 00532207 has its CatchHandler @ 0043220c */
LAB_004321e8:
  pbVar9 = *(byte **)(param_1 + 8);
  if ((pbVar9 < *(byte **)(param_1 + 0x10)) && (bVar2 = *pbVar9, -1 < (char)bVar2)) {
    uVar7 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar9 + 1;
                    /* catch() { ... } // from try @ 004321e0 with catch @ 0043220c */
    if (bVar2 == 0) goto LAB_0043252c;
LAB_00432228:
                    /* try { // try from 00432234 to 0053225b has its CatchHandler @ 004322b4 */
    uVar4 = (uint)uVar7;
    switch((int)(uVar7 >> 3)) {
    case 1:
      if ((uVar7 & 7) == 0) {
        pbVar10 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
        if ((pbVar8 <= pbVar10) || ((char)*pbVar10 < '\0')) {
          uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar7 & 1) != 0) {
            pbVar9 = *(byte **)(param_1 + 8);
            pbVar8 = *(byte **)(param_1 + 0x10);
            goto LAB_004322fc;
          }
          goto LAB_00432524;
        }
        pbVar9 = pbVar10 + 1;
        local_4c = (uint)*pbVar10;
        *(byte **)(param_1 + 8) = pbVar9;
LAB_004322fc:
                    /* try { // try from 00432300 to 00532367 has its CatchHandler @ 00431fc8 */
        *(uint *)(this + 0xc) = local_4c;
                    /* catch() { ... } // from try @ 004322d8 with catch @ 00432308 */
                    /* catch() { ... } // from try @ 00432084 with catch @ 0043230c
                       catch() { ... } // from try @ 00432170 with catch @ 0043230c */
        *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 1;
        if ((pbVar9 < pbVar8) && (*pbVar9 == 0x10)) {
          pbVar9 = pbVar9 + 1;
          *(byte **)(param_1 + 8) = pbVar9;
          if (pbVar9 < pbVar8) goto LAB_004322ac;
          goto LAB_00432330;
        }
        goto LAB_004321e8;
      }
      break;
    case 2:
      if ((uVar7 & 7) == 0) {
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 0043227c with catch @ 004322a8 */
        if (pbVar9 < pbVar8) {
LAB_004322ac:
          if ((char)*pbVar9 < '\0') goto LAB_00432330;
                    /* catch() { ... } // from try @ 00432234 with catch @ 004322b4 */
          pbVar10 = pbVar9 + 1;
          local_4c = (uint)*pbVar9;
          *(byte **)(param_1 + 8) = pbVar10;
        }
        else {
LAB_00432330:
          uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar7 & 1) == 0) goto LAB_00432524;
          pbVar10 = *(byte **)(param_1 + 8);
          pbVar8 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0x10) = local_4c;
        uVar4 = *(uint *)(this + 0x28) | 2;
        *(uint *)(this + 0x28) = uVar4;
        if ((pbVar8 <= pbVar10) || (*pbVar10 != 0x1a)) goto LAB_004321e8;
                    /* try { // try from 00432370 to 005323b7 has its CatchHandler @ 00432370
                       catch() { ... } // from try @ 00432370 with catch @ 00432370
                       catch() { ... } // from try @ 004323c8 with catch @ 00432370 */
        *(byte **)(param_1 + 8) = pbVar10 + 1;
LAB_00432374:
        this_00 = *(FloatColor **)(this + 0x18);
        *(uint *)(this + 0x28) = uVar4 | 4;
        if (this_00 == (FloatColor *)0x0) {
          this_00 = operator_new(0x20);
          FloatColor::FloatColor(this_00);
          *(FloatColor **)(this + 0x18) = this_00;
        }
        pbVar9 = *(byte **)(param_1 + 8);
        if ((pbVar9 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar9)) {
          local_4c = (uint)*pbVar9;
                    /* try { // try from 004323b8 to 005323c7 has its CatchHandler @ 00432474 */
          *(byte **)(param_1 + 8) = pbVar9 + 1;
        }
        else {
                    /* try { // try from 004323c8 to 005324e3 has its CatchHandler @ 00432370 */
          uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar7 & 1) == 0) goto LAB_00432524;
        }
        iVar5 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar5 + 1;
        if (iVar5 < *(int *)(param_1 + 0x3c)) {
          iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
          uVar7 = FloatColor::MergePartialFromCodedStream(this_00,param_1);
          if (((uVar7 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_00432524;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar1 = *(char **)(param_1 + 8);
          if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '\"')) {
            *(char **)(param_1 + 8) = pcVar1 + 1;
            goto LAB_00432448;
          }
          goto LAB_004321e8;
        }
        goto LAB_00432524;
      }
      break;
    case 3:
                    /* try { // try from 0043227c to 005322a3 has its CatchHandler @ 004322a8 */
      if ((uVar4 & 7) == 2) {
        uVar4 = *(uint *)(this + 0x28);
        goto LAB_00432374;
      }
      break;
    case 4:
      if ((uVar4 & 7) != 2) break;
LAB_00432448:
      this_01 = *(Vector3 **)(this + 0x20);
      *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 8;
      if (this_01 == (Vector3 *)0x0) {
        this_01 = operator_new(0x20);
        Vector3::Vector3(this_01);
        *(Vector3 **)(this + 0x20) = this_01;
      }
      pbVar9 = *(byte **)(param_1 + 8);
                    /* catch() { ... } // from try @ 004323b8 with catch @ 00432474 */
      if ((pbVar9 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar9)) {
        local_4c = (uint)*pbVar9;
        *(byte **)(param_1 + 8) = pbVar9 + 1;
      }
      else {
        uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
        if ((uVar7 & 1) == 0) goto LAB_00432524;
      }
      iVar5 = *(int *)(param_1 + 0x38);
      *(int *)(param_1 + 0x38) = iVar5 + 1;
      if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_00432524;
      iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
      uVar7 = Vector3::MergePartialFromCodedStream(this_01,param_1);
      if (((uVar7 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_00432524;
                    /* try { // try from 004324ec to 00532553 has its CatchHandler @ 004324ec
                       catch(type#1 @ 00000000) { ... } // from try @ 004324ec with catch @ 004324ec
                       catch(type#1 @ 00000000) { ... } // from try @ 0043261c with catch @ 004324ec
                       catch(type#1 @ 00000000) { ... } // from try @ 00432664 with catch @ 004324ec
                        */
      google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
      if (0 < *(int *)(param_1 + 0x38)) {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      }
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar6 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_00432530:
        if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar6);
        }
                    /* try { // try from 00432554 to 0053261b has its CatchHandler @ 00432658 */
        return;
      }
      goto LAB_004321e8;
    }
    if ((uVar4 & 7) != 4) {
                    /* try { // try from 004322d8 to 005322ff has its CatchHandler @ 00432308 */
      uVar7 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar4);
      if ((uVar7 & 1) != 0) goto LAB_004321e8;
LAB_00432524:
      uVar6 = 0;
      goto LAB_00432530;
    }
  }
  else {
    uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar7 = (ulong)uVar4;
    *(uint *)(param_1 + 0x20) = uVar4;
    if (uVar4 != 0) goto LAB_00432228;
  }
LAB_0043252c:
  uVar6 = 1;
  goto LAB_00432530;
}


