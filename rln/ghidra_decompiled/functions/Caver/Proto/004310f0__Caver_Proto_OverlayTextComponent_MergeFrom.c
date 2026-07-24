/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004310f0
 * Function: Caver::Proto::OverlayTextComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(OverlayTextComponent * this, OverlayTextComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::OverlayTextComponent::MergeFrom(Caver::Proto::OverlayTextComponent const&) */

void __thiscall
Caver::Proto::OverlayTextComponent::MergeFrom
          (OverlayTextComponent *this,OverlayTextComponent *param_1)

{
  OverlayTextComponent *pOVar1;
  OverlayTextComponent OVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  LogMessage *pLVar7;
  uint uVar8;
  undefined8 uVar9;
  Vector2 *pVVar10;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
                    /* try { // try from 004310f8 to 00531103 has its CatchHandler @ 0043116c */
                    /* try { // try from 00431104 to 0053116f has its CatchHandler @ 00430ee4 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
                    /* catch() { ... } // from try @ 004312b0 with catch @ 00431280 */
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x5b49);
    pLVar7 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 0043129c to 005312af has its CatchHandler @ 004312d4 */
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar7);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    OVar2 = param_1[0x30];
    plVar6 = (long *)PTR__default_text__007e5e10;
  }
  else {
    OVar2 = param_1[0x30];
    plVar6 = (long *)PTR__default_text__007e5e10;
  }
                    /* try { // try from 004312b0 to 005312d7 has its CatchHandler @ 00431280 */
  PTR__default_text__007e5e10 = (undefined *)plVar6;
  if (OVar2 != (OverlayTextComponent)0x0) {
    uVar8 = (uint)(byte)OVar2;
    if (((byte)OVar2 & 1) != 0) {
      plVar5 = *(long **)(this + 0x10);
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 1;
      if (plVar5 == plVar6) {
        plVar5 = operator_new(8);
        *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x10) = plVar5;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004310f8 with catch @ 0043116c
                        */
                    /* catch() { ... } // from try @ 00431184 with catch @ 00431170 */
      FUN_0066a6a8(plVar5,uVar9);
      uVar8 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar8 >> 1 & 1) != 0) {
                    /* try { // try from 00431180 to 00531183 has its CatchHandler @ 00431194 */
      pVVar10 = *(Vector2 **)(this + 0x18);
                    /* try { // try from 00431184 to 005311a7 has its CatchHandler @ 00431170 */
      *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 2;
      if (pVVar10 == (Vector2 *)0x0) {
                    /* catch() { ... } // from try @ 00431180 with catch @ 00431194 */
        pVVar10 = operator_new(0x18);
        Vector2::Vector2(pVVar10);
        *(Vector2 **)(this + 0x18) = pVVar10;
      }
                    /* try { // try from 004311a8 to 005311c3 has its CatchHandler @ 004311a8
                       catch() { ... } // from try @ 004311a8 with catch @ 004311a8
                       catch() { ... } // from try @ 004311c8 with catch @ 004311a8 */
      pOVar1 = *(OverlayTextComponent **)PTR_default_instance__007e6838;
      if (*(long *)(param_1 + 0x18) != 0) {
        pOVar1 = param_1;
      }
                    /* try { // try from 004311c4 to 005311c7 has its CatchHandler @ 00431214 */
      Vector2::MergeFrom(pVVar10,*(Vector2 **)(pOVar1 + 0x18));
                    /* try { // try from 004311c8 to 00531227 has its CatchHandler @ 004311a8 */
      uVar8 = *(uint *)(param_1 + 0x30);
    }
    puVar4 = PTR__default_sprite_name__007e6978;
    if ((uVar8 >> 2 & 1) != 0) {
      plVar6 = *(long **)(this + 0x20);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 4;
      if (plVar6 == (long *)puVar4) {
        plVar6 = operator_new(8);
        *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x20) = plVar6;
      }
                    /* catch() { ... } // from try @ 004311c4 with catch @ 00431214 */
      FUN_0066a6a8(plVar6,uVar9);
      uVar8 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar8 >> 3 & 1) != 0) {
      pVVar10 = *(Vector2 **)(this + 0x28);
      *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 8;
      if (pVVar10 == (Vector2 *)0x0) {
        pVVar10 = operator_new(0x18);
        Vector2::Vector2(pVVar10);
        *(Vector2 **)(this + 0x28) = pVVar10;
      }
      pOVar1 = *(OverlayTextComponent **)PTR_default_instance__007e6838;
      if (*(long *)(param_1 + 0x28) != 0) {
        pOVar1 = param_1;
      }
      Vector2::MergeFrom(pVVar10,*(Vector2 **)(pOVar1 + 0x28));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 0043129c with catch @ 004312d4 */
  return;
}


