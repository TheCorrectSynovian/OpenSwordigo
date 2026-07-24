/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038c260
 * Function: Caver::ObjectModifierComponent::ApplyModifier
 * Signature: undefined __thiscall ApplyModifier(ObjectModifierComponent * this, ObjectModifierType param_1, float param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectModifierComponent::ApplyModifier(Caver::ObjectModifierType, float, float) */

void __thiscall
Caver::ObjectModifierComponent::ApplyModifier
          (float param_1,undefined4 param_2,ObjectModifierComponent *this,int param_4)

{
  EntityInfoComponent *this_00;
  ulong uVar1;
  undefined8 uVar2;
  
  this_00 = (EntityInfoComponent *)
            SceneObject::ComponentWithInterface
                      (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e4ff0);
  if (((param_4 != 1) || (this_00 == (EntityInfoComponent *)0x0)) ||
     (uVar1 = EntityInfoComponent::freezable(this_00), (uVar1 & 1) != 0)) {
    *(int *)(this + 0x70) = param_4;
    *(undefined4 *)(this + 0x74) = 0;
    *(undefined4 *)(this + 0x78) = param_2;
    *(float *)(this + 0x7c) = param_1;
    if (param_4 == 1) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x68);
      *(ulong *)(*(long *)(this + 0x28) + 0x68) =
           CONCAT44((float)((ulong)uVar2 >> 0x20) * param_1,(float)uVar2 * param_1);
    }
  }
  return;
}


