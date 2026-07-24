/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059373c
 * Function: std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_destroy_data_aux
 * Signature: undefined __thiscall _M_destroy_data_aux(deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>> * this, _Deque_iterator param_1, _Deque_iterator param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::deque<Caver::GUIApplication::QueuedEvent, std::allocator<Caver::GUIApplication::QueuedEvent>
   >::_M_destroy_data_aux(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,
   Caver::GUIApplication::QueuedEvent&, Caver::GUIApplication::QueuedEvent*>,
   std::_Deque_iterator<Caver::GUIApplication::QueuedEvent, Caver::GUIApplication::QueuedEvent&,
   Caver::GUIApplication::QueuedEvent*>) */

void __thiscall
std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::
_M_destroy_data_aux(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  QueuedEvent *pQVar3;
  QueuedEvent *pQVar4;
  undefined8 *puVar5;
  
  puVar2 = (undefined8 *)param_2[3];
  puVar1 = (undefined8 *)param_3[3];
  puVar5 = puVar2 + 1;
  if (puVar2 + 1 < puVar1) {
    do {
      puVar2 = puVar5 + 1;
      pQVar4 = (QueuedEvent *)*puVar5;
      Caver::GUIApplication::QueuedEvent::~QueuedEvent(pQVar4);
      Caver::GUIApplication::QueuedEvent::~QueuedEvent(pQVar4 + 0x48);
      Caver::GUIApplication::QueuedEvent::~QueuedEvent(pQVar4 + 0x90);
      Caver::GUIApplication::QueuedEvent::~QueuedEvent(pQVar4 + 0xd8);
      Caver::GUIApplication::QueuedEvent::~QueuedEvent(pQVar4 + 0x120);
      Caver::GUIApplication::QueuedEvent::~QueuedEvent(pQVar4 + 0x168);
      Caver::GUIApplication::QueuedEvent::~QueuedEvent(pQVar4 + 0x1b0);
      puVar1 = (undefined8 *)param_3[3];
      puVar5 = puVar2;
    } while (puVar2 < puVar1);
    puVar2 = (undefined8 *)param_2[3];
  }
  pQVar4 = (QueuedEvent *)*param_2;
  if (puVar2 == puVar1) {
    pQVar3 = (QueuedEvent *)*param_3;
    for (; pQVar4 != pQVar3; pQVar4 = pQVar4 + 0x48) {
      Caver::GUIApplication::QueuedEvent::~QueuedEvent(pQVar4);
    }
  }
  else {
    pQVar3 = (QueuedEvent *)param_2[2];
    for (; pQVar4 != pQVar3; pQVar4 = pQVar4 + 0x48) {
      Caver::GUIApplication::QueuedEvent::~QueuedEvent(pQVar4);
    }
    pQVar3 = (QueuedEvent *)*param_3;
    for (pQVar4 = (QueuedEvent *)param_3[1]; pQVar4 != pQVar3; pQVar4 = pQVar4 + 0x48) {
      Caver::GUIApplication::QueuedEvent::~QueuedEvent(pQVar4);
    }
  }
  return;
}


