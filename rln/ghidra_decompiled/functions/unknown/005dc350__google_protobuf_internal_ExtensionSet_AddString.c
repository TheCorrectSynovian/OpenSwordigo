/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005dc350
 * Function: google::protobuf::internal::ExtensionSet::AddString
 * Signature: undefined __thiscall AddString(ExtensionSet * this, int param_1, uchar param_2, FieldDescriptor * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::AddString(int, unsigned char,
   google::protobuf::FieldDescriptor const*) */

void __thiscall
google::protobuf::internal::ExtensionSet::AddString
          (ExtensionSet *this,int param_1,uchar param_2,FieldDescriptor *param_3)

{
  ExtensionSet *pEVar1;
  int iVar2;
  long lVar3;
  ExtensionSet *pEVar4;
  ExtensionSet *pEVar5;
  long *plVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  RepeatedPtrFieldBase *this_00;
  ExtensionSet *pEVar10;
  bool bVar11;
  uint uStack_8c;
  
  lVar3 = tpidr_el0;
  lVar9 = *(long *)(lVar3 + 0x28);
  pEVar1 = this + 8;
  pEVar4 = *(ExtensionSet **)(this + 0x10);
  pEVar10 = pEVar1;
  if (*(ExtensionSet **)(this + 0x10) == (ExtensionSet *)0x0) {
LAB_005dc3d8:
    if (pEVar10 != *(ExtensionSet **)(this + 0x18)) {
      pEVar5 = (ExtensionSet *)FUN_0064c700(pEVar10);
      goto LAB_005dc3ec;
    }
LAB_005dc3f8:
    if (pEVar10 != (ExtensionSet *)0x0) {
      if (pEVar1 == pEVar10) {
        bVar11 = true;
      }
      else {
        bVar11 = param_1 < *(int *)(pEVar10 + 0x20);
      }
      pEVar5 = operator_new(0x48);
      *(int *)(pEVar5 + 0x20) = param_1;
      *(undefined8 *)(pEVar5 + 0x2c) = 0;
      *(ulong *)(pEVar5 + 0x24) = (ulong)uStack_8c;
      *(undefined8 *)(pEVar5 + 0x3c) = 0;
      *(undefined8 *)(pEVar5 + 0x34) = 0;
      *(undefined4 *)(pEVar5 + 0x44) = 0;
      FUN_0064c8a0(bVar11,pEVar5,pEVar10,pEVar1);
                    /* catch() { ... } // from try @ 005dc5fc with catch @ 005dc478
                       catch() { ... } // from try @ 005dc778 with catch @ 005dc478 */
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
      *(FieldDescriptor **)(pEVar5 + 0x38) = param_3;
      pEVar5[0x30] = (ExtensionSet)param_2;
      pEVar5[0x31] = (ExtensionSet)0x1;
      pEVar5[0x33] = (ExtensionSet)0x0;
      plVar6 = operator_new(0x38);
      *plVar6 = (long)(plVar6 + 3);
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 4;
      *(long **)(pEVar5 + 0x28) = plVar6;
      goto LAB_005dc4a4;
    }
    pEVar5 = (ExtensionSet *)0x0;
  }
  else {
    do {
      pEVar5 = pEVar4;
      pEVar10 = pEVar5 + 0x10;
      if (*(int *)(pEVar5 + 0x20) <= param_1) {
        pEVar10 = pEVar5 + 0x18;
      }
      pEVar4 = *(ExtensionSet **)pEVar10;
    } while (*(ExtensionSet **)pEVar10 != (ExtensionSet *)0x0);
    pEVar10 = pEVar5;
    if (param_1 < *(int *)(pEVar5 + 0x20)) goto LAB_005dc3d8;
LAB_005dc3ec:
    if (*(int *)(pEVar5 + 0x20) < param_1) goto LAB_005dc3f8;
  }
  *(FieldDescriptor **)(pEVar5 + 0x38) = param_3;
LAB_005dc4a4:
  this_00 = *(RepeatedPtrFieldBase **)(pEVar5 + 0x28);
  iVar2 = *(int *)(this_00 + 8);
  iVar8 = *(int *)(this_00 + 0xc);
  if (iVar2 < iVar8) {
    *(int *)(this_00 + 8) = iVar2 + 1;
    uVar7 = *(undefined8 *)(*(long *)this_00 + (long)iVar2 * 8);
                    /* try { // try from 005dc4c8 to 006dc4ef has its CatchHandler @ 005dc658 */
  }
  else {
    if (iVar8 == *(int *)(this_00 + 0x10)) {
      RepeatedPtrFieldBase::Reserve(this_00,iVar8 + 1);
      iVar8 = *(int *)(this_00 + 0xc);
    }
    *(int *)(this_00 + 0xc) = iVar8 + 1;
    uVar7 = StringTypeHandlerBase::New();
    iVar2 = *(int *)(this_00 + 8);
    *(int *)(this_00 + 8) = iVar2 + 1;
    *(undefined8 *)(*(long *)this_00 + (long)iVar2 * 8) = uVar7;
  }
  if (*(long *)(lVar3 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
                    /* try { // try from 005dc52c to 006dc553 has its CatchHandler @ 005dc648 */
  return;
}


