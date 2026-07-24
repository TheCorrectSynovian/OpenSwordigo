/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d8f24
 * Function: google::protobuf::internal::ExtensionSet::MaybeNewExtension
 * Signature: undefined __thiscall MaybeNewExtension(ExtensionSet * this, int param_1, FieldDescriptor * param_2, Extension * * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::MaybeNewExtension(int,
   google::protobuf::FieldDescriptor const*, google::protobuf::internal::ExtensionSet::Extension**)
    */

void __thiscall
google::protobuf::internal::ExtensionSet::MaybeNewExtension
          (ExtensionSet *this,int param_1,FieldDescriptor *param_2,Extension **param_3)

{
  ExtensionSet *pEVar1;
  ExtensionSet *pEVar2;
  long lVar3;
  ExtensionSet *pEVar4;
  undefined8 uVar5;
  long lVar6;
  ExtensionSet *pEVar7;
  bool bVar8;
  uint uStack_8c;
  
                    /* catch() { ... } // from try @ 005d8ecc with catch @ 005d8f2c */
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005d8f4c to 006d8f73 has its CatchHandler @ 005d8f7c */
  pEVar1 = this + 8;
                    /* try { // try from 005d8f74 to 006d8f7f has its CatchHandler @ 005d8e60 */
  pEVar4 = *(ExtensionSet **)(this + 0x10);
  pEVar7 = pEVar1;
  if (*(ExtensionSet **)(this + 0x10) == (ExtensionSet *)0x0) {
LAB_005d8fac:
    if (pEVar7 != *(ExtensionSet **)(this + 0x18)) {
      pEVar4 = (ExtensionSet *)FUN_0064c700(pEVar7);
      goto LAB_005d8fc4;
    }
  }
  else {
    do {
      pEVar7 = pEVar4;
                    /* catch() { ... } // from try @ 005d8f4c with catch @ 005d8f7c */
                    /* catch() { ... } // from try @ 005d9030 with catch @ 005d8f80 */
      pEVar2 = pEVar7 + 0x10;
      if (*(int *)(pEVar7 + 0x20) <= param_1) {
        pEVar2 = pEVar7 + 0x18;
      }
      pEVar4 = *(ExtensionSet **)pEVar2;
    } while (*(ExtensionSet **)pEVar2 != (ExtensionSet *)0x0);
                    /* try { // try from 005d8f98 to 006d8f9f has its CatchHandler @ 005d903c */
    pEVar4 = pEVar7;
    if (param_1 < *(int *)(pEVar7 + 0x20)) goto LAB_005d8fac;
LAB_005d8fc4:
                    /* try { // try from 005d8fcc to 006d8fd7 has its CatchHandler @ 005d8fe4 */
    if (param_1 <= *(int *)(pEVar4 + 0x20)) {
      uVar5 = 0;
      goto LAB_005d9050;
    }
  }
  if (pEVar7 == (ExtensionSet *)0x0) {
    pEVar4 = (ExtensionSet *)0x0;
    uVar5 = 0;
  }
  else {
    if (pEVar1 == pEVar7) {
      bVar8 = true;
    }
    else {
                    /* catch() { ... } // from try @ 005d8fcc with catch @ 005d8fe4 */
      bVar8 = param_1 < *(int *)(pEVar7 + 0x20);
    }
                    /* try { // try from 005d9008 to 006d902f has its CatchHandler @ 005d9038 */
    pEVar4 = operator_new(0x48);
    *(int *)(pEVar4 + 0x20) = param_1;
                    /* try { // try from 005d9030 to 006d904b has its CatchHandler @ 005d8f80 */
    *(undefined8 *)(pEVar4 + 0x2c) = 0;
    *(ulong *)(pEVar4 + 0x24) = (ulong)uStack_8c;
    *(undefined8 *)(pEVar4 + 0x3c) = 0;
    *(undefined8 *)(pEVar4 + 0x34) = 0;
                    /* catch() { ... } // from try @ 005d9008 with catch @ 005d9038 */
    *(undefined4 *)(pEVar4 + 0x44) = 0;
                    /* catch() { ... } // from try @ 005d8f98 with catch @ 005d903c */
    FUN_0064c8a0(bVar8,pEVar4,pEVar7,pEVar1);
    uVar5 = 1;
                    /* try { // try from 005d904c to 006d9057 has its CatchHandler @ 005d9058 */
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
LAB_005d9050:
  *param_3 = (Extension *)(pEVar4 + 0x28);
                    /* catch() { ... } // from try @ 005d904c with catch @ 005d9058 */
  *(FieldDescriptor **)(pEVar4 + 0x38) = param_2;
                    /* try { // try from 005d905c to 006d905f has its CatchHandler @ 005d9064 */
                    /* catch() { ... } // from try @ 005d905c with catch @ 005d9064 */
  if (*(long *)(lVar3 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 005d90fc with catch @ 005d908c
                       catch() { ... } // from try @ 005d91a0 with catch @ 005d908c */
    __stack_chk_fail(uVar5);
  }
  return;
}


