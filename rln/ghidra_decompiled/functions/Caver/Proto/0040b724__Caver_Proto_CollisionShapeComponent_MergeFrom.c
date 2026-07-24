/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040b724
 * Function: Caver::Proto::CollisionShapeComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(CollisionShapeComponent * this, CollisionShapeComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::CollisionShapeComponent::MergeFrom(Caver::Proto::CollisionShapeComponent const&) */

void __thiscall
Caver::Proto::CollisionShapeComponent::MergeFrom
          (CollisionShapeComponent *this,CollisionShapeComponent *param_1)

{
  CollisionShapeComponent *pCVar1;
  undefined4 uVar2;
  CollisionShapeComponent CVar3;
  long lVar4;
  LogMessage *pLVar5;
  uint uVar6;
  Program *pPVar7;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x1a29);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  uVar6 = *(uint *)(param_1 + 0x40);
  if ((uVar6 & 0xff) != 0) {
    if ((uVar6 & 1) != 0) {
      CVar3 = param_1[0xc];
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 1;
      this[0xc] = CVar3;
      uVar6 = *(uint *)(param_1 + 0x40);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      CVar3 = param_1[0xd];
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 2;
      this[0xd] = CVar3;
      uVar6 = *(uint *)(param_1 + 0x40);
    }
    if ((uVar6 >> 2 & 1) != 0) {
      CVar3 = param_1[0xe];
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 4;
      this[0xe] = CVar3;
      uVar6 = *(uint *)(param_1 + 0x40);
    }
    if ((uVar6 >> 3 & 1) != 0) {
      CVar3 = param_1[0xf];
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 8;
      this[0xf] = CVar3;
      uVar6 = *(uint *)(param_1 + 0x40);
    }
    if ((uVar6 >> 4 & 1) != 0) {
      CVar3 = param_1[0x10];
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x10;
      this[0x10] = CVar3;
      uVar6 = *(uint *)(param_1 + 0x40);
    }
    if ((uVar6 >> 5 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x14);
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x20;
      *(undefined4 *)(this + 0x14) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x40);
    }
    if ((uVar6 >> 6 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x40;
      *(undefined4 *)(this + 0x18) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x40);
    }
    if ((uVar6 >> 7 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x80;
      *(undefined4 *)(this + 0x1c) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x40);
    }
  }
  if ((uVar6 & 0xff00) != 0) {
    if ((uVar6 >> 8 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x20);
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x100;
      *(undefined4 *)(this + 0x20) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x40);
    }
    if ((uVar6 >> 9 & 1) != 0) {
      CVar3 = param_1[0x24];
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x200;
      this[0x24] = CVar3;
      uVar6 = *(uint *)(param_1 + 0x40);
    }
    if ((uVar6 >> 10 & 1) != 0) {
      pPVar7 = *(Program **)(this + 0x28);
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x400;
      if (pPVar7 == (Program *)0x0) {
        pPVar7 = operator_new(0x30);
        Program::Program(pPVar7);
        *(Program **)(this + 0x28) = pPVar7;
      }
      pCVar1 = *(CollisionShapeComponent **)PTR_default_instance__007e7360;
      if (*(long *)(param_1 + 0x28) != 0) {
        pCVar1 = param_1;
      }
      Program::MergeFrom(pPVar7,*(Program **)(pCVar1 + 0x28));
      uVar6 = *(uint *)(param_1 + 0x40);
    }
    if ((uVar6 >> 0xb & 1) != 0) {
      pPVar7 = *(Program **)(this + 0x30);
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x800;
      if (pPVar7 == (Program *)0x0) {
        pPVar7 = operator_new(0x30);
        Program::Program(pPVar7);
        *(Program **)(this + 0x30) = pPVar7;
      }
      pCVar1 = *(CollisionShapeComponent **)PTR_default_instance__007e7360;
      if (*(long *)(param_1 + 0x30) != 0) {
        pCVar1 = param_1;
      }
      Program::MergeFrom(pPVar7,*(Program **)(pCVar1 + 0x30));
      uVar6 = *(uint *)(param_1 + 0x40);
    }
    if ((uVar6 >> 0xc & 1) != 0) {
      pPVar7 = *(Program **)(this + 0x38);
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x1000;
      if (pPVar7 == (Program *)0x0) {
        pPVar7 = operator_new(0x30);
        Program::Program(pPVar7);
        *(Program **)(this + 0x38) = pPVar7;
      }
      pCVar1 = *(CollisionShapeComponent **)PTR_default_instance__007e7360;
      if (*(long *)(param_1 + 0x38) != 0) {
        pCVar1 = param_1;
      }
      Program::MergeFrom(pPVar7,*(Program **)(pCVar1 + 0x38));
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


