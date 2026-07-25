/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F45C0
 * Mangled: ._ZNSt5dequeIN5Caver14GUIApplication11QueuedEventESaIS2_EE17_M_reallocate_mapEmb
 * Demangled: std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_reallocate_map(ulong,bool)
 *
 * Callers: 1
 *   0x0000000000493834  std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_push_back_aux(Caver::GUIApplication::QueuedEvent const&)
 *
 * Callees: 1
 *   0x0000000000493834  std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_push_back_aux(Caver::GUIApplication::QueuedEvent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F45C8 string=0x00000000001F45CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::deque<Caver::GUIApplication::QueuedEvent>::_M_reallocate_map()
{
  JUMPOUT(0x493960);
}

