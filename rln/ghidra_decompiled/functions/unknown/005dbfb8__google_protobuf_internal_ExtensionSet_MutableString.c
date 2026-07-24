/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005dbfb8
 * Function: google::protobuf::internal::ExtensionSet::MutableString
 * Signature: undefined __thiscall MutableString(ExtensionSet * this, int param_1, uchar param_2, FieldDescriptor * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::MutableString(int, unsigned char,
   google::protobuf::FieldDescriptor const*) */

void __thiscall
google::protobuf::internal::ExtensionSet::MutableString
          (ExtensionSet *this,int param_1,uchar param_2,FieldDescriptor *param_3)

{
  ExtensionSet *pEVar1;
  long lVar2;
  undefined *puVar3;
  ExtensionSet *pEVar4;
  ExtensionSet *pEVar5;
  long *plVar6;
  long lVar7;
  ExtensionSet *pEVar8;
  bool bVar9;
  uint uStack_8c;
  
                    /* try { // try from 005dbfb8 to 006dbfc3 has its CatchHandler @ 005dc2cc */
  lVar2 = tpidr_el0;
  lVar7 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 005dc004 to 006dc02b has its CatchHandler @ 005dc25c */
  pEVar1 = this + 8;
  pEVar4 = *(ExtensionSet **)(this + 0x10);
  pEVar8 = pEVar1;
  if (*(ExtensionSet **)(this + 0x10) == (ExtensionSet *)0x0) {
LAB_005dc040:
    if (pEVar8 != *(ExtensionSet **)(this + 0x18)) {
                    /* try { // try from 005dc04c to 006dc073 has its CatchHandler @ 005dc2cc */
      pEVar5 = (ExtensionSet *)FUN_0064c700(pEVar8);
      goto LAB_005dc054;
    }
LAB_005dc060:
    if (pEVar8 != (ExtensionSet *)0x0) {
      if (pEVar1 == pEVar8) {
        bVar9 = true;
      }
      else {
        bVar9 = param_1 < *(int *)(pEVar8 + 0x20);
      }
      pEVar5 = operator_new(0x48);
      *(int *)(pEVar5 + 0x20) = param_1;
      *(undefined8 *)(pEVar5 + 0x2c) = 0;
      *(ulong *)(pEVar5 + 0x24) = (ulong)uStack_8c;
      *(undefined8 *)(pEVar5 + 0x3c) = 0;
      *(undefined8 *)(pEVar5 + 0x34) = 0;
      *(undefined4 *)(pEVar5 + 0x44) = 0;
      FUN_0064c8a0(bVar9,pEVar5,pEVar8,pEVar1);
                    /* try { // try from 005dc0cc to 006dc0f3 has its CatchHandler @ 005dc20c */
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
      *(FieldDescriptor **)(pEVar5 + 0x38) = param_3;
      pEVar5[0x30] = (ExtensionSet)param_2;
      pEVar5[0x31] = (ExtensionSet)0x0;
      plVar6 = operator_new(8);
      puVar3 = PTR_DAT_007e5de8;
      *(long **)(pEVar5 + 0x28) = plVar6;
      *plVar6 = (long)(puVar3 + 0x18);
      goto LAB_005dc104;
    }
    pEVar5 = (ExtensionSet *)0x0;
  }
  else {
    do {
      pEVar5 = pEVar4;
      pEVar8 = pEVar5 + 0x10;
      if (*(int *)(pEVar5 + 0x20) <= param_1) {
        pEVar8 = pEVar5 + 0x18;
      }
      pEVar4 = *(ExtensionSet **)pEVar8;
    } while (*(ExtensionSet **)pEVar8 != (ExtensionSet *)0x0);
    pEVar8 = pEVar5;
    if (param_1 < *(int *)(pEVar5 + 0x20)) goto LAB_005dc040;
LAB_005dc054:
    if (*(int *)(pEVar5 + 0x20) < param_1) goto LAB_005dc060;
  }
                    /* try { // try from 005dc080 to 006dc08b has its CatchHandler @ 005dc2c8 */
  *(FieldDescriptor **)(pEVar5 + 0x38) = param_3;
LAB_005dc104:
  pEVar5[0x32] = (ExtensionSet)0x0;
                    /* try { // try from 005dc114 to 006dc13b has its CatchHandler @ 005dc2c8 */
  if (*(long *)(lVar2 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(undefined8 *)(pEVar5 + 0x28));
  }
  return;
}


