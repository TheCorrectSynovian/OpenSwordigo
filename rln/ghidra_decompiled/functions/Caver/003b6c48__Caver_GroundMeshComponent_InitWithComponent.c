/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b6c48
 * Function: Caver::GroundMeshComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(GroundMeshComponent * this, GroundMeshComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshComponent::InitWithComponent(Caver::GroundMeshComponent const*) */

void __thiscall
Caver::GroundMeshComponent::InitWithComponent
          (GroundMeshComponent *this,GroundMeshComponent *param_1)

{
  long lVar1;
  Component aCStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Proto::Component::Component(aCStack_98);
  (**(code **)(*(long *)param_1 + 0x28))(param_1,aCStack_98);
  (**(code **)(*(long *)this + 0x20))(this,aCStack_98);
  Proto::Component::~Component(aCStack_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


