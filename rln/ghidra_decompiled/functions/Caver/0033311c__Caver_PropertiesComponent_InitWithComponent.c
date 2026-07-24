/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033311c
 * Function: Caver::PropertiesComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(PropertiesComponent * this, PropertiesComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PropertiesComponent::InitWithComponent(Caver::PropertiesComponent const*) */

void __thiscall
Caver::PropertiesComponent::InitWithComponent
          (PropertiesComponent *this,PropertiesComponent *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  FUN_0066a6a8(this + 0x78,param_1 + 0x78);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  lVar2 = *(long *)(param_1 + 0x88);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x88);
  *(undefined8 *)(this + 0x80) = uVar1;
  *(long *)(this + 0x88) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
      uVar1 = *(undefined8 *)(param_1 + 0x90);
      lVar2 = *(long *)(param_1 + 0x98);
      goto joined_r0x003331a8;
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  lVar2 = *(long *)(param_1 + 0x98);
joined_r0x003331a8:
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x98);
  *(undefined8 *)(this + 0x90) = uVar1;
  *(long *)(this + 0x98) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00333238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3);
      return;
    }
  }
  return;
}


