/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005db940
 * Function: google::protobuf::internal::ExtensionSet::GetEnum
 * Signature: undefined __thiscall GetEnum(ExtensionSet * this, int param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::GetEnum(int, int) const */

int __thiscall
google::protobuf::internal::ExtensionSet::GetEnum(ExtensionSet *this,int param_1,int param_2)

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
    if ((pEVar4 != pEVar1) && (pEVar4[0x32] == (ExtensionSet)0x0)) {
      return *(int *)(pEVar4 + 0x28);
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005db830 with catch @ 005db994
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005db878 with catch @ 005db998
                        */
  return param_2;
}


