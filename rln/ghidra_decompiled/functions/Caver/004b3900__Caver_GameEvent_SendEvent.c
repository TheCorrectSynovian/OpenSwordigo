/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b3900
 * Function: Caver::GameEvent::SendEvent
 * Signature: undefined __cdecl SendEvent(GameEvent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameEvent::SendEvent(Caver::GameEvent*) */

void Caver::GameEvent::SendEvent(GameEvent *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  puVar4 = PTR_currentManager__007e6f50;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar6 = *(undefined8 **)PTR_currentManager__007e6f50;
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = operator_new(0x28);
                    /* try { // try from 004b393c to 005b394f has its CatchHandler @ 004b3a4c */
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined1 *)(puVar6 + 4) = 1;
                    /* try { // try from 004b3950 to 005b3967 has its CatchHandler @ 004b39e8 */
    *(undefined8 **)puVar4 = puVar6;
  }
  boost::shared_ptr<Caver::GameEvent>::shared_ptr<Caver::GameEvent>
            ((shared_ptr<Caver::GameEvent> *)&local_48,param_1);
  plVar3 = local_40;
  if (*(char *)(puVar6 + 4) != '\0') {
                    /* try { // try from 004b3968 to 005b3a77 has its CatchHandler @ 004b3878 */
    puVar1 = (undefined8 *)puVar6[2];
    if (puVar1 == (undefined8 *)puVar6[3]) {
      std::
      vector<boost::shared_ptr<Caver::GameEvent>,std::allocator<boost::shared_ptr<Caver::GameEvent>>>
      ::_M_insert_aux((vector<boost::shared_ptr<Caver::GameEvent>,std::allocator<boost::shared_ptr<Caver::GameEvent>>>
                       *)(puVar6 + 1),puVar1,&local_48);
      plVar3 = local_40;
    }
    else {
      *puVar1 = local_48;
      puVar1[1] = local_40;
      if (local_40 != (long *)0x0) {
        local_40[1] = local_40[1] + 1;
      }
      puVar6[2] = puVar1 + 2;
    }
  }
  if ((plVar3 != (long *)0x0) && (lVar5 = plVar3[1], plVar3[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar5 = plVar3[2];
    plVar3[2] = lVar5 + -1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004b3950 with catch @ 004b39e8
                        */
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


