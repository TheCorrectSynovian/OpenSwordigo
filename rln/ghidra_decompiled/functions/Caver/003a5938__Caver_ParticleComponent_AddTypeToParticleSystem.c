/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a5938
 * Function: Caver::ParticleComponent::AddTypeToParticleSystem
 * Signature: undefined __thiscall AddTypeToParticleSystem(ParticleComponent * this, ParticleSystem * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleComponent::AddTypeToParticleSystem(Caver::ParticleSystem*) */

void __thiscall
Caver::ParticleComponent::AddTypeToParticleSystem(ParticleComponent *this,ParticleSystem *param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  intrusive_ptr *piVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x8c) < 0) {
    piVar4 = (intrusive_ptr *)(this + 0x78);
    if (*(long *)piVar4 == 0) {
      uVar3 = Component::ShouldPrepare((Component *)this);
      if ((uVar3 & 1) != 0) {
        (**(code **)(*(long *)this + 0x40))(this);
      }
      if (*(long *)piVar4 == 0) goto LAB_003a59bc;
    }
    uStack_40 = *(undefined8 *)(this + 0x84);
    local_48 = CONCAT44((float)((ulong)uStack_40 >> 0x20) * -0.5,(float)uStack_40 * -0.5);
    uVar2 = ParticleSystem::AddParticleType(param_1,piVar4,(Rectangle *)&local_48);
    *(undefined4 *)(this + 0x8c) = uVar2;
  }
LAB_003a59bc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


