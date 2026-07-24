/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003240e4
 * Function: Caver::ModelComponent::LoadModel
 * Signature: undefined __thiscall LoadModel(ModelComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelComponent::LoadModel() */

void __thiscall Caver::ModelComponent::LoadModel(ModelComponent *this)

{
  long lVar1;
  string *psVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ModelInstance *this_00;
  undefined8 local_48;
  long *local_40;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x78) == 0) {
    psVar2 = (string *)ModelLibrary::sharedLibrary();
    ModelLibrary::ModelForName(psVar2);
    if (local_40 != (long *)0x0) {
      local_40[1] = local_40[1] + 1;
    }
    plVar5 = *(long **)(this + 0x80);
    *(undefined8 *)(this + 0x78) = local_48;
    *(long **)(this + 0x80) = local_40;
    if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar4 = plVar5[2];
      plVar5[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    if ((local_40 != (long *)0x0) &&
       (lVar4 = local_40[1], local_40[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar4 = local_40[2];
      local_40[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*local_40 + 0x18))(local_40);
      }
    }
    this_00 = *(ModelInstance **)(this + 0x88);
    *(undefined8 *)(this + 0x88) = 0;
    if (this_00 != (ModelInstance *)0x0) {
      ModelInstance::~ModelInstance(this_00);
      operator_delete(this_00);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


