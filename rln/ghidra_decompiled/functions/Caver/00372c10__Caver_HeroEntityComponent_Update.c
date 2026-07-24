/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00372c10
 * Function: Caver::HeroEntityComponent::Update
 * Signature: undefined __thiscall Update(HeroEntityComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEntityComponent::Update(float) */

void __thiscall Caver::HeroEntityComponent::Update(HeroEntityComponent *this,float param_1)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  undefined4 in_register_00005004;
  
  EntityComponent::Update((EntityComponent *)this,param_1);
  *(float *)(this + 0x178) = *(float *)(this + 0x178) + param_1;
  if (*(long **)(this + 0x130) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x130) + 200))(CONCAT44(in_register_00005004,param_1));
  }
  if (*(long **)(this + 0x138) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x138) + 200))(CONCAT44(in_register_00005004,param_1));
  }
  if ((*(long *)(this + 0x140) != 0) &&
     (fVar3 = (float)Rectangle::DistanceFromPointSquared
                               ((Rectangle *)(*(long *)(this + 0x148) + 0x168),
                                (Vector2 *)(*(long *)(this + 0x28) + 0x70)), DAT_006883b8 < fVar3))
  {
    PortalComponent::Deactivate(*(PortalComponent **)(this + 0x140));
    plVar2 = *(long **)(this + 0x148);
    *(undefined8 *)(this + 0x148) = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = *(long **)(this + 0x140);
    *(undefined8 *)(this + 0x140) = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00372d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
}


