/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005da150
 * Function: google::protobuf::internal::ExtensionSet::SetUInt64
 * Signature: undefined __thiscall SetUInt64(ExtensionSet * this, int param_1, uchar param_2, ulong param_3, FieldDescriptor * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::SetUInt64(int, unsigned char, unsigned long,
   google::protobuf::FieldDescriptor const*) */

void __thiscall
google::protobuf::internal::ExtensionSet::SetUInt64
          (ExtensionSet *this,int param_1,uchar param_2,ulong param_3,FieldDescriptor *param_4)

{
  ExtensionSet *pEVar1;
  long lVar2;
  ExtensionSet *pEVar3;
  ExtensionSet *pEVar4;
  long lVar5;
  ExtensionSet *pEVar6;
  bool bVar7;
  uint uStack_8c;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  pEVar1 = this + 8;
  pEVar3 = *(ExtensionSet **)(this + 0x10);
  pEVar6 = pEVar1;
  if (*(ExtensionSet **)(this + 0x10) == (ExtensionSet *)0x0) {
LAB_005da1dc:
                    /* try { // try from 005da1e0 to 006da1e7 has its CatchHandler @ 005da754 */
    if (pEVar6 != *(ExtensionSet **)(this + 0x18)) {
                    /* try { // try from 005da1e8 to 006da1fb has its CatchHandler @ 005da750 */
      pEVar4 = (ExtensionSet *)FUN_0064c700(pEVar6);
      goto LAB_005da1f0;
    }
LAB_005da1fc:
                    /* try { // try from 005da1fc to 006da25f has its CatchHandler @ 005da7f8 */
    if (pEVar6 != (ExtensionSet *)0x0) {
      if (pEVar1 == pEVar6) {
        bVar7 = true;
      }
      else {
        bVar7 = param_1 < *(int *)(pEVar6 + 0x20);
      }
      pEVar4 = operator_new(0x48);
      *(int *)(pEVar4 + 0x20) = param_1;
      *(undefined8 *)(pEVar4 + 0x2c) = 0;
      *(ulong *)(pEVar4 + 0x24) = (ulong)uStack_8c;
      *(undefined8 *)(pEVar4 + 0x3c) = 0;
      *(undefined8 *)(pEVar4 + 0x34) = 0;
      *(undefined4 *)(pEVar4 + 0x44) = 0;
      FUN_0064c8a0(bVar7,pEVar4,pEVar6,pEVar1);
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
      *(FieldDescriptor **)(pEVar4 + 0x38) = param_4;
      pEVar4[0x30] = (ExtensionSet)param_2;
      pEVar4[0x31] = (ExtensionSet)0x0;
                    /* try { // try from 005da26c to 006da273 has its CatchHandler @ 005da658 */
      goto LAB_005da284;
    }
    pEVar4 = (ExtensionSet *)0x0;
  }
  else {
    do {
      pEVar4 = pEVar3;
                    /* try { // try from 005da1b8 to 006da1bf has its CatchHandler @ 005da68c */
      pEVar6 = pEVar4 + 0x10;
      if (*(int *)(pEVar4 + 0x20) <= param_1) {
        pEVar6 = pEVar4 + 0x18;
      }
      pEVar3 = *(ExtensionSet **)pEVar6;
    } while (*(ExtensionSet **)pEVar6 != (ExtensionSet *)0x0);
    pEVar6 = pEVar4;
    if (param_1 < *(int *)(pEVar4 + 0x20)) goto LAB_005da1dc;
LAB_005da1f0:
    if (*(int *)(pEVar4 + 0x20) < param_1) goto LAB_005da1fc;
  }
  *(FieldDescriptor **)(pEVar4 + 0x38) = param_4;
LAB_005da284:
  pEVar4[0x32] = (ExtensionSet)0x0;
  *(ulong *)(pEVar4 + 0x28) = param_3;
                    /* try { // try from 005da28c to 006da293 has its CatchHandler @ 005da74c */
                    /* try { // try from 005da294 to 006da2a7 has its CatchHandler @ 005da748 */
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005da2a8 to 006da30b has its CatchHandler @ 005da7bc */
  return;
}


