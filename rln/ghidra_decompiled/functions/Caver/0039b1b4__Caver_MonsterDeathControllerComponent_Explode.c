/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039b1b4
 * Function: Caver::MonsterDeathControllerComponent::Explode
 * Signature: undefined __thiscall Explode(MonsterDeathControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::MonsterDeathControllerComponent::Explode() */

void __thiscall
Caver::MonsterDeathControllerComponent::Explode(MonsterDeathControllerComponent *this)

{
  ComponentOutletBase *this_00;
  long lVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  Vector2 *this_01;
  ParticleEmitterComponent *this_02;
  int *piVar8;
  long lVar9;
  ParticleEmitterComponent *this_03;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_d8 [2];
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  long local_a8;
  
  puVar5 = PTR_FASTRANDOM_MAX_007e4b68;
  dVar4 = DAT_006883b0;
  dVar3 = DAT_00684790;
  fVar2 = _DAT_006846d0;
  lVar1 = tpidr_el0;
  local_a8 = *(long *)(lVar1 + 0x28);
  iVar10 = 0;
  this_00 = (ComponentOutletBase *)(this + 0x70);
  fVar12 = (*(float *)(this + 0xa8) + *(float *)(this + 0xa8)) / _DAT_006846d0;
  do {
    this_01 = (Vector2 *)fastrandom();
    Vector2::FromAngle(this_01,(float)((double)((float)iVar10 / 10.0) * dVar3 +
                                      (double)(((float)(int)this_01 / (float)*(int *)puVar5) * 0.25)
                                      * dVar4));
    iVar6 = fastrandom();
    local_c0 = *(undefined8 *)(this + 0x9c);
    local_b8 = *(undefined4 *)(this + 0xa4);
    fVar13 = (float)iVar6 / (float)*(int *)puVar5 + 0.5;
    fVar11 = fVar12 * fVar13;
    local_d0 = CONCAT44((float)((ulong)local_b0 >> 0x20) * fVar11,(float)local_b0 * fVar11);
    local_c8 = 0;
    local_d8[0] = 0x595959;
    this_03 = *(ParticleEmitterComponent **)(this + 0x80);
    this_02 = this_03;
    if (this_03 == (ParticleEmitterComponent *)0x0) {
      ComponentOutletBase::Connect(this_00,(Component *)this);
      this_03 = *(ParticleEmitterComponent **)(this + 0x80);
      this_02 = this_03;
      if (this_03 == (ParticleEmitterComponent *)0x0) {
        ComponentOutletBase::Connect(this_00,(Component *)this);
        this_02 = *(ParticleEmitterComponent **)(this + 0x80);
      }
    }
    iVar6 = ParticleEmitterComponent::RandomParticleType(this_02);
    iVar7 = fastrandom();
    piVar8 = (int *)ParticleEmitterComponent::AddParticle
                              (this_03,iVar6,(Vector3 *)&local_c0,(Vector3 *)&local_d0,
                               (float)((double)((float)iVar7 / (float)*(int *)puVar5) * dVar3),
                               (Color *)local_d8,fVar2);
    if (piVar8 != (int *)0x0) {
      iVar6 = fastrandom();
      piVar8[9] = (int)(float)((double)((float)iVar6 / (float)*(int *)puVar5) * dVar3);
      fVar11 = *(float *)(this + 0xa8);
      lVar9 = *(long *)(this + 0x80);
      if (lVar9 == 0) {
        ComponentOutletBase::Connect(this_00,(Component *)this);
        lVar9 = *(long *)(this + 0x80);
      }
      lVar9 = (**(code **)(*(long *)(lVar9 + (long)*piVar8 * 0x18 + 0x78) + 0x18))();
      fVar11 = ((fVar13 + fVar13) * fVar11) / *(float *)(lVar9 + 0x80);
      piVar8[10] = (int)fVar11;
      piVar8[0xb] = (int)fVar11;
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 != 10);
  if (*(long *)(lVar1 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


