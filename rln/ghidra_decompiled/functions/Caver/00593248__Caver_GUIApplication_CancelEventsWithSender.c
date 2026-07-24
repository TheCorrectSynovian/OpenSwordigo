/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00593248
 * Function: Caver::GUIApplication::CancelEventsWithSender
 * Signature: undefined __thiscall CancelEventsWithSender(GUIApplication * this, void * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIApplication::CancelEventsWithSender(void*) */

void __thiscall Caver::GUIApplication::CancelEventsWithSender(GUIApplication *this,void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long local_78 [2];
  long local_68;
  long *plStack_60;
  long local_58;
  long local_50;
  long local_48;
  long *plStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(this + 0x10);
  lVar3 = *(long *)(this + 0x30);
  if (lVar3 != lVar2) {
    lVar5 = *(long *)(this + 0x20);
    plVar4 = *(long **)(this + 0x28);
    do {
      if (*(void **)(lVar2 + 0x28) == param_1) {
        local_50 = *plVar4;
                    /* try { // try from 005932b0 to 006932f3 has its CatchHandler @ 00593094 */
        local_48 = local_50 + 0x1f8;
        local_58 = lVar2;
        plStack_40 = plVar4;
        std::
        deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>
        ::_M_erase(local_78,this,&local_58);
        lVar3 = *(long *)(this + 0x30);
        lVar2 = local_78[0];
        plVar4 = plStack_60;
        lVar5 = local_68;
      }
      else {
        lVar2 = lVar2 + 0x48;
        if (lVar2 == lVar5) {
                    /* try { // try from 0059329c to 006932af has its CatchHandler @ 005933d8 */
          lVar2 = plVar4[1];
          plVar4 = plVar4 + 1;
          lVar5 = lVar2 + 0x1f8;
        }
      }
    } while (lVar3 != lVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 005932f4 to 00693307 has its CatchHandler @ 00593388 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


