/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042f104
 * Function: Caver::Proto::TouchableComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(TouchableComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::TouchableComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::TouchableComponent::MergePartialFromCodedStream
          (TouchableComponent *this,CodedInputStream *param_1)

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
  Program *this_00;
  uint local_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 0042f0a0 with catch @ 0042f124 */
                    /* catch() { ... } // from try @ 0042f0cc with catch @ 0042f128 */
LAB_0042f130:
  do {
    pbVar1 = *(byte **)(param_1 + 8);
                    /* catch() { ... } // from try @ 0042ef6c with catch @ 0042f13c */
    if ((*(byte **)(param_1 + 0x10) <= pbVar1) || (bVar3 = *pbVar1, (char)bVar3 < '\0')) {
      uVar6 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar9 = uVar6 & 0xffffffff;
      *(int *)(param_1 + 0x20) = (int)uVar6;
      if ((int)uVar6 != 0) goto LAB_0042f170;
LAB_0042f2dc:
      uVar7 = 1;
      goto LAB_0042f2e8;
    }
    uVar9 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
    *(byte **)(param_1 + 8) = pbVar1 + 1;
    if (bVar3 == 0) goto LAB_0042f2dc;
LAB_0042f170:
    iVar5 = (int)(uVar9 >> 3);
    uVar8 = (uint)uVar9;
    if (iVar5 == 1) {
                    /* try { // try from 0042f198 to 0052f1bb has its CatchHandler @ 0042ee70 */
      if ((uVar8 & 7) == 5) {
        uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                          (param_1,&local_4c);
        if ((uVar6 & 1) == 0) goto LAB_0042f2e4;
                    /* catch() { ... } // from try @ 0042f190 with catch @ 0042f1b8 */
                    /* catch() { ... } // from try @ 0042f1d0 with catch @ 0042f1bc */
        *(uint *)(this + 0xc) = local_4c;
        uVar8 = *(uint *)(this + 0x18) | 1;
        *(uint *)(this + 0x18) = uVar8;
        pcVar2 = *(char **)(param_1 + 8);
                    /* try { // try from 0042f1cc to 0052f1cf has its CatchHandler @ 0042f1e0 */
                    /* try { // try from 0042f1d0 to 0052f1f3 has its CatchHandler @ 0042f1bc */
        if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x12')) {
                    /* catch() { ... } // from try @ 0042f1cc with catch @ 0042f1e0 */
          *(char **)(param_1 + 8) = pcVar2 + 1;
          goto LAB_0042f1e8;
        }
      }
      else {
LAB_0042f238:
        if ((uVar8 & 7) == 4) goto LAB_0042f2dc;
        uVar6 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar8);
        if ((uVar6 & 1) == 0) {
LAB_0042f2e4:
          uVar7 = 0;
          goto LAB_0042f2e8;
        }
      }
      goto LAB_0042f130;
    }
    if ((iVar5 != 2) || ((uVar8 & 7) != 2)) goto LAB_0042f238;
                    /* try { // try from 0042f190 to 0052f197 has its CatchHandler @ 0042f1b8 */
    uVar8 = *(uint *)(this + 0x18);
LAB_0042f1e8:
    this_00 = *(Program **)(this + 0x10);
    *(uint *)(this + 0x18) = uVar8 | 2;
                    /* try { // try from 0042f1f4 to 0052f213 has its CatchHandler @ 0042f1f4
                       catch() { ... } // from try @ 0042f1f4 with catch @ 0042f1f4
                       catch() { ... } // from try @ 0042f218 with catch @ 0042f1f4 */
    if (this_00 == (Program *)0x0) {
      this_00 = operator_new(0x30);
      Program::Program(this_00);
      *(Program **)(this + 0x10) = this_00;
    }
    pbVar1 = *(byte **)(param_1 + 8);
                    /* try { // try from 0042f214 to 0052f217 has its CatchHandler @ 0042f2d0 */
                    /* try { // try from 0042f218 to 0052f2e3 has its CatchHandler @ 0042f1f4 */
    if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
      local_4c = (uint)*pbVar1;
      *(byte **)(param_1 + 8) = pbVar1 + 1;
    }
    else {
      uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
      if ((uVar6 & 1) == 0) goto LAB_0042f2e4;
    }
    iVar5 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar5 + 1;
    if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_0042f2e4;
    iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
    uVar6 = Program::MergePartialFromCodedStream(this_00,param_1);
    if (((uVar6 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0042f2e4;
    google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
    if (0 < *(int *)(param_1 + 0x38)) {
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
    }
    if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0)) {
      uVar7 = 1;
                    /* catch() { ... } // from try @ 0042f214 with catch @ 0042f2d0 */
      *(undefined4 *)(param_1 + 0x20) = 0;
      param_1[0x24] = (CodedInputStream)0x1;
LAB_0042f2e8:
      if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar7);
      }
      return;
    }
  } while( true );
}


