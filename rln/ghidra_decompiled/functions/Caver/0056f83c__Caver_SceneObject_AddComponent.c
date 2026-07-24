/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056f83c
 * Function: Caver::SceneObject::AddComponent
 * Signature: undefined __thiscall AddComponent(SceneObject * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::AddComponent(Caver::Component*) */

void __thiscall Caver::SceneObject::AddComponent(SceneObject *this,Component *param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  Component *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  pcVar3 = *(code **)(*(long *)this + 0x48);
  if (param_1 != (Component *)0x0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  local_30 = param_1;
                    /* try { // try from 0056f878 to 0066f897 has its CatchHandler @ 0056f67c */
  (*pcVar3)(this,&local_30);
                    /* catch() { ... } // from try @ 0056f808 with catch @ 0056f880 */
                    /* catch() { ... } // from try @ 0056f6b8 with catch @ 0056f884 */
  if ((local_30 != (Component *)0x0) &&
     (iVar1 = *(int *)(local_30 + 8), *(int *)(local_30 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*(long *)local_30 + 8))();
  }
                    /* try { // try from 0056f8a0 to 0066f8cf has its CatchHandler @ 0056f8a0
                       catch() { ... } // from try @ 0056f8a0 with catch @ 0056f8a0
                       catch() { ... } // from try @ 0056f8d4 with catch @ 0056f8a0
                       catch() { ... } // from try @ 0056f954 with catch @ 0056f8a0
                       catch() { ... } // from try @ 0056fa68 with catch @ 0056f8a0 */
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


