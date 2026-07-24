/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d9b40
 * Function: google::protobuf::internal::ExtensionSet::SetUInt32
 * Signature: undefined __thiscall SetUInt32(ExtensionSet * this, int param_1, uchar param_2, uint param_3, FieldDescriptor * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::SetUInt32(int, unsigned char, unsigned int,
   google::protobuf::FieldDescriptor const*) */

void __thiscall
google::protobuf::internal::ExtensionSet::SetUInt32
          (ExtensionSet *this,int param_1,uchar param_2,uint param_3,FieldDescriptor *param_4)

{
  ExtensionSet *pEVar1;
  long lVar2;
  ExtensionSet *pEVar3;
  ExtensionSet *pEVar4;
  long lVar5;
  ExtensionSet *pEVar6;
  bool bVar7;
  uint uStack_8c;
  
                    /* catch() { ... } // from try @ 005d9b38 with catch @ 005d9b40 */
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 005d9bd8 with catch @ 005d9b68
                       catch() { ... } // from try @ 005d9c7c with catch @ 005d9b68 */
  pEVar1 = this + 8;
  pEVar3 = *(ExtensionSet **)(this + 0x10);
  pEVar6 = pEVar1;
  if (*(ExtensionSet **)(this + 0x10) == (ExtensionSet *)0x0) {
LAB_005d9bcc:
                    /* try { // try from 005d9bd4 to 006d9bd7 has its CatchHandler @ 005d9c34 */
    if (pEVar6 != *(ExtensionSet **)(this + 0x18)) {
                    /* try { // try from 005d9bd8 to 006d9c53 has its CatchHandler @ 005d9b68 */
      pEVar4 = (ExtensionSet *)FUN_0064c700(pEVar6);
      goto LAB_005d9be0;
    }
LAB_005d9bec:
    if (pEVar6 != (ExtensionSet *)0x0) {
      if (pEVar1 == pEVar6) {
        bVar7 = true;
      }
      else {
        bVar7 = param_1 < *(int *)(pEVar6 + 0x20);
      }
      pEVar4 = operator_new(0x48);
                    /* catch() { ... } // from try @ 005d9bd4 with catch @ 005d9c34 */
      *(int *)(pEVar4 + 0x20) = param_1;
      *(undefined8 *)(pEVar4 + 0x2c) = 0;
      *(ulong *)(pEVar4 + 0x24) = (ulong)uStack_8c;
      *(undefined8 *)(pEVar4 + 0x3c) = 0;
      *(undefined8 *)(pEVar4 + 0x34) = 0;
      *(undefined4 *)(pEVar4 + 0x44) = 0;
                    /* try { // try from 005d9c54 to 006d9c7b has its CatchHandler @ 005d9c84 */
      FUN_0064c8a0(bVar7,pEVar4,pEVar6,pEVar1);
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
      *(FieldDescriptor **)(pEVar4 + 0x38) = param_4;
      pEVar4[0x30] = (ExtensionSet)param_2;
      pEVar4[0x31] = (ExtensionSet)0x0;
      goto LAB_005d9c74;
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
    if (param_1 < *(int *)(pEVar4 + 0x20)) goto LAB_005d9bcc;
LAB_005d9be0:
    if (*(int *)(pEVar4 + 0x20) < param_1) goto LAB_005d9bec;
  }
  *(FieldDescriptor **)(pEVar4 + 0x38) = param_4;
LAB_005d9c74:
  pEVar4[0x32] = (ExtensionSet)0x0;
  *(uint *)(pEVar4 + 0x28) = param_3;
                    /* try { // try from 005d9c7c to 006d9c87 has its CatchHandler @ 005d9b68 */
                    /* catch() { ... } // from try @ 005d9c54 with catch @ 005d9c84 */
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


