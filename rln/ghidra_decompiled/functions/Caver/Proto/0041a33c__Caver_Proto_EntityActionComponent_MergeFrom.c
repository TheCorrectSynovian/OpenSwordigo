/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041a33c
 * Function: Caver::Proto::EntityActionComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(EntityActionComponent * this, EntityActionComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityActionComponent::MergeFrom(Caver::Proto::EntityActionComponent const&) */

void __thiscall
Caver::Proto::EntityActionComponent::MergeFrom
          (EntityActionComponent *this,EntityActionComponent *param_1)

{
  EntityActionComponent *pEVar1;
  EntityActionComponent EVar2;
  long lVar3;
  LogMessage *pLVar4;
  Program *this_00;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
                    /* catch() { ... } // from try @ 0041a2cc with catch @ 0041a37c */
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x340f);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 0041a3a0 to 0051a3c7 has its CatchHandler @ 0041a3d0 */
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    EVar2 = param_1[0x18];
  }
  else {
    EVar2 = param_1[0x18];
  }
  if (((byte)EVar2 & 1) != 0) {
    this_00 = *(Program **)(this + 0x10);
                    /* try { // try from 0041a3c8 to 0051a3df has its CatchHandler @ 0041a220 */
    *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 1;
    if (this_00 == (Program *)0x0) {
                    /* catch() { ... } // from try @ 0041a3a0 with catch @ 0041a3d0 */
                    /* catch() { ... } // from try @ 0041a260 with catch @ 0041a3d4 */
      this_00 = operator_new(0x30);
      Program::Program(this_00);
                    /* try { // try from 0041a3e0 to 0051a3e3 has its CatchHandler @ 0041a3e4 */
      *(Program **)(this + 0x10) = this_00;
    }
                    /* catch() { ... } // from try @ 0041a3e0 with catch @ 0041a3e4 */
                    /* try { // try from 0041a3e8 to 0051a3eb has its CatchHandler @ 0041a3f0 */
                    /* catch() { ... } // from try @ 0041a3e8 with catch @ 0041a3f0 */
    pEVar1 = *(EntityActionComponent **)PTR_default_instance__007e4b60;
                    /* try { // try from 0041a3fc to 0051a48b has its CatchHandler @ 0041a3fc
                       catch() { ... } // from try @ 0041a3fc with catch @ 0041a3fc
                       catch() { ... } // from try @ 0041a554 with catch @ 0041a3fc
                       catch() { ... } // from try @ 0041a640 with catch @ 0041a3fc
                       catch() { ... } // from try @ 0041a72c with catch @ 0041a3fc
                       catch() { ... } // from try @ 0041a804 with catch @ 0041a3fc */
    if (*(long *)(param_1 + 0x10) != 0) {
      pEVar1 = param_1;
    }
    Program::MergeFrom(this_00,*(Program **)(pEVar1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


