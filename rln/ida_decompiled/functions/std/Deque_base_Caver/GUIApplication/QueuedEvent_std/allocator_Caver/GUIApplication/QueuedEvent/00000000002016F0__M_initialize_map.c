/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002016F0
 * Mangled: ._ZNSt11_Deque_baseIN5Caver14GUIApplication11QueuedEventESaIS2_EE17_M_initialize_mapEm
 * Demangled: std::_Deque_base<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_initialize_map(ulong)
 *
 * Callers: 1
 *   0x000000000049258C  std::vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUITextField>*,std::vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>>,boost::shared_ptr<Caver::GUITextField> const&)
 *
 * Callees: 1
 *   0x0000000000493308  Caver::GUIApplication::DispatchEvents(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002016F8 string=0x00000000002016FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Deque_base<Caver::GUIApplication::QueuedEvent>::_M_initialize_map()
{
  JUMPOUT(0x4934BC);
}

