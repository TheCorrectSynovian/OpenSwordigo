/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003be350
 * Function: Caver::GroundMeshGeneratorComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(GroundMeshGeneratorComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshGeneratorComponent::SetValueForBindedProperty(int, Caver::BindingValue const&)
    */

void __thiscall
Caver::GroundMeshGeneratorComponent::SetValueForBindedProperty
          (GroundMeshGeneratorComponent *this,int param_1,BindingValue *param_2)

{
  switch(param_1) {
  case 4:
    *(undefined4 *)(this + 0xd0) = **(undefined4 **)(param_2 + 8);
    break;
  case 5:
    *(undefined4 *)(this + 0xd4) = **(undefined4 **)(param_2 + 8);
    break;
  case 6:
    *(undefined4 *)(this + 0xd8) = **(undefined4 **)(param_2 + 8);
    break;
  case 7:
    *(undefined4 *)(this + 0xdc) = **(undefined4 **)(param_2 + 8);
    break;
  case 8:
    *(undefined4 *)(this + 0xe0) = **(undefined4 **)(param_2 + 8);
    break;
  case 9:
    *(undefined4 *)(this + 0xe4) = **(undefined4 **)(param_2 + 8);
    break;
  case 10:
    *(undefined4 *)(this + 0xe8) = **(undefined4 **)(param_2 + 8);
    break;
  default:
    Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
    if (3 < (uint)param_1) {
      return;
    }
  }
  GenerateMesh(this);
  return;
}


