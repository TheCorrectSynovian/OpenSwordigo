/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c927c
 * Function: Caver::SwingableWeaponControllerComponent::Update
 * Signature: undefined __thiscall Update(SwingableWeaponControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::SwingableWeaponControllerComponent::Update(float) */

void __thiscall
Caver::SwingableWeaponControllerComponent::Update
          (SwingableWeaponControllerComponent *this,float param_1)

{
  int iVar1;
  long *plVar2;
  undefined4 in_register_00005004;
  
  plVar2 = *(long **)(this + 0x80);
  if (plVar2 != (long *)0x0) {
    if (plVar2[5] == 0) {
      *(undefined8 *)(this + 0x80) = 0;
      iVar1 = (int)plVar2[1] + -1;
      *(int *)(plVar2 + 1) = iVar1;
      if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003c9310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))();
        return;
      }
    }
    else {
      UpdateWeaponTransform(this + -0x18);
      if (*(long *)(this + 0x88) != 0) {
                    /* WARNING: Could not recover jumptable at 0x003c92d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(this + 0x80) + 200))(CONCAT44(in_register_00005004,param_1));
        return;
      }
    }
  }
  return;
}


