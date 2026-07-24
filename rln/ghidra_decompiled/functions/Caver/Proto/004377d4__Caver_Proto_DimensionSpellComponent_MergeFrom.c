/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004377d4
 * Function: Caver::Proto::DimensionSpellComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(DimensionSpellComponent * this, DimensionSpellComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DimensionSpellComponent::MergeFrom(Caver::Proto::DimensionSpellComponent const&) */

void __thiscall
Caver::Proto::DimensionSpellComponent::MergeFrom
          (DimensionSpellComponent *this,DimensionSpellComponent *param_1)

{
  long lVar1;
  LogMessage *pLVar2;
  LogFinisher aLStack_50 [8];
  LogMessage aLStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 004377ec to 005377ff has its CatchHandler @ 00437f84 */
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_48,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x65a5);
                    /* try { // try from 00437810 to 0053781b has its CatchHandler @ 00437f14 */
    pLVar2 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_48,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_50,pLVar2);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_48);
  }
                    /* try { // try from 0043783c to 00537843 has its CatchHandler @ 00437e5c */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


