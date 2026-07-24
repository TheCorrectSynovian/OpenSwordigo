/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041be10
 * Function: Caver::Proto::BackgroundComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(BackgroundComponent * this, BackgroundComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BackgroundComponent::MergeFrom(Caver::Proto::BackgroundComponent const&) */

void __thiscall
Caver::Proto::BackgroundComponent::MergeFrom(BackgroundComponent *this,BackgroundComponent *param_1)

{
  BackgroundComponent BVar1;
  long lVar2;
  long *plVar3;
  LogMessage *pLVar4;
  long *plVar5;
  undefined8 uVar6;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
                    /* try { // try from 0041be28 to 0051be3f has its CatchHandler @ 0041bc88 */
  local_38 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 0041be00 with catch @ 0041be30 */
                    /* catch() { ... } // from try @ 0041bcc4 with catch @ 0041be34 */
  if (param_1 == this) {
                    /* catch() { ... } // from try @ 0041be48 with catch @ 0041be50 */
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x3711);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    BVar1 = param_1[0x18];
    plVar3 = (long *)PTR__default_texture_name__007e56a8;
  }
  else {
                    /* try { // try from 0041be40 to 0051be43 has its CatchHandler @ 0041be44 */
    BVar1 = param_1[0x18];
                    /* catch() { ... } // from try @ 0041be40 with catch @ 0041be44 */
    plVar3 = (long *)PTR__default_texture_name__007e56a8;
  }
  PTR__default_texture_name__007e56a8 = (undefined *)plVar3;
  if (((byte)BVar1 & 1) != 0) {
    plVar5 = *(long **)(this + 0x10);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 1;
    if (plVar5 == plVar3) {
      plVar5 = operator_new(8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0041bf5c with catch @ 0041bec4
                       catch(type#1 @ 00000000) { ... } // from try @ 0041bfdc with catch @ 0041bec4
                        */
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


