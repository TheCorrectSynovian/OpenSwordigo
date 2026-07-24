/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036753c
 * Function: Caver::EntityActionComponent::Update
 * Signature: undefined __thiscall Update(EntityActionComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityActionComponent::Update(float) */

void __thiscall Caver::EntityActionComponent::Update(EntityActionComponent *this,float param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  
  lVar1 = *(long *)(this + 0x98);
  if (lVar1 == 0) {
    *(float *)(this + 0xa8) = *(float *)(this + 0xa8) + param_1;
  }
  else {
    uVar3 = SceneObject::updateSpeedMultiplier(*(SceneObject **)(this + 0x28));
    *(undefined4 *)(lVar1 + 0x54) = uVar3;
    if (*(char *)(*(long *)(this + 0x98) + 0x53) != '\0') {
      plVar2 = *(long **)(this + 0xa0);
      *(undefined8 *)(this + 0x98) = 0;
      *(undefined8 *)(this + 0xa0) = 0;
      if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        lVar1 = plVar2[2];
        plVar2[2] = lVar1 + -1;
        if (lVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003675bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x18))(plVar2);
          return;
        }
      }
    }
  }
  return;
}


