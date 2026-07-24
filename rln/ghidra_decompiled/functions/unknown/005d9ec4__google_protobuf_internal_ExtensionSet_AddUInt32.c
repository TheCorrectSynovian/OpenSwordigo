/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d9ec4
 * Function: google::protobuf::internal::ExtensionSet::AddUInt32
 * Signature: undefined __thiscall AddUInt32(ExtensionSet * this, int param_1, uchar param_2, bool param_3, uint param_4, FieldDescriptor * param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::AddUInt32(int, unsigned char, bool, unsigned int,
   google::protobuf::FieldDescriptor const*) */

void __thiscall
google::protobuf::internal::ExtensionSet::AddUInt32
          (ExtensionSet *this,int param_1,uchar param_2,bool param_3,uint param_4,
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
  
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
  pEVar1 = this + 8;
  pEVar6 = *(ExtensionSet **)(this + 0x10);
  pEVar12 = pEVar1;
  if (*(ExtensionSet **)(this + 0x10) == (ExtensionSet *)0x0) {
LAB_005d9f54:
    if (pEVar12 != *(ExtensionSet **)(this + 0x18)) {
      pEVar7 = (ExtensionSet *)FUN_0064c700(pEVar12);
      goto LAB_005d9f68;
    }
LAB_005d9f74:
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
                    /* try { // try from 005da000 to 006da01f has its CatchHandler @ 005da000
                       catch() { ... } // from try @ 005da000 with catch @ 005da000
                       catch() { ... } // from try @ 005da028 with catch @ 005da000
                       catch() { ... } // from try @ 005da070 with catch @ 005da000 */
      *(FieldDescriptor **)(pEVar7 + 0x38) = param_5;
      pEVar7[0x30] = (ExtensionSet)param_2;
      pEVar7[0x31] = (ExtensionSet)0x1;
      pEVar7[0x33] = (ExtensionSet)param_3;
      plVar8 = operator_new(0x20);
      lVar5 = DAT_0068b470;
                    /* try { // try from 005da020 to 006da027 has its CatchHandler @ 005da058 */
      *plVar8 = (long)(plVar8 + 2);
                    /* try { // try from 005da028 to 006da063 has its CatchHandler @ 005da000 */
      plVar8[1] = lVar5;
      *(long **)(pEVar7 + 0x28) = plVar8;
      goto LAB_005da030;
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
    if (param_1 < *(int *)(pEVar7 + 0x20)) goto LAB_005d9f54;
LAB_005d9f68:
    if (*(int *)(pEVar7 + 0x20) < param_1) goto LAB_005d9f74;
  }
  *(FieldDescriptor **)(pEVar7 + 0x38) = param_5;
LAB_005da030:
  plVar8 = *(long **)(pEVar7 + 0x28);
  iVar11 = (int)plVar8[1];
  if (iVar11 == *(int *)((long)plVar8 + 0xc)) {
    uVar2 = iVar11 * 2;
    if ((int)uVar2 < iVar11 + 1) {
      uVar2 = iVar11 + 1;
    }
                    /* catch() { ... } // from try @ 005da020 with catch @ 005da058 */
    __src = (long *)*plVar8;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (long)(int)uVar2;
    *(uint *)((long)plVar8 + 0xc) = uVar2;
                    /* try { // try from 005da064 to 006da067 has its CatchHandler @ 005da068 */
    uVar10 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
                    /* catch() { ... } // from try @ 005da064 with catch @ 005da068 */
                    /* try { // try from 005da06c to 006da06f has its CatchHandler @ 005da078 */
    if (SUB168(auVar3 * ZEXT816(4),8) != 0) {
      uVar10 = 0xffffffffffffffff;
    }
                    /* try { // try from 005da070 to 006da07b has its CatchHandler @ 005da000 */
    __dest = operator_new__(uVar10);
                    /* catch() { ... } // from try @ 005da06c with catch @ 005da078 */
                    /* try { // try from 005da07c to 006da12b has its CatchHandler @ 005da07c
                       catch() { ... } // from try @ 005da07c with catch @ 005da07c
                       catch() { ... } // from try @ 005da4d4 with catch @ 005da07c
                       catch() { ... } // from try @ 005daa20 with catch @ 005da07c */
    *plVar8 = (long)__dest;
    memcpy(__dest,__src,(long)iVar11 << 2);
    if ((__src != plVar8 + 2) && (__src != (long *)0x0)) {
      operator_delete__(__src);
      iVar11 = (int)plVar8[1];
    }
  }
  *(int *)(plVar8 + 1) = iVar11 + 1;
  *(uint *)(*plVar8 + (long)iVar11 * 4) = param_4;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


