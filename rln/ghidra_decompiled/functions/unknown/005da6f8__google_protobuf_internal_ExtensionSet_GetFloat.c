/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005da6f8
 * Function: google::protobuf::internal::ExtensionSet::GetFloat
 * Signature: undefined __thiscall GetFloat(ExtensionSet * this, int param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::GetFloat(int, float) const */

undefined1  [16] __thiscall
google::protobuf::internal::ExtensionSet::GetFloat(ExtensionSet *this,int param_1,float param_2)

{
  ExtensionSet *pEVar1;
  ExtensionSet *pEVar2;
  ExtensionSet *pEVar3;
  ExtensionSet *pEVar4;
  undefined4 in_register_00005004;
  undefined8 in_register_00005008;
  undefined1 auVar5 [16];
  
                    /* catch() { ... } // from try @ 005da464 with catch @ 005da6f8 */
                    /* catch() { ... } // from try @ 005da3c8 with catch @ 005da6fc */
  pEVar1 = this + 8;
  pEVar4 = *(ExtensionSet **)(this + 0x10);
  pEVar2 = pEVar1;
  while (pEVar4 != (ExtensionSet *)0x0) {
                    /* catch() { ... } // from try @ 005da3b0 with catch @ 005da710 */
                    /* catch() { ... } // from try @ 005da354 with catch @ 005da714 */
    pEVar3 = pEVar4 + 0x18;
    if (param_1 <= *(int *)(pEVar4 + 0x20)) {
      pEVar2 = pEVar4;
      pEVar3 = pEVar4 + 0x10;
    }
    pEVar4 = *(ExtensionSet **)pEVar3;
  }
  if (pEVar2 != pEVar1) {
    pEVar4 = pEVar1;
    if (*(int *)(pEVar2 + 0x20) <= param_1) {
      pEVar4 = pEVar2;
    }
                    /* catch() { ... } // from try @ 005da294 with catch @ 005da748 */
    if ((pEVar4 != pEVar1) && (pEVar4[0x32] == (ExtensionSet)0x0)) {
                    /* catch() { ... } // from try @ 005da1e8 with catch @ 005da750 */
                    /* catch() { ... } // from try @ 005da1e0 with catch @ 005da754 */
      return ZEXT416(*(uint *)(pEVar4 + 0x28));
    }
  }
  auVar5._4_4_ = in_register_00005004;
  auVar5._0_4_ = param_2;
  auVar5._8_8_ = in_register_00005008;
                    /* catch() { ... } // from try @ 005da28c with catch @ 005da74c */
  return auVar5;
}


