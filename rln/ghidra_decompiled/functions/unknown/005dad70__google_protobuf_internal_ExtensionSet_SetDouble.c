/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005dad70
 * Function: google::protobuf::internal::ExtensionSet::SetDouble
 * Signature: undefined __thiscall SetDouble(ExtensionSet * this, int param_1, uchar param_2, double param_3, FieldDescriptor * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::SetDouble(int, unsigned char, double,
   google::protobuf::FieldDescriptor const*) */

void __thiscall
google::protobuf::internal::ExtensionSet::SetDouble
          (ExtensionSet *this,int param_1,uchar param_2,double param_3,FieldDescriptor *param_4)

{
  ExtensionSet *pEVar1;
  long lVar2;
  ExtensionSet *pEVar3;
  ExtensionSet *pEVar4;
  long lVar5;
  ExtensionSet *pEVar6;
  bool bVar7;
  uint uStack_8c;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  pEVar1 = this + 8;
  pEVar3 = *(ExtensionSet **)(this + 0x10);
  pEVar6 = pEVar1;
  if (*(ExtensionSet **)(this + 0x10) == (ExtensionSet *)0x0) {
LAB_005dae00:
    if (pEVar6 != *(ExtensionSet **)(this + 0x18)) {
      pEVar4 = (ExtensionSet *)FUN_0064c700(pEVar6);
      goto LAB_005dae14;
    }
LAB_005dae20:
    if (pEVar6 != (ExtensionSet *)0x0) {
      if (pEVar1 == pEVar6) {
        bVar7 = true;
      }
      else {
                    /* try { // try from 005dae2c to 006dae63 has its CatchHandler @ 005db4e4 */
        bVar7 = param_1 < *(int *)(pEVar6 + 0x20);
      }
      pEVar4 = operator_new(0x48);
                    /* try { // try from 005dae64 to 006dae87 has its CatchHandler @ 005dad60 */
      *(int *)(pEVar4 + 0x20) = param_1;
      *(undefined8 *)(pEVar4 + 0x2c) = 0;
      *(ulong *)(pEVar4 + 0x24) = (ulong)uStack_8c;
      *(undefined8 *)(pEVar4 + 0x3c) = 0;
      *(undefined8 *)(pEVar4 + 0x34) = 0;
      *(undefined4 *)(pEVar4 + 0x44) = 0;
                    /* try { // try from 005dae88 to 006dae8b has its CatchHandler @ 005db4cc */
      FUN_0064c8a0(bVar7,pEVar4,pEVar6,pEVar1);
                    /* try { // try from 005dae8c to 006daec3 has its CatchHandler @ 005dad60 */
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
      *(FieldDescriptor **)(pEVar4 + 0x38) = param_4;
      pEVar4[0x30] = (ExtensionSet)param_2;
      pEVar4[0x31] = (ExtensionSet)0x0;
      goto LAB_005daea8;
    }
    pEVar4 = (ExtensionSet *)0x0;
  }
  else {
    do {
      pEVar4 = pEVar3;
      pEVar6 = pEVar4 + 0x10;
      if (*(int *)(pEVar4 + 0x20) <= param_1) {
        pEVar6 = pEVar4 + 0x18;
      }
      pEVar3 = *(ExtensionSet **)pEVar6;
    } while (*(ExtensionSet **)pEVar6 != (ExtensionSet *)0x0);
    pEVar6 = pEVar4;
    if (param_1 < *(int *)(pEVar4 + 0x20)) goto LAB_005dae00;
LAB_005dae14:
                    /* try { // try from 005dae18 to 006dae2b has its CatchHandler @ 005db4e0 */
    if (*(int *)(pEVar4 + 0x20) < param_1) goto LAB_005dae20;
  }
  *(FieldDescriptor **)(pEVar4 + 0x38) = param_4;
LAB_005daea8:
  pEVar4[0x32] = (ExtensionSet)0x0;
  *(double *)(pEVar4 + 0x28) = param_3;
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005daec4 to 006daecf has its CatchHandler @ 005db558 */
  return;
}


