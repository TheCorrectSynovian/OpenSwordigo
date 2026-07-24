/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b80bc
 * Function: Caver::MeshBuilder::MeshBuilder
 * Signature: undefined __thiscall MeshBuilder(MeshBuilder * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshBuilder::MeshBuilder() */

void __thiscall Caver::MeshBuilder::MeshBuilder(MeshBuilder *this)

{
  long *plVar1;
  long lVar2;
  Mesh *pMVar3;
  long lVar4;
  Mesh *local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  pMVar3 = operator_new(0x160);
  Mesh::Mesh(pMVar3);
  local_58 = pMVar3;
  boost::detail::shared_count::shared_count<Caver::Mesh>((shared_count *)&local_50,pMVar3);
  boost::detail::sp_enable_shared_from_this(&local_58,pMVar3,pMVar3);
  pMVar3 = *(Mesh **)this;
  plVar1 = *(long **)(this + 8);
  *(Mesh **)this = local_58;
  *(long **)(this + 8) = local_50;
  local_58 = pMVar3;
  local_50 = plVar1;
  if ((plVar1 != (long *)0x0) && (lVar4 = plVar1[1], plVar1[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar4 = plVar1[2];
    plVar1[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


