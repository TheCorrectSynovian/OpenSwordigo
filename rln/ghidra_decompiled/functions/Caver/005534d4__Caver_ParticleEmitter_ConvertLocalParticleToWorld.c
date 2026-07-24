/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005534d4
 * Function: Caver::ParticleEmitter::ConvertLocalParticleToWorld
 * Signature: undefined __thiscall ConvertLocalParticleToWorld(ParticleEmitter * this, Particle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleEmitter::ConvertLocalParticleToWorld(Caver::Particle*) */

void __thiscall
Caver::ParticleEmitter::ConvertLocalParticleToWorld(ParticleEmitter *this,Particle *param_1)

{
  ParticleEmitter PVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 local_68;
  float local_60;
  undefined4 local_5c;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 005534f8 to 006537c3 has its CatchHandler @ 00553c6c */
  if (this[0x65] == (ParticleEmitter)0x0) {
    local_58 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x38) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20),
                        (float)*(undefined8 *)(this + 0x38) + (float)*(undefined8 *)(param_1 + 4));
    local_50 = *(float *)(this + 0x40) + *(float *)(param_1 + 0xc);
    Vector2::Vector2((Vector2 *)&local_48,(Vector3 *)&local_58);
    local_68 = local_48;
    Vector2::RotateWithSinCos((Vector2 *)&local_68,*(float *)(this + 0xd0),*(float *)(this + 0xd4));
    fVar4 = *(float *)(this + 0x60);
    fVar3 = (float)local_68 * fVar4;
    if (this[100] != (ParticleEmitter)0x0) {
      fVar3 = -((float)local_68 * fVar4);
    }
    uVar5 = *(undefined8 *)(this + 0x44);
    *(float *)(param_1 + 0xc) = local_50 * fVar4 + *(float *)(this + 0x4c);
    *(ulong *)(param_1 + 4) =
         CONCAT44((float)((ulong)uVar5 >> 0x20) + local_68._4_4_ * fVar4,(float)uVar5 + fVar3);
    Vector2::Vector2((Vector2 *)&local_68,(Vector3 *)(param_1 + 0x10));
    local_58 = local_68;
    Vector2::RotateWithSinCos((Vector2 *)&local_58,*(float *)(this + 0xd0),*(float *)(this + 0xd4));
    fVar4 = *(float *)(this + 0x60);
    PVar1 = this[100];
    fVar3 = (float)local_58 * fVar4;
    if (PVar1 != (ParticleEmitter)0x0) {
      fVar3 = -((float)local_58 * fVar4);
    }
    *(float *)(param_1 + 0x10) = fVar3;
    *(float *)(param_1 + 0x14) = local_58._4_4_ * fVar4;
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) * fVar4;
  }
  else {
    local_68 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x38) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20),
                        (float)*(undefined8 *)(this + 0x38) + (float)*(undefined8 *)(param_1 + 4));
    local_60 = *(float *)(this + 0x40) + *(float *)(param_1 + 0xc);
    local_5c = 0x3f800000;
    C_Matrix4Vector4Mul((float *)(this + 0x68),(float *)&local_68,(float *)&local_58);
    Vector3::Vector3((Vector3 *)&local_48,(Vector4 *)&local_58);
    local_68 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 4) = local_48;
    *(undefined4 *)(param_1 + 0xc) = local_40;
    local_60 = *(float *)(param_1 + 0x18);
    local_5c = 0;
    C_Matrix4Vector4Mul((float *)(this + 0x68),(float *)&local_68,(float *)&local_58);
    Vector3::Vector3((Vector3 *)&local_48,(Vector4 *)&local_58);
    *(undefined8 *)(param_1 + 0x10) = local_48;
    *(undefined4 *)(param_1 + 0x18) = local_40;
    PVar1 = this[100];
  }
  fVar3 = *(float *)(this + 0x5c) + *(float *)(param_1 + 0x20);
  if (PVar1 != (ParticleEmitter)0x0) {
    fVar3 = (float)(DAT_00684028 - (double)fVar3);
  }
  *(float *)(param_1 + 0x20) = fVar3;
  *(float *)(param_1 + 0x2c) = *(float *)(this + 0x60) * *(float *)(param_1 + 0x2c);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


