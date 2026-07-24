/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00412960
 * Function: Caver::Proto::CharControllerComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(CharControllerComponent * this, CharControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::CharControllerComponent::MergeFrom(Caver::Proto::CharControllerComponent const&) */

void __thiscall
Caver::Proto::CharControllerComponent::MergeFrom
          (CharControllerComponent *this,CharControllerComponent *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  LogMessage *pLVar5;
  void *__dest;
  uint uVar6;
  ulong uVar7;
  CharControllerComponent *__src;
  int iVar8;
  ulong uVar9;
  LogFinisher aLStack_80 [8];
  LogMessage aLStack_78 [32];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_78,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x27c6);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_78,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_80,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_78);
  }
  uVar9 = (ulong)*(uint *)(param_1 + 0x50);
  iVar8 = *(int *)(this + 0x50);
  uVar6 = *(uint *)(param_1 + 0x50) + iVar8;
  if (*(int *)(this + 0x54) < (int)uVar6) {
    uVar2 = *(int *)(this + 0x54) * 2;
    if ((int)uVar6 <= (int)uVar2) {
      uVar6 = uVar2;
    }
    __src = *(CharControllerComponent **)(this + 0x48);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (long)(int)uVar6;
    *(uint *)(this + 0x54) = uVar6;
    uVar7 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
    if (SUB168(auVar3 * ZEXT816(4),8) != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    __dest = operator_new__(uVar7);
    *(void **)(this + 0x48) = __dest;
    memcpy(__dest,__src,(long)iVar8 << 2);
    if ((__src != this + 0x58) && (__src != (CharControllerComponent *)0x0)) {
      operator_delete__(__src);
      iVar8 = *(int *)(this + 0x50);
      uVar9 = (ulong)*(uint *)(param_1 + 0x50);
    }
  }
  memcpy((void *)(*(long *)(this + 0x48) + (long)iVar8 * 4),*(void **)(param_1 + 0x48),
         -(uVar9 >> 0x1f) & 0xfffffffc00000000 | uVar9 << 2);
  *(int *)(this + 0x50) = *(int *)(this + 0x50) + *(int *)(param_1 + 0x50);
  uVar6 = *(uint *)(param_1 + 0x7c);
  if ((uVar6 & 0xff) != 0) {
    if ((uVar6 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0xc);
      *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 1;
      *(undefined4 *)(this + 0xc) = uVar1;
      uVar6 = *(uint *)(param_1 + 0x7c);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 2;
      *(undefined4 *)(this + 0x10) = uVar1;
      uVar6 = *(uint *)(param_1 + 0x7c);
    }
    if ((uVar6 >> 2 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x14);
      *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 4;
      *(undefined4 *)(this + 0x14) = uVar1;
      uVar6 = *(uint *)(param_1 + 0x7c);
    }
    if ((uVar6 >> 3 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 8;
      *(undefined4 *)(this + 0x18) = uVar1;
      uVar6 = *(uint *)(param_1 + 0x7c);
    }
    if ((uVar6 >> 4 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x1c);
      *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x10;
      *(undefined4 *)(this + 0x1c) = uVar1;
      uVar6 = *(uint *)(param_1 + 0x7c);
    }
    if ((uVar6 >> 5 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x20);
      *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x20;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00412c48 with catch @ 00412be0
                       catch(type#1 @ 00000000) { ... } // from try @ 00412c8c with catch @ 00412be0
                        */
      *(undefined4 *)(this + 0x20) = uVar1;
      uVar6 = *(uint *)(param_1 + 0x7c);
    }
    if ((uVar6 >> 6 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x24);
      *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x40;
      *(undefined4 *)(this + 0x24) = uVar1;
      uVar6 = *(uint *)(param_1 + 0x7c);
    }
    if ((uVar6 >> 7 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x80;
      *(undefined4 *)(this + 0x28) = uVar1;
      uVar6 = *(uint *)(param_1 + 0x7c);
    }
  }
  if ((uVar6 & 0xff00) != 0) {
    if ((uVar6 >> 8 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x2c);
      *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x100;
      *(undefined4 *)(this + 0x2c) = uVar1;
                    /* try { // try from 00412c20 to 00512c23 has its CatchHandler @ 00412c60 */
      uVar6 = *(uint *)(param_1 + 0x7c);
    }
    if ((uVar6 >> 9 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x30);
      *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x200;
      *(undefined4 *)(this + 0x30) = uVar1;
      uVar6 = *(uint *)(param_1 + 0x7c);
    }
    if ((uVar6 >> 10 & 1) != 0) {
                    /* try { // try from 00412c44 to 00512c47 has its CatchHandler @ 00412c54 */
                    /* try { // try from 00412c48 to 00512c83 has its CatchHandler @ 00412be0 */
      uVar1 = *(undefined4 *)(param_1 + 0x34);
      *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x400;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00412c44 with catch @ 00412c54
                        */
      *(undefined4 *)(this + 0x34) = uVar1;
      uVar6 = *(uint *)(param_1 + 0x7c);
    }
    if ((uVar6 >> 0xb & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00412c20 with catch @ 00412c60
                        */
      uVar1 = *(undefined4 *)(param_1 + 0x38);
      *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x800;
      *(undefined4 *)(this + 0x38) = uVar1;
      uVar6 = *(uint *)(param_1 + 0x7c);
    }
    if ((uVar6 >> 0xc & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x3c);
                    /* try { // try from 00412c84 to 00512c8b has its CatchHandler @ 00412c94 */
      *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x1000;
                    /* try { // try from 00412c8c to 00512c97 has its CatchHandler @ 00412be0 */
      *(undefined4 *)(this + 0x3c) = uVar1;
      uVar6 = *(uint *)(param_1 + 0x7c);
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00412c84 with catch @ 00412c94
                        */
    if ((uVar6 >> 0xd & 1) != 0) {
                    /* catch() { ... } // from try @ 00412d44 with catch @ 00412c98 */
      uVar1 = *(undefined4 *)(param_1 + 0x40);
      *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x2000;
      *(undefined4 *)(this + 0x40) = uVar1;
      uVar6 = *(uint *)(param_1 + 0x7c);
    }
    if ((uVar6 >> 0xf & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x68);
      *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x8000;
      *(undefined4 *)(this + 0x68) = uVar1;
      uVar6 = *(uint *)(param_1 + 0x7c);
    }
  }
  if ((uVar6 & 0xff0000) != 0) {
    if ((uVar6 >> 0x10 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x6c);
      *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x10000;
      *(undefined4 *)(this + 0x6c) = uVar1;
      uVar6 = *(uint *)(param_1 + 0x7c);
    }
    if ((uVar6 >> 0x11 & 1) != 0) {
                    /* try { // try from 00412cd8 to 00512cdb has its CatchHandler @ 00412d18 */
      uVar1 = *(undefined4 *)(param_1 + 0x70);
      *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x20000;
      *(undefined4 *)(this + 0x70) = uVar1;
      uVar6 = *(uint *)(param_1 + 0x7c);
    }
    if ((uVar6 >> 0x12 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x74);
                    /* try { // try from 00412cfc to 00512cff has its CatchHandler @ 00412d10 */
      *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x40000;
      *(undefined4 *)(this + 0x74) = uVar1;
      uVar6 = *(uint *)(param_1 + 0x7c);
    }
    if ((uVar6 >> 0x13 & 1) != 0) {
      *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
      *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x80000;
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00412cfc with catch @ 00412d10 */
    __stack_chk_fail();
  }
  return;
}


