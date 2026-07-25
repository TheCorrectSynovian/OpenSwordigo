/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8EE0
 * Mangled: ._ZSt13copy_backwardIN5Caver14GUIApplication11QueuedEventEESt15_Deque_iteratorIT_RS4_PS4_ES3_IS4_RKS4_PS8_ESB_S7_
 * Demangled: std::copy_backward<Caver::GUIApplication::QueuedEvent>(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent const&,Caver::GUIApplication::QueuedEvent const*>,std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent const&,Caver::GUIApplication::QueuedEvent const*>,std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>)
 *
 * Callers: 1
 *   0x0000000000493AA4  std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_erase(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>)
 *
 * Callees: 1
 *   0x0000000000493D7C  std::copy_backward<Caver::GUIApplication::QueuedEvent>(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent const&,Caver::GUIApplication::QueuedEvent const*>,std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent const&,Caver::GUIApplication::QueuedEvent const*>,std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8EE8 string=0x00000000001F8EEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::copy_backward<Caver::GUIApplication::QueuedEvent>()
{
  return _ZSt13copy_backwardIN5Caver14GUIApplication11QueuedEventEESt15_Deque_iteratorIT_RS4_PS4_ES3_IS4_RKS4_PS8_ESB_S7_();
}

