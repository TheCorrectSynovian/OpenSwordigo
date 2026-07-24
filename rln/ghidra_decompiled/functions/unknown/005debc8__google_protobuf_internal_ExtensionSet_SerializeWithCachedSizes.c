/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005debc8
 * Function: google::protobuf::internal::ExtensionSet::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(ExtensionSet * this, int param_1, int param_2, CodedOutputStream * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::SerializeWithCachedSizes(int, int,
   google::protobuf::io::CodedOutputStream*) const */

void __thiscall
google::protobuf::internal::ExtensionSet::SerializeWithCachedSizes
          (ExtensionSet *this,int param_1,int param_2,CodedOutputStream *param_3)

{
  ExtensionSet *pEVar1;
  ExtensionSet *pEVar2;
  ExtensionSet *pEVar3;
  
  pEVar3 = *(ExtensionSet **)(this + 0x10);
  pEVar2 = this + 8;
                    /* try { // try from 005debec to 006debef has its CatchHandler @ 005ded10 */
  while (pEVar3 != (ExtensionSet *)0x0) {
    pEVar1 = pEVar3 + 0x18;
    if (param_1 <= *(int *)(pEVar3 + 0x20)) {
      pEVar2 = pEVar3;
      pEVar1 = pEVar3 + 0x10;
    }
    pEVar3 = *(ExtensionSet **)pEVar1;
  }
                    /* try { // try from 005dec34 to 006dec37 has its CatchHandler @ 005ded28 */
  for (; (pEVar2 != this + 8 && (*(int *)(pEVar2 + 0x20) < param_2));
      pEVar2 = (ExtensionSet *)FUN_0064c6a0(pEVar2)) {
    Extension::SerializeFieldWithCachedSizes
              ((Extension *)(pEVar2 + 0x28),*(int *)(pEVar2 + 0x20),param_3);
                    /* try { // try from 005dec28 to 006dec2b has its CatchHandler @ 005ded08 */
  }
  return;
}


