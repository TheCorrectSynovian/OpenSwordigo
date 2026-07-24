/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b8c60
 * Function: Caver::GroundMeshComponent::Clone
 * Signature: undefined __thiscall Clone(GroundMeshComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshComponent::Clone() const */

long * __thiscall Caver::GroundMeshComponent::Clone(GroundMeshComponent *this)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  Component aCStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = operator_new(0xd8);
  *(undefined4 *)(plVar4 + 1) = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  *(undefined1 *)(plVar4 + 6) = 0;
  puVar2 = PTR_DAT_007e5de8;
  plVar4[10] = 0;
  puVar3 = PTR_vtable_007e7478;
  plVar4[7] = (long)(puVar2 + 0x18);
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar5 = plVar4 + 9;
  *plVar5 = 0;
  plVar4[3] = (long)(puVar3 + 0x168);
  plVar4[2] = (long)(puVar3 + 0x128);
  auVar6 = NEON_fmov(0x3f800000,4);
  *plVar4 = (long)(puVar3 + 0x10);
  plVar4[0x14] = 0;
  plVar4[0x15] = 0;
  plVar4[0x12] = 0;
  plVar4[0x13] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = 0;
  plVar4[0xf] = 0;
  plVar4[0x17] = auVar6._8_8_;
  plVar4[0x16] = auVar6._0_8_;
  *(undefined1 *)(plVar4 + 0x18) = 0;
  plVar4[0xb] = (long)plVar5;
  plVar4[0xc] = (long)plVar5;
  *(long *)((long)plVar4 + 0xcc) = auVar6._8_8_;
  *(long *)((long)plVar4 + 0xc4) = auVar6._0_8_;
  Proto::Component::Component(aCStack_98);
  (**(code **)(*(long *)this + 0x28))(this,aCStack_98);
  (**(code **)(*plVar4 + 0x20))(plVar4,aCStack_98);
  Proto::Component::~Component(aCStack_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


