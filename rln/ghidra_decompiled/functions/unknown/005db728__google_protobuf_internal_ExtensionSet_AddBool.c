/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005db728
 * Function: google::protobuf::internal::ExtensionSet::AddBool
 * Signature: undefined __thiscall AddBool(ExtensionSet * this, int param_1, uchar param_2, bool param_3, bool param_4, FieldDescriptor * param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::AddBool(int, unsigned char, bool, bool,
   google::protobuf::FieldDescriptor const*) */

void __thiscall
google::protobuf::internal::ExtensionSet::AddBool
          (ExtensionSet *this,int param_1,uchar param_2,bool param_3,bool param_4,
          FieldDescriptor *param_5)

{
  ExtensionSet *pEVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ExtensionSet *pEVar5;
  ExtensionSet *pEVar6;
  long *plVar7;
  void *__dest;
  long lVar8;
  ulong uVar9;
  long *__src;
  int iVar10;
  ExtensionSet *pEVar11;
  bool bVar12;
  uint uStack_8c;
  
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 005db6b0 with catch @ 005db758 */
                    /* try { // try from 005db77c to 006db7a3 has its CatchHandler @ 005db7ac */
  pEVar1 = this + 8;
  pEVar5 = *(ExtensionSet **)(this + 0x10);
  pEVar11 = pEVar1;
  if (*(ExtensionSet **)(this + 0x10) == (ExtensionSet *)0x0) {
LAB_005db7b8:
                    /* try { // try from 005db7bc to 006db7bf has its CatchHandler @ 005db7c0 */
                    /* catch() { ... } // from try @ 005db7bc with catch @ 005db7c0 */
    if (pEVar11 != *(ExtensionSet **)(this + 0x18)) {
                    /* try { // try from 005db7c4 to 006db7c7 has its CatchHandler @ 005db7cc */
      pEVar6 = (ExtensionSet *)FUN_0064c700(pEVar11);
      goto LAB_005db7cc;
    }
LAB_005db7d8:
    if (pEVar11 != (ExtensionSet *)0x0) {
      if (pEVar1 == pEVar11) {
        bVar12 = true;
      }
      else {
        bVar12 = param_1 < *(int *)(pEVar11 + 0x20);
      }
      pEVar6 = operator_new(0x48);
                    /* try { // try from 005db830 to 006db83f has its CatchHandler @ 005db994 */
      *(int *)(pEVar6 + 0x20) = param_1;
      *(undefined8 *)(pEVar6 + 0x2c) = 0;
      *(ulong *)(pEVar6 + 0x24) = (ulong)uStack_8c;
      *(undefined8 *)(pEVar6 + 0x3c) = 0;
      *(undefined8 *)(pEVar6 + 0x34) = 0;
      *(undefined4 *)(pEVar6 + 0x44) = 0;
      FUN_0064c8a0(bVar12,pEVar6,pEVar11,pEVar1);
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
      *(FieldDescriptor **)(pEVar6 + 0x38) = param_5;
      pEVar6[0x30] = (ExtensionSet)param_2;
      pEVar6[0x31] = (ExtensionSet)0x1;
      pEVar6[0x33] = (ExtensionSet)param_3;
      plVar7 = operator_new(0x18);
      lVar4 = DAT_0068b470;
                    /* try { // try from 005db878 to 006db89f has its CatchHandler @ 005db998 */
      *plVar7 = (long)(plVar7 + 2);
      plVar7[1] = lVar4;
      *(long **)(pEVar6 + 0x28) = plVar7;
      goto LAB_005db894;
    }
    pEVar6 = (ExtensionSet *)0x0;
  }
  else {
    do {
      pEVar6 = pEVar5;
      pEVar11 = pEVar6 + 0x10;
      if (*(int *)(pEVar6 + 0x20) <= param_1) {
        pEVar11 = pEVar6 + 0x18;
      }
      pEVar5 = *(ExtensionSet **)pEVar11;
    } while (*(ExtensionSet **)pEVar11 != (ExtensionSet *)0x0);
                    /* try { // try from 005db7a4 to 006db7bb has its CatchHandler @ 005db608 */
                    /* catch() { ... } // from try @ 005db77c with catch @ 005db7ac */
    pEVar11 = pEVar6;
    if (param_1 < *(int *)(pEVar6 + 0x20)) goto LAB_005db7b8;
LAB_005db7cc:
                    /* catch() { ... } // from try @ 005db7c4 with catch @ 005db7cc */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005db8a0 with catch @ 005db7d0
                       catch(type#1 @ 00000000) { ... } // from try @ 005db9e4 with catch @ 005db7d0
                        */
    if (*(int *)(pEVar6 + 0x20) < param_1) goto LAB_005db7d8;
  }
  *(FieldDescriptor **)(pEVar6 + 0x38) = param_5;
LAB_005db894:
  plVar7 = *(long **)(pEVar6 + 0x28);
  iVar10 = (int)plVar7[1];
                    /* try { // try from 005db8a0 to 006db9bb has its CatchHandler @ 005db7d0 */
  if (iVar10 == *(int *)((long)plVar7 + 0xc)) {
    iVar2 = iVar10 * 2;
    if (iVar2 < iVar10 + 1) {
      iVar2 = iVar10 + 1;
    }
    __src = (long *)*plVar7;
    *(int *)((long)plVar7 + 0xc) = iVar2;
    uVar9 = (ulong)iVar2;
    if ((long)uVar9 < 0) {
      uVar9 = 0xffffffffffffffff;
    }
    __dest = operator_new__(uVar9);
    *plVar7 = (long)__dest;
    memcpy(__dest,__src,(long)iVar10);
    if ((__src != plVar7 + 2) && (__src != (long *)0x0)) {
      operator_delete__(__src);
      iVar10 = (int)plVar7[1];
    }
  }
  *(int *)(plVar7 + 1) = iVar10 + 1;
  *(bool *)(*plVar7 + (long)iVar10) = param_4;
  if (*(long *)(lVar3 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


