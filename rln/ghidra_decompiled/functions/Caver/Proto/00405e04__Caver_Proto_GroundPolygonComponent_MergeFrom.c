/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00405e04
 * Function: Caver::Proto::GroundPolygonComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(GroundPolygonComponent * this, GroundPolygonComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::GroundPolygonComponent::MergeFrom(Caver::Proto::GroundPolygonComponent const&) */

void __thiscall
Caver::Proto::GroundPolygonComponent::MergeFrom
          (GroundPolygonComponent *this,GroundPolygonComponent *param_1)

{
  GroundPolygonComponent *pGVar1;
  int iVar2;
  undefined4 uVar3;
  GroundPolygonComponent GVar4;
  long lVar5;
  LogMessage *pLVar6;
  int iVar7;
  uint uVar8;
  Program *this_00;
  Polygon *this_01;
  Vector2 *pVVar9;
  Vector2 *this_02;
  long lVar10;
  LogFinisher aLStack_80 [8];
  LogMessage aLStack_78 [32];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_78,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x112d);
    pLVar6 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_78,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_80,pLVar6);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_78);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve
            ((RepeatedPtrFieldBase *)(this + 0x18),*(int *)(param_1 + 0x20) + *(int *)(this + 0x20))
  ;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar10 = 0;
    do {
      iVar2 = *(int *)(this + 0x20);
      iVar7 = *(int *)(this + 0x24);
      pVVar9 = *(Vector2 **)(*(long *)(param_1 + 0x18) + lVar10 * 8);
      if (iVar2 < iVar7) {
        *(int *)(this + 0x20) = iVar2 + 1;
        this_02 = *(Vector2 **)(*(long *)(this + 0x18) + (long)iVar2 * 8);
      }
      else {
        if (iVar7 == *(int *)(this + 0x28)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(this + 0x18),iVar7 + 1);
          iVar7 = *(int *)(this + 0x24);
        }
        *(int *)(this + 0x24) = iVar7 + 1;
        this_02 = operator_new(0x18);
        Vector2::Vector2(this_02);
        iVar2 = *(int *)(this + 0x20);
        *(int *)(this + 0x20) = iVar2 + 1;
        *(Vector2 **)(*(long *)(this + 0x18) + (long)iVar2 * 8) = this_02;
      }
      Vector2::MergeFrom(this_02,pVVar9);
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x20));
  }
  GVar4 = param_1[0x6c];
  uVar8 = (uint)(byte)GVar4;
  if (GVar4 != (GroundPolygonComponent)0x0) {
    if (((byte)GVar4 & 1) != 0) {
      this_00 = *(Program **)(this + 0x10);
      *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 1;
      if (this_00 == (Program *)0x0) {
        this_00 = operator_new(0x30);
        Program::Program(this_00);
        *(Program **)(this + 0x10) = this_00;
      }
      pGVar1 = *(GroundPolygonComponent **)PTR_default_instance__007e5920;
      if (*(long *)(param_1 + 0x10) != 0) {
        pGVar1 = param_1;
      }
      Program::MergeFrom(this_00,*(Program **)(pGVar1 + 0x10));
      uVar8 = *(uint *)(param_1 + 0x6c);
    }
    if ((uVar8 >> 2 & 1) != 0) {
      this_01 = *(Polygon **)(this + 0x50);
      *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 4;
      if (this_01 == (Polygon *)0x0) {
        this_01 = operator_new(0x50);
        Polygon::Polygon(this_01);
        *(Polygon **)(this + 0x50) = this_01;
      }
      pGVar1 = *(GroundPolygonComponent **)PTR_default_instance__007e5920;
      if (*(long *)(param_1 + 0x50) != 0) {
        pGVar1 = param_1;
      }
      Polygon::MergeFrom(this_01,*(Polygon **)(pGVar1 + 0x50));
      uVar8 = *(uint *)(param_1 + 0x6c);
    }
    if ((uVar8 >> 3 & 1) != 0) {
      GVar4 = param_1[0x58];
      *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 8;
      this[0x58] = GVar4;
      uVar8 = *(uint *)(param_1 + 0x6c);
    }
    if ((uVar8 >> 4 & 1) != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x5c);
      *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 0x10;
      *(undefined4 *)(this + 0x5c) = uVar3;
      uVar8 = *(uint *)(param_1 + 0x6c);
    }
    if ((uVar8 >> 5 & 1) != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x60);
      *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 0x20;
      *(undefined4 *)(this + 0x60) = uVar3;
      uVar8 = *(uint *)(param_1 + 0x6c);
    }
    if ((uVar8 >> 6 & 1) != 0) {
      uVar3 = *(undefined4 *)(param_1 + 100);
      *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 0x40;
      *(undefined4 *)(this + 100) = uVar3;
      uVar8 = *(uint *)(param_1 + 0x6c);
    }
    if ((uVar8 >> 7 & 1) != 0) {
      GVar4 = param_1[0x68];
      *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 0x80;
      this[0x68] = GVar4;
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


