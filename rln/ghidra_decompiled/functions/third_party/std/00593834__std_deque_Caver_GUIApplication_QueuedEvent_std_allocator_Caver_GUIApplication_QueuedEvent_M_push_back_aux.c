/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00593834
 * Function: std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_push_back_aux
 * Signature: undefined __thiscall _M_push_back_aux(deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>> * this, QueuedEvent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::deque<Caver::GUIApplication::QueuedEvent, std::allocator<Caver::GUIApplication::QueuedEvent>
   >::_M_push_back_aux(Caver::GUIApplication::QueuedEvent const&) */

void __thiscall
std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::
_M_push_back_aux(deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>
                 *this,QueuedEvent *param_1)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((ulong)(*(long *)(this + 8) - (*(long *)(this + 0x48) - *(long *)this >> 3)) < 2) {
    _M_reallocate_map(this,1,false);
  }
  pvVar1 = operator_new(0x1f8);
  *(void **)(*(long *)(this + 0x48) + 8) = pvVar1;
  puVar4 = *(undefined8 **)(this + 0x30);
  *puVar4 = *(undefined8 *)param_1;
  puVar4[1] = 0;
  uVar2 = *(ulong *)(param_1 + 8);
  if (uVar2 != 0) {
    puVar4[1] = uVar2;
    if ((uVar2 & 1) == 0) {
      (**(code **)(uVar2 & 0xfffffffffffffffe))(param_1 + 0x10,puVar4 + 2,0);
    }
    else {
      puVar4[4] = *(undefined8 *)(param_1 + 0x20);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      puVar4[3] = *(undefined8 *)(param_1 + 0x18);
      puVar4[2] = uVar5;
    }
  }
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x30);
  puVar4[6] = lVar3;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
  }
  puVar4[7] = *(undefined8 *)(param_1 + 0x38);
  lVar3 = *(long *)(param_1 + 0x40);
  puVar4[8] = lVar3;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
  }
  lVar3 = *(long *)(this + 0x48);
  *(long *)(this + 0x48) = lVar3 + 8;
  lVar3 = *(long *)(lVar3 + 8);
  *(long *)(this + 0x30) = lVar3;
  *(long *)(this + 0x38) = lVar3;
  *(long *)(this + 0x40) = lVar3 + 0x1f8;
  return;
}


