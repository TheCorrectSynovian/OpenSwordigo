/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040d814
 * Function: Caver::Proto::HealthComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(HealthComponent * this, HealthComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::HealthComponent::MergeFrom(Caver::Proto::HealthComponent const&) */

void __thiscall
Caver::Proto::HealthComponent::MergeFrom(HealthComponent *this,HealthComponent *param_1)

{
  HealthComponent *pHVar1;
  undefined4 uVar2;
  HealthComponent HVar3;
  long lVar4;
  LogMessage *pLVar5;
  uint uVar6;
  Vector2 *this_00;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
                    /* try { // try from 0040d81c to 0050d833 has its CatchHandler @ 0040d920 */
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 0040d834 to 0050d84b has its CatchHandler @ 0040d91c */
  if (param_1 == this) {
                    /* try { // try from 0040d864 to 0050d87b has its CatchHandler @ 0040d914 */
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x1d12);
                    /* try { // try from 0040d87c to 0050d893 has its CatchHandler @ 0040d910 */
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
                    /* try { // try from 0040d894 to 0050d8ab has its CatchHandler @ 0040d90c */
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    HVar3 = param_1[0x20];
  }
  else {
    HVar3 = param_1[0x20];
  }
  if (HVar3 == (HealthComponent)0x0) goto LAB_0040d928;
  uVar6 = (uint)(byte)HVar3;
                    /* try { // try from 0040d84c to 0050d863 has its CatchHandler @ 0040d918 */
  if (((byte)HVar3 & 1) == 0) {
    if (((byte)HVar3 >> 1 & 1) != 0) {
LAB_0040d8c0:
                    /* try { // try from 0040d8c4 to 0050da37 has its CatchHandler @ 0040d720 */
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 2;
      *(undefined4 *)(this + 0x10) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x20);
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xc);
                    /* try { // try from 0040d8ac to 0050d8c3 has its CatchHandler @ 0040d908 */
    *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
    *(undefined4 *)(this + 0xc) = uVar2;
    uVar6 = *(uint *)(param_1 + 0x20);
    if ((uVar6 >> 1 & 1) != 0) goto LAB_0040d8c0;
  }
  if ((uVar6 >> 2 & 1) != 0) {
    this_00 = *(Vector2 **)(this + 0x18);
    *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 4;
    if (this_00 == (Vector2 *)0x0) {
      this_00 = operator_new(0x18);
      Vector2::Vector2(this_00);
      *(Vector2 **)(this + 0x18) = this_00;
    }
                    /* catch() { ... } // from try @ 0040d8ac with catch @ 0040d908 */
                    /* catch() { ... } // from try @ 0040d894 with catch @ 0040d90c */
                    /* catch() { ... } // from try @ 0040d87c with catch @ 0040d910 */
                    /* catch() { ... } // from try @ 0040d864 with catch @ 0040d914 */
                    /* catch() { ... } // from try @ 0040d84c with catch @ 0040d918 */
    pHVar1 = *(HealthComponent **)PTR_default_instance__007e6bf0;
                    /* catch() { ... } // from try @ 0040d834 with catch @ 0040d91c */
    if (*(long *)(param_1 + 0x18) != 0) {
      pHVar1 = param_1;
    }
                    /* catch() { ... } // from try @ 0040d81c with catch @ 0040d920 */
    Vector2::MergeFrom(this_00,*(Vector2 **)(pHVar1 + 0x18));
  }
LAB_0040d928:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


