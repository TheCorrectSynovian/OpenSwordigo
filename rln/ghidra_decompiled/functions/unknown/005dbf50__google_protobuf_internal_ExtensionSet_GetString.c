/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005dbf50
 * Function: google::protobuf::internal::ExtensionSet::GetString
 * Signature: undefined __thiscall GetString(ExtensionSet * this, int param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::GetString(int, std::string const&) const */

string * __thiscall
google::protobuf::internal::ExtensionSet::GetString(ExtensionSet *this,int param_1,string *param_2)

{
  ExtensionSet *pEVar1;
  ExtensionSet *pEVar2;
  ExtensionSet *pEVar3;
  ExtensionSet *pEVar4;
  
  pEVar1 = this + 8;
  pEVar4 = *(ExtensionSet **)(this + 0x10);
  pEVar2 = pEVar1;
  while (pEVar4 != (ExtensionSet *)0x0) {
    pEVar3 = pEVar4 + 0x18;
    if (param_1 <= *(int *)(pEVar4 + 0x20)) {
      pEVar2 = pEVar4;
      pEVar3 = pEVar4 + 0x10;
    }
    pEVar4 = *(ExtensionSet **)pEVar3;
                    /* try { // try from 005dbf7c to 006dbf7f has its CatchHandler @ 005dc2b4 */
  }
                    /* try { // try from 005dbf80 to 006dbfb7 has its CatchHandler @ 005dbf44 */
  if (pEVar2 != pEVar1) {
    pEVar4 = pEVar1;
    if (*(int *)(pEVar2 + 0x20) <= param_1) {
      pEVar4 = pEVar2;
    }
    if ((pEVar4 != pEVar1) && (pEVar4[0x32] == (ExtensionSet)0x0)) {
      return *(string **)(pEVar4 + 0x28);
    }
  }
  return param_2;
}


