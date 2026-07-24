/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005db104
 * Function: google::protobuf::internal::ExtensionSet::AddDouble
 * Signature: undefined __thiscall AddDouble(ExtensionSet * this, int param_1, uchar param_2, bool param_3, double param_4, FieldDescriptor * param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::AddDouble(int, unsigned char, bool, double,
   google::protobuf::FieldDescriptor const*) */

void __thiscall
google::protobuf::internal::ExtensionSet::AddDouble
          (ExtensionSet *this,int param_1,uchar param_2,bool param_3,double param_4,
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
  uint uStack_9c;
  
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
  pEVar1 = this + 8;
  pEVar6 = *(ExtensionSet **)(this + 0x10);
  pEVar12 = pEVar1;
  if (*(ExtensionSet **)(this + 0x10) == (ExtensionSet *)0x0) {
LAB_005db198:
    if (pEVar12 != *(ExtensionSet **)(this + 0x18)) {
      pEVar7 = (ExtensionSet *)FUN_0064c700(pEVar12);
      goto LAB_005db1ac;
    }
LAB_005db1b8:
    if (pEVar12 != (ExtensionSet *)0x0) {
      if (pEVar1 == pEVar12) {
        bVar13 = true;
      }
      else {
                    /* try { // try from 005db1c4 to 006db1eb has its CatchHandler @ 005db5a8 */
        bVar13 = param_1 < *(int *)(pEVar12 + 0x20);
      }
                    /* try { // try from 005db1ec to 006db2ef has its CatchHandler @ 005dad60 */
      pEVar7 = operator_new(0x48);
      *(int *)(pEVar7 + 0x20) = param_1;
      *(undefined8 *)(pEVar7 + 0x2c) = 0;
      *(ulong *)(pEVar7 + 0x24) = (ulong)uStack_9c;
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
      *plVar8 = (long)(plVar8 + 2);
      *(long **)(pEVar7 + 0x28) = plVar8;
      plVar8[1] = lVar5;
      goto LAB_005db26c;
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
                    /* try { // try from 005db184 to 006db18f has its CatchHandler @ 005db5b4 */
    pEVar12 = pEVar7;
    if (param_1 < *(int *)(pEVar7 + 0x20)) goto LAB_005db198;
LAB_005db1ac:
    if (*(int *)(pEVar7 + 0x20) < param_1) goto LAB_005db1b8;
  }
  *(FieldDescriptor **)(pEVar7 + 0x38) = param_5;
LAB_005db26c:
  plVar8 = *(long **)(pEVar7 + 0x28);
  iVar11 = (int)plVar8[1];
  if (iVar11 == *(int *)((long)plVar8 + 0xc)) {
    uVar2 = iVar11 * 2;
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
    *plVar8 = (long)__dest;
    memcpy(__dest,__src,(long)iVar11 << 3);
    if ((__src != plVar8 + 2) && (__src != (long *)0x0)) {
      operator_delete__(__src);
      iVar11 = (int)plVar8[1];
    }
  }
  *(int *)(plVar8 + 1) = iVar11 + 1;
  *(double *)(*plVar8 + (long)iVar11 * 8) = param_4;
                    /* try { // try from 005db2f0 to 006db303 has its CatchHandler @ 005db3e0 */
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005db304 to 006db33b has its CatchHandler @ 005db3e4 */
  return;
}


