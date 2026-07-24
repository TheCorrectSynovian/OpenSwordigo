/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037f608
 * Function: Caver::PhysicsObjectComponent::Update
 * Signature: undefined __thiscall Update(PhysicsObjectComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::PhysicsObjectComponent::Update(float) */

void __thiscall Caver::PhysicsObjectComponent::Update(PhysicsObjectComponent *this,float param_1)

{
  ulong uVar1;
  PhysicsObjectComponent PVar2;
  PhysicsObjectComponent *pPVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = Rectangle::IntersectsWithRect
                    ((Rectangle *)(*(long *)(this + 0x28) + 0xa4),
                     (Rectangle *)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0x90));
  if ((DAT_00683734 < param_1) && ((uVar1 & 1) == 0)) {
    *(undefined1 *)(*(long *)(this + 0x28) + 0xe8) = 1;
  }
  fVar4 = *(float *)(this + 0x80);
  PVar2 = (PhysicsObjectComponent)0x0;
  if (this[0x70] != (PhysicsObjectComponent)0x0) {
    if ((((_DAT_00684434 <= fVar4) || (*(float *)(this + 0x8c) <= 0.0)) ||
        (this[0x90] != (PhysicsObjectComponent)0x0)) ||
       (fVar5 = *(float *)(*(long *)(this + 0x28) + 0x68),
       fVar6 = *(float *)(*(long *)(this + 0x28) + 0x6c),
       DAT_00687f38 < fVar5 * fVar5 + fVar6 * fVar6)) {
      *(undefined1 *)(*(long *)(this + 0x28) + 0xf2) = 1;
    }
    PVar2 = (PhysicsObjectComponent)((byte)this[0x114] ^ 1);
  }
  fVar5 = _DAT_00684434;
  this[0xec] = PVar2;
  if ((fVar5 <= fVar4) || (*(float *)(this + 0x8c) <= 0.0)) {
    pPVar3 = this + 0x110;
  }
  else {
    pPVar3 = this + 0x10c;
  }
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)pPVar3;
  PhysicsObjectState::Update((PhysicsObjectState *)(this + 0x78),param_1);
  return;
}


