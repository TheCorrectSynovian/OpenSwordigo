/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00323f44
 * Function: Caver::ModelComponent::InitWithModel
 * Signature: undefined __thiscall InitWithModel(ModelComponent * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelComponent::InitWithModel(boost::shared_ptr<Caver::Model const> const&) */

void __thiscall Caver::ModelComponent::InitWithModel(ModelComponent *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ModelInstance *this_00;
  
  FUN_0066a6a8(this + 0x70,*(undefined8 *)param_1);
  uVar1 = *(undefined8 *)param_1;
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
  }
  plVar4 = *(long **)(this + 0x80);
  *(undefined8 *)(this + 0x78) = uVar1;
  *(long *)(this + 0x80) = lVar3;
  if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = plVar4[2];
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  this_00 = *(ModelInstance **)(this + 0x88);
  *(undefined8 *)(this + 0x88) = 0;
  if (this_00 != (ModelInstance *)0x0) {
    ModelInstance::~ModelInstance(this_00);
    operator_delete(this_00);
  }
  uVar2 = Component::ShouldPrepare((Component *)this);
  if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00324000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x40))(this);
    return;
  }
  return;
}


