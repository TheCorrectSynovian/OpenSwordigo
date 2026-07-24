/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005dbd2c
 * Function: google::protobuf::internal::ExtensionSet::AddEnum
 * Signature: undefined __thiscall AddEnum(ExtensionSet * this, int param_1, uchar param_2, bool param_3, int param_4, FieldDescriptor * param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::AddEnum(int, unsigned char, bool, int,
   google::protobuf::FieldDescriptor const*) */

void __thiscall
google::protobuf::internal::ExtensionSet::AddEnum
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
  
                    /* try { // try from 005dbd30 to 006dbd3b has its CatchHandler @ 005dbeac */
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 005dbd6c to 006dbd83 has its CatchHandler @ 005dbea0 */
  pEVar1 = this + 8;
  pEVar6 = *(ExtensionSet **)(this + 0x10);
  pEVar12 = pEVar1;
  if (*(ExtensionSet **)(this + 0x10) == (ExtensionSet *)0x0) {
LAB_005dbdbc:
    if (pEVar12 != *(ExtensionSet **)(this + 0x18)) {
      pEVar7 = (ExtensionSet *)FUN_0064c700(pEVar12);
      goto LAB_005dbdd0;
    }
LAB_005dbddc:
    if (pEVar12 != (ExtensionSet *)0x0) {
                    /* try { // try from 005dbde4 to 006dbdfb has its CatchHandler @ 005dbea0 */
      if (pEVar1 == pEVar12) {
        bVar13 = true;
      }
      else {
        bVar13 = param_1 < *(int *)(pEVar12 + 0x20);
      }
      pEVar7 = operator_new(0x48);
                    /* try { // try from 005dbe20 to 006dbe2b has its CatchHandler @ 005dbea4 */
                    /* try { // try from 005dbe2c to 006dbe6f has its CatchHandler @ 005db9f0 */
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
                    /* try { // try from 005dbe70 to 006dbf37 has its CatchHandler @ 005dbf40 */
      pEVar7[0x31] = (ExtensionSet)0x1;
      pEVar7[0x33] = (ExtensionSet)param_3;
      plVar8 = operator_new(0x20);
      lVar5 = DAT_0068b470;
      *plVar8 = (long)(plVar8 + 2);
      plVar8[1] = lVar5;
      *(long **)(pEVar7 + 0x28) = plVar8;
                    /* catch() { ... } // from try @ 005dba80 with catch @ 005dbe50 */
      goto LAB_005dbe98;
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
                    /* try { // try from 005dbda8 to 006dbdb3 has its CatchHandler @ 005dbea8 */
    pEVar12 = pEVar7;
    if (param_1 < *(int *)(pEVar7 + 0x20)) goto LAB_005dbdbc;
LAB_005dbdd0:
    if (*(int *)(pEVar7 + 0x20) < param_1) goto LAB_005dbddc;
  }
  *(FieldDescriptor **)(pEVar7 + 0x38) = param_5;
LAB_005dbe98:
  plVar8 = *(long **)(pEVar7 + 0x28);
                    /* catch() { ... } // from try @ 005dbb90 with catch @ 005dbe9c */
  iVar11 = (int)plVar8[1];
                    /* catch() { ... } // from try @ 005dbac4 with catch @ 005dbea0
                       catch() { ... } // from try @ 005dbbbc with catch @ 005dbea0
                       catch() { ... } // from try @ 005dbc48 with catch @ 005dbea0
                       catch() { ... } // from try @ 005dbcf4 with catch @ 005dbea0
                       catch() { ... } // from try @ 005dbd6c with catch @ 005dbea0
                       catch() { ... } // from try @ 005dbde4 with catch @ 005dbea0 */
                    /* catch() { ... } // from try @ 005dbe20 with catch @ 005dbea4 */
  if (iVar11 == *(int *)((long)plVar8 + 0xc)) {
                    /* catch() { ... } // from try @ 005dbda8 with catch @ 005dbea8 */
                    /* catch() { ... } // from try @ 005dbd30 with catch @ 005dbeac */
    uVar2 = iVar11 * 2;
                    /* catch() { ... } // from try @ 005dbbf8 with catch @ 005dbeb0 */
    if ((int)uVar2 < iVar11 + 1) {
      uVar2 = iVar11 + 1;
    }
    __src = (long *)*plVar8;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (long)(int)uVar2;
    *(uint *)((long)plVar8 + 0xc) = uVar2;
    uVar10 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
    if (SUB168(auVar3 * ZEXT816(4),8) != 0) {
      uVar10 = 0xffffffffffffffff;
    }
    __dest = operator_new__(uVar10);
    *plVar8 = (long)__dest;
    memcpy(__dest,__src,(long)iVar11 << 2);
    if ((__src != plVar8 + 2) && (__src != (long *)0x0)) {
      operator_delete__(__src);
      iVar11 = (int)plVar8[1];
    }
  }
  *(int *)(plVar8 + 1) = iVar11 + 1;
  *(int *)(*plVar8 + (long)iVar11 * 4) = param_4;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005dbf38 to 006dbf43 has its CatchHandler @ 005db9f0 */
                    /* catch() { ... } // from try @ 005dbe70 with catch @ 005dbf40 */
                    /* try { // try from 005dbf44 to 006dbf7b has its CatchHandler @ 005dbf44
                       catch() { ... } // from try @ 005dbf44 with catch @ 005dbf44
                       catch() { ... } // from try @ 005dbf80 with catch @ 005dbf44
                       catch() { ... } // from try @ 005dc198 with catch @ 005dbf44
                       catch() { ... } // from try @ 005dc2a8 with catch @ 005dbf44
                       catch() { ... } // from try @ 005dc318 with catch @ 005dbf44 */
  return;
}


