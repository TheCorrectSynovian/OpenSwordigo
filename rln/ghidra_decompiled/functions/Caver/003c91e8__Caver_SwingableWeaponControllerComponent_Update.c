/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c91e8
 * Function: Caver::SwingableWeaponControllerComponent::Update
 * Signature: undefined __thiscall Update(SwingableWeaponControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponControllerComponent::Update(float) */

void __thiscall
Caver::SwingableWeaponControllerComponent::Update
          (SwingableWeaponControllerComponent *this,float param_1)

{
  int iVar1;
  long *plVar2;
  undefined4 in_register_00005004;
  
  plVar2 = *(long **)(this + 0x98);
  if (plVar2 != (long *)0x0) {
    if (plVar2[5] == 0) {
      *(undefined8 *)(this + 0x98) = 0;
      iVar1 = (int)plVar2[1] + -1;
      *(int *)(plVar2 + 1) = iVar1;
      if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003c9278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))();
        return;
      }
    }
    else {
      UpdateWeaponTransform(this);
      if (*(long *)(this + 0xa0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x003c923c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(this + 0x98) + 200))(CONCAT44(in_register_00005004,param_1));
        return;
      }
    }
  }
  return;
}


