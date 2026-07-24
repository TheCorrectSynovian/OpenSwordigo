/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005dc53c
 * Function: google::protobuf::internal::ExtensionSet::GetMessage
 * Signature: undefined __thiscall GetMessage(ExtensionSet * this, int param_1, MessageLite * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::GetMessage(int, google::protobuf::MessageLite const&)
   const */

MessageLite * __thiscall
google::protobuf::internal::ExtensionSet::GetMessage
          (ExtensionSet *this,int param_1,MessageLite *param_2)

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
  }
  if (pEVar2 != pEVar1) {
    pEVar4 = pEVar1;
    if (*(int *)(pEVar2 + 0x20) <= param_1) {
      pEVar4 = pEVar2;
    }
    if (pEVar4 != pEVar1) {
      param_2 = *(MessageLite **)(pEVar4 + 0x28);
    }
  }
                    /* try { // try from 005dc58c to 006dc58f has its CatchHandler @ 005dc638 */
  return param_2;
}


