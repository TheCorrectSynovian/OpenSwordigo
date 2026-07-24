/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003709f0
 * Function: Caver::HealthComponent::ApplyFireArmorDamageToObject
 * Signature: undefined __thiscall ApplyFireArmorDamageToObject(HealthComponent * this, SceneObject * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject*) */

void __thiscall
Caver::HealthComponent::ApplyFireArmorDamageToObject(HealthComponent *this,SceneObject *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  DamageComponent *this_00;
  float fVar4;
  undefined8 uVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  SceneObject *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar3 = SceneObject::ComponentWithInterface(param_1,(long)PTR_Interface_007e6e68), lVar3 == 0)
     ) {
    param_1 = *(SceneObject **)(param_1 + 0x30);
  }
  lVar3 = SceneObject::ComponentWithInterface(param_1,(long)PTR_Interface_007e4ff0);
  if (lVar3 != 0) {
    this_00 = (DamageComponent *)
              SceneObject::ComponentWithInterface
                        (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e6cd0);
    if (this_00 == (DamageComponent *)0x0) {
      this_00 = operator_new(0xd8);
      DamageComponent::DamageComponent(this_00);
      *(undefined2 *)(this_00 + 0xd0) = 1;
      *(undefined4 *)(this_00 + 0xb4) = *(undefined4 *)(this + 0x88);
      SceneObject::AddComponent(*(SceneObject **)(this + 0x28),(Component *)this_00);
    }
    *(undefined8 *)(this_00 + 200) = DAT_006840e0;
    fVar4 = (float)GameData::EntityHealthMultiplierAtLevel
                             ((GameData *)
                              **(undefined8 **)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0x10),
                              *(int *)(lVar3 + 0x90));
    uVar5 = NEON_scvtf(CONCAT44((int)fVar4,(int)fVar4),4);
    *(ulong *)(this_00 + 0xa4) =
         CONCAT44((int)(float)(int)((float)((ulong)uVar5 >> 0x20) *
                                   (float)((ulong)DAT_00688278 >> 0x20)),
                  (int)(float)(int)((float)uVar5 * (float)DAT_00688278));
    if (param_1 != (SceneObject *)0x0) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    lVar3 = *(long *)(this + 0x28);
    uVar5 = *(undefined8 *)(lVar3 + 0x70);
    local_58 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20) -
                        (float)((ulong)uVar5 >> 0x20),
                        (float)*(undefined8 *)(param_1 + 0x70) - (float)uVar5);
    local_50 = param_1;
    Vector2::Normalize((Vector2 *)&local_58);
    local_68 = 0;
    uStack_60 = 0;
    DamageComponent::AddPotentialImpact
              (this_00,(intrusive_ptr *)&local_50,(Vector2 *)(lVar3 + 0x70),(Vector2 *)&local_58,
               false,(Vector4 *)&local_68);
    if ((local_50 != (SceneObject *)0x0) &&
       (iVar1 = *(int *)(local_50 + 8), *(int *)(local_50 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*(long *)local_50 + 8))();
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


