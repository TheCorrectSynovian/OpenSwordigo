/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004256d0
 * Function: Caver::Proto::AttackComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(AttackComponent * this, AttackComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::AttackComponent::MergeFrom(Caver::Proto::AttackComponent const&) */

void __thiscall
Caver::Proto::AttackComponent::MergeFrom(AttackComponent *this,AttackComponent *param_1)

{
  AttackComponent *pAVar1;
  undefined4 uVar2;
  long lVar3;
  LogMessage *pLVar4;
  uint uVar5;
  Program *this_00;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
                    /* catch() { ... } // from try @ 00424c18 with catch @ 004256e8 */
  local_38 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 00424bbc with catch @ 004256ec */
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x470f);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  uVar5 = *(uint *)(param_1 + 0x48);
  if ((uVar5 & 0xff) != 0) {
                    /* catch() { ... } // from try @ 00424b88 with catch @ 00425748 */
    if ((uVar5 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 1;
                    /* catch() { ... } // from try @ 00424ad4 with catch @ 004257e0 */
      *(undefined4 *)(this + 0xc) = uVar2;
      uVar5 = *(uint *)(param_1 + 0x48);
    }
    if ((uVar5 >> 1 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 2;
      *(undefined4 *)(this + 0x10) = uVar2;
      uVar5 = *(uint *)(param_1 + 0x48);
    }
    if ((uVar5 >> 2 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x14);
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 4;
                    /* catch() { ... } // from try @ 00424ab0 with catch @ 00425818 */
      *(undefined4 *)(this + 0x14) = uVar2;
                    /* catch() { ... } // from try @ 00424a4c with catch @ 0042581c */
      uVar5 = *(uint *)(param_1 + 0x48);
    }
    if ((uVar5 >> 3 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 8;
      *(undefined4 *)(this + 0x18) = uVar2;
      uVar5 = *(uint *)(param_1 + 0x48);
    }
    if ((uVar5 >> 4 & 1) != 0) {
      this_00 = *(Program **)(this + 0x20);
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x10;
      if (this_00 == (Program *)0x0) {
        this_00 = operator_new(0x30);
        Program::Program(this_00);
        *(Program **)(this + 0x20) = this_00;
      }
      pAVar1 = *(AttackComponent **)PTR_default_instance__007e7ad0;
                    /* catch() { ... } // from try @ 00424a1c with catch @ 00425880 */
      if (*(long *)(param_1 + 0x20) != 0) {
        pAVar1 = param_1;
      }
      Program::MergeFrom(this_00,*(Program **)(pAVar1 + 0x20));
      uVar5 = *(uint *)(param_1 + 0x48);
    }
    if ((uVar5 >> 5 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x28);
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x20;
      *(undefined4 *)(this + 0x28) = uVar2;
      uVar5 = *(uint *)(param_1 + 0x48);
    }
    if ((uVar5 >> 6 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x2c);
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x40;
      *(undefined4 *)(this + 0x2c) = uVar2;
      uVar5 = *(uint *)(param_1 + 0x48);
    }
    if ((uVar5 >> 7 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x30);
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x80;
      *(undefined4 *)(this + 0x30) = uVar2;
      uVar5 = *(uint *)(param_1 + 0x48);
    }
  }
                    /* catch() { ... } // from try @ 00424b64 with catch @ 00425780 */
                    /* catch() { ... } // from try @ 00424b08 with catch @ 00425784 */
  if ((uVar5 & 0xff00) != 0) {
    if ((uVar5 >> 8 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x34);
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x100;
      *(undefined4 *)(this + 0x34) = uVar2;
      uVar5 = *(uint *)(param_1 + 0x48);
    }
    if ((uVar5 >> 9 & 1) != 0) {
                    /* catch() { ... } // from try @ 004249fc with catch @ 004258ec */
      uVar2 = *(undefined4 *)(param_1 + 0x38);
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x200;
      *(undefined4 *)(this + 0x38) = uVar2;
      uVar5 = *(uint *)(param_1 + 0x48);
    }
    if ((uVar5 >> 10 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x3c);
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x400;
      *(undefined4 *)(this + 0x3c) = uVar2;
      uVar5 = *(uint *)(param_1 + 0x48);
    }
    if ((uVar5 >> 0xb & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x40);
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x800;
      *(undefined4 *)(this + 0x40) = uVar2;
      uVar5 = *(uint *)(param_1 + 0x48);
    }
    if ((uVar5 >> 0xc & 1) != 0) {
      *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x1000;
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


