/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003be428
 * Function: Caver::GroundMeshGeneratorComponent::PerformBindedAction
 * Signature: undefined __thiscall PerformBindedAction(GroundMeshGeneratorComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshGeneratorComponent::PerformBindedAction(int) */

void __thiscall
Caver::GroundMeshGeneratorComponent::PerformBindedAction
          (GroundMeshGeneratorComponent *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0xc) {
    if (param_1 != 0xb) {
      return;
    }
    uVar1 = fastrandom();
    *(undefined4 *)(this + 0xd8) = uVar1;
  }
  GenerateMesh(this);
  return;
}


