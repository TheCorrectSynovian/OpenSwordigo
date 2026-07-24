/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ab240
 * Function: Caver::ParticleEmitterComponent::RandomParticleType
 * Signature: undefined __thiscall RandomParticleType(ParticleEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleEmitterComponent::RandomParticleType() */

undefined4 __thiscall
Caver::ParticleEmitterComponent::RandomParticleType(ParticleEmitterComponent *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ParticleEmitterComponent *pPVar5;
  uint uVar6;
  
  uVar6 = 0xffffffff;
  while( true ) {
    iVar3 = fastrandom();
    iVar1 = *(int *)(this + 0x70);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = iVar3 / iVar1;
    }
    pPVar5 = this + (long)(iVar3 - iVar2 * iVar1) * 0x18 + 0x78;
    lVar4 = (**(code **)(*(long *)pPVar5 + 0x18))(pPVar5,this);
    if (lVar4 != 0) break;
    uVar6 = uVar6 + 1;
    if (0x12 < uVar6) {
      return 0;
    }
  }
  lVar4 = (**(code **)(*(long *)pPVar5 + 0x18))(pPVar5,this);
  return *(undefined4 *)(lVar4 + 0x8c);
}


