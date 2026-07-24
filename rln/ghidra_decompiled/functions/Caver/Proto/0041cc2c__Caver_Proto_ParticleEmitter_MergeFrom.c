/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041cc2c
 * Function: Caver::Proto::ParticleEmitter::MergeFrom
 * Signature: undefined __thiscall MergeFrom(ParticleEmitter * this, ParticleEmitter * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitter::MergeFrom(Caver::Proto::ParticleEmitter const&) */

void __thiscall
Caver::Proto::ParticleEmitter::MergeFrom(ParticleEmitter *this,ParticleEmitter *param_1)

{
  undefined4 uVar1;
  ParticleEmitter PVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  long lVar5;
  LogMessage *pLVar6;
  void *__dest;
  uint uVar7;
  ulong uVar8;
  ParticleEmitter *pPVar9;
  Vector3 *this_00;
  FloatColor *this_01;
  int iVar10;
  ulong uVar11;
  LogFinisher aLStack_80 [8];
  LogMessage aLStack_78 [32];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_78,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x3932);
    pLVar6 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_78,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_80,pLVar6);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_78);
  }
  uVar11 = (ulong)*(uint *)(param_1 + 0x38);
  iVar10 = *(int *)(this + 0x38);
  uVar7 = *(uint *)(param_1 + 0x38) + iVar10;
  if (*(int *)(this + 0x3c) < (int)uVar7) {
    uVar3 = *(int *)(this + 0x3c) * 2;
                    /* try { // try from 0041ccb8 to 0051ccef has its CatchHandler @ 0041ccb8
                       catch() { ... } // from try @ 0041ccb8 with catch @ 0041ccb8
                       catch() { ... } // from try @ 0041cd04 with catch @ 0041ccb8 */
    if ((int)uVar7 <= (int)uVar3) {
      uVar7 = uVar3;
    }
    pPVar9 = *(ParticleEmitter **)(this + 0x30);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (long)(int)uVar7;
    *(uint *)(this + 0x3c) = uVar7;
    uVar8 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2;
    if (SUB168(auVar4 * ZEXT816(4),8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    __dest = operator_new__(uVar8);
                    /* try { // try from 0041ccf0 to 0051cd03 has its CatchHandler @ 0041cda4 */
    *(void **)(this + 0x30) = __dest;
    memcpy(__dest,pPVar9,(long)iVar10 << 2);
                    /* try { // try from 0041cd04 to 0051cdb7 has its CatchHandler @ 0041ccb8 */
    if ((pPVar9 != this + 0x40) && (pPVar9 != (ParticleEmitter *)0x0)) {
      operator_delete__(pPVar9);
      iVar10 = *(int *)(this + 0x38);
      uVar11 = (ulong)*(uint *)(param_1 + 0x38);
    }
  }
  memcpy((void *)(*(long *)(this + 0x30) + (long)iVar10 * 4),*(void **)(param_1 + 0x30),
         -(uVar11 >> 0x1f) & 0xfffffffc00000000 | uVar11 << 2);
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + *(int *)(param_1 + 0x38);
  PVar2 = param_1[0x50];
  uVar7 = (uint)(byte)PVar2;
  if (PVar2 != (ParticleEmitter)0x0) {
    if (((byte)PVar2 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0xc);
      *(uint *)(this + 0x50) = *(uint *)(this + 0x50) | 1;
      *(undefined4 *)(this + 0xc) = uVar1;
      uVar7 = *(uint *)(param_1 + 0x50);
    }
    if ((uVar7 >> 1 & 1) != 0) {
      this_00 = *(Vector3 **)(this + 0x10);
      *(uint *)(this + 0x50) = *(uint *)(this + 0x50) | 2;
      if (this_00 == (Vector3 *)0x0) {
        this_00 = operator_new(0x20);
        Vector3::Vector3(this_00);
        *(Vector3 **)(this + 0x10) = this_00;
      }
      pPVar9 = *(ParticleEmitter **)PTR_default_instance__007e4cf0;
                    /* catch() { ... } // from try @ 0041ccf0 with catch @ 0041cda4 */
      if (*(long *)(param_1 + 0x10) != 0) {
        pPVar9 = param_1;
      }
      Vector3::MergeFrom(this_00,*(Vector3 **)(pPVar9 + 0x10));
      uVar7 = *(uint *)(param_1 + 0x50);
    }
    if ((uVar7 >> 2 & 1) != 0) {
                    /* try { // try from 0041cdb8 to 0051ce7f has its CatchHandler @ 0041cdb8
                       catch() { ... } // from try @ 0041cdb8 with catch @ 0041cdb8
                       catch() { ... } // from try @ 0041ce90 with catch @ 0041cdb8
                       catch() { ... } // from try @ 0041cec8 with catch @ 0041cdb8
                       catch() { ... } // from try @ 0041cf78 with catch @ 0041cdb8 */
      this_01 = *(FloatColor **)(this + 0x18);
      *(uint *)(this + 0x50) = *(uint *)(this + 0x50) | 4;
      if (this_01 == (FloatColor *)0x0) {
        this_01 = operator_new(0x20);
        FloatColor::FloatColor(this_01);
        *(FloatColor **)(this + 0x18) = this_01;
      }
      pPVar9 = *(ParticleEmitter **)PTR_default_instance__007e4cf0;
      if (*(long *)(param_1 + 0x18) != 0) {
        pPVar9 = param_1;
      }
      FloatColor::MergeFrom(this_01,*(FloatColor **)(pPVar9 + 0x18));
      uVar7 = *(uint *)(param_1 + 0x50);
    }
    if ((uVar7 >> 3 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x20);
      *(uint *)(this + 0x50) = *(uint *)(this + 0x50) | 8;
      *(undefined4 *)(this + 0x20) = uVar1;
      uVar7 = *(uint *)(param_1 + 0x50);
    }
    if ((uVar7 >> 4 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x24);
      *(uint *)(this + 0x50) = *(uint *)(this + 0x50) | 0x10;
                    /* try { // try from 0041ce80 to 0051ce8f has its CatchHandler @ 0041cf4c */
      *(undefined4 *)(this + 0x24) = uVar1;
      uVar7 = *(uint *)(param_1 + 0x50);
    }
    if ((uVar7 >> 5 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      *(uint *)(this + 0x50) = *(uint *)(this + 0x50) | 0x20;
      *(undefined4 *)(this + 0x28) = uVar1;
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0041ce90 to 0051ceb3 has its CatchHandler @ 0041cdb8 */
    __stack_chk_fail();
  }
  return;
}


