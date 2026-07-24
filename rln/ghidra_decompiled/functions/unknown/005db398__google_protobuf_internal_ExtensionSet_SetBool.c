/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005db398
 * Function: google::protobuf::internal::ExtensionSet::SetBool
 * Signature: undefined __thiscall SetBool(ExtensionSet * this, int param_1, uchar param_2, bool param_3, FieldDescriptor * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::SetBool(int, unsigned char, bool,
   google::protobuf::FieldDescriptor const*) */

void __thiscall
google::protobuf::internal::ExtensionSet::SetBool
          (ExtensionSet *this,int param_1,uchar param_2,bool param_3,FieldDescriptor *param_4)

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
                    /* catch() { ... } // from try @ 005db2f0 with catch @ 005db3e0 */
                    /* catch() { ... } // from try @ 005db304 with catch @ 005db3e4 */
  pEVar1 = this + 8;
  pEVar3 = *(ExtensionSet **)(this + 0x10);
  pEVar6 = pEVar1;
  if (*(ExtensionSet **)(this + 0x10) == (ExtensionSet *)0x0) {
LAB_005db424:
                    /* catch() { ... } // from try @ 005dafd8 with catch @ 005db424 */
    if (pEVar6 != *(ExtensionSet **)(this + 0x18)) {
      pEVar4 = (ExtensionSet *)FUN_0064c700(pEVar6);
      goto LAB_005db438;
    }
LAB_005db444:
    if (pEVar6 != (ExtensionSet *)0x0) {
                    /* try { // try from 005db448 to 006db4bf has its CatchHandler @ 005db604 */
      if (pEVar1 == pEVar6) {
        bVar7 = true;
      }
      else {
        bVar7 = param_1 < *(int *)(pEVar6 + 0x20);
      }
                    /* catch() { ... } // from try @ 005daf10 with catch @ 005db474 */
      pEVar4 = operator_new(0x48);
      *(int *)(pEVar4 + 0x20) = param_1;
      *(undefined8 *)(pEVar4 + 0x2c) = 0;
      *(ulong *)(pEVar4 + 0x24) = (ulong)uStack_8c;
      *(undefined8 *)(pEVar4 + 0x3c) = 0;
      *(undefined8 *)(pEVar4 + 0x34) = 0;
      *(undefined4 *)(pEVar4 + 0x44) = 0;
      FUN_0064c8a0(bVar7,pEVar4,pEVar6,pEVar1);
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
                    /* try { // try from 005db4c0 to 006db57b has its CatchHandler @ 005dad60 */
      *(FieldDescriptor **)(pEVar4 + 0x38) = param_4;
                    /* catch() { ... } // from try @ 005db094 with catch @ 005db4c4 */
      pEVar4[0x30] = (ExtensionSet)param_2;
                    /* catch() { ... } // from try @ 005db064 with catch @ 005db4c8 */
      pEVar4[0x31] = (ExtensionSet)0x0;
      goto LAB_005db4cc;
    }
    pEVar4 = (ExtensionSet *)0x0;
  }
  else {
    do {
      pEVar4 = pEVar3;
      pEVar6 = pEVar4 + 0x10;
      if (*(int *)(pEVar4 + 0x20) <= param_1) {
        pEVar6 = pEVar4 + 0x18;
      }
      pEVar3 = *(ExtensionSet **)pEVar6;
    } while (*(ExtensionSet **)pEVar6 != (ExtensionSet *)0x0);
    pEVar6 = pEVar4;
    if (param_1 < *(int *)(pEVar4 + 0x20)) goto LAB_005db424;
LAB_005db438:
    if (*(int *)(pEVar4 + 0x20) < param_1) goto LAB_005db444;
  }
  *(FieldDescriptor **)(pEVar4 + 0x38) = param_4;
LAB_005db4cc:
                    /* catch() { ... } // from try @ 005dae88 with catch @ 005db4cc */
  pEVar4[0x32] = (ExtensionSet)0x0;
  pEVar4[0x28] = (ExtensionSet)param_3;
                    /* catch() { ... } // from try @ 005dae18 with catch @ 005db4e0 */
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 005dae2c with catch @ 005db4e4 */
  return;
}


