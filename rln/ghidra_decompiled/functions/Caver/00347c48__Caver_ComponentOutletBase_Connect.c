/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00347c48
 * Function: Caver::ComponentOutletBase::Connect
 * Signature: undefined __thiscall Connect(ComponentOutletBase * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ComponentOutletBase::Connect(Caver::Component const*) */

void __thiscall Caver::ComponentOutletBase::Connect(ComponentOutletBase *this,Component *param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  SceneObject *this_00;
  
  iVar1 = (**(code **)(*(long *)this + 8))();
  if (iVar1 != 0) {
    this_00 = *(SceneObject **)(param_1 + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)this + 0x20);
    iVar1 = (**(code **)(*(long *)this + 8))(this);
    uVar2 = SceneObject::ComponentWithIdentifier(this_00,iVar1);
                    /* WARNING: Could not recover jumptable at 0x00347cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(this,uVar2);
    return;
  }
  return;
}


