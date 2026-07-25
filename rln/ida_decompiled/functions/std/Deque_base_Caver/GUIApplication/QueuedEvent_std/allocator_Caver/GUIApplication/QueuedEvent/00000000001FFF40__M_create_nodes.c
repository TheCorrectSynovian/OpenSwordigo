/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFF40
 * Mangled: ._ZNSt11_Deque_baseIN5Caver14GUIApplication11QueuedEventESaIS2_EE15_M_create_nodesEPPS2_S6_
 * Demangled: std::_Deque_base<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_create_nodes(Caver::GUIApplication::QueuedEvent**,Caver::GUIApplication::QueuedEvent**)
 *
 * Callers: 1
 *   0x0000000000493308  Caver::GUIApplication::DispatchEvents(void)
 *
 * Callees: 1
 *   0x0000000000493308  Caver::GUIApplication::DispatchEvents(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFF48 string=0x00000000001FFF4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Deque_base<Caver::GUIApplication::QueuedEvent>::_M_create_nodes()
{
  JUMPOUT(0x4935C8);
}

