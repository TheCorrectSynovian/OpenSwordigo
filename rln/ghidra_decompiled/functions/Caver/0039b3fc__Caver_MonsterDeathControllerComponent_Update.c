/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039b3fc
 * Function: Caver::MonsterDeathControllerComponent::Update
 * Signature: undefined __thiscall Update(MonsterDeathControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterDeathControllerComponent::Update(float) */

void __thiscall
Caver::MonsterDeathControllerComponent::Update(MonsterDeathControllerComponent *this,float param_1)

{
  long lVar1;
  SceneObject *this_00;
  float fVar2;
  
  fVar2 = *(float *)(this + 0xac);
  *(float *)(this + 0xac) = fVar2 + param_1;
  if (*(int *)(this + 0xc0) == 1) {
    if (fVar2 + param_1 <= DAT_00683944) {
      return;
    }
    lVar1 = *(long *)(this + 0x80);
    if (lVar1 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      lVar1 = *(long *)(this + 0x80);
    }
    *(undefined1 *)(lVar1 + 0x169) = 1;
    *(undefined4 *)(this + 0xc0) = 2;
    return;
  }
  if (*(int *)(this + 0xc0) != 0) {
    return;
  }
  lVar1 = *(long *)(this + 0xb8);
  this_00 = *(SceneObject **)(this + 0x28);
  if (ABS(*(float *)(lVar1 + 0x70) - *(float *)(this_00 + 0x70)) <= DAT_00683488) {
    fVar2 = *(float *)(lVar1 + 0x74);
    if (ABS(fVar2 - *(float *)(this_00 + 0x74)) <= DAT_00683488) goto LAB_0039b4e0;
  }
  else {
    fVar2 = *(float *)(lVar1 + 0x74);
  }
  *(float *)(this_00 + 0x70) = *(float *)(lVar1 + 0x70);
  *(float *)(this_00 + 0x74) = fVar2;
  if (this_00[0xb4] == (SceneObject)0x0) {
    SceneObject::RegisterForWorldBoundsUpdate(this_00);
    this_00[0xb4] = (SceneObject)0x1;
    this_00 = *(SceneObject **)(this + 0x28);
    lVar1 = *(long *)(this + 0xb8);
  }
LAB_0039b4e0:
  *(undefined4 *)(this_00 + 0x78) = *(undefined4 *)(lVar1 + 0x78);
  *(undefined4 *)(this + 0xb0) = 0x3f333333;
  Explode(this);
  *(undefined1 *)(*(long *)(this + 0xb8) + 0xe8) = 1;
  *(undefined4 *)(this + 0xc0) = 1;
  return;
}


