/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00427318
 * Function: Caver::Proto::StaticMonsterControllerComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(StaticMonsterControllerComponent * this, StaticMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::StaticMonsterControllerComponent::MergeFrom(Caver::Proto::StaticMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::StaticMonsterControllerComponent::MergeFrom
          (StaticMonsterControllerComponent *this,StaticMonsterControllerComponent *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  long lVar5;
  LogMessage *pLVar6;
  void *__dest;
  ulong uVar7;
  StaticMonsterControllerComponent *__src;
  int iVar8;
  ulong uVar9;
  LogFinisher aLStack_80 [8];
  LogMessage aLStack_78 [32];
  long local_58;
  
                    /* try { // try from 00427320 to 0052735b has its CatchHandler @ 00427a74 */
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_78,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x499b);
    pLVar6 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_78,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 0042737c to 0052738f has its CatchHandler @ 00427a70 */
    google::protobuf::internal::LogFinisher::operator=(aLStack_80,pLVar6);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_78);
  }
  uVar9 = (ulong)*(uint *)(param_1 + 0x18);
  iVar8 = *(int *)(this + 0x18);
  uVar1 = *(uint *)(param_1 + 0x18) + iVar8;
  if (*(int *)(this + 0x1c) < (int)uVar1) {
                    /* try { // try from 004273a0 to 005273ab has its CatchHandler @ 00427a38 */
    uVar3 = *(int *)(this + 0x1c) * 2;
    if ((int)uVar1 <= (int)uVar3) {
      uVar1 = uVar3;
    }
    __src = *(StaticMonsterControllerComponent **)(this + 0x10);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (long)(int)uVar1;
    *(uint *)(this + 0x1c) = uVar1;
    uVar7 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    if (SUB168(auVar4 * ZEXT816(4),8) != 0) {
      uVar7 = 0xffffffffffffffff;
    }
                    /* try { // try from 004273cc to 00527407 has its CatchHandler @ 004279dc */
    __dest = operator_new__(uVar7);
    *(void **)(this + 0x10) = __dest;
    memcpy(__dest,__src,(long)iVar8 << 2);
    if ((__src != this + 0x20) && (__src != (StaticMonsterControllerComponent *)0x0)) {
      operator_delete__(__src);
      iVar8 = *(int *)(this + 0x18);
      uVar9 = (ulong)*(uint *)(param_1 + 0x18);
    }
  }
  memcpy((void *)(*(long *)(this + 0x10) + (long)iVar8 * 4),*(void **)(param_1 + 0x10),
         -(uVar9 >> 0x1f) & 0xfffffffc00000000 | uVar9 << 2);
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + *(int *)(param_1 + 0x18);
                    /* try { // try from 00427428 to 0052743b has its CatchHandler @ 004279d8 */
  if (((byte)param_1[0x30] & 1) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 1;
    *(undefined4 *)(this + 0xc) = uVar2;
  }
                    /* try { // try from 0042744c to 00527457 has its CatchHandler @ 004279a0 */
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


