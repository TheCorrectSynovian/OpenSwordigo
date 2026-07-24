/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d92a4
 * Function: google::protobuf::internal::ExtensionSet::AddInt32
 * Signature: undefined __thiscall AddInt32(ExtensionSet * this, int param_1, uchar param_2, bool param_3, int param_4, FieldDescriptor * param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::AddInt32(int, unsigned char, bool, int,
   google::protobuf::FieldDescriptor const*) */

void __thiscall
google::protobuf::internal::ExtensionSet::AddInt32
          (ExtensionSet *this,int param_1,uchar param_2,bool param_3,int param_4,
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
  
                    /* catch() { ... } // from try @ 005d9328 with catch @ 005d92b8
                       catch() { ... } // from try @ 005d93cc with catch @ 005d92b8 */
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
  pEVar1 = this + 8;
  pEVar6 = *(ExtensionSet **)(this + 0x10);
  pEVar12 = pEVar1;
  if (*(ExtensionSet **)(this + 0x10) == (ExtensionSet *)0x0) {
LAB_005d9334:
    if (pEVar12 != *(ExtensionSet **)(this + 0x18)) {
      pEVar7 = (ExtensionSet *)FUN_0064c700(pEVar12);
      goto LAB_005d9348;
    }
LAB_005d9354:
    if (pEVar12 != (ExtensionSet *)0x0) {
      if (pEVar1 == pEVar12) {
                    /* catch() { ... } // from try @ 005d9324 with catch @ 005d9384 */
        bVar13 = true;
      }
      else {
        bVar13 = param_1 < *(int *)(pEVar12 + 0x20);
      }
      pEVar7 = operator_new(0x48);
                    /* try { // try from 005d93a4 to 006d93cb has its CatchHandler @ 005d93d4 */
      *(int *)(pEVar7 + 0x20) = param_1;
      *(undefined8 *)(pEVar7 + 0x2c) = 0;
      *(ulong *)(pEVar7 + 0x24) = (ulong)uStack_8c;
      *(undefined8 *)(pEVar7 + 0x3c) = 0;
      *(undefined8 *)(pEVar7 + 0x34) = 0;
      *(undefined4 *)(pEVar7 + 0x44) = 0;
      FUN_0064c8a0(bVar13,pEVar7,pEVar12,pEVar1);
                    /* catch() { ... } // from try @ 005d93a4 with catch @ 005d93d4 */
                    /* catch() { ... } // from try @ 005d9488 with catch @ 005d93d8 */
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
      *(FieldDescriptor **)(pEVar7 + 0x38) = param_5;
      pEVar7[0x30] = (ExtensionSet)param_2;
      pEVar7[0x31] = (ExtensionSet)0x1;
      pEVar7[0x33] = (ExtensionSet)param_3;
                    /* try { // try from 005d93f0 to 006d93f7 has its CatchHandler @ 005d9494 */
      plVar8 = operator_new(0x20);
      lVar5 = DAT_0068b470;
      *plVar8 = (long)(plVar8 + 2);
      plVar8[1] = lVar5;
      *(long **)(pEVar7 + 0x28) = plVar8;
                    /* try { // try from 005d93cc to 006d93d7 has its CatchHandler @ 005d92b8 */
      goto LAB_005d9410;
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
                    /* try { // try from 005d9324 to 006d9327 has its CatchHandler @ 005d9384 */
                    /* try { // try from 005d9328 to 006d93a3 has its CatchHandler @ 005d92b8 */
    pEVar12 = pEVar7;
    if (param_1 < *(int *)(pEVar7 + 0x20)) goto LAB_005d9334;
LAB_005d9348:
    if (*(int *)(pEVar7 + 0x20) < param_1) goto LAB_005d9354;
  }
  *(FieldDescriptor **)(pEVar7 + 0x38) = param_5;
LAB_005d9410:
  plVar8 = *(long **)(pEVar7 + 0x28);
  iVar11 = (int)plVar8[1];
  if (iVar11 == *(int *)((long)plVar8 + 0xc)) {
                    /* try { // try from 005d9424 to 006d942f has its CatchHandler @ 005d943c */
    uVar2 = iVar11 * 2;
    if ((int)uVar2 < iVar11 + 1) {
      uVar2 = iVar11 + 1;
    }
    __src = (long *)*plVar8;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (long)(int)uVar2;
                    /* catch() { ... } // from try @ 005d9424 with catch @ 005d943c */
    *(uint *)((long)plVar8 + 0xc) = uVar2;
    uVar10 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
    if (SUB168(auVar3 * ZEXT816(4),8) != 0) {
      uVar10 = 0xffffffffffffffff;
    }
    __dest = operator_new__(uVar10);
                    /* try { // try from 005d9460 to 006d9487 has its CatchHandler @ 005d9490 */
    *plVar8 = (long)__dest;
    memcpy(__dest,__src,(long)iVar11 << 2);
    if ((__src != plVar8 + 2) && (__src != (long *)0x0)) {
      operator_delete__(__src);
      iVar11 = (int)plVar8[1];
    }
  }
                    /* try { // try from 005d9488 to 006d94a3 has its CatchHandler @ 005d93d8 */
  *(int *)(plVar8 + 1) = iVar11 + 1;
                    /* catch() { ... } // from try @ 005d9460 with catch @ 005d9490 */
  *(int *)(*plVar8 + (long)iVar11 * 4) = param_4;
                    /* catch() { ... } // from try @ 005d93f0 with catch @ 005d9494 */
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005d94a4 to 006d94af has its CatchHandler @ 005d94b0 */
                    /* catch() { ... } // from try @ 005d94a4 with catch @ 005d94b0 */
                    /* try { // try from 005d94b4 to 006d94b7 has its CatchHandler @ 005d94bc */
                    /* catch() { ... } // from try @ 005d94b4 with catch @ 005d94bc */
  return;
}


