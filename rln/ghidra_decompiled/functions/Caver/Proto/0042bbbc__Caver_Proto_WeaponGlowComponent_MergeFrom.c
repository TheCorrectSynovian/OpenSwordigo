/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042bbbc
 * Function: Caver::Proto::WeaponGlowComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(WeaponGlowComponent * this, WeaponGlowComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WeaponGlowComponent::MergeFrom(Caver::Proto::WeaponGlowComponent const&) */

void __thiscall
Caver::Proto::WeaponGlowComponent::MergeFrom(WeaponGlowComponent *this,WeaponGlowComponent *param_1)

{
  WeaponGlowComponent *pWVar1;
  undefined4 uVar2;
  WeaponGlowComponent WVar3;
  long lVar4;
  LogMessage *pLVar5;
  uint uVar6;
  FloatColor *pFVar7;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 0042bbe8 to 0052bbeb has its CatchHandler @ 0042bce8 */
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x52ea);
                    /* catch() { ... } // from try @ 0042bbe8 with catch @ 0042bce8 */
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
                    /* catch() { ... } // from try @ 0042bc44 with catch @ 0042bd00 */
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
                    /* catch() { ... } // from try @ 0042bc1c with catch @ 0042bd04 */
                    /* catch() { ... } // from try @ 0042bb4c with catch @ 0042bd08 */
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    WVar3 = param_1[0x24];
  }
  else {
    WVar3 = param_1[0x24];
  }
  if (WVar3 != (WeaponGlowComponent)0x0) {
    uVar6 = (uint)(byte)WVar3;
    if (((byte)WVar3 & 1) != 0) {
                    /* try { // try from 0042bbf8 to 0052bc0b has its CatchHandler @ 0042bd7c */
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 1;
      *(undefined4 *)(this + 0xc) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x24);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      pFVar7 = *(FloatColor **)(this + 0x10);
                    /* try { // try from 0042bc1c to 0052bc27 has its CatchHandler @ 0042bd04 */
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 2;
      if (pFVar7 == (FloatColor *)0x0) {
        pFVar7 = operator_new(0x20);
        FloatColor::FloatColor(pFVar7);
        *(FloatColor **)(this + 0x10) = pFVar7;
      }
                    /* try { // try from 0042bc44 to 0052bc53 has its CatchHandler @ 0042bd00 */
      pWVar1 = *(WeaponGlowComponent **)PTR_default_instance__007e5698;
                    /* try { // try from 0042bc54 to 0052bd9f has its CatchHandler @ 0042bafc */
      if (*(long *)(param_1 + 0x10) != 0) {
        pWVar1 = param_1;
      }
      FloatColor::MergeFrom(pFVar7,*(FloatColor **)(pWVar1 + 0x10));
      uVar6 = *(uint *)(param_1 + 0x24);
    }
    if ((uVar6 >> 2 & 1) != 0) {
      pFVar7 = *(FloatColor **)(this + 0x18);
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 4;
      if (pFVar7 == (FloatColor *)0x0) {
        pFVar7 = operator_new(0x20);
        FloatColor::FloatColor(pFVar7);
        *(FloatColor **)(this + 0x18) = pFVar7;
      }
      pWVar1 = *(WeaponGlowComponent **)PTR_default_instance__007e5698;
      if (*(long *)(param_1 + 0x18) != 0) {
        pWVar1 = param_1;
      }
      FloatColor::MergeFrom(pFVar7,*(FloatColor **)(pWVar1 + 0x18));
      uVar6 = *(uint *)(param_1 + 0x24);
    }
    if ((uVar6 >> 3 & 1) != 0) {
      *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 8;
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


