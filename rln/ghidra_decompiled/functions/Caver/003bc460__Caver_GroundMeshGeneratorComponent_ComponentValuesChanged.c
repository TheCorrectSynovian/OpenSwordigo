/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003bc460
 * Function: Caver::GroundMeshGeneratorComponent::ComponentValuesChanged
 * Signature: undefined __thiscall ComponentValuesChanged(GroundMeshGeneratorComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshGeneratorComponent::ComponentValuesChanged(Caver::Component*) */

void __thiscall
Caver::GroundMeshGeneratorComponent::ComponentValuesChanged
          (GroundMeshGeneratorComponent *this,Component *param_1)

{
  Component *pCVar1;
  
  pCVar1 = *(Component **)(this + 0xb0);
  if (pCVar1 == (Component *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xa0),(Component *)this);
    pCVar1 = *(Component **)(this + 0xb0);
  }
  if (pCVar1 != param_1) {
    pCVar1 = *(Component **)(this + 200);
    if (pCVar1 == (Component *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xb8),(Component *)this);
      pCVar1 = *(Component **)(this + 200);
    }
    if (pCVar1 != param_1) {
      return;
    }
  }
  GenerateMesh(this);
  return;
}


