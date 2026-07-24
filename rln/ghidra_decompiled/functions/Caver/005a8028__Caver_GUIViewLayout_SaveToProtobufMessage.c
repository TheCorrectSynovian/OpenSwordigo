/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a8028
 * Function: Caver::GUIViewLayout::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(GUIViewLayout * this, GUIViewLayout * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIViewLayout::SaveToProtobufMessage(Caver::Proto::GUIViewLayout*) const */

void __thiscall
Caver::GUIViewLayout::SaveToProtobufMessage(GUIViewLayout *this,GUIViewLayout *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  GUIViewLayout *this_00;
  GUIMargins *this_01;
  GUIViewLayout *this_02;
  undefined8 *puVar6;
  
  puVar3 = PTR__default_identifier__007e4ab0;
  if (*(long *)(*(long *)this + -0x18) != 0) {
    plVar4 = *(long **)(param_1 + 0x10);
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 1;
    if (plVar4 == (long *)puVar3) {
      plVar4 = operator_new(8);
                    /* try { // try from 005a8080 to 006a80df has its CatchHandler @ 005a8080
                       catch() { ... } // from try @ 005a8080 with catch @ 005a8080
                       catch() { ... } // from try @ 005a8434 with catch @ 005a8080
                       catch() { ... } // from try @ 005a8840 with catch @ 005a8080 */
      *plVar4 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(param_1 + 0x10) = plVar4;
    }
    FUN_0066a6a8(plVar4,this);
  }
  if (*(int *)(this + 0x50) != 0) {
    this_01 = *(GUIMargins **)(param_1 + 0x50);
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 4;
    if (this_01 == (GUIMargins *)0x0) {
      this_01 = operator_new(0x20);
      Proto::GUIMargins::GUIMargins(this_01);
      *(GUIMargins **)(param_1 + 0x50) = this_01;
    }
    GUIMargins::SaveToProtobufMessage((GUIMargins *)(this + 0x50),this_01);
  }
  puVar6 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)(this + 0x10);
  if (puVar6 != puVar2) {
                    /* try { // try from 005a80e0 to 006a80f3 has its CatchHandler @ 005a868c */
    do {
      iVar1 = *(int *)(param_1 + 0x20);
      iVar5 = *(int *)(param_1 + 0x24);
      this_00 = (GUIViewLayout *)*puVar6;
      if (iVar1 < iVar5) {
                    /* try { // try from 005a8100 to 006a8113 has its CatchHandler @ 005a86d4 */
        *(int *)(param_1 + 0x20) = iVar1 + 1;
        this_02 = *(GUIViewLayout **)(*(long *)(param_1 + 0x18) + (long)iVar1 * 8);
      }
      else {
        if (iVar5 == *(int *)(param_1 + 0x28)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(param_1 + 0x18),iVar5 + 1);
          iVar5 = *(int *)(param_1 + 0x24);
        }
        *(int *)(param_1 + 0x24) = iVar5 + 1;
        this_02 = operator_new(0x60);
        Proto::GUIViewLayout::GUIViewLayout(this_02);
        iVar1 = *(int *)(param_1 + 0x20);
                    /* try { // try from 005a814c to 006a8173 has its CatchHandler @ 005a8594 */
        *(int *)(param_1 + 0x20) = iVar1 + 1;
        *(GUIViewLayout **)(*(long *)(param_1 + 0x18) + (long)iVar1 * 8) = this_02;
      }
      SaveToProtobufMessage(this_00,this_02);
      puVar6 = puVar6 + 2;
    } while (puVar2 != puVar6);
  }
  return;
}


