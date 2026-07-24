/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00367610
 * Function: Caver::EntityActionComponent::Update
 * Signature: undefined __thiscall Update(EntityActionComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::EntityActionComponent::Update(float) */

void __thiscall Caver::EntityActionComponent::Update(EntityActionComponent *this,float param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  
  lVar1 = *(long *)(this + 0x80);
  if (lVar1 == 0) {
    *(float *)(this + 0x90) = *(float *)(this + 0x90) + param_1;
  }
  else {
    uVar3 = SceneObject::updateSpeedMultiplier(*(SceneObject **)(this + 0x10));
    *(undefined4 *)(lVar1 + 0x54) = uVar3;
    if (*(char *)(*(long *)(this + 0x80) + 0x53) != '\0') {
      plVar2 = *(long **)(this + 0x88);
      *(undefined8 *)(this + 0x80) = 0;
      *(undefined8 *)(this + 0x88) = 0;
      if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        lVar1 = plVar2[2];
        plVar2[2] = lVar1 + -1;
        if (lVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00367690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x18))(plVar2);
          return;
        }
      }
    }
  }
  return;
}


