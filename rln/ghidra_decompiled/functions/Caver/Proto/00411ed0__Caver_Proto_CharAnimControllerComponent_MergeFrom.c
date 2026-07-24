/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00411ed0
 * Function: Caver::Proto::CharAnimControllerComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(CharAnimControllerComponent * this, CharAnimControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::CharAnimControllerComponent::MergeFrom(Caver::Proto::CharAnimControllerComponent
   const&) */

void __thiscall
Caver::Proto::CharAnimControllerComponent::MergeFrom
          (CharAnimControllerComponent *this,CharAnimControllerComponent *param_1)

{
  undefined4 uVar1;
  CharAnimControllerComponent CVar2;
  long lVar3;
  LogMessage *pLVar4;
  uint uVar5;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
                    /* catch() { ... } // from try @ 00411ea8 with catch @ 00411ee0 */
  lVar3 = tpidr_el0;
                    /* try { // try from 00411ee8 to 00511eef has its CatchHandler @ 00411efc */
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00411ef8 to 00511efb has its CatchHandler @ 00411f0c */
                    /* catch() { ... } // from try @ 00411ee8 with catch @ 00411efc */
  if (param_1 == this) {
                    /* catch() { ... } // from try @ 00411ef8 with catch @ 00411f0c */
                    /* try { // try from 00411f10 to 00511f13 has its CatchHandler @ 00411f1c */
                    /* try { // try from 00411f14 to 00511f1f has its CatchHandler @ 00411e90 */
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x24ba);
                    /* catch() { ... } // from try @ 00411f10 with catch @ 00411f1c */
                    /* catch() { ... } // from try @ 00411f40 with catch @ 00411f24 */
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
                    /* try { // try from 00411f38 to 00511f3f has its CatchHandler @ 00411f5c */
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  CVar2 = param_1[0x24];
  uVar5 = (uint)(byte)CVar2;
                    /* try { // try from 00411f40 to 00511f6f has its CatchHandler @ 00411f24 */
  if (CVar2 == (CharAnimControllerComponent)0x0) goto LAB_00411f6c;
  if (((byte)CVar2 & 1) == 0) {
    if (((byte)CVar2 >> 1 & 1) != 0) {
LAB_00411fac:
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 2;
      *(undefined4 *)(this + 0x10) = uVar1;
      uVar5 = *(uint *)(param_1 + 0x24);
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 1;
    *(undefined4 *)(this + 0xc) = uVar1;
                    /* try { // try from 00411fa4 to 00511fa7 has its CatchHandler @ 004122e0 */
    uVar5 = *(uint *)(param_1 + 0x24);
    if ((uVar5 >> 1 & 1) != 0) goto LAB_00411fac;
  }
  if ((uVar5 >> 2 & 1) != 0) {
                    /* try { // try from 00411fc8 to 00511fef has its CatchHandler @ 004122d0 */
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 4;
    *(undefined4 *)(this + 0x14) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x24);
  }
  if ((uVar5 >> 3 & 1) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 8;
    *(undefined4 *)(this + 0x18) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x24);
  }
  if ((uVar5 >> 4 & 1) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 0x10;
                    /* try { // try from 00412010 to 00512037 has its CatchHandler @ 004122c8 */
    *(undefined4 *)(this + 0x1c) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x24);
  }
  if ((uVar5 >> 5 & 1) != 0) {
                    /* catch() { ... } // from try @ 00411f38 with catch @ 00411f5c */
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 0x20;
  }
LAB_00411f6c:
                    /* catch() { ... } // from try @ 00412038 with catch @ 00411f78
                       catch() { ... } // from try @ 00412374 with catch @ 00411f78 */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


