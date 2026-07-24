/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003aab74
 * Function: Caver::ParticleEmitterComponent::Update
 * Signature: undefined __thiscall Update(ParticleEmitterComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ParticleEmitterComponent::Update(float) */

void __thiscall
Caver::ParticleEmitterComponent::Update(ParticleEmitterComponent *this,float param_1)

{
  ComponentOutletBase *this_00;
  float *pfVar1;
  ulong uVar2;
  float *pfVar3;
  ParticleSystem *this_01;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ParticleEmitterComponent *pPVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  float fVar18;
  undefined4 in_register_00005004;
  undefined8 uVar19;
  float __x;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 local_f0;
  undefined8 uStack_e8;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float afStack_c8 [16];
  float local_88 [2];
  undefined8 auStack_80 [7];
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  plVar17 = *(long **)(this + 0x158);
  if (((plVar17 == (long *)0x0) || (this[0x168] == (ParticleEmitterComponent)0x0)) ||
     ((char)plVar17[3] != '\0')) {
    lVar8 = *(long *)(this + 0x118);
  }
  else {
    if (this[0x140] == (ParticleEmitterComponent)0x0) {
      if (*(long *)(this + 0x138) == 0) {
        lVar8 = *(long *)(this + 0x28);
        uVar5 = *(undefined4 *)(lVar8 + 0x78);
        *(undefined8 *)((long)plVar17 + 0x44) = *(undefined8 *)(lVar8 + 0x70);
        *(undefined4 *)((long)plVar17 + 0x4c) = uVar5;
        fVar18 = *(float *)(lVar8 + 0x80);
        if (DAT_00683488 < ABS(fVar18 - *(float *)((long)plVar17 + 0x5c))) {
          *(float *)((long)plVar17 + 0x5c) = fVar18;
          fVar18 = sinf(fVar18);
          *(float *)(plVar17 + 0x1a) = fVar18;
          fVar18 = cosf(*(float *)((long)plVar17 + 0x5c));
          *(float *)((long)plVar17 + 0xd4) = fVar18;
          plVar17 = *(long **)(this + 0x158);
          lVar8 = *(long *)(this + 0x28);
        }
        *(undefined4 *)(plVar17 + 0xc) = *(undefined4 *)(lVar8 + 0x8c);
        *(undefined1 *)((long)plVar17 + 100) = *(undefined1 *)(lVar8 + 0x90);
      }
      else {
        TransformComponent::WorldMatrix();
        if (this[0x1d4] != (ParticleEmitterComponent)0x0) {
          C_Matrix4Mul(local_88,(float *)(this + 0x194),local_88);
        }
        lVar8 = *(long *)(this + 0x158);
        pfVar1 = (float *)(lVar8 + 0xa8);
        pfVar12 = (float *)(lVar8 + 0x6c);
        pfVar11 = pfVar1;
        if (pfVar1 <= pfVar12) {
          pfVar11 = pfVar12;
        }
        uVar2 = ((ulong)((long)pfVar11 + (-0x69 - lVar8)) >> 2) + 1;
        pfVar11 = (float *)(lVar8 + 0x68);
        pfVar10 = local_88;
        if (uVar2 < 8) {
LAB_003aace0:
          do {
            pfVar12 = pfVar11 + 1;
            *pfVar11 = *pfVar10;
            pfVar10 = pfVar10 + 1;
            pfVar11 = pfVar12;
          } while (pfVar12 < pfVar1);
        }
        else {
          pfVar3 = pfVar1;
          if (pfVar1 <= pfVar12) {
            pfVar3 = pfVar12;
          }
          uVar16 = (long)pfVar3 + (-0x69 - lVar8);
          if ((pfVar11 < (float *)((long)auStack_80 + ((uVar16 & 0xfffffffffffffffc) - 4))) &&
             (local_88 < (float *)(lVar8 + (uVar16 + 0x6c & 0xfffffffffffffffc))))
          goto LAB_003aace0;
          uVar13 = uVar2 & 0x7ffffffffffffff8;
          puVar14 = (undefined8 *)(lVar8 + 0x78);
          puVar15 = auStack_80 + 1;
          uVar16 = uVar13;
          do {
            puVar7 = puVar15 + -1;
            uVar19 = puVar15[-2];
            uVar21 = puVar15[1];
            uVar20 = *puVar15;
            uVar16 = uVar16 - 8;
            puVar15 = puVar15 + 4;
            puVar14[-1] = *puVar7;
            puVar14[-2] = uVar19;
            puVar14[1] = uVar21;
            *puVar14 = uVar20;
            puVar14 = puVar14 + 4;
          } while (uVar16 != 0);
          pfVar10 = local_88 + uVar13;
          pfVar11 = (float *)(lVar8 + uVar13 * 4 + 0x68);
          if (uVar2 != uVar13) goto LAB_003aace0;
        }
        *(undefined1 *)(lVar8 + 0x65) = 1;
        TransformComponent::WorldMatrix();
        uStack_e8 = _UNK_00683498;
        local_f0 = _DAT_00683490;
        C_Matrix4Vector4Mul(afStack_c8,(float *)&local_f0,&local_d8);
        __x = local_d8 * local_d8 + fStack_d4 * fStack_d4 + local_d0 * local_d0 +
              fStack_cc * fStack_cc;
        fVar18 = SQRT(__x);
        if (NAN(fVar18)) {
          fVar18 = sqrtf(__x);
        }
        *(float *)(lVar8 + 0x60) = fVar18;
        plVar17 = *(long **)(this + 0x158);
        lVar8 = *(long *)(this + 0x28);
      }
      lVar8 = *(long *)(lVar8 + 0x68);
      *(undefined4 *)(plVar17 + 0xb) = 0;
      plVar17[10] = lVar8;
    }
    (**(code **)(*plVar17 + 0x30))(CONCAT44(in_register_00005004,param_1),plVar17);
    lVar8 = *(long *)(this + 0x118);
  }
  if (lVar8 != 0) goto LAB_003aaf18;
  this_00 = (ComponentOutletBase *)(this + 0x108);
  ComponentOutletBase::Connect(this_00,(Component *)this);
  if (*(long *)(this + 0x118) != 0) goto LAB_003aaf18;
  ComponentOutletBase::Connect(this_00,(Component *)this);
  pPVar9 = *(ParticleEmitterComponent **)(this + 0x118);
  if ((pPVar9 == (ParticleEmitterComponent *)0x0) || (pPVar9 == this)) {
    this_01 = *(ParticleSystem **)(this + 0x148);
    plVar17 = *(long **)(this + 0x150);
  }
  else {
    this_01 = *(ParticleSystem **)(pPVar9 + 0x148);
    plVar17 = *(long **)(pPVar9 + 0x150);
  }
  if (plVar17 != (long *)0x0) {
    plVar17[1] = plVar17[1] + 1;
  }
  ParticleSystem::Update(this_01,param_1);
  if ((plVar17 != (long *)0x0) && (lVar8 = plVar17[1], plVar17[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    lVar8 = plVar17[2];
    plVar17[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar17 + 0x18))(plVar17);
    }
  }
  if (((param_1 <= DAT_00683734) || (this[0x169] == (ParticleEmitterComponent)0x0)) ||
     ((*(long *)(this + 0x158) != 0 &&
      ((this[0x168] != (ParticleEmitterComponent)0x0 &&
       (*(char *)(*(long *)(this + 0x158) + 0x18) == '\0')))))) goto LAB_003aaf18;
  pPVar9 = *(ParticleEmitterComponent **)(this + 0x118);
  if (pPVar9 == (ParticleEmitterComponent *)0x0) {
    ComponentOutletBase::Connect(this_00,(Component *)this);
    pPVar9 = *(ParticleEmitterComponent **)(this + 0x118);
  }
  if ((pPVar9 == (ParticleEmitterComponent *)0x0) || (pPVar9 == this)) {
    lVar8 = *(long *)(this + 0x148);
    plVar17 = *(long **)(this + 0x150);
    if (plVar17 == (long *)0x0) goto LAB_003aae24;
LAB_003aae38:
    iVar4 = *(int *)(lVar8 + 0x24);
    if (plVar17[1] == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      lVar8 = plVar17[2];
      plVar17[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar17 + 0x18))(plVar17);
      }
    }
  }
  else {
    lVar8 = *(long *)(pPVar9 + 0x148);
    plVar17 = *(long **)(pPVar9 + 0x150);
    if (plVar17 != (long *)0x0) goto LAB_003aae38;
LAB_003aae24:
    iVar4 = *(int *)(lVar8 + 0x24);
  }
  if (iVar4 == 0) {
    *(undefined1 *)(*(long *)(this + 0x28) + 0xe8) = 1;
  }
LAB_003aaf18:
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


