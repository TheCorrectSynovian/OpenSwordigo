/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d6840
 * Function: Caver::Proto::GUIViewLayout::MergeFrom
 * Signature: undefined __thiscall MergeFrom(GUIViewLayout * this, GUIViewLayout * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GUIViewLayout::MergeFrom(Caver::Proto::GUIViewLayout const&) */

void __thiscall Caver::Proto::GUIViewLayout::MergeFrom(GUIViewLayout *this,GUIViewLayout *param_1)

{
  undefined *puVar1;
  GUIViewLayout GVar2;
  long lVar3;
  undefined *puVar4;
  LogMessage *pLVar5;
  GUIViewLayout *this_00;
  long *plVar6;
  GUIMargins *this_01;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  GUIViewLayout *pGVar10;
  long lVar11;
  int iVar12;
  LogFinisher aLStack_90 [8];
  LogMessage aLStack_88 [32];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_88,3,"./../../../../Source/Caver/Content/Proto/Common.pb.cc",0xfec);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_88,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_90,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_88);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve
            ((RepeatedPtrFieldBase *)(this + 0x18),*(int *)(param_1 + 0x20) + *(int *)(this + 0x20))
  ;
  puVar4 = PTR__default_identifier__007e4ab0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar11 = 0;
    puVar1 = PTR_vtable_007e5978 + 0x10;
    do {
      iVar12 = *(int *)(this + 0x20);
      iVar7 = *(int *)(this + 0x24);
      pGVar10 = *(GUIViewLayout **)(*(long *)(param_1 + 0x18) + lVar11 * 8);
      if (iVar12 < iVar7) {
        *(int *)(this + 0x20) = iVar12 + 1;
        this_00 = *(GUIViewLayout **)(*(long *)(this + 0x18) + (long)iVar12 * 8);
      }
      else {
        if (iVar7 == *(int *)(this + 0x28)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(this + 0x18),iVar7 + 1);
          iVar12 = *(int *)(this + 0x20);
          iVar7 = *(int *)(this + 0x24);
        }
        *(int *)(this + 0x24) = iVar7 + 1;
        this_00 = operator_new(0x60);
        *(undefined **)this_00 = puVar1;
        *(GUIViewLayout **)(this_00 + 0x18) = this_00 + 0x30;
        *(long *)(this_00 + 0x20) = 0;
        *(undefined4 *)(this_00 + 0x28) = 4;
        *(undefined4 *)(this_00 + 8) = 0;
        *(long *)(this_00 + 0x50) = 0;
        *(undefined **)(this_00 + 0x10) = puVar4;
        *(undefined4 *)(this_00 + 0x58) = 0;
        *(int *)(this + 0x20) = iVar12 + 1;
        *(GUIViewLayout **)(*(long *)(this + 0x18) + (long)iVar12 * 8) = this_00;
      }
      MergeFrom(this_00,pGVar10);
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_1 + 0x20));
  }
  puVar4 = PTR__default_identifier__007e4ab0;
  GVar2 = param_1[0x58];
  uVar8 = (uint)(byte)GVar2;
  if (GVar2 != (GUIViewLayout)0x0) {
    if (((byte)GVar2 & 1) != 0) {
      plVar6 = *(long **)(this + 0x10);
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      *(uint *)(this + 0x58) = *(uint *)(this + 0x58) | 1;
      if (plVar6 == (long *)puVar4) {
        plVar6 = operator_new(8);
        *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x10) = plVar6;
      }
      FUN_0066a6a8(plVar6,uVar9);
      uVar8 = *(uint *)(param_1 + 0x58);
    }
    if ((uVar8 >> 2 & 1) != 0) {
      this_01 = *(GUIMargins **)(this + 0x50);
      *(uint *)(this + 0x58) = *(uint *)(this + 0x58) | 4;
      if (this_01 == (GUIMargins *)0x0) {
        this_01 = operator_new(0x20);
        puVar4 = PTR_vtable_007e4930;
        *(long *)(this_01 + 0x10) = 0;
        *(long *)(this_01 + 0x18) = 0;
        *(undefined **)this_01 = puVar4 + 0x10;
        *(long *)(this_01 + 8) = 0;
        *(GUIMargins **)(this + 0x50) = this_01;
      }
      pGVar10 = *(GUIViewLayout **)PTR_default_instance__007e69d0;
      if (*(long *)(param_1 + 0x50) != 0) {
        pGVar10 = param_1;
      }
      GUIMargins::MergeFrom(this_01,*(GUIMargins **)(pGVar10 + 0x50));
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


