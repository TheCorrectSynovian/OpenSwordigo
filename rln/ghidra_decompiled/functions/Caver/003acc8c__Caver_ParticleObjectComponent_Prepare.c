/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003acc8c
 * Function: Caver::ParticleObjectComponent::Prepare
 * Signature: undefined __thiscall Prepare(ParticleObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ParticleObjectComponent::Prepare() */

void __thiscall Caver::ParticleObjectComponent::Prepare(ParticleObjectComponent *this)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  float local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(this + 0x28);
  iVar3 = fastrandom();
  puVar2 = PTR_FASTRANDOM_MAX_007e4b68;
  local_40[0] = ((float)iVar3 / (float)*(int *)PTR_FASTRANDOM_MAX_007e4b68) * _DAT_00687e1c +
                DAT_00683f70;
  local_40[1] = 0.0;
  PhysicsObjectState::setVelocity((PhysicsObjectState *)(this + 0x88),(Vector2 *)local_40);
  iVar3 = fastrandom();
  *(float *)(this + 0x110) = ((float)iVar3 / (float)*(int *)puVar2) * _DAT_00684940 + DAT_00688018;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


