/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003863dc
 * Function: Caver::MagicBombComponent::Update
 * Signature: undefined __thiscall Update(MagicBombComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::MagicBombComponent::Update(float) */

void __thiscall Caver::MagicBombComponent::Update(MagicBombComponent *this,float param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  SceneObject *this_00;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar2 = *(long *)(this + 200);
  fVar5 = *(float *)(this + 0xbc) + param_1;
  *(float *)(this + 0xbc) = fVar5;
  fVar7 = _DAT_00684434;
  if (lVar2 == 0) {
    fVar6 = *(float *)(this + 0xc0);
  }
  else {
    fVar6 = *(float *)(this + 0xc0);
    fVar4 = *(float *)(this + 0xe0) + param_1;
    *(float *)(this + 0xe0) = fVar4;
    fVar8 = (fVar6 - fVar5) / fVar6;
    if (0.0 <= fVar8) {
      fVar7 = fVar8 * 0.5 + fVar7;
    }
    if (*(char *)(lVar2 + 0x135) == '\0') {
      if (fVar7 < fVar4) {
        *(undefined1 *)(lVar2 + 0x135) = 1;
        goto LAB_00386468;
      }
    }
    else if (fVar7 < fVar4) {
      *(undefined1 *)(lVar2 + 0x135) = 0;
LAB_00386468:
      *(undefined4 *)(this + 0xe0) = 0;
    }
  }
  if (fVar5 < fVar6) {
    return;
  }
  lVar2 = *(long *)(this + 0xe8);
  if (lVar2 == 0) {
    Explode(this);
    return;
  }
  lVar3 = *(long *)(this + 0x28);
  this_00 = *(SceneObject **)(lVar2 + 0x28);
  if (ABS(*(float *)(lVar3 + 0x70) - *(float *)(this_00 + 0x70)) <= DAT_00683488) {
    fVar7 = *(float *)(lVar3 + 0x74);
    if (DAT_00683488 < ABS(fVar7 - *(float *)(this_00 + 0x74))) goto LAB_003864e0;
  }
  else {
    fVar7 = *(float *)(lVar3 + 0x74);
LAB_003864e0:
    *(float *)(this_00 + 0x70) = *(float *)(lVar3 + 0x70);
    *(float *)(this_00 + 0x74) = fVar7;
    if (this_00[0xb4] == (SceneObject)0x0) {
      SceneObject::RegisterForWorldBoundsUpdate(this_00);
      this_00[0xb4] = (SceneObject)0x1;
      cVar1 = *(char *)(*(long *)(this + 0xe8) + 0xf0);
      goto joined_r0x003864f4;
    }
  }
  cVar1 = *(char *)(lVar2 + 0xf0);
joined_r0x003864f4:
  if (cVar1 == '\0') {
    *(undefined1 *)(*(long *)(this + 0x28) + 0xe8) = 1;
  }
  return;
}


