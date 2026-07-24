/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00430220
 * Function: Caver::Proto::ItemDropComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(ItemDropComponent * this, ItemDropComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ItemDropComponent::MergeFrom(Caver::Proto::ItemDropComponent const&) */

void __thiscall
Caver::Proto::ItemDropComponent::MergeFrom(ItemDropComponent *this,ItemDropComponent *param_1)

{
  ItemDropComponent IVar1;
  long lVar2;
  undefined *puVar3;
  LogMessage *pLVar4;
  long *plVar5;
  uint uVar6;
  undefined8 uVar7;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 == this) {
                    /* catch() { ... } // from try @ 00430170 with catch @ 00430264 */
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x5a26);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  google::protobuf::RepeatedPtrField<Caver::Proto::ItemDropComponent_ItemDropEntry>::MergeFrom
            ((RepeatedPtrField<Caver::Proto::ItemDropComponent_ItemDropEntry> *)(this + 0x20),
             (RepeatedPtrField *)(param_1 + 0x20));
  puVar3 = PTR__default_item_name__007e5cd8;
  IVar1 = param_1[0x5c];
  uVar6 = (uint)(byte)IVar1;
  if (IVar1 == (ItemDropComponent)0x0) goto LAB_004302c4;
  if (((byte)IVar1 & 1) == 0) {
                    /* catch() { ... } // from try @ 004301c4 with catch @ 004302a4 */
    if (((byte)IVar1 >> 1 & 1) != 0) {
LAB_00430338:
      puVar3 = PTR__default_item_identifier__007e6a38;
      plVar5 = *(long **)(this + 0x18);
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      *(uint *)(this + 0x5c) = *(uint *)(this + 0x5c) | 2;
      if (plVar5 == (long *)puVar3) {
        plVar5 = operator_new(8);
        *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x18) = plVar5;
      }
      FUN_0066a6a8(plVar5,uVar7);
      uVar6 = *(uint *)(param_1 + 0x5c);
    }
  }
  else {
    plVar5 = *(long **)(this + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    *(uint *)(this + 0x5c) = *(uint *)(this + 0x5c) | 1;
    if (plVar5 == (long *)puVar3) {
      plVar5 = operator_new(8);
      *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x10) = plVar5;
    }
    FUN_0066a6a8(plVar5,uVar7);
    uVar6 = *(uint *)(param_1 + 0x5c);
    if ((uVar6 >> 1 & 1) != 0) goto LAB_00430338;
  }
  if ((uVar6 >> 3 & 1) != 0) {
    IVar1 = param_1[0x58];
    *(uint *)(this + 0x5c) = *(uint *)(this + 0x5c) | 8;
    this[0x58] = IVar1;
    uVar6 = *(uint *)(param_1 + 0x5c);
  }
  if ((uVar6 >> 4 & 1) != 0) {
    IVar1 = param_1[0x59];
    *(uint *)(this + 0x5c) = *(uint *)(this + 0x5c) | 0x10;
    this[0x59] = IVar1;
  }
LAB_004302c4:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


