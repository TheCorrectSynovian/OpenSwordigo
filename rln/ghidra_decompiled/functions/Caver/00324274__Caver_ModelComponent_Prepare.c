/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00324274
 * Function: Caver::ModelComponent::Prepare
 * Signature: undefined __thiscall Prepare(ModelComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelComponent::Prepare() */

void __thiscall Caver::ModelComponent::Prepare(ModelComponent *this)

{
  int iVar1;
  ModelInstance *this_00;
  long lVar2;
  long *plVar3;
  ModelInstance *this_01;
  
  if (((*(long *)(this + 0x78) != 0) || (LoadModel(this), *(long *)(this + 0x78) != 0)) &&
     (*(long *)(this + 0x88) == 0)) {
    this_00 = operator_new(0x88);
    ModelInstance::ModelInstance(this_00);
    this_01 = *(ModelInstance **)(this + 0x88);
    *(ModelInstance **)(this + 0x88) = this_00;
    if (this_01 != (ModelInstance *)0x0) {
      ModelInstance::~ModelInstance(this_01);
      operator_delete(this_01);
      this_00 = *(ModelInstance **)(this + 0x88);
    }
    if (*(long *)(this + 0x78) == 0) {
      LoadModel(this);
    }
    ModelInstance::InitWithModel((shared_ptr *)this_00);
    UpdateBounds(this);
  }
  lVar2 = SceneObject::ComponentWithInterface
                    (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e6220);
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x90);
  *(long *)(this + 0x90) = lVar2;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00324364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))();
    return;
  }
  return;
}


