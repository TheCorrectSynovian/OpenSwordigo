/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00336620
 * Function: Caver::ShadowVolumeComponent::SetModel
 * Signature: undefined __thiscall SetModel(ShadowVolumeComponent * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShadowVolumeComponent::SetModel(boost::intrusive_ptr<Caver::ModelComponent> const&) */

void __thiscall
Caver::ShadowVolumeComponent::SetModel(ShadowVolumeComponent *this,intrusive_ptr *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)param_1;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  plVar2 = *(long **)(this + 0x70);
  *(long *)(this + 0x70) = lVar3;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00336660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}


