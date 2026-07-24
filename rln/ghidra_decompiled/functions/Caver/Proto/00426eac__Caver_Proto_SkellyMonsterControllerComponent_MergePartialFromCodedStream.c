/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00426eac
 * Function: Caver::Proto::SkellyMonsterControllerComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(SkellyMonsterControllerComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SkellyMonsterControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::SkellyMonsterControllerComponent::MergePartialFromCodedStream
          (SkellyMonsterControllerComponent *this,CodedInputStream *param_1)

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
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
LAB_00426ed4:
  do {
    pbVar9 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar9) || (bVar1 = *pbVar9, (char)bVar1 < '\0')) {
      uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
                    /* catch() { ... } // from try @ 00426e7c with catch @ 00426f08 */
      uVar6 = uVar4 & 0xffffffff;
                    /* catch() { ... } // from try @ 00426e18 with catch @ 00426f0c */
      *(int *)(param_1 + 0x20) = (int)uVar4;
      if ((int)uVar4 != 0) goto LAB_00426f14;
LAB_00427038:
      uVar5 = 1;
      goto LAB_00427044;
    }
    uVar6 = (ulong)bVar1;
    *(uint *)(param_1 + 0x20) = (uint)bVar1;
    *(byte **)(param_1 + 8) = pbVar9 + 1;
    if (bVar1 == 0) goto LAB_00427038;
LAB_00426f14:
    iVar3 = (int)(uVar6 >> 3);
    if (iVar3 != 1) {
                    /* try { // try from 00426f20 to 00526f4f has its CatchHandler @ 00426f20
                       catch() { ... } // from try @ 00426f20 with catch @ 00426f20
                       catch() { ... } // from try @ 004274b4 with catch @ 00426f20 */
      if ((iVar3 == 2) && ((uVar6 & 7) == 0)) {
        pbVar8 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
        if (pbVar8 < pbVar7) goto LAB_00426f3c;
        goto LAB_00426ff0;
      }
LAB_00426f8c:
      if (((uint)uVar6 & 7) == 4) goto LAB_00427038;
      uVar4 = google::protobuf::internal::WireFormatLite::SkipField(param_1,(uint)uVar6);
      if ((uVar4 & 1) == 0) {
LAB_00427040:
        uVar5 = 0;
        goto LAB_00427044;
      }
      goto LAB_00426ed4;
    }
    if ((uVar6 & 7) != 0) goto LAB_00426f8c;
    pbVar9 = *(byte **)(param_1 + 8);
    pbVar7 = *(byte **)(param_1 + 0x10);
    if ((pbVar9 < pbVar7) && (-1 < (char)*pbVar9)) {
                    /* try { // try from 00426f74 to 00526f7f has its CatchHandler @ 00427dd0 */
      pbVar8 = pbVar9 + 1;
      local_3c = (uint)*pbVar9;
      *(byte **)(param_1 + 8) = pbVar8;
    }
    else {
                    /* try { // try from 00426fac to 00526fe7 has its CatchHandler @ 00427d6c */
      uVar4 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
      if ((uVar4 & 1) == 0) goto LAB_00427040;
      pbVar8 = *(byte **)(param_1 + 8);
      pbVar7 = *(byte **)(param_1 + 0x10);
    }
    *(uint *)(this + 0xc) = local_3c;
    *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 1;
    if ((pbVar8 < pbVar7) && (*pbVar8 == 0x10)) {
      pbVar8 = pbVar8 + 1;
      *(byte **)(param_1 + 8) = pbVar8;
      if (pbVar8 < pbVar7) {
LAB_00426f3c:
        if ((char)*pbVar8 < '\0') goto LAB_00426ff0;
        pbVar9 = pbVar8 + 1;
        local_3c = (uint)*pbVar8;
                    /* try { // try from 00426f50 to 00526f63 has its CatchHandler @ 00427e3c */
        *(byte **)(param_1 + 8) = pbVar9;
      }
      else {
LAB_00426ff0:
        uVar4 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
        if ((uVar4 & 1) == 0) goto LAB_00427040;
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
      }
      *(uint *)(this + 0x10) = local_3c;
                    /* try { // try from 00427010 to 00527023 has its CatchHandler @ 00427d68 */
      *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 2;
      if ((pbVar9 == pbVar7) && (*(int *)(param_1 + 0x2c) != 0)) {
        uVar5 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
                    /* try { // try from 00427034 to 0052703f has its CatchHandler @ 00427d30 */
LAB_00427044:
        if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar5);
        }
                    /* try { // try from 00427064 to 0052709f has its CatchHandler @ 00427cd4 */
        return;
      }
    }
  } while( true );
}


