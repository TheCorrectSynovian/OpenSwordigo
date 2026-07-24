/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00593178
 * Function: Caver::GUIApplication::CancelEventsWithTargetAndSender
 * Signature: undefined __thiscall CancelEventsWithTargetAndSender(GUIApplication * this, void * param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIApplication::CancelEventsWithTargetAndSender(void*, void*) */

void __thiscall
Caver::GUIApplication::CancelEventsWithTargetAndSender
          (GUIApplication *this,void *param_1,void *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *local_78 [2];
  undefined8 *local_68;
  long *plStack_60;
  undefined8 *local_58;
  long local_50;
  long local_48;
  long *plStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar2 = *(undefined8 **)(this + 0x10);
  puVar3 = *(undefined8 **)(this + 0x30);
  if (puVar3 != puVar2) {
    puVar5 = *(undefined8 **)(this + 0x20);
    plVar4 = *(long **)(this + 0x28);
    do {
      if (((void *)*puVar2 == param_1) && ((void *)puVar2[5] == param_2)) {
        local_50 = *plVar4;
        local_48 = local_50 + 0x1f8;
        local_58 = puVar2;
        plStack_40 = plVar4;
        std::
        deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>
        ::_M_erase(local_78,this,&local_58);
        puVar3 = *(undefined8 **)(this + 0x30);
        puVar2 = local_78[0];
        plVar4 = plStack_60;
        puVar5 = local_68;
      }
      else {
        puVar2 = puVar2 + 9;
        if (puVar2 == puVar5) {
          puVar2 = (undefined8 *)plVar4[1];
          plVar4 = plVar4 + 1;
          puVar5 = puVar2 + 0x3f;
        }
      }
    } while (puVar3 != puVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


