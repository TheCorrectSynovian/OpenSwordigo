/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00592df0
 * Function: Caver::GUIApplication::SendEvent
 * Signature: undefined __thiscall SendEvent(GUIApplication * this, void * param_1, function * param_2, shared_ptr * param_3, shared_ptr * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIApplication::SendEvent(void*, boost::function<void (void*, Caver::GUIEvent*)> const&,
   boost::shared_ptr<void> const&, boost::shared_ptr<Caver::GUIEvent> const&) */

void __thiscall
Caver::GUIApplication::SendEvent
          (GUIApplication *this,void *param_1,function *param_2,shared_ptr *param_3,
          shared_ptr *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  void *local_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  **(undefined8 **)param_4 = *(undefined8 *)(this + 0x50);
  local_78 = 0;
                    /* try { // try from 00592e34 to 0069305b has its CatchHandler @ 00593064 */
  local_48 = 0;
  local_40 = (long *)0x0;
  local_58 = 0;
  local_50 = (long *)0x0;
  local_80 = param_1;
  boost::function<void(void*,Caver::GUIEvent*)>::operator=
            ((function<void(void*,Caver::GUIEvent*)> *)&local_78,param_2);
  plVar3 = local_50;
  local_58 = *(undefined8 *)param_3;
  plVar1 = *(long **)(param_3 + 8);
  if (plVar1 != (long *)0x0) {
    *(long *)((long)plVar1 + 8) = *(long *)((long)plVar1 + 8) + 1;
  }
  if ((local_50 != (long *)0x0) && (lVar4 = local_50[1], local_50[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    lVar4 = *local_50;
    local_50 = plVar1;
    (**(code **)(lVar4 + 0x10))(plVar3);
    lVar4 = plVar3[2];
    plVar3[2] = lVar4 + -1;
    plVar1 = local_50;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
      plVar1 = local_50;
    }
  }
  local_50 = plVar1;
  plVar3 = local_40;
  local_48 = *(undefined8 *)param_4;
  plVar1 = *(long **)(param_4 + 8);
  if (plVar1 != (long *)0x0) {
    *(long *)((long)plVar1 + 8) = *(long *)((long)plVar1 + 8) + 1;
  }
  if ((local_40 != (long *)0x0) && (lVar4 = local_40[1], local_40[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    lVar4 = *local_40;
    local_40 = plVar1;
    (**(code **)(lVar4 + 0x10))(plVar3);
    lVar4 = plVar3[2];
    plVar3[2] = lVar4 + -1;
    plVar1 = local_40;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
      plVar1 = local_40;
    }
  }
  local_40 = plVar1;
  puVar5 = *(undefined8 **)(this + 0x30);
  if (puVar5 == (undefined8 *)(*(long *)(this + 0x40) + -0x48)) {
    std::
    deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::
    _M_push_back_aux((deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>
                      *)this,(QueuedEvent *)&local_80);
  }
  else {
    *puVar5 = local_80;
    puVar5[1] = 0;
    if (local_78 != 0) {
      puVar5[1] = local_78;
      if ((local_78 & 1) == 0) {
        (**(code **)(local_78 & 0xfffffffffffffffe))(&local_70,puVar5 + 2,0);
      }
      else {
        puVar5[4] = local_60;
        puVar5[3] = uStack_68;
        puVar5[2] = local_70;
      }
    }
    puVar5[5] = local_58;
    puVar5[6] = local_50;
    if (local_50 != (long *)0x0) {
      *(long *)((long)local_50 + 8) = *(long *)((long)local_50 + 8) + 1;
    }
    puVar5[7] = local_48;
    puVar5[8] = local_40;
    if (local_40 != (long *)0x0) {
      *(long *)((long)local_40 + 8) = *(long *)((long)local_40 + 8) + 1;
    }
    *(long *)(this + 0x30) = *(long *)(this + 0x30) + 0x48;
  }
  QueuedEvent::~QueuedEvent((QueuedEvent *)&local_80);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


