/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039bf64
 * Function: Caver::ProjectileMonsterControllerComponent::Update
 * Signature: undefined __thiscall Update(ProjectileMonsterControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProjectileMonsterControllerComponent::Update(float) */

void __thiscall
Caver::ProjectileMonsterControllerComponent::Update
          (ProjectileMonsterControllerComponent *this,float param_1)

{
  long *plVar1;
  SceneObject *this_00;
  float fVar2;
  undefined4 in_register_00005004;
  
  plVar1 = *(long **)(this + 0x80);
  if (plVar1 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    plVar1 = *(long **)(this + 0x80);
    if (plVar1 == (long *)0x0) {
      return;
    }
  }
  this_00 = *(SceneObject **)(this + 0x28);
  fVar2 = (float)((double)param_1 * DAT_006892d8 + (double)*(float *)(this_00 + 0x80));
  if ((DAT_00683488 < ABS(fVar2 - *(float *)(this_00 + 0x80))) &&
     (*(float *)(this_00 + 0x80) = fVar2, this_00[0xb4] == (SceneObject)0x0)) {
    SceneObject::RegisterForWorldBoundsUpdate(this_00);
    this_00[0xb4] = (SceneObject)0x1;
    plVar1 = *(long **)(this + 0x80);
    if (plVar1 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      plVar1 = *(long **)(this + 0x80);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0039c020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 200))(CONCAT44(in_register_00005004,param_1));
  return;
}


