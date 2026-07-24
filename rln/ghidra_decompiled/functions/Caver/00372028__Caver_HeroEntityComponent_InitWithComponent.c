/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00372028
 * Function: Caver::HeroEntityComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(HeroEntityComponent * this, HeroEntityComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEntityComponent::InitWithComponent(Caver::HeroEntityComponent const*) */

void __thiscall
Caver::HeroEntityComponent::InitWithComponent
          (HeroEntityComponent *this,HeroEntityComponent *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  EntityComponent::InitWithComponent((EntityComponent *)this,(EntityComponent *)param_1);
  FUN_0066a6a8(this + 0x150,param_1 + 0x150);
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  lVar2 = *(long *)(param_1 + 0x160);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x160);
  *(undefined8 *)(this + 0x158) = uVar1;
  *(long *)(this + 0x160) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
      uVar1 = *(undefined8 *)(param_1 + 0x168);
      lVar2 = *(long *)(param_1 + 0x170);
      goto joined_r0x003720a4;
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  lVar2 = *(long *)(param_1 + 0x170);
joined_r0x003720a4:
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x170);
  *(undefined8 *)(this + 0x168) = uVar1;
  *(long *)(this + 0x170) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00372134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3);
      return;
    }
  }
  return;
}


