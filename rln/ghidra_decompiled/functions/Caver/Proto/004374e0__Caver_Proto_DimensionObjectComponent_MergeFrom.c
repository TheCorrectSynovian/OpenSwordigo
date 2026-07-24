/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004374e0
 * Function: Caver::Proto::DimensionObjectComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(DimensionObjectComponent * this, DimensionObjectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DimensionObjectComponent::MergeFrom(Caver::Proto::DimensionObjectComponent const&)
    */

void __thiscall
Caver::Proto::DimensionObjectComponent::MergeFrom
          (DimensionObjectComponent *this,DimensionObjectComponent *param_1)

{
  long lVar1;
  LogMessage *pLVar2;
  LogFinisher aLStack_50 [8];
  LogMessage aLStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 == this) {
                    /* try { // try from 00437508 to 0053750f has its CatchHandler @ 00438118 */
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_48,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x6530);
    pLVar2 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_48,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 00437534 to 00537547 has its CatchHandler @ 004381e4 */
    google::protobuf::internal::LogFinisher::operator=(aLStack_50,pLVar2);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00437558 to 00537563 has its CatchHandler @ 00438174 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


