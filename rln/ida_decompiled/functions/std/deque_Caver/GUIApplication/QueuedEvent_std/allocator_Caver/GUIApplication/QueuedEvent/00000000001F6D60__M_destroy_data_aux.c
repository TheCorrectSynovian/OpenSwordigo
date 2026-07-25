/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6D60
 * Mangled: ._ZNSt5dequeIN5Caver14GUIApplication11QueuedEventESaIS2_EE19_M_destroy_data_auxESt15_Deque_iteratorIS2_RS2_PS2_ES8_
 * Demangled: std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_destroy_data_aux(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>,std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>)
 *
 * Callers: 1
 *   0x0000000000493308  Caver::GUIApplication::DispatchEvents(void)
 *
 * Callees: 1
 *   0x000000000049373C  std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_destroy_data_aux(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>,std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6D68 string=0x00000000001F6D6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::deque<Caver::GUIApplication::QueuedEvent>::_M_destroy_data_aux()
{
  return _ZNSt5dequeIN5Caver14GUIApplication11QueuedEventESaIS2_EE19_M_destroy_data_auxESt15_Deque_iteratorIS2_RS2_PS2_ES8_();
}

