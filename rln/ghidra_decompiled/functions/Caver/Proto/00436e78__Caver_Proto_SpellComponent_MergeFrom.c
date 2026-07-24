/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00436e78
 * Function: Caver::Proto::SpellComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(SpellComponent * this, SpellComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpellComponent::MergeFrom(Caver::Proto::SpellComponent const&) */

void __thiscall
Caver::Proto::SpellComponent::MergeFrom(SpellComponent *this,SpellComponent *param_1)

{
  SpellComponent *pSVar1;
  SpellComponent SVar2;
  long lVar3;
  LogMessage *pLVar4;
  Program *this_00;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00436ea4 to 00536eaf has its CatchHandler @ 0043702c */
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x64b4);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    SVar2 = param_1[0x18];
  }
  else {
    SVar2 = param_1[0x18];
  }
  if (((byte)SVar2 & 1) != 0) {
    this_00 = *(Program **)(this + 0x10);
    *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 1;
    if (this_00 == (Program *)0x0) {
                    /* try { // try from 00436f10 to 00536f1b has its CatchHandler @ 00436fdc */
      this_00 = operator_new(0x30);
      Program::Program(this_00);
                    /* try { // try from 00436f1c to 00536faf has its CatchHandler @ 00436dac */
      *(Program **)(this + 0x10) = this_00;
    }
    pSVar1 = *(SpellComponent **)PTR_default_instance__007e66b8;
    if (*(long *)(param_1 + 0x10) != 0) {
      pSVar1 = param_1;
    }
    Program::MergeFrom(this_00,*(Program **)(pSVar1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


