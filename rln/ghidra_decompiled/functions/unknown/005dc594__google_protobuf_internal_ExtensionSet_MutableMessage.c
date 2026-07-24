/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005dc594
 * Function: google::protobuf::internal::ExtensionSet::MutableMessage
 * Signature: undefined __thiscall MutableMessage(ExtensionSet * this, int param_1, uchar param_2, MessageLite * param_3, FieldDescriptor * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::MutableMessage(int, unsigned char,
   google::protobuf::MessageLite const&, google::protobuf::FieldDescriptor const*) */

void __thiscall
google::protobuf::internal::ExtensionSet::MutableMessage
          (ExtensionSet *this,int param_1,uchar param_2,MessageLite *param_3,
          FieldDescriptor *param_4)

{
  ExtensionSet *pEVar1;
  long lVar2;
  ExtensionSet *pEVar3;
  ExtensionSet *pEVar4;
  undefined8 uVar5;
  long lVar6;
  ExtensionSet *pEVar7;
  bool bVar8;
  uint uStack_8c;
  
                    /* try { // try from 005dc5b0 to 006dc5b3 has its CatchHandler @ 005dc628 */
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 005dc5d4 to 006dc5d7 has its CatchHandler @ 005dc618 */
  pEVar1 = this + 8;
  pEVar3 = *(ExtensionSet **)(this + 0x10);
  pEVar7 = pEVar1;
  if (*(ExtensionSet **)(this + 0x10) == (ExtensionSet *)0x0) {
LAB_005dc620:
                    /* catch() { ... } // from try @ 005dc5b0 with catch @ 005dc628 */
    if (pEVar7 != *(ExtensionSet **)(this + 0x18)) {
      pEVar4 = (ExtensionSet *)FUN_0064c700(pEVar7);
      goto LAB_005dc634;
    }
LAB_005dc640:
    if (pEVar7 != (ExtensionSet *)0x0) {
                    /* catch() { ... } // from try @ 005dc52c with catch @ 005dc648 */
      if (pEVar1 == pEVar7) {
        bVar8 = true;
      }
      else {
        bVar8 = param_1 < *(int *)(pEVar7 + 0x20);
                    /* catch() { ... } // from try @ 005dc4c8 with catch @ 005dc658 */
      }
      pEVar4 = operator_new(0x48);
                    /* try { // try from 005dc68c to 006dc777 has its CatchHandler @ 005dc780 */
      *(int *)(pEVar4 + 0x20) = param_1;
      *(undefined8 *)(pEVar4 + 0x2c) = 0;
      *(ulong *)(pEVar4 + 0x24) = (ulong)uStack_8c;
      *(undefined8 *)(pEVar4 + 0x3c) = 0;
      *(undefined8 *)(pEVar4 + 0x34) = 0;
      *(undefined4 *)(pEVar4 + 0x44) = 0;
      FUN_0064c8a0(bVar8,pEVar4,pEVar7,pEVar1);
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
      *(FieldDescriptor **)(pEVar4 + 0x38) = param_4;
      pEVar4[0x30] = (ExtensionSet)param_2;
      pEVar4[0x31] = (ExtensionSet)0x0;
      uVar5 = (**(code **)(*(long *)param_3 + 0x18))(param_3);
      *(undefined8 *)(pEVar4 + 0x28) = uVar5;
      goto LAB_005dc6dc;
    }
    pEVar4 = (ExtensionSet *)0x0;
  }
  else {
    do {
      pEVar4 = pEVar3;
                    /* try { // try from 005dc5f8 to 006dc5fb has its CatchHandler @ 005dc610 */
                    /* try { // try from 005dc5fc to 006dc68b has its CatchHandler @ 005dc478 */
      pEVar7 = pEVar4 + 0x10;
      if (*(int *)(pEVar4 + 0x20) <= param_1) {
        pEVar7 = pEVar4 + 0x18;
      }
      pEVar3 = *(ExtensionSet **)pEVar7;
    } while (*(ExtensionSet **)pEVar7 != (ExtensionSet *)0x0);
                    /* catch() { ... } // from try @ 005dc5f8 with catch @ 005dc610 */
    pEVar7 = pEVar4;
    if (param_1 < *(int *)(pEVar4 + 0x20)) goto LAB_005dc620;
LAB_005dc634:
                    /* catch() { ... } // from try @ 005dc58c with catch @ 005dc638 */
    if (*(int *)(pEVar4 + 0x20) < param_1) goto LAB_005dc640;
  }
  *(FieldDescriptor **)(pEVar4 + 0x38) = param_4;
LAB_005dc6dc:
  pEVar4[0x32] = (ExtensionSet)0x0;
  if (*(long *)(lVar2 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(undefined8 *)(pEVar4 + 0x28));
  }
  return;
}


