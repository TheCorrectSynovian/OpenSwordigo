/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041b034
 * Function: Caver::Proto::EntityInfoComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(EntityInfoComponent * this, EntityInfoComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityInfoComponent::MergeFrom(Caver::Proto::EntityInfoComponent const&) */

void __thiscall
Caver::Proto::EntityInfoComponent::MergeFrom(EntityInfoComponent *this,EntityInfoComponent *param_1)

{
  EntityInfoComponent EVar1;
  long lVar2;
  long *plVar3;
  LogMessage *pLVar4;
  long *plVar5;
  undefined8 uVar6;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x35bf);
                    /* try { // try from 0041b088 to 0051b0af has its CatchHandler @ 0041b12c */
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    EVar1 = param_1[0x18];
    plVar3 = (long *)PTR__default_entity_class__007e6138;
  }
  else {
    EVar1 = param_1[0x18];
    plVar3 = (long *)PTR__default_entity_class__007e6138;
  }
                    /* try { // try from 0041b0b0 to 0051b14f has its CatchHandler @ 0041afe4 */
  PTR__default_entity_class__007e6138 = (undefined *)plVar3;
  if (((byte)EVar1 & 1) != 0) {
    plVar5 = *(long **)(this + 0x10);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 1;
    if (plVar5 == plVar3) {
      plVar5 = operator_new(8);
      *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x10) = plVar5;
    }
    FUN_0066a6a8(plVar5,uVar6);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


