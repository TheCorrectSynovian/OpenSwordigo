/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005da4d4
 * Function: google::protobuf::internal::ExtensionSet::AddUInt64
 * Signature: undefined __thiscall AddUInt64(ExtensionSet * this, int param_1, uchar param_2, bool param_3, ulong param_4, FieldDescriptor * param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::AddUInt64(int, unsigned char, bool, unsigned long,
   google::protobuf::FieldDescriptor const*) */

void __thiscall
google::protobuf::internal::ExtensionSet::AddUInt64
          (ExtensionSet *this,int param_1,uchar param_2,bool param_3,ulong param_4,
          FieldDescriptor *param_5)

{
  ExtensionSet *pEVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  long lVar5;
  ExtensionSet *pEVar6;
  ExtensionSet *pEVar7;
  long *plVar8;
  void *__dest;
  long lVar9;
  ulong uVar10;
  long *__src;
  int iVar11;
  ExtensionSet *pEVar12;
  bool bVar13;
  uint uStack_8c;
  
                    /* try { // try from 005da4d4 to 006da64b has its CatchHandler @ 005da07c */
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
  pEVar1 = this + 8;
  pEVar6 = *(ExtensionSet **)(this + 0x10);
  pEVar12 = pEVar1;
  if (*(ExtensionSet **)(this + 0x10) == (ExtensionSet *)0x0) {
LAB_005da564:
    if (pEVar12 != *(ExtensionSet **)(this + 0x18)) {
      pEVar7 = (ExtensionSet *)FUN_0064c700(pEVar12);
      goto LAB_005da578;
    }
LAB_005da584:
    if (pEVar12 != (ExtensionSet *)0x0) {
      if (pEVar1 == pEVar12) {
        bVar13 = true;
      }
      else {
        bVar13 = param_1 < *(int *)(pEVar12 + 0x20);
      }
      pEVar7 = operator_new(0x48);
      *(int *)(pEVar7 + 0x20) = param_1;
      *(undefined8 *)(pEVar7 + 0x2c) = 0;
      *(ulong *)(pEVar7 + 0x24) = (ulong)uStack_8c;
      *(undefined8 *)(pEVar7 + 0x3c) = 0;
      *(undefined8 *)(pEVar7 + 0x34) = 0;
      *(undefined4 *)(pEVar7 + 0x44) = 0;
      FUN_0064c8a0(bVar13,pEVar7,pEVar12,pEVar1);
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
      *(FieldDescriptor **)(pEVar7 + 0x38) = param_5;
      pEVar7[0x30] = (ExtensionSet)param_2;
      pEVar7[0x31] = (ExtensionSet)0x1;
      pEVar7[0x33] = (ExtensionSet)param_3;
      plVar8 = operator_new(0x30);
      lVar5 = DAT_0068b470;
                    /* catch() { ... } // from try @ 005da318 with catch @ 005da624 */
      *plVar8 = (long)(plVar8 + 2);
      plVar8[1] = lVar5;
      *(long **)(pEVar7 + 0x28) = plVar8;
      goto LAB_005da640;
    }
    pEVar7 = (ExtensionSet *)0x0;
  }
  else {
    do {
      pEVar7 = pEVar6;
      pEVar12 = pEVar7 + 0x10;
      if (*(int *)(pEVar7 + 0x20) <= param_1) {
        pEVar12 = pEVar7 + 0x18;
      }
      pEVar6 = *(ExtensionSet **)pEVar12;
    } while (*(ExtensionSet **)pEVar12 != (ExtensionSet *)0x0);
    pEVar12 = pEVar7;
    if (param_1 < *(int *)(pEVar7 + 0x20)) goto LAB_005da564;
LAB_005da578:
    if (*(int *)(pEVar7 + 0x20) < param_1) goto LAB_005da584;
  }
  *(FieldDescriptor **)(pEVar7 + 0x38) = param_5;
LAB_005da640:
  plVar8 = *(long **)(pEVar7 + 0x28);
  iVar11 = (int)plVar8[1];
                    /* try { // try from 005da64c to 006da743 has its CatchHandler @ 005daa28 */
  if (iVar11 == *(int *)((long)plVar8 + 0xc)) {
    uVar2 = iVar11 * 2;
                    /* catch() { ... } // from try @ 005da26c with catch @ 005da658 */
    if ((int)uVar2 < iVar11 + 1) {
      uVar2 = iVar11 + 1;
    }
    __src = (long *)*plVar8;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (long)(int)uVar2;
    *(uint *)((long)plVar8 + 0xc) = uVar2;
    uVar10 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
    if (SUB168(auVar3 * ZEXT816(8),8) != 0) {
      uVar10 = 0xffffffffffffffff;
    }
    __dest = operator_new__(uVar10);
                    /* catch() { ... } // from try @ 005da1b8 with catch @ 005da68c */
    *plVar8 = (long)__dest;
    memcpy(__dest,__src,(long)iVar11 << 3);
    if ((__src != plVar8 + 2) && (__src != (long *)0x0)) {
      operator_delete__(__src);
      iVar11 = (int)plVar8[1];
    }
  }
  *(int *)(plVar8 + 1) = iVar11 + 1;
                    /* catch() { ... } // from try @ 005da4a0 with catch @ 005da6c0 */
  *(ulong *)(*plVar8 + (long)iVar11 * 8) = param_4;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 005da46c with catch @ 005da6f4 */
    __stack_chk_fail();
  }
  return;
}


