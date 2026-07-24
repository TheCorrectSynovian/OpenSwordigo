/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005935c8
 * Function: std::_Deque_base<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_create_nodes
 * Signature: undefined __thiscall _M_create_nodes(_Deque_base<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>> * this, QueuedEvent * * param_1, QueuedEvent * * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Deque_base<Caver::GUIApplication::QueuedEvent,
   std::allocator<Caver::GUIApplication::QueuedEvent>
   >::_M_create_nodes(Caver::GUIApplication::QueuedEvent**, Caver::GUIApplication::QueuedEvent**) */

_Deque_base<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>> *
__thiscall
std::
_Deque_base<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::
_M_create_nodes(_Deque_base<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>
                *this,QueuedEvent **param_1,QueuedEvent **param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    this = operator_new(0x1f8);
    *param_1 = (QueuedEvent *)this;
  }
  return this;
}


