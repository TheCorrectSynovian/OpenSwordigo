/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d9530
 * Function: google::protobuf::internal::ExtensionSet::SetInt64
 * Signature: undefined __thiscall SetInt64(ExtensionSet * this, int param_1, uchar param_2, long param_3, FieldDescriptor * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::SetInt64(int, unsigned char, long,
   google::protobuf::FieldDescriptor const*) */

void __thiscall
google::protobuf::internal::ExtensionSet::SetInt64
          (ExtensionSet *this,int param_1,uchar param_2,long param_3,FieldDescriptor *param_4)

{
  ExtensionSet *pEVar1;
  long lVar2;
  ExtensionSet *pEVar3;
  ExtensionSet *pEVar4;
  long lVar5;
  ExtensionSet *pEVar6;
  bool bVar7;
  uint uStack_8c;
  
                    /* try { // try from 005d9550 to 006d9553 has its CatchHandler @ 005d95b0 */
  lVar2 = tpidr_el0;
                    /* try { // try from 005d9554 to 006d95cf has its CatchHandler @ 005d94e4 */
  lVar5 = *(long *)(lVar2 + 0x28);
  pEVar1 = this + 8;
  pEVar3 = *(ExtensionSet **)(this + 0x10);
  pEVar6 = pEVar1;
  if (*(ExtensionSet **)(this + 0x10) == (ExtensionSet *)0x0) {
LAB_005d95bc:
    if (pEVar6 != *(ExtensionSet **)(this + 0x18)) {
      pEVar4 = (ExtensionSet *)FUN_0064c700(pEVar6);
      goto LAB_005d95d0;
    }
LAB_005d95dc:
    if (pEVar6 != (ExtensionSet *)0x0) {
      if (pEVar1 == pEVar6) {
        bVar7 = true;
      }
      else {
        bVar7 = param_1 < *(int *)(pEVar6 + 0x20);
      }
      pEVar4 = operator_new(0x48);
                    /* try { // try from 005d961c to 006d9623 has its CatchHandler @ 005d96c0 */
      *(int *)(pEVar4 + 0x20) = param_1;
      *(undefined8 *)(pEVar4 + 0x2c) = 0;
      *(ulong *)(pEVar4 + 0x24) = (ulong)uStack_8c;
      *(undefined8 *)(pEVar4 + 0x3c) = 0;
      *(undefined8 *)(pEVar4 + 0x34) = 0;
      *(undefined4 *)(pEVar4 + 0x44) = 0;
      FUN_0064c8a0(bVar7,pEVar4,pEVar6,pEVar1);
                    /* try { // try from 005d9650 to 006d965b has its CatchHandler @ 005d9668 */
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
      *(FieldDescriptor **)(pEVar4 + 0x38) = param_4;
      pEVar4[0x30] = (ExtensionSet)param_2;
      pEVar4[0x31] = (ExtensionSet)0x0;
      goto LAB_005d9664;
    }
                    /* try { // try from 005d95f8 to 006d9603 has its CatchHandler @ 005d94e4 */
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
                    /* catch() { ... } // from try @ 005d9550 with catch @ 005d95b0 */
    pEVar6 = pEVar4;
    if (param_1 < *(int *)(pEVar4 + 0x20)) goto LAB_005d95bc;
LAB_005d95d0:
                    /* try { // try from 005d95d0 to 006d95f7 has its CatchHandler @ 005d9600 */
    if (*(int *)(pEVar4 + 0x20) < param_1) goto LAB_005d95dc;
  }
                    /* catch() { ... } // from try @ 005d95d0 with catch @ 005d9600 */
  *(FieldDescriptor **)(pEVar4 + 0x38) = param_4;
                    /* catch() { ... } // from try @ 005d96b4 with catch @ 005d9604 */
LAB_005d9664:
  pEVar4[0x32] = (ExtensionSet)0x0;
                    /* catch() { ... } // from try @ 005d9650 with catch @ 005d9668 */
  *(long *)(pEVar4 + 0x28) = param_3;
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005d968c to 006d96b3 has its CatchHandler @ 005d96bc */
  return;
}


