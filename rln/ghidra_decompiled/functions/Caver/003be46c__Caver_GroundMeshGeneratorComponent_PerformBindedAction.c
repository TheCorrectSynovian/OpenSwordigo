/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003be46c
 * Function: Caver::GroundMeshGeneratorComponent::PerformBindedAction
 * Signature: undefined __thiscall PerformBindedAction(GroundMeshGeneratorComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::GroundMeshGeneratorComponent::PerformBindedAction(int) */

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
    *(undefined4 *)(this + 200) = uVar1;
  }
  GenerateMesh(this + -0x10);
  return;
}


