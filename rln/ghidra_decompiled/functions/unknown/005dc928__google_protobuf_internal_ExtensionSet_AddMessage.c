/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005dc928
 * Function: google::protobuf::internal::ExtensionSet::AddMessage
 * Signature: undefined __thiscall AddMessage(ExtensionSet * this, int param_1, uchar param_2, MessageLite * param_3, FieldDescriptor * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::AddMessage(int, unsigned char,
   google::protobuf::MessageLite const&, google::protobuf::FieldDescriptor const*) */

long __thiscall
google::protobuf::internal::ExtensionSet::AddMessage
          (ExtensionSet *this,int param_1,uchar param_2,MessageLite *param_3,
          FieldDescriptor *param_4)

{
  ExtensionSet *pEVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ExtensionSet *pEVar5;
  ExtensionSet *pEVar6;
  long *plVar7;
  long lVar8;
  RepeatedPtrFieldBase *this_00;
  long lVar9;
  ExtensionSet *pEVar10;
  bool bVar11;
  uint uStack_8c;
  
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
  pEVar1 = this + 8;
  pEVar5 = *(ExtensionSet **)(this + 0x10);
  pEVar10 = pEVar1;
  if (*(ExtensionSet **)(this + 0x10) == (ExtensionSet *)0x0) {
LAB_005dc9b4:
    if (pEVar10 != *(ExtensionSet **)(this + 0x18)) {
      pEVar6 = (ExtensionSet *)FUN_0064c700(pEVar10);
      goto LAB_005dc9c8;
    }
LAB_005dc9d4:
    if (pEVar10 == (ExtensionSet *)0x0) {
      pEVar6 = (ExtensionSet *)0x0;
      goto LAB_005dc9f4;
    }
    if (pEVar1 == pEVar10) {
                    /* try { // try from 005dca00 to 006dca27 has its CatchHandler @ 005dca38 */
      bVar11 = true;
    }
    else {
      bVar11 = param_1 < *(int *)(pEVar10 + 0x20);
    }
    pEVar6 = operator_new(0x48);
                    /* try { // try from 005dca28 to 006dca4b has its CatchHandler @ 005dc9a8 */
    *(int *)(pEVar6 + 0x20) = param_1;
    *(undefined8 *)(pEVar6 + 0x2c) = 0;
    *(ulong *)(pEVar6 + 0x24) = (ulong)uStack_8c;
    *(undefined8 *)(pEVar6 + 0x3c) = 0;
    *(undefined8 *)(pEVar6 + 0x34) = 0;
                    /* catch() { ... } // from try @ 005dca00 with catch @ 005dca38 */
    *(undefined4 *)(pEVar6 + 0x44) = 0;
    FUN_0064c8a0(bVar11,pEVar6,pEVar10,pEVar1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
    *(FieldDescriptor **)(pEVar6 + 0x38) = param_4;
    pEVar6[0x30] = (ExtensionSet)param_2;
    pEVar6[0x31] = (ExtensionSet)0x1;
                    /* catch() { ... } // from try @ 005dca94 with catch @ 005dca64 */
    plVar7 = operator_new(0x38);
    *plVar7 = (long)(plVar7 + 3);
    plVar7[1] = 0;
    *(undefined4 *)(plVar7 + 2) = 4;
    *(long **)(pEVar6 + 0x28) = plVar7;
  }
  else {
    do {
      pEVar6 = pEVar5;
      pEVar10 = pEVar6 + 0x10;
      if (*(int *)(pEVar6 + 0x20) <= param_1) {
        pEVar10 = pEVar6 + 0x18;
      }
      pEVar5 = *(ExtensionSet **)pEVar10;
    } while (*(ExtensionSet **)pEVar10 != (ExtensionSet *)0x0);
                    /* catch() { ... } // from try @ 005dca28 with catch @ 005dc9a8 */
    pEVar10 = pEVar6;
    if (param_1 < *(int *)(pEVar6 + 0x20)) goto LAB_005dc9b4;
LAB_005dc9c8:
    if (*(int *)(pEVar6 + 0x20) < param_1) goto LAB_005dc9d4;
LAB_005dc9f4:
    *(FieldDescriptor **)(pEVar6 + 0x38) = param_4;
  }
  plVar7 = *(long **)(pEVar6 + 0x28);
                    /* try { // try from 005dca80 to 006dca93 has its CatchHandler @ 005dcab8 */
  iVar3 = (int)plVar7[1];
  if (iVar3 < *(int *)((long)plVar7 + 0xc)) {
                    /* try { // try from 005dca94 to 006dcabb has its CatchHandler @ 005dca64 */
    *(int *)(plVar7 + 1) = iVar3 + 1;
    lVar9 = *(long *)(*plVar7 + (long)iVar3 * 8);
    if (lVar9 != 0) goto LAB_005dcb3c;
  }
  lVar9 = (**(code **)(*(long *)param_3 + 0x18))(param_3);
  this_00 = *(RepeatedPtrFieldBase **)(pEVar6 + 0x28);
                    /* catch() { ... } // from try @ 005dca80 with catch @ 005dcab8 */
  iVar3 = *(int *)(this_00 + 8);
                    /* try { // try from 005dcac0 to 006dcc27 has its CatchHandler @ 005dcac0
                       catch() { ... } // from try @ 005dcac0 with catch @ 005dcac0
                       catch() { ... } // from try @ 005dcda4 with catch @ 005dcac0
                       catch() { ... } // from try @ 005dd018 with catch @ 005dcac0 */
  if (iVar3 == *(int *)(this_00 + 0x10)) {
    RepeatedPtrFieldBase::Reserve(this_00,iVar3 + 1);
    iVar2 = *(int *)(this_00 + 0xc);
LAB_005dcb24:
    *(int *)(this_00 + 0xc) = iVar2 + 1;
  }
  else {
    iVar2 = *(int *)(this_00 + 0xc);
    if (iVar2 != *(int *)(this_00 + 0x10)) {
      if (iVar3 < iVar2) {
        *(undefined8 *)(*(long *)this_00 + (long)iVar2 * 8) =
             *(undefined8 *)(*(long *)this_00 + (long)iVar3 * 8);
      }
      goto LAB_005dcb24;
    }
    plVar7 = *(long **)(*(long *)this_00 + (long)iVar3 * 8);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  iVar3 = *(int *)(this_00 + 8);
  *(int *)(this_00 + 8) = iVar3 + 1;
  *(long *)(*(long *)this_00 + (long)iVar3 * 8) = lVar9;
LAB_005dcb3c:
  if (*(long *)(lVar4 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar9;
}


