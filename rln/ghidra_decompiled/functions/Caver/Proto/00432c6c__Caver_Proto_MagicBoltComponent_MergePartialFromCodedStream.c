/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00432c6c
 * Function: Caver::Proto::MagicBoltComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(MagicBoltComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicBoltComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::MagicBoltComponent::MergePartialFromCodedStream
          (MagicBoltComponent *this,CodedInputStream *param_1)

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
  uint local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
LAB_00432ca0:
  pbVar9 = *(byte **)(param_1 + 8);
  if ((pbVar9 < *(byte **)(param_1 + 0x10)) && (bVar2 = *pbVar9, -1 < (char)bVar2)) {
    uVar7 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar9 + 1;
    if (bVar2 == 0) goto LAB_00432fc4;
LAB_00432ce0:
    uVar4 = (uint)uVar7;
    switch((int)(uVar7 >> 3)) {
    case 1:
      if ((uVar7 & 7) != 0) break;
      pbVar9 = *(byte **)(param_1 + 8);
      pbVar8 = *(byte **)(param_1 + 0x10);
      if ((pbVar8 <= pbVar9) || ((char)*pbVar9 < '\0')) {
        uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
        if ((uVar7 & 1) != 0) {
          pbVar10 = *(byte **)(param_1 + 8);
          pbVar8 = *(byte **)(param_1 + 0x10);
          goto LAB_00432de4;
        }
        goto LAB_00432fcc;
      }
      pbVar10 = pbVar9 + 1;
      local_4c = (uint)*pbVar9;
      *(byte **)(param_1 + 8) = pbVar10;
LAB_00432de4:
      *(uint *)(this + 0xc) = local_4c;
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 1;
                    /* try { // try from 00432e04 to 00532e2b has its CatchHandler @ 00432e44 */
      if ((pbVar10 < pbVar8) && (*pbVar10 == 0x10)) {
        pbVar10 = pbVar10 + 1;
        *(byte **)(param_1 + 8) = pbVar10;
        if (pbVar10 < pbVar8) goto LAB_00432d94;
        goto LAB_00432e18;
      }
      goto LAB_00432ca0;
    case 2:
      if ((uVar7 & 7) == 0) {
        pbVar10 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
        if (pbVar10 < pbVar8) {
LAB_00432d94:
          if ((char)*pbVar10 < '\0') goto LAB_00432e18;
          pbVar9 = pbVar10 + 1;
          local_4c = (uint)*pbVar10;
          *(byte **)(param_1 + 8) = pbVar9;
        }
        else {
LAB_00432e18:
          uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar7 & 1) == 0) goto LAB_00432fcc;
          pbVar9 = *(byte **)(param_1 + 8);
          pbVar8 = *(byte **)(param_1 + 0x10);
        }
                    /* try { // try from 00432e30 to 00532e33 has its CatchHandler @ 00432e54 */
                    /* try { // try from 00432e34 to 00532e4b has its CatchHandler @ 00432db0 */
        *(uint *)(this + 0x10) = local_4c;
        *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00432e04 with catch @ 00432e44
                        */
                    /* try { // try from 00432e4c to 00532e5f has its CatchHandler @ 00432e68 */
        if ((pbVar8 <= pbVar9) || (*pbVar9 != 0x18)) goto LAB_00432ca0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00432e30 with catch @ 00432e54
                        */
        pbVar9 = pbVar9 + 1;
        *(byte **)(param_1 + 8) = pbVar9;
                    /* try { // try from 00432e60 to 00532e6b has its CatchHandler @ 00432db0 */
        if (pbVar9 < pbVar8) {
LAB_00432d50:
          if ((char)*pbVar9 < '\0') goto LAB_00432e64;
          pbVar10 = pbVar9 + 1;
          local_4c = (uint)*pbVar9;
          *(byte **)(param_1 + 8) = pbVar10;
        }
        else {
LAB_00432e64:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00432e4c with catch @ 00432e68
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00432f2c with catch @ 00432e6c
                        */
          uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar7 & 1) == 0) goto LAB_00432fcc;
          pbVar10 = *(byte **)(param_1 + 8);
          pbVar8 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0x14) = local_4c;
        uVar4 = *(uint *)(this + 0x24) | 4;
        *(uint *)(this + 0x24) = uVar4;
        if ((pbVar8 <= pbVar10) || (*pbVar10 != 0x22)) goto LAB_00432ca0;
        *(byte **)(param_1 + 8) = pbVar10 + 1;
LAB_00432ea8:
        this_00 = *(FloatColor **)(this + 0x18);
        *(uint *)(this + 0x24) = uVar4 | 8;
        if (this_00 == (FloatColor *)0x0) {
          this_00 = operator_new(0x20);
                    /* try { // try from 00432ec0 to 00532ee7 has its CatchHandler @ 00432f08 */
          FloatColor::FloatColor(this_00);
          *(FloatColor **)(this + 0x18) = this_00;
        }
        pbVar9 = *(byte **)(param_1 + 8);
        if ((pbVar9 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar9)) {
          local_4c = (uint)*pbVar9;
                    /* try { // try from 00432eec to 00532eef has its CatchHandler @ 00432f20 */
          *(byte **)(param_1 + 8) = pbVar9 + 1;
                    /* try { // try from 00432ef0 to 00532ef7 has its CatchHandler @ 00432f18 */
        }
        else {
          uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar7 & 1) == 0) goto LAB_00432fcc;
        }
        iVar5 = *(int *)(param_1 + 0x38);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00432ec0 with catch @ 00432f08
                        */
                    /* try { // try from 00432f10 to 00532f2b has its CatchHandler @ 00432f3c */
        *(int *)(param_1 + 0x38) = iVar5 + 1;
        if (iVar5 < *(int *)(param_1 + 0x3c)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00432ef0 with catch @ 00432f18
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00432eec with catch @ 00432f20
                        */
          iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
                    /* try { // try from 00432f2c to 00532f3f has its CatchHandler @ 00432e6c */
          uVar7 = FloatColor::MergePartialFromCodedStream(this_00,param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00432f10 with catch @ 00432f3c
                        */
          if (((uVar7 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_00432fcc;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar1 = *(char **)(param_1 + 8);
          if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '-')) {
            *(char **)(param_1 + 8) = pcVar1 + 1;
            goto LAB_00432f7c;
          }
          goto LAB_00432ca0;
        }
        goto LAB_00432fcc;
      }
      break;
    case 3:
      if ((uVar7 & 7) == 0) {
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
        if (pbVar9 < pbVar8) goto LAB_00432d50;
        goto LAB_00432e64;
      }
      break;
    case 4:
      if ((uVar4 & 7) == 2) {
        uVar4 = *(uint *)(this + 0x24);
        goto LAB_00432ea8;
      }
      break;
    case 5:
      if ((uVar4 & 7) != 5) break;
LAB_00432f7c:
      uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(param_1,&local_4c);
      if ((uVar7 & 1) == 0) goto LAB_00432fcc;
      *(uint *)(this + 0x20) = local_4c;
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 0x10;
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar6 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_00432fd0:
        if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar6);
        }
        return;
      }
      goto LAB_00432ca0;
    }
    if ((uVar4 & 7) != 4) {
      uVar7 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar4);
      if ((uVar7 & 1) != 0) goto LAB_00432ca0;
LAB_00432fcc:
      uVar6 = 0;
      goto LAB_00432fd0;
    }
  }
  else {
    uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar7 = (ulong)uVar4;
    *(uint *)(param_1 + 0x20) = uVar4;
    if (uVar4 != 0) goto LAB_00432ce0;
  }
LAB_00432fc4:
  uVar6 = 1;
  goto LAB_00432fd0;
}


