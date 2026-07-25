/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFB10
 * Mangled: ._ZNSt5dequeIN5Caver14GUIApplication11QueuedEventESaIS2_EE16_M_push_back_auxERKS2_
 * Demangled: std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_push_back_aux(Caver::GUIApplication::QueuedEvent const&)
 *
 * Callers: 1
 *   0x0000000000492DF0  Caver::GUIApplication::SendEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,boost::shared_ptr<void> const&,boost::shared_ptr<Caver::GUIEvent> const&)
 *
 * Callees: 1
 *   0x0000000000493834  std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_push_back_aux(Caver::GUIApplication::QueuedEvent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFB18 string=0x00000000001FFB1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::deque<Caver::GUIApplication::QueuedEvent>::_M_push_back_aux()
{
  return _ZNSt5dequeIN5Caver14GUIApplication11QueuedEventESaIS2_EE16_M_push_back_auxERKS2_();
}

