/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ca9b4
 * Function: Caver::WeaponGlowComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(WeaponGlowComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponGlowComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::WeaponGlowComponent::SaveToProtobufMessage(WeaponGlowComponent *this,Component *param_1)

{
  int iVar1;
  long lVar2;
  MessageLite *pMVar3;
  long lVar4;
  FloatColor *pFVar5;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  GlowComponent::SaveToProtobufMessage((Component *)this);
  iVar1 = *(int *)PTR_extension_007e4d00;
  pMVar3 = (MessageLite *)Proto::WeaponGlowComponent::default_instance();
  lVar4 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar3,(FieldDescriptor *)0x0);
  pFVar5 = *(FloatColor **)(lVar4 + 0x10);
  *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)(this + 0x90);
  *(uint *)(lVar4 + 0x24) = *(uint *)(lVar4 + 0x24) | 3;
  if (pFVar5 == (FloatColor *)0x0) {
    pFVar5 = operator_new(0x20);
    Proto::FloatColor::FloatColor(pFVar5);
    *(FloatColor **)(lVar4 + 0x10) = pFVar5;
  }
  FloatColorToProtobufMessage((FloatColor *)(this + 0xa4),pFVar5);
  local_48 = (float)NEON_ucvtf((uint)(byte)this[0xb4]);
  fStack_44 = (float)NEON_ucvtf((uint)(byte)this[0xb5]);
  local_40 = (float)NEON_ucvtf((uint)(byte)this[0xb6]);
  fStack_3c = (float)NEON_ucvtf((uint)(byte)this[0xb7]);
  local_48 = local_48 / DAT_00683ffc;
  fStack_44 = fStack_44 / DAT_00683ffc;
  local_40 = local_40 / DAT_00683ffc;
  fStack_3c = fStack_3c / DAT_00683ffc;
  pFVar5 = *(FloatColor **)(lVar4 + 0x18);
  *(uint *)(lVar4 + 0x24) = *(uint *)(lVar4 + 0x24) | 4;
  if (pFVar5 == (FloatColor *)0x0) {
    pFVar5 = operator_new(0x20);
    Proto::FloatColor::FloatColor(pFVar5);
    *(FloatColor **)(lVar4 + 0x18) = pFVar5;
  }
  FloatColorToProtobufMessage((FloatColor *)&local_48,pFVar5);
  *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(this + 0xf4);
  *(uint *)(lVar4 + 0x24) = *(uint *)(lVar4 + 0x24) | 8;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


