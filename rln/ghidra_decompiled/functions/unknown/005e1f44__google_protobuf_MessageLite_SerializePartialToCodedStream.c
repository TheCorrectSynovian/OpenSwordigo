/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e1f44
 * Function: google::protobuf::MessageLite::SerializePartialToCodedStream
 * Signature: undefined __thiscall SerializePartialToCodedStream(MessageLite * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::MessageLite::SerializePartialToCodedStream(google::protobuf::io::CodedOutputStream*)
   const */

undefined8 __thiscall
google::protobuf::MessageLite::SerializePartialToCodedStream
          (MessageLite *this,CodedOutputStream *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  
  uVar3 = (**(code **)(*(long *)this + 0x48))();
  iVar7 = *(int *)(param_1 + 0x10);
  if ((int)uVar3 <= iVar7) {
                    /* try { // try from 005e1f7c to 006e1fa3 has its CatchHandler @ 005e2464 */
    lVar8 = *(long *)(param_1 + 8);
    *(uint *)(param_1 + 0x10) = iVar7 - uVar3;
    *(long *)(param_1 + 8) = lVar8 + (int)uVar3;
    iVar7 = iVar7 - uVar3;
    if (lVar8 != 0) {
      lVar5 = (**(code **)(*(long *)this + 0x58))(this,lVar8);
      if (lVar5 - lVar8 == (long)(int)uVar3) {
        return 1;
      }
      uVar4 = (**(code **)(*(long *)this + 0x48))(this);
                    /* try { // try from 005e1fc4 to 006e1feb has its CatchHandler @ 005e261c */
      uVar6 = lVar5 - lVar8 & 0xffffffff;
      goto LAB_005e2034;
    }
  }
  iVar2 = *(int *)(param_1 + 0x14);
  (**(code **)(*(long *)this + 0x50))(this,param_1);
                    /* try { // try from 005e1ff0 to 006e1fff has its CatchHandler @ 005e2618 */
  if (param_1[0x18] != (CodedOutputStream)0x0) {
    return 0;
  }
  uVar1 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) + (iVar7 - iVar2);
  if (uVar1 == uVar3) {
    return 1;
  }
  uVar4 = (**(code **)(*(long *)this + 0x48))(this);
  uVar6 = (ulong)uVar1;
LAB_005e2034:
  FUN_005e2050(uVar3,uVar4,uVar6);
                    /* try { // try from 005e2040 to 006e2067 has its CatchHandler @ 005e2414 */
  return 1;
}


