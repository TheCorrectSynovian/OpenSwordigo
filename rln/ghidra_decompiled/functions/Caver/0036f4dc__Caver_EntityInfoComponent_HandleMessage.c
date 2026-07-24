/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036f4dc
 * Function: Caver::EntityInfoComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(EntityInfoComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityInfoComponent::HandleMessage(int, void*) */

undefined8 __thiscall
Caver::EntityInfoComponent::HandleMessage(EntityInfoComponent *this,int param_1,void *param_2)

{
  long lVar1;
  
  if (((param_1 == 3) && (this[0x70] != (EntityInfoComponent)0x0)) &&
     (lVar1 = SceneObject::ComponentWithInterface(param_2,(long)PTR_Interface_007e4ff0), lVar1 == 0)
     ) {
    ApplyToObject(this,param_2);
  }
  return 0;
}


