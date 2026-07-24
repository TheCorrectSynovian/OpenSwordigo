/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042f5dc
 * Function: Caver::Proto::ItemDropComponent_ItemDropEntry::MergeFrom
 * Signature: undefined __thiscall MergeFrom(ItemDropComponent_ItemDropEntry * this, ItemDropComponent_ItemDropEntry * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::ItemDropComponent_ItemDropEntry::MergeFrom(Caver::Proto::ItemDropComponent_ItemDropEntry
   const&) */

void __thiscall
Caver::Proto::ItemDropComponent_ItemDropEntry::MergeFrom
          (ItemDropComponent_ItemDropEntry *this,ItemDropComponent_ItemDropEntry *param_1)

{
  undefined4 uVar1;
  ItemDropComponent_ItemDropEntry IVar2;
  long lVar3;
  undefined *puVar4;
  LogMessage *pLVar5;
  long *plVar6;
  uint uVar7;
  undefined8 uVar8;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x58ec);
                    /* try { // try from 0042f628 to 0052f63b has its CatchHandler @ 0042f738 */
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 0042f63c to 0052f653 has its CatchHandler @ 0042f6d4 */
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  puVar4 = PTR__default_template_name__007e6418;
  IVar2 = param_1[0x2c];
  uVar7 = (uint)(byte)IVar2;
  if (IVar2 == (ItemDropComponent_ItemDropEntry)0x0) goto LAB_0042f674;
  if (((byte)IVar2 & 1) == 0) {
                    /* try { // try from 0042f654 to 0052f75b has its CatchHandler @ 0042f584 */
    if (((byte)IVar2 >> 1 & 1) != 0) {
LAB_0042f6e8:
      puVar4 = PTR__default_item_identifier__007e7320;
      plVar6 = *(long **)(this + 0x18);
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 2;
      if (plVar6 == (long *)puVar4) {
        plVar6 = operator_new(8);
        *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x18) = plVar6;
      }
      FUN_0066a6a8(plVar6,uVar8);
      uVar7 = *(uint *)(param_1 + 0x2c);
    }
  }
  else {
    plVar6 = *(long **)(this + 0x10);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 1;
    if (plVar6 == (long *)puVar4) {
      plVar6 = operator_new(8);
      *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0042f63c with catch @ 0042f6d4
                        */
      *(long **)(this + 0x10) = plVar6;
    }
    FUN_0066a6a8(plVar6,uVar8);
    uVar7 = *(uint *)(param_1 + 0x2c);
    if ((uVar7 >> 1 & 1) != 0) goto LAB_0042f6e8;
  }
  if ((uVar7 >> 2 & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0042f628 with catch @ 0042f738
                        */
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 4;
    *(undefined4 *)(this + 0x20) = uVar1;
    uVar7 = *(uint *)(param_1 + 0x2c);
  }
  if ((uVar7 >> 3 & 1) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x24);
                    /* try { // try from 0042f75c to 0052f7e3 has its CatchHandler @ 0042f848 */
    *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 8;
    *(undefined4 *)(this + 0x24) = uVar1;
    uVar7 = *(uint *)(param_1 + 0x2c);
  }
  if ((uVar7 >> 4 & 1) != 0) {
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x10;
  }
LAB_0042f674:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


