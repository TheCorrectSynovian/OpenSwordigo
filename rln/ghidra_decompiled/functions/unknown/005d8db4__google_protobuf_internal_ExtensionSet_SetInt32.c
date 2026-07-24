/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d8db4
 * Function: google::protobuf::internal::ExtensionSet::SetInt32
 * Signature: undefined __thiscall SetInt32(ExtensionSet * this, int param_1, uchar param_2, int param_3, FieldDescriptor * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::SetInt32(int, unsigned char, int,
   google::protobuf::FieldDescriptor const*) */

void __thiscall
google::protobuf::internal::ExtensionSet::SetInt32
          (ExtensionSet *this,int param_1,uchar param_2,int param_3,FieldDescriptor *param_4)

{
  ExtensionSet *pEVar1;
  long lVar2;
  ExtensionSet *pEVar3;
  ExtensionSet *pEVar4;
  long lVar5;
  ExtensionSet *pEVar6;
  bool bVar7;
  uint uStack_8c;
  
                    /* catch() { ... } // from try @ 005d8da0 with catch @ 005d8db8 */
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 005d8ddc to 006d8e03 has its CatchHandler @ 005d8e0c */
                    /* try { // try from 005d8e04 to 006d8e1f has its CatchHandler @ 005d8d54 */
  pEVar1 = this + 8;
  pEVar3 = *(ExtensionSet **)(this + 0x10);
  pEVar6 = pEVar1;
  if (*(ExtensionSet **)(this + 0x10) == (ExtensionSet *)0x0) {
LAB_005d8e40:
    if (pEVar6 != *(ExtensionSet **)(this + 0x18)) {
      pEVar4 = (ExtensionSet *)FUN_0064c700(pEVar6);
      goto LAB_005d8e54;
    }
LAB_005d8e60:
                    /* catch() { ... } // from try @ 005d8ed0 with catch @ 005d8e60
                       catch() { ... } // from try @ 005d8f74 with catch @ 005d8e60 */
    if (pEVar6 != (ExtensionSet *)0x0) {
      if (pEVar1 == pEVar6) {
        bVar7 = true;
      }
      else {
        bVar7 = param_1 < *(int *)(pEVar6 + 0x20);
      }
      pEVar4 = operator_new(0x48);
      *(int *)(pEVar4 + 0x20) = param_1;
      *(undefined8 *)(pEVar4 + 0x2c) = 0;
      *(ulong *)(pEVar4 + 0x24) = (ulong)uStack_8c;
      *(undefined8 *)(pEVar4 + 0x3c) = 0;
      *(undefined8 *)(pEVar4 + 0x34) = 0;
      *(undefined4 *)(pEVar4 + 0x44) = 0;
      FUN_0064c8a0(bVar7,pEVar4,pEVar6,pEVar1);
                    /* try { // try from 005d8ecc to 006d8ecf has its CatchHandler @ 005d8f2c */
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
      *(FieldDescriptor **)(pEVar4 + 0x38) = param_4;
      pEVar4[0x30] = (ExtensionSet)param_2;
      pEVar4[0x31] = (ExtensionSet)0x0;
                    /* try { // try from 005d8ed0 to 006d8f4b has its CatchHandler @ 005d8e60 */
      goto LAB_005d8ee8;
    }
    pEVar4 = (ExtensionSet *)0x0;
  }
  else {
    do {
                    /* catch() { ... } // from try @ 005d8ddc with catch @ 005d8e0c */
      pEVar4 = pEVar3;
                    /* catch() { ... } // from try @ 005d8d6c with catch @ 005d8e10 */
                    /* try { // try from 005d8e20 to 006d8e2b has its CatchHandler @ 005d8e2c */
      pEVar6 = pEVar4 + 0x10;
      if (*(int *)(pEVar4 + 0x20) <= param_1) {
        pEVar6 = pEVar4 + 0x18;
      }
      pEVar3 = *(ExtensionSet **)pEVar6;
    } while (*(ExtensionSet **)pEVar6 != (ExtensionSet *)0x0);
                    /* catch() { ... } // from try @ 005d8e20 with catch @ 005d8e2c */
                    /* try { // try from 005d8e30 to 006d8e33 has its CatchHandler @ 005d8e38 */
    pEVar6 = pEVar4;
    if (param_1 < *(int *)(pEVar4 + 0x20)) goto LAB_005d8e40;
LAB_005d8e54:
    if (*(int *)(pEVar4 + 0x20) < param_1) goto LAB_005d8e60;
  }
  *(FieldDescriptor **)(pEVar4 + 0x38) = param_4;
LAB_005d8ee8:
  pEVar4[0x32] = (ExtensionSet)0x0;
  *(int *)(pEVar4 + 0x28) = param_3;
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


