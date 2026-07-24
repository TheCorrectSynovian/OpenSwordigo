/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005daaec
 * Function: google::protobuf::internal::ExtensionSet::AddFloat
 * Signature: undefined __thiscall AddFloat(ExtensionSet * this, int param_1, uchar param_2, bool param_3, float param_4, FieldDescriptor * param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::AddFloat(int, unsigned char, bool, float,
   google::protobuf::FieldDescriptor const*) */

void __thiscall
google::protobuf::internal::ExtensionSet::AddFloat
          (ExtensionSet *this,int param_1,uchar param_2,bool param_3,float param_4,
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
LAB_005dab80:
    if (pEVar12 != *(ExtensionSet **)(this + 0x18)) {
      pEVar7 = (ExtensionSet *)FUN_0064c700(pEVar12);
      goto LAB_005dab94;
    }
LAB_005daba0:
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
      plVar8 = operator_new(0x20);
      lVar5 = DAT_0068b470;
      *plVar8 = (long)(plVar8 + 2);
      *(long **)(pEVar7 + 0x28) = plVar8;
      plVar8[1] = lVar5;
      goto LAB_005dac54;
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
    if (param_1 < *(int *)(pEVar7 + 0x20)) goto LAB_005dab80;
LAB_005dab94:
    if (*(int *)(pEVar7 + 0x20) < param_1) goto LAB_005daba0;
  }
  *(FieldDescriptor **)(pEVar7 + 0x38) = param_5;
LAB_005dac54:
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
  *(float *)(*plVar8 + (long)iVar11 * 4) = param_4;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


