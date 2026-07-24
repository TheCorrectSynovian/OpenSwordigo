/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00414818
 * Function: Caver::Proto::EntityComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(EntityComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::EntityComponent::MergePartialFromCodedStream
          (EntityComponent *this,CodedInputStream *param_1)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint local_3c;
  long local_38;
  
                    /* try { // try from 00414824 to 005148a3 has its CatchHandler @ 004147cc */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
LAB_00414840:
  do {
    pbVar9 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar9) || (bVar1 = *pbVar9, (char)bVar1 < '\0')) {
      uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar6 = uVar4 & 0xffffffff;
      *(int *)(param_1 + 0x20) = (int)uVar4;
      if ((int)uVar4 != 0) goto LAB_00414880;
LAB_004149ac:
      uVar5 = 1;
      goto LAB_004149b8;
    }
    uVar6 = (ulong)bVar1;
    *(uint *)(param_1 + 0x20) = (uint)bVar1;
    *(byte **)(param_1 + 8) = pbVar9 + 1;
    if (bVar1 == 0) goto LAB_004149ac;
LAB_00414880:
                    /* catch() { ... } // from try @ 004147fc with catch @ 00414880 */
    iVar3 = (int)(uVar6 >> 3);
    if (iVar3 != 1) {
      if ((iVar3 == 2) && ((uVar6 & 7) == 0)) {
        pbVar8 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
                    /* try { // try from 004148a4 to 005148cb has its CatchHandler @ 004148d4 */
        if (pbVar8 < pbVar7) goto LAB_004148a8;
        goto LAB_0041495c;
      }
LAB_004148f8:
      if (((uint)uVar6 & 7) == 4) goto LAB_004149ac;
      uVar4 = google::protobuf::internal::WireFormatLite::SkipField(param_1,(uint)uVar6);
      if ((uVar4 & 1) == 0) {
LAB_004149b4:
        uVar5 = 0;
        goto LAB_004149b8;
      }
      goto LAB_00414840;
    }
    if ((uVar6 & 7) != 0) goto LAB_004148f8;
                    /* try { // try from 004148cc to 005148d7 has its CatchHandler @ 004147cc */
    pbVar9 = *(byte **)(param_1 + 8);
    pbVar7 = *(byte **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 004148a4 with catch @ 004148d4 */
    if ((pbVar9 < pbVar7) && (-1 < (char)*pbVar9)) {
      pbVar8 = pbVar9 + 1;
      local_3c = (uint)*pbVar9;
      *(byte **)(param_1 + 8) = pbVar8;
    }
    else {
      uVar4 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
      if ((uVar4 & 1) == 0) goto LAB_004149b4;
      pbVar8 = *(byte **)(param_1 + 8);
      pbVar7 = *(byte **)(param_1 + 0x10);
    }
    *(uint *)(this + 0xc) = local_3c;
    *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 1;
    if ((pbVar8 < pbVar7) && (*pbVar8 == 0x10)) {
      pbVar8 = pbVar8 + 1;
      *(byte **)(param_1 + 8) = pbVar8;
      if (pbVar8 < pbVar7) {
LAB_004148a8:
        if ((char)*pbVar8 < '\0') goto LAB_0041495c;
        pbVar9 = pbVar8 + 1;
        local_3c = (uint)*pbVar8;
        *(byte **)(param_1 + 8) = pbVar9;
      }
      else {
LAB_0041495c:
                    /* try { // try from 00414964 to 0051496f has its CatchHandler @ 00414ab0 */
        uVar4 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
        if ((uVar4 & 1) == 0) goto LAB_004149b4;
                    /* try { // try from 00414970 to 0051499b has its CatchHandler @ 0041490c */
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
      }
      this[0x10] = (EntityComponent)(local_3c != 0);
      *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 2;
      if ((pbVar9 == pbVar7) && (*(int *)(param_1 + 0x2c) != 0)) {
                    /* try { // try from 0041499c to 005149a3 has its CatchHandler @ 00414a78 */
        uVar5 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
                    /* try { // try from 004149a4 to 00514b1f has its CatchHandler @ 0041490c */
        param_1[0x24] = (CodedInputStream)0x1;
LAB_004149b8:
        if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar5);
        }
        return;
      }
    }
  } while( true );
}


