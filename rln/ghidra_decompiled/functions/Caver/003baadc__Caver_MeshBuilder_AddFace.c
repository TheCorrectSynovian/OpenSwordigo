/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003baadc
 * Function: Caver::MeshBuilder::AddFace
 * Signature: undefined __thiscall AddFace(MeshBuilder * this, int param_1, int param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshBuilder::AddFace(int, int, int) */

void __thiscall Caver::MeshBuilder::AddFace(MeshBuilder *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  piVar2 = *(int **)(this + 0x40);
  if (piVar2 == *(int **)(this + 0x48)) {
    local_3c = param_1;
    std::vector<int,std::allocator<int>>::_M_insert_aux
              ((vector<int,std::allocator<int>> *)(this + 0x38),piVar2,&local_3c);
  }
  else {
    *piVar2 = param_1;
    *(int **)(this + 0x40) = piVar2 + 1;
  }
  iVar1 = *(int *)(this + 0x30) + 1;
  *(int *)(this + 0x30) = iVar1;
  if (iVar1 == (iVar1 / 3) * 3) {
    *(int *)(this + 0x50) = *(int *)(this + 0x50) + 1;
  }
  piVar2 = *(int **)(this + 0x40);
  if (piVar2 == *(int **)(this + 0x48)) {
    local_3c = param_2;
    std::vector<int,std::allocator<int>>::_M_insert_aux
              ((vector<int,std::allocator<int>> *)(this + 0x38),piVar2,&local_3c);
  }
  else {
    *piVar2 = param_2;
    *(int **)(this + 0x40) = piVar2 + 1;
  }
  iVar1 = *(int *)(this + 0x30) + 1;
  *(int *)(this + 0x30) = iVar1;
  if (iVar1 == (iVar1 / 3) * 3) {
    *(int *)(this + 0x50) = *(int *)(this + 0x50) + 1;
  }
  piVar2 = *(int **)(this + 0x40);
  local_3c = param_3;
  if (piVar2 == *(int **)(this + 0x48)) {
    std::vector<int,std::allocator<int>>::_M_insert_aux
              ((vector<int,std::allocator<int>> *)(this + 0x38),piVar2,&local_3c);
  }
  else {
    *piVar2 = param_3;
    *(int **)(this + 0x40) = piVar2 + 1;
  }
  iVar1 = *(int *)(this + 0x30) + 1;
  *(int *)(this + 0x30) = iVar1;
  if (iVar1 == (iVar1 / 3) * 3) {
    *(int *)(this + 0x50) = *(int *)(this + 0x50) + 1;
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


