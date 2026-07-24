/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c3bb4
 * Function: Caver::QuestText::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(QuestText * this, QuestText * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::QuestText::SaveToProtobufMessage(Caver::Proto::QuestText*) const */

void __thiscall Caver::QuestText::SaveToProtobufMessage(QuestText *this,QuestText *param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  
  puVar3 = PTR__default_quest_name__007e6638;
                    /* catch() { ... } // from try @ 004c35e8 with catch @ 004c3bb8 */
  plVar4 = *(long **)(param_1 + 0x10);
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 1;
  if (plVar4 == (long *)puVar3) {
    plVar4 = operator_new(8);
    *plVar4 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x10) = plVar4;
  }
  FUN_0066a6a8(plVar4,this);
  lVar7 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  if (lVar7 != lVar2) {
    do {
      iVar1 = *(int *)(param_1 + 0x20);
      iVar6 = *(int *)(param_1 + 0x24);
                    /* catch() { ... } // from try @ 004c35d4 with catch @ 004c3c24 */
      if (iVar1 < iVar6) {
        *(int *)(param_1 + 0x20) = iVar1 + 1;
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 8);
      }
      else {
                    /* try { // try from 004c3c48 to 005c3e27 has its CatchHandler @ 004c3e30 */
        if (iVar6 == *(int *)(param_1 + 0x28)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(param_1 + 0x18),iVar6 + 1);
          iVar6 = *(int *)(param_1 + 0x24);
        }
        *(int *)(param_1 + 0x24) = iVar6 + 1;
        uVar5 = google::protobuf::internal::StringTypeHandlerBase::New();
        iVar1 = *(int *)(param_1 + 0x20);
        *(int *)(param_1 + 0x20) = iVar1 + 1;
        *(undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 8) = uVar5;
      }
      FUN_0066a6a8(uVar5,lVar7);
      lVar7 = lVar7 + 8;
    } while (lVar2 != lVar7);
  }
  return;
}


