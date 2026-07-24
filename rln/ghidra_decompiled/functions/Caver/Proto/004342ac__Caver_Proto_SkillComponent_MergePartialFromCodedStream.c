/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004342ac
 * Function: Caver::Proto::SkillComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(SkillComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SkillComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::SkillComponent::MergePartialFromCodedStream
          (SkillComponent *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  string *psVar12;
  byte *pbVar13;
  byte *pbVar14;
  Vector2 *this_00;
  uint local_5c;
  long local_58;
  
  puVar6 = PTR__default_cast_object_template_name__007e65a8;
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_004342f0:
  pbVar2 = *(byte **)(param_1 + 8);
                    /* catch() { ... } // from try @ 004341a8 with catch @ 00434300 */
  if ((*(byte **)(param_1 + 0x10) <= pbVar2) || (bVar4 = *pbVar2, (char)bVar4 < '\0')) {
    uVar8 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar11 = uVar8 & 0xffffffff;
    *(int *)(param_1 + 0x20) = (int)uVar8;
    if ((int)uVar8 != 0) goto LAB_00434330;
LAB_00434530:
    uVar9 = 1;
    goto LAB_0043453c;
  }
  uVar11 = (ulong)bVar4;
  *(uint *)(param_1 + 0x20) = (uint)bVar4;
  *(byte **)(param_1 + 8) = pbVar2 + 1;
  if (bVar4 == 0) goto LAB_00434530;
LAB_00434330:
  iVar7 = (int)(uVar11 >> 3);
  uVar10 = (uint)uVar11;
  if (iVar7 == 1) {
    if ((uVar11 & 7) != 0) goto LAB_004343a4;
    pbVar2 = *(byte **)(param_1 + 8);
    pbVar13 = *(byte **)(param_1 + 0x10);
    if ((pbVar2 < pbVar13) && (-1 < (char)*pbVar2)) {
      pbVar14 = pbVar2 + 1;
      local_5c = (uint)*pbVar2;
      *(byte **)(param_1 + 8) = pbVar14;
    }
    else {
                    /* catch() { ... } // from try @ 00434208 with catch @ 004343bc */
      uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
      if ((uVar8 & 1) == 0) goto LAB_00434538;
      pbVar14 = *(byte **)(param_1 + 8);
      pbVar13 = *(byte **)(param_1 + 0x10);
    }
    *(uint *)(this + 0xc) = local_5c;
    uVar10 = *(uint *)(this + 0x20) | 1;
    *(uint *)(this + 0x20) = uVar10;
    if ((pbVar13 <= pbVar14) || (*pbVar14 != 0x12)) goto LAB_004342f0;
    *(byte **)(param_1 + 8) = pbVar14 + 1;
LAB_00434400:
    this_00 = *(Vector2 **)(this + 0x18);
    *(uint *)(this + 0x20) = uVar10 | 4;
    if (this_00 == (Vector2 *)0x0) {
      this_00 = operator_new(0x18);
      Vector2::Vector2(this_00);
      *(Vector2 **)(this + 0x18) = this_00;
    }
    pbVar2 = *(byte **)(param_1 + 8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00434470 with catch @ 00434428
                       catch(type#1 @ 00000000) { ... } // from try @ 0043449c with catch @ 00434428
                        */
    if ((pbVar2 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar2)) {
      local_5c = (uint)*pbVar2;
      *(byte **)(param_1 + 8) = pbVar2 + 1;
    }
    else {
      uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
      if ((uVar8 & 1) == 0) goto LAB_00434538;
    }
    iVar7 = *(int *)(param_1 + 0x38);
                    /* try { // try from 00434464 to 00534467 has its CatchHandler @ 00434488 */
    *(int *)(param_1 + 0x38) = iVar7 + 1;
                    /* try { // try from 0043446c to 0053446f has its CatchHandler @ 00434480 */
    if (iVar7 < *(int *)(param_1 + 0x3c)) {
                    /* try { // try from 00434470 to 0053448f has its CatchHandler @ 00434428 */
      iVar7 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_5c);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0043446c with catch @ 00434480
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00434464 with catch @ 00434488
                        */
      uVar8 = Vector2::MergePartialFromCodedStream(this_00,param_1);
                    /* try { // try from 00434490 to 0053449b has its CatchHandler @ 004344a4 */
      if (((uVar8 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_00434538;
                    /* try { // try from 0043449c to 005344a7 has its CatchHandler @ 00434428 */
      google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar7);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00434490 with catch @ 004344a4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0043452c with catch @ 004344a8
                        */
      if (0 < *(int *)(param_1 + 0x38)) {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      }
      pcVar3 = *(char **)(param_1 + 8);
      if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\x1a')) {
        *(char **)(param_1 + 8) = pcVar3 + 1;
        goto LAB_004344d4;
      }
      goto LAB_004342f0;
    }
  }
  else {
    if (iVar7 == 2) {
                    /* catch() { ... } // from try @ 00434170 with catch @ 0043435c */
                    /* catch() { ... } // from try @ 0043415c with catch @ 00434360 */
                    /* catch() { ... } // from try @ 00434188 with catch @ 00434364 */
      if ((uVar10 & 7) != 2) goto LAB_004343a4;
      uVar10 = *(uint *)(this + 0x20);
      goto LAB_00434400;
    }
    if ((iVar7 == 3) && ((uVar10 & 7) == 2)) {
LAB_004344d4:
      psVar12 = *(string **)(this + 0x10);
                    /* try { // try from 004344e4 to 005344e7 has its CatchHandler @ 00434518 */
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 2;
      if (psVar12 == (string *)puVar6) {
                    /* try { // try from 004344ec to 005344ef has its CatchHandler @ 00434510 */
                    /* try { // try from 004344f0 to 005344f7 has its CatchHandler @ 00434508 */
        psVar12 = operator_new(8);
        *(undefined **)psVar12 = puVar1;
        *(string **)(this + 0x10) = psVar12;
      }
      uVar8 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar12);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004344f0 with catch @ 00434508
                        */
      if ((uVar8 & 1) == 0) goto LAB_00434538;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004344ec with catch @ 00434510
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004344e4 with catch @ 00434518
                        */
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
                    /* try { // try from 00434520 to 0053452b has its CatchHandler @ 0043453c */
        uVar9 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
                    /* try { // try from 0043452c to 0053453f has its CatchHandler @ 004344a8 */
LAB_0043453c:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00434520 with catch @ 0043453c
                        */
        if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar9);
        }
        return;
      }
      goto LAB_004342f0;
    }
LAB_004343a4:
    if ((uVar10 & 7) == 4) goto LAB_00434530;
    uVar8 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar10);
    if ((uVar8 & 1) != 0) goto LAB_004342f0;
  }
LAB_00434538:
  uVar9 = 0;
  goto LAB_0043453c;
}


