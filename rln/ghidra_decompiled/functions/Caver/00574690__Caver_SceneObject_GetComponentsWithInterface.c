/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00574690
 * Function: Caver::SceneObject::GetComponentsWithInterface
 * Signature: undefined __thiscall GetComponentsWithInterface(SceneObject * this, long param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::GetComponentsWithInterface(long, std::vector<Caver::Component*,
   std::allocator<Caver::Component*> >*) */

void __thiscall
Caver::SceneObject::GetComponentsWithInterface(SceneObject *this,long param_1,vector *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  puVar3 = *(undefined8 **)(this + 200);
  for (puVar1 = *(undefined8 **)(this + 0xc0); puVar1 != puVar3; puVar1 = puVar1 + 1) {
    uVar5 = (**(code **)(*(long *)*puVar1 + 0xa0))((long *)*puVar1,param_1);
    if ((uVar5 & 1) != 0) {
      local_50 = *puVar1;
      puVar2 = *(undefined8 **)(param_2 + 8);
      if (puVar2 == *(undefined8 **)(param_2 + 0x10)) {
        std::vector<Caver::Component*,std::allocator<Caver::Component*>>::_M_insert_aux
                  ((vector<Caver::Component*,std::allocator<Caver::Component*>> *)param_2,puVar2,
                   &local_50);
      }
      else {
        *puVar2 = local_50;
                    /* catch() { ... } // from try @ 0057439c with catch @ 00574700 */
        *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 8;
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


