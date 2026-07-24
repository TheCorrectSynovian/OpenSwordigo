/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005da758
 * Function: google::protobuf::internal::ExtensionSet::SetFloat
 * Signature: undefined __thiscall SetFloat(ExtensionSet * this, int param_1, uchar param_2, float param_3, FieldDescriptor * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::SetFloat(int, unsigned char, float,
   google::protobuf::FieldDescriptor const*) */

void __thiscall
google::protobuf::internal::ExtensionSet::SetFloat
          (ExtensionSet *this,int param_1,uchar param_2,float param_3,FieldDescriptor *param_4)

{
  ExtensionSet *pEVar1;
  long lVar2;
  ExtensionSet *pEVar3;
  ExtensionSet *pEVar4;
  long lVar5;
  ExtensionSet *pEVar6;
  bool bVar7;
  uint uStack_8c;
  
                    /* catch() { ... } // from try @ 005da134 with catch @ 005da758 */
                    /* catch() { ... } // from try @ 005da12c with catch @ 005da75c */
                    /* catch() { ... } // from try @ 005da480 with catch @ 005da760
                       catch() { ... } // from try @ 005da4d0 with catch @ 005da760 */
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  pEVar1 = this + 8;
  pEVar3 = *(ExtensionSet **)(this + 0x10);
  pEVar6 = pEVar1;
  if (*(ExtensionSet **)(this + 0x10) == (ExtensionSet *)0x0) {
LAB_005da7e8:
    if (pEVar6 != *(ExtensionSet **)(this + 0x18)) {
                    /* catch() { ... } // from try @ 005da1fc with catch @ 005da7f8 */
      pEVar4 = (ExtensionSet *)FUN_0064c700(pEVar6);
      goto LAB_005da7fc;
    }
LAB_005da808:
    if (pEVar6 != (ExtensionSet *)0x0) {
      if (pEVar1 == pEVar6) {
                    /* catch() { ... } // from try @ 005da148 with catch @ 005da834 */
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
      goto LAB_005da890;
    }
    pEVar4 = (ExtensionSet *)0x0;
  }
  else {
    do {
      pEVar4 = pEVar3;
                    /* catch() { ... } // from try @ 005da34c with catch @ 005da7b8
                       catch() { ... } // from try @ 005da38c with catch @ 005da7b8 */
                    /* catch() { ... } // from try @ 005da2a8 with catch @ 005da7bc */
      pEVar6 = pEVar4 + 0x10;
      if (*(int *)(pEVar4 + 0x20) <= param_1) {
        pEVar6 = pEVar4 + 0x18;
      }
      pEVar3 = *(ExtensionSet **)pEVar6;
    } while (*(ExtensionSet **)pEVar6 != (ExtensionSet *)0x0);
    pEVar6 = pEVar4;
    if (param_1 < *(int *)(pEVar4 + 0x20)) goto LAB_005da7e8;
LAB_005da7fc:
    if (*(int *)(pEVar4 + 0x20) < param_1) goto LAB_005da808;
  }
  *(FieldDescriptor **)(pEVar4 + 0x38) = param_4;
LAB_005da890:
  pEVar4[0x32] = (ExtensionSet)0x0;
  *(float *)(pEVar4 + 0x28) = param_3;
                    /* catch() { ... } // from try @ 005da3bc with catch @ 005da898
                       catch() { ... } // from try @ 005da3dc with catch @ 005da898 */
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005da8cc to 006da8f3 has its CatchHandler @ 005daa34 */
    __stack_chk_fail();
  }
  return;
}


