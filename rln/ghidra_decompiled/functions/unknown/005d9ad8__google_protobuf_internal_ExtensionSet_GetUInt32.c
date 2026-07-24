/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d9ad8
 * Function: google::protobuf::internal::ExtensionSet::GetUInt32
 * Signature: undefined __thiscall GetUInt32(ExtensionSet * this, int param_1, uint param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::GetUInt32(int, unsigned int) const */

uint __thiscall
google::protobuf::internal::ExtensionSet::GetUInt32(ExtensionSet *this,int param_1,uint param_2)

{
  ExtensionSet *pEVar1;
  ExtensionSet *pEVar2;
  ExtensionSet *pEVar3;
  ExtensionSet *pEVar4;
  
  pEVar1 = this + 8;
  pEVar4 = *(ExtensionSet **)(this + 0x10);
  pEVar2 = pEVar1;
                    /* try { // try from 005d9ae4 to 006d9b0b has its CatchHandler @ 005d9b14 */
  while (pEVar4 != (ExtensionSet *)0x0) {
    pEVar3 = pEVar4 + 0x18;
    if (param_1 <= *(int *)(pEVar4 + 0x20)) {
      pEVar2 = pEVar4;
      pEVar3 = pEVar4 + 0x10;
    }
    pEVar4 = *(ExtensionSet **)pEVar3;
  }
                    /* try { // try from 005d9b0c to 006d9b27 has its CatchHandler @ 005d9a5c */
  if (pEVar2 != pEVar1) {
                    /* catch() { ... } // from try @ 005d9ae4 with catch @ 005d9b14 */
                    /* catch() { ... } // from try @ 005d9a74 with catch @ 005d9b18 */
    pEVar4 = pEVar1;
    if (*(int *)(pEVar2 + 0x20) <= param_1) {
      pEVar4 = pEVar2;
    }
                    /* try { // try from 005d9b28 to 006d9b33 has its CatchHandler @ 005d9b34 */
    if ((pEVar4 != pEVar1) && (pEVar4[0x32] == (ExtensionSet)0x0)) {
                    /* catch() { ... } // from try @ 005d9b28 with catch @ 005d9b34 */
                    /* try { // try from 005d9b38 to 006d9b3b has its CatchHandler @ 005d9b40 */
      return *(uint *)(pEVar4 + 0x28);
    }
  }
  return param_2;
}


