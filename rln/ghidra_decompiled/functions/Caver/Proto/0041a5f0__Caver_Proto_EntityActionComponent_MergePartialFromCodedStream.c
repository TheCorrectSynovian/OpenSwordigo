/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041a5f0
 * Function: Caver::Proto::EntityActionComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(EntityActionComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityActionComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::EntityActionComponent::MergePartialFromCodedStream
          (EntityActionComponent *this,CodedInputStream *param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  Program *this_00;
  uint local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  do {
    while ((pbVar1 = *(byte **)(param_1 + 8), *(byte **)(param_1 + 0x10) <= pbVar1 ||
           (bVar2 = *pbVar1, (char)bVar2 < '\0'))) {
      uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      *(uint *)(param_1 + 0x20) = uVar4;
      if (uVar4 != 10) goto LAB_0041a648;
LAB_0041a680:
      this_00 = *(Program **)(this + 0x10);
      *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 1;
      if (this_00 == (Program *)0x0) {
        this_00 = operator_new(0x30);
        Program::Program(this_00);
        *(Program **)(this + 0x10) = this_00;
      }
      pbVar1 = *(byte **)(param_1 + 8);
      if ((*(byte **)(param_1 + 0x10) <= pbVar1) || ((char)*pbVar1 < '\0')) {
        uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
        if ((uVar6 & 1) != 0) goto LAB_0041a6e0;
        goto LAB_0041a75c;
      }
      local_4c = (uint)*pbVar1;
      *(byte **)(param_1 + 8) = pbVar1 + 1;
LAB_0041a6e0:
      iVar5 = *(int *)(param_1 + 0x38);
      *(int *)(param_1 + 0x38) = iVar5 + 1;
      if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_0041a75c;
      iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
      uVar6 = Program::MergePartialFromCodedStream(this_00,param_1);
      if (((uVar6 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0041a75c;
      google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
                    /* try { // try from 0041a72c to 0051a7db has its CatchHandler @ 0041a3fc */
      if (0 < *(int *)(param_1 + 0x38)) {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      }
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar7 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_0041a768:
        if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar7);
        }
        return;
      }
    }
    uVar4 = (uint)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar1 + 1;
                    /* try { // try from 0041a640 to 0051a663 has its CatchHandler @ 0041a3fc */
    if (bVar2 == 10) goto LAB_0041a680;
LAB_0041a648:
    if ((uVar4 == 0) || ((uVar4 & 7) == 4)) {
      uVar7 = 1;
      goto LAB_0041a768;
    }
    uVar6 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar4);
  } while ((uVar6 & 1) != 0);
LAB_0041a75c:
  uVar7 = 0;
  goto LAB_0041a768;
}


