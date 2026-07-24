/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036f324
 * Function: Caver::EntityInfoComponent::ApplyToObject
 * Signature: undefined __thiscall ApplyToObject(EntityInfoComponent * this, SceneObject * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityInfoComponent::ApplyToObject(Caver::SceneObject*) */

void __thiscall
Caver::EntityInfoComponent::ApplyToObject(EntityInfoComponent *this,SceneObject *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  float fVar5;
  undefined8 uVar6;
  
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    lVar1 = SceneObject::ComponentWithInterface(param_1,(long)PTR_Interface_007e7450);
    if (lVar1 != 0) {
      iVar4 = *(int *)(lVar1 + 0x84);
      fVar5 = (float)GameData::EntityHealthMultiplierAtLevel
                               ((GameData *)*puVar3,*(int *)(this + 0x90));
      uVar2 = (uint)(fVar5 * (float)iVar4);
      *(uint *)(lVar1 + 0x7c) = uVar2;
      if (*(char *)(lVar1 + 0x78) == '\0') {
        *(uint *)(lVar1 + 0x80) = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
      }
    }
    lVar1 = SceneObject::ComponentWithInterface(param_1,(long)PTR_Interface_007e6cd0);
    if (lVar1 != 0) {
      fVar5 = (float)GameData::EntityDamageMultiplierAtLevel
                               ((GameData *)*puVar3,*(int *)(this + 0x90));
      uVar6 = NEON_scvtf(*(undefined8 *)(lVar1 + 0xac),4);
      *(ulong *)(lVar1 + 0xa4) =
           CONCAT44((int)(float)(int)((float)((ulong)uVar6 >> 0x20) * fVar5),
                    (int)(float)(int)((float)uVar6 * fVar5));
    }
  }
  return;
}


