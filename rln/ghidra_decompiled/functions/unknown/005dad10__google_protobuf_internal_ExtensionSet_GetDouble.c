/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005dad10
 * Function: google::protobuf::internal::ExtensionSet::GetDouble
 * Signature: undefined __thiscall GetDouble(ExtensionSet * this, int param_1, double param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::GetDouble(int, double) const */

undefined1  [16] __thiscall
google::protobuf::internal::ExtensionSet::GetDouble(ExtensionSet *this,int param_1,double param_2)

{
  ExtensionSet *pEVar1;
  ExtensionSet *pEVar2;
  ExtensionSet *pEVar3;
  ExtensionSet *pEVar4;
  undefined8 in_register_00005008;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
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
                    /* try { // try from 005dad60 to 006dae17 has its CatchHandler @ 005dad60
                       catch() { ... } // from try @ 005dad60 with catch @ 005dad60
                       catch() { ... } // from try @ 005dae64 with catch @ 005dad60
                       catch() { ... } // from try @ 005dae8c with catch @ 005dad60
                       catch() { ... } // from try @ 005db0a4 with catch @ 005dad60
                       catch() { ... } // from try @ 005db1ec with catch @ 005dad60
                       catch() { ... } // from try @ 005db33c with catch @ 005dad60
                       catch() { ... } // from try @ 005db4c0 with catch @ 005dad60
                       catch() { ... } // from try @ 005db5fc with catch @ 005dad60 */
    if ((pEVar4 != pEVar1) && (pEVar4[0x32] == (ExtensionSet)0x0)) {
      auVar6._0_8_ = *(ulong *)(pEVar4 + 0x28);
      auVar6._8_8_ = 0;
      return auVar6;
    }
  }
  auVar5._8_8_ = in_register_00005008;
  auVar5._0_8_ = param_2;
  return auVar5;
}


