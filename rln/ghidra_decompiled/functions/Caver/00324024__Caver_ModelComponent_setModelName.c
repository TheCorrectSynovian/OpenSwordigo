/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00324024
 * Function: Caver::ModelComponent::setModelName
 * Signature: undefined __cdecl setModelName(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelComponent::setModelName(std::string const&) */

void Caver::ModelComponent::setModelName(string *param_1)

{
  long lVar1;
  long *plVar2;
  ModelInstance *this;
  
  FUN_0066a6a8(param_1 + 0x70);
  plVar2 = *(long **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
      this = *(ModelInstance **)(param_1 + 0x88);
      goto joined_r0x003240c0;
    }
  }
  this = *(ModelInstance **)(param_1 + 0x88);
joined_r0x003240c0:
  if (this != (ModelInstance *)0x0) {
    *(undefined8 *)(param_1 + 0x88) = 0;
    ModelInstance::~ModelInstance(this);
    operator_delete(this);
                    /* WARNING: Could not recover jumptable at 0x003240a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x40))(param_1);
    return;
  }
  return;
}


