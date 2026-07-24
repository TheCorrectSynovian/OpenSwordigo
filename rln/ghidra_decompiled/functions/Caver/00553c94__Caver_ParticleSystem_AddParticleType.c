/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00553c94
 * Function: Caver::ParticleSystem::AddParticleType
 * Signature: undefined __thiscall AddParticleType(ParticleSystem * this, intrusive_ptr * param_1, Rectangle * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleSystem::AddParticleType(boost::intrusive_ptr<Caver::Texture> const&,
   Caver::Rectangle const&) */

int __thiscall
Caver::ParticleSystem::AddParticleType
          (ParticleSystem *this,intrusive_ptr *param_1,Rectangle *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *local_98;
  long *local_90;
  long local_88;
  long lStack_80;
  float local_78;
  float fStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float local_44;
  float fStack_40;
  float local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00553cb8 to 00653f47 has its CatchHandler @ 0055303c */
                    /* catch() { ... } // from try @ 005533a0 with catch @ 00553cbc */
  plVar3 = *(long **)param_1;
  if (plVar3[0xe] == 0) {
    if (plVar3 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00553398 with catch @ 00553cf4 */
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    }
                    /* catch() { ... } // from try @ 005532fc with catch @ 00553cf8 */
    lVar4 = *(long *)this;
    local_98 = plVar3;
  }
  else {
    Texture::SharedPtr();
    lVar4 = *(long *)this;
  }
  if (lVar4 == 0) {
                    /* catch() { ... } // from try @ 005532b4 with catch @ 00553d04 */
    if (local_98 != (long *)0x0) {
      *(int *)(local_98 + 1) = (int)local_98[1] + 1;
    }
    *(long **)this = local_98;
  }
  local_90 = *(long **)param_1;
  if (local_90 != (long *)0x0) {
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
  }
  lStack_80 = *(long *)(param_2 + 8);
  local_88 = *(long *)param_2;
  local_58 = *(float *)((long)local_90 + 0x5c);
  local_54 = *(float *)(local_90 + 0xc);
  local_78 = *(float *)param_2;
  fStack_74 = *(float *)(param_2 + 4);
  local_50 = *(float *)((long)local_90 + 100) + local_58;
                    /* catch() { ... } // from try @ 005532ac with catch @ 00553d64 */
                    /* catch() { ... } // from try @ 005531b4 with catch @ 00553d68 */
  local_70 = *(float *)(param_2 + 8) + local_78;
                    /* catch() { ... } // from try @ 0055316c with catch @ 00553d80 */
  local_64 = *(float *)(param_2 + 0xc) + fStack_74;
  local_44 = *(float *)(local_90 + 0xd) + local_54;
  lVar4 = *(long *)(this + 8);
  plVar3 = *(long **)(this + 0x10);
  local_6c = fStack_74;
  local_68 = local_78;
  local_60 = local_70;
  local_5c = local_64;
  local_4c = local_54;
  fStack_48 = local_58;
  fStack_40 = local_50;
  local_3c = local_44;
  if (*(long **)(this + 0x18) == plVar3) {
    std::vector<Caver::ParticleType,std::allocator<Caver::ParticleType>>::_M_insert_aux
              ((vector<Caver::ParticleType,std::allocator<Caver::ParticleType>> *)(this + 8),plVar3,
               &local_90);
  }
  else {
    *plVar3 = (long)local_90;
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
    *(float *)(plVar3 + 3) = local_78;
    *(float *)((long)plVar3 + 0x1c) = fStack_74;
    plVar3[2] = lStack_80;
    plVar3[1] = local_88;
    *(float *)(plVar3 + 4) = local_70;
                    /* catch() { ... } // from try @ 0055315c with catch @ 00553ddc */
    *(float *)((long)plVar3 + 0x24) = fStack_74;
    *(float *)(plVar3 + 5) = local_78;
    *(float *)((long)plVar3 + 0x2c) = local_64;
    *(float *)(plVar3 + 6) = local_70;
    *(float *)((long)plVar3 + 0x34) = local_64;
    *(float *)(plVar3 + 7) = local_58;
    *(float *)((long)plVar3 + 0x3c) = local_54;
    *(float *)(plVar3 + 8) = local_50;
    *(ulong *)((long)plVar3 + 0x44) = CONCAT44(local_58,local_54);
    *(ulong *)((long)plVar3 + 0x4c) = CONCAT44(local_50,local_44);
    *(float *)((long)plVar3 + 0x54) = local_44;
    *(long **)(this + 0x10) = plVar3 + 0xb;
                    /* catch() { ... } // from try @ 00553148 with catch @ 00553e34 */
  }
  if ((local_90 != (long *)0x0) &&
     (iVar1 = (int)local_90[1] + -1, *(int *)(local_90 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*local_90 + 8))();
  }
  if ((local_98 != (long *)0x0) &&
     (iVar1 = (int)local_98[1] + -1, *(int *)(local_98 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*local_98 + 8))();
  }
                    /* catch() { ... } // from try @ 00553140 with catch @ 00553e9c */
                    /* catch() { ... } // from try @ 005530b4 with catch @ 00553ea0 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00553084 with catch @ 00553eb4 */
    return (int)((ulong)((long)plVar3 - lVar4) >> 3) * -0x45d1745d;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


