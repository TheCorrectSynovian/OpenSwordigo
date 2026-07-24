/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d98b4
 * Function: google::protobuf::internal::ExtensionSet::AddInt64
 * Signature: undefined __thiscall AddInt64(ExtensionSet * this, int param_1, uchar param_2, bool param_3, long param_4, FieldDescriptor * param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::AddInt64(int, unsigned char, bool, long,
   google::protobuf::FieldDescriptor const*) */

void __thiscall
google::protobuf::internal::ExtensionSet::AddInt64
          (ExtensionSet *this,int param_1,uchar param_2,bool param_3,long param_4,
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
  
                    /* try { // try from 005d98b8 to 006d98df has its CatchHandler @ 005d98e8 */
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 005d98e0 to 006d98fb has its CatchHandler @ 005d9830 */
                    /* catch() { ... } // from try @ 005d98b8 with catch @ 005d98e8 */
                    /* catch() { ... } // from try @ 005d9848 with catch @ 005d98ec */
                    /* try { // try from 005d98fc to 006d9907 has its CatchHandler @ 005d9908 */
                    /* catch() { ... } // from try @ 005d98fc with catch @ 005d9908 */
  pEVar1 = this + 8;
                    /* try { // try from 005d990c to 006d990f has its CatchHandler @ 005d9914 */
  pEVar6 = *(ExtensionSet **)(this + 0x10);
  pEVar12 = pEVar1;
  if (*(ExtensionSet **)(this + 0x10) == (ExtensionSet *)0x0) {
LAB_005d9944:
    if (pEVar12 != *(ExtensionSet **)(this + 0x18)) {
      pEVar7 = (ExtensionSet *)FUN_0064c700(pEVar12);
      goto LAB_005d9958;
    }
LAB_005d9964:
    if (pEVar12 != (ExtensionSet *)0x0) {
      if (pEVar1 == pEVar12) {
        bVar13 = true;
      }
      else {
        bVar13 = param_1 < *(int *)(pEVar12 + 0x20);
      }
      pEVar7 = operator_new(0x48);
                    /* try { // try from 005d99a8 to 006d99ab has its CatchHandler @ 005d9a08 */
                    /* try { // try from 005d99ac to 006d9a27 has its CatchHandler @ 005d993c */
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
                    /* catch() { ... } // from try @ 005d99a8 with catch @ 005d9a08 */
      *plVar8 = (long)(plVar8 + 2);
      plVar8[1] = lVar5;
      *(long **)(pEVar7 + 0x28) = plVar8;
      goto LAB_005d9a20;
    }
    pEVar7 = (ExtensionSet *)0x0;
  }
  else {
    do {
      pEVar7 = pEVar6;
                    /* catch() { ... } // from try @ 005d990c with catch @ 005d9914 */
      pEVar12 = pEVar7 + 0x10;
      if (*(int *)(pEVar7 + 0x20) <= param_1) {
        pEVar12 = pEVar7 + 0x18;
      }
      pEVar6 = *(ExtensionSet **)pEVar12;
    } while (*(ExtensionSet **)pEVar12 != (ExtensionSet *)0x0);
    pEVar12 = pEVar7;
    if (param_1 < *(int *)(pEVar7 + 0x20)) goto LAB_005d9944;
LAB_005d9958:
    if (*(int *)(pEVar7 + 0x20) < param_1) goto LAB_005d9964;
  }
  *(FieldDescriptor **)(pEVar7 + 0x38) = param_5;
LAB_005d9a20:
  plVar8 = *(long **)(pEVar7 + 0x28);
  iVar11 = (int)plVar8[1];
                    /* try { // try from 005d9a28 to 006d9a4f has its CatchHandler @ 005d9a58 */
  if (iVar11 == *(int *)((long)plVar8 + 0xc)) {
    uVar2 = iVar11 * 2;
    if ((int)uVar2 < iVar11 + 1) {
      uVar2 = iVar11 + 1;
    }
    __src = (long *)*plVar8;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (long)(int)uVar2;
                    /* try { // try from 005d9a50 to 006d9a5b has its CatchHandler @ 005d993c */
    *(uint *)((long)plVar8 + 0xc) = uVar2;
    uVar10 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
                    /* catch() { ... } // from try @ 005d9a28 with catch @ 005d9a58 */
                    /* catch() { ... } // from try @ 005d9b0c with catch @ 005d9a5c */
    if (SUB168(auVar3 * ZEXT816(8),8) != 0) {
      uVar10 = 0xffffffffffffffff;
    }
    __dest = operator_new__(uVar10);
    *plVar8 = (long)__dest;
                    /* try { // try from 005d9a74 to 006d9a7b has its CatchHandler @ 005d9b18 */
    memcpy(__dest,__src,(long)iVar11 << 3);
    if ((__src != plVar8 + 2) && (__src != (long *)0x0)) {
      operator_delete__(__src);
      iVar11 = (int)plVar8[1];
    }
  }
  *(int *)(plVar8 + 1) = iVar11 + 1;
  *(long *)(*plVar8 + (long)iVar11 * 8) = param_4;
                    /* try { // try from 005d9aa8 to 006d9ab3 has its CatchHandler @ 005d9ac0 */
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 005d9aa8 with catch @ 005d9ac0 */
  return;
}


