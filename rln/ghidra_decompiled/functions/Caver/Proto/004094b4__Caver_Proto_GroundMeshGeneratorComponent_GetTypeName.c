/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004094b4
 * Function: Caver::Proto::GroundMeshGeneratorComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(GroundMeshGeneratorComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundMeshGeneratorComponent::GetTypeName() const */

void __thiscall
Caver::Proto::GroundMeshGeneratorComponent::GetTypeName(GroundMeshGeneratorComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


