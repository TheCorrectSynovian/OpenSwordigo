/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00410994
 * Function: Caver::Proto::ShadowComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(ShadowComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShadowComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::ShadowComponent::MergePartialFromCodedStream
          (ShadowComponent *this,CodedInputStream *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  Vector3 *this_00;
  uint local_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
LAB_004109c0:
  do {
    pbVar1 = *(byte **)(param_1 + 8);
                    /* catch() { ... } // from try @ 0040fd38 with catch @ 004109c8
                       catch() { ... } // from try @ 00410894 with catch @ 004109c8 */
                    /* catch() { ... } // from try @ 00410a7c with catch @ 004109cc */
    if ((*(byte **)(param_1 + 0x10) <= pbVar1) || (bVar3 = *pbVar1, (char)bVar3 < '\0')) {
      uVar6 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar9 = uVar6 & 0xffffffff;
      *(int *)(param_1 + 0x20) = (int)uVar6;
      if ((int)uVar6 != 0) goto LAB_00410a00;
LAB_00410bc8:
      uVar7 = 1;
      goto LAB_00410bd4;
    }
    uVar9 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
    *(byte **)(param_1 + 8) = pbVar1 + 1;
                    /* try { // try from 004109e4 to 005109eb has its CatchHandler @ 00410a88 */
    if (bVar3 == 0) goto LAB_00410bc8;
LAB_00410a00:
    iVar5 = (int)(uVar9 >> 3);
    uVar8 = (uint)uVar9;
    if (iVar5 != 1) {
      if (iVar5 == 2) {
                    /* catch() { ... } // from try @ 00410a18 with catch @ 00410a30 */
        if ((uVar8 & 7) == 5) {
LAB_00410a90:
                    /* try { // try from 00410a98 to 00510aa3 has its CatchHandler @ 00410aa4 */
          uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                            (param_1,&local_4c);
          if ((uVar6 & 1) == 0) goto LAB_00410bd0;
                    /* catch() { ... } // from try @ 00410a98 with catch @ 00410aa4 */
                    /* try { // try from 00410aa8 to 00510aab has its CatchHandler @ 00410ab0 */
          *(uint *)(this + 0x10) = local_4c;
          uVar8 = *(uint *)(this + 0x20) | 2;
                    /* catch() { ... } // from try @ 00410aa8 with catch @ 00410ab0 */
          *(uint *)(this + 0x20) = uVar8;
                    /* catch() { ... } // from try @ 00410b64 with catch @ 00410ab4 */
          pcVar2 = *(char **)(param_1 + 8);
          if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x1a')) {
                    /* try { // try from 00410acc to 00510ad3 has its CatchHandler @ 00410b70 */
            *(char **)(param_1 + 8) = pcVar2 + 1;
            goto LAB_00410ad4;
          }
        }
        else {
LAB_00410b24:
          if ((uVar8 & 7) == 4) goto LAB_00410bc8;
          uVar6 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar8);
          if ((uVar6 & 1) == 0) {
LAB_00410bd0:
            uVar7 = 0;
            goto LAB_00410bd4;
          }
        }
      }
      else {
                    /* try { // try from 00410a18 to 00510a23 has its CatchHandler @ 00410a30 */
        if ((iVar5 != 3) || ((uVar8 & 7) != 2)) goto LAB_00410b24;
        uVar8 = *(uint *)(this + 0x20);
LAB_00410ad4:
        this_00 = *(Vector3 **)(this + 0x18);
        *(uint *)(this + 0x20) = uVar8 | 4;
        if (this_00 == (Vector3 *)0x0) {
          this_00 = operator_new(0x20);
          Vector3::Vector3(this_00);
          *(Vector3 **)(this + 0x18) = this_00;
        }
        pbVar1 = *(byte **)(param_1 + 8);
                    /* try { // try from 00410b00 to 00510b0b has its CatchHandler @ 00410b18 */
        if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
          local_4c = (uint)*pbVar1;
                    /* catch() { ... } // from try @ 00410b00 with catch @ 00410b18 */
          *(byte **)(param_1 + 8) = pbVar1 + 1;
        }
        else {
                    /* try { // try from 00410b3c to 00510b63 has its CatchHandler @ 00410b6c */
          uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar6 & 1) == 0) goto LAB_00410bd0;
        }
        iVar5 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar5 + 1;
        if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_00410bd0;
                    /* try { // try from 00410b64 to 00510b7f has its CatchHandler @ 00410ab4 */
        iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
                    /* catch() { ... } // from try @ 00410b3c with catch @ 00410b6c */
                    /* catch() { ... } // from try @ 00410acc with catch @ 00410b70 */
        uVar6 = Vector3::MergePartialFromCodedStream(this_00,param_1);
                    /* try { // try from 00410b80 to 00510b8b has its CatchHandler @ 00410b8c */
        if (((uVar6 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_00410bd0;
                    /* catch() { ... } // from try @ 00410b80 with catch @ 00410b8c */
                    /* try { // try from 00410b90 to 00510b93 has its CatchHandler @ 00410b98 */
        google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
                    /* catch() { ... } // from try @ 00410b90 with catch @ 00410b98 */
                    /* try { // try from 00410b9c to 00510bfb has its CatchHandler @ 00410b9c
                       catch(type#1 @ 00000000) { ... } // from try @ 00410b9c with catch @ 00410b9c
                       catch(type#1 @ 00000000) { ... } // from try @ 00410c00 with catch @ 00410b9c
                       catch(type#1 @ 00000000) { ... } // from try @ 00410dac with catch @ 00410b9c
                        */
        if (0 < *(int *)(param_1 + 0x38)) {
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
        }
        if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0)
           ) {
          uVar7 = 1;
          *(undefined4 *)(param_1 + 0x20) = 0;
          param_1[0x24] = (CodedInputStream)0x1;
LAB_00410bd4:
          if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00410bfc to 00510bff has its CatchHandler @ 00410d60 */
            __stack_chk_fail(uVar7);
          }
          return;
        }
      }
      goto LAB_004109c0;
    }
    if ((uVar8 & 7) != 5) goto LAB_00410b24;
                    /* try { // try from 00410a54 to 00510a7b has its CatchHandler @ 00410a84 */
    uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(param_1,&local_4c);
    if ((uVar6 & 1) == 0) goto LAB_00410bd0;
    *(uint *)(this + 0xc) = local_4c;
    *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
    pcVar2 = *(char **)(param_1 + 8);
                    /* try { // try from 00410a7c to 00510a97 has its CatchHandler @ 004109cc */
                    /* catch() { ... } // from try @ 00410a54 with catch @ 00410a84 */
    if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x15')) {
                    /* catch() { ... } // from try @ 004109e4 with catch @ 00410a88 */
      *(char **)(param_1 + 8) = pcVar2 + 1;
      goto LAB_00410a90;
    }
  } while( true );
}


