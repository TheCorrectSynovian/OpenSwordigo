/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00368eb4
 * Function: Caver::EntityComponent::Update
 * Signature: undefined __thiscall Update(EntityComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::EntityComponent::Update(float) */

void __thiscall Caver::EntityComponent::Update(EntityComponent *this,float param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  
  if (this[0x128] != (EntityComponent)0x0) {
    fVar5 = *(float *)(this + 300);
    if (DAT_00683944 < fVar5) {
      ParticleEmitterComponent::StopEmitting(*(ParticleEmitterComponent **)(this + 0x120));
      fVar5 = *(float *)(this + 300);
      this[0x128] = (EntityComponent)0x0;
    }
    *(float *)(this + 300) = fVar5 + param_1;
  }
  PhysicsObjectState::Update((PhysicsObjectState *)(this + 0x78),param_1);
  fVar5 = DAT_00683734;
  if ((this[0x100] != (EntityComponent)0x0) &&
     (fVar6 = *(float *)(this + 0x104), *(float *)(this + 0x104) = fVar6 - param_1,
     puVar3 = PTR_Interface_007e7860, fVar6 - param_1 < fVar5)) {
    plVar2 = *(long **)(*(long *)(this + 0x28) + 200);
    for (plVar1 = *(long **)(*(long *)(this + 0x28) + 0xc0); plVar1 != plVar2; plVar1 = plVar1 + 1)
    {
      uVar4 = (**(code **)(*(long *)*plVar1 + 0xa0))((long *)*plVar1,puVar3);
      if ((uVar4 & 1) != 0) {
        *(undefined1 *)(*plVar1 + 0x135) = 0;
      }
    }
    this[0x100] = (EntityComponent)0x0;
  }
  if ((((_DAT_00684434 <= *(float *)(this + 0x80)) || (*(float *)(this + 0x8c) <= 0.0)) ||
      (this[0x90] != (EntityComponent)0x0)) ||
     (fVar5 = *(float *)(*(long *)(this + 0x28) + 0x68),
     fVar6 = *(float *)(*(long *)(this + 0x28) + 0x6c), DAT_00687f38 < fVar5 * fVar5 + fVar6 * fVar6
     )) {
    *(undefined1 *)(*(long *)(this + 0x28) + 0xf2) = 1;
  }
  return;
}


