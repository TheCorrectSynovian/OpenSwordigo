/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002006A0
 * Mangled: ._ZNSt5dequeIN5Caver14GUIApplication11QueuedEventESaIS2_EE8_M_eraseESt15_Deque_iteratorIS2_RS2_PS2_E
 * Demangled: std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_erase(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>)
 *
 * Callers: 2
 *   0x0000000000492DF0  Caver::GUIApplication::SendEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,boost::shared_ptr<void> const&,boost::shared_ptr<Caver::GUIEvent> const&)
 *   0x0000000000493248  Caver::GUIApplication::CancelEventsWithSender(void *)
 *
 * Callees: 1
 *   0x0000000000493AA4  std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_erase(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>)
 *
 * Referenced strings: 1
 *   insn=0x00000000002006A8 string=0x00000000002006AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::deque<Caver::GUIApplication::QueuedEvent>::_M_erase()
{
  return _ZNSt5dequeIN5Caver14GUIApplication11QueuedEventESaIS2_EE8_M_eraseESt15_Deque_iteratorIS2_RS2_PS2_E();
}

