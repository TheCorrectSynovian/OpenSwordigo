/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00387b34
 * Function: Caver::MagicExplosionComponent::SetDamage
 * Signature: undefined __thiscall SetDamage(MagicExplosionComponent * this, DamageType param_1, SpecialDamageType param_2, int param_3, float param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicExplosionComponent::SetDamage(Caver::DamageType, Caver::SpecialDamageType, int,
   float) */

void __thiscall
Caver::MagicExplosionComponent::SetDamage
          (undefined4 param_1,MagicExplosionComponent *this,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  int iVar1;
  long lVar2;
  DamageComponent *this_00;
  long *plVar3;
  CollisionShapeComponent *this_01;
  Circle *extraout_x1;
  Circle *extraout_x1_00;
  Circle *pCVar4;
  code *pcVar5;
  long lVar6;
  undefined8 local_80;
  undefined4 local_78;
  DamageComponent *local_70 [2];
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  this_00 = operator_new(0xd8);
  DamageComponent::DamageComponent(this_00);
  *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
  plVar3 = *(long **)(this + 0xa0);
  *(DamageComponent **)(this + 0xa0) = this_00;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))();
    this_00 = *(DamageComponent **)(this + 0xa0);
  }
  *(undefined4 *)(this_00 + 0xb4) = param_3;
  *(undefined4 *)(this_00 + 0xb8) = param_4;
  *(undefined4 *)(this_00 + 0xa4) = param_5;
  plVar3 = *(long **)(this + 0x28);
  pcVar5 = *(code **)(*plVar3 + 0x48);
  if (this_00 != (DamageComponent *)0x0) {
    *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
  }
  local_70[0] = this_00;
  (*pcVar5)(plVar3,local_70);
  if ((local_70[0] != (DamageComponent *)0x0) &&
     (iVar1 = *(int *)(local_70[0] + 8), *(int *)(local_70[0] + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*(long *)local_70[0] + 8))();
  }
  this_01 = operator_new(0x1d0);
  CollisionShapeComponent::CollisionShapeComponent(this_01);
  *(int *)(this_01 + 8) = *(int *)(this_01 + 8) + 1;
  plVar3 = *(long **)(this + 0xa8);
  *(CollisionShapeComponent **)(this + 0xa8) = this_01;
  pCVar4 = extraout_x1;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))();
    this_01 = *(CollisionShapeComponent **)(this + 0xa8);
    pCVar4 = extraout_x1_00;
  }
  this_01[0x17d] = (CollisionShapeComponent)0x1;
  pcVar5 = *(code **)(*(long *)this_01 + 0x118);
  local_78 = 0x43160000;
  local_80 = 0;
  Shape::ShapeWithCircle((Shape *)&local_80,pCVar4);
  (*pcVar5)(this_01,local_70);
  if ((local_60 != (long *)0x0) && (lVar6 = local_60[1], local_60[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar6 = local_60[2];
    local_60[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*local_60 + 0x18))(local_60);
    }
  }
  CollisionShapeComponent::SetEnabled(*(CollisionShapeComponent **)(this + 0xa8),false);
  plVar3 = *(long **)(this + 0x28);
  local_70[0] = *(DamageComponent **)(this + 0xa8);
  pcVar5 = *(code **)(*plVar3 + 0x48);
  if (local_70[0] != (DamageComponent *)0x0) {
    *(int *)(local_70[0] + 8) = *(int *)(local_70[0] + 8) + 1;
  }
  (*pcVar5)(plVar3,local_70);
  if ((local_70[0] != (DamageComponent *)0x0) &&
     (iVar1 = *(int *)(local_70[0] + 8), *(int *)(local_70[0] + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*(long *)local_70[0] + 8))();
  }
  *(undefined4 *)(this + 0xe0) = param_1;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


