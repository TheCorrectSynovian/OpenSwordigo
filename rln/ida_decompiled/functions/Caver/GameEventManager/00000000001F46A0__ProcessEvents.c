/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F46A0
 * Mangled: ._ZN5Caver16GameEventManager13ProcessEventsEv
 * Demangled: Caver::GameEventManager::ProcessEvents(void)
 *
 * Callers: 1
 *   0x00000000003B3884  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>> const&)
 *
 * Callees: 1
 *   0x00000000003B3B84  Caver::GameEventManager::ProcessEvents(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F46A8 string=0x00000000001F46AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameEventManager::ProcessEvents(Caver::GameEventManager *this)
{
  return _ZN5Caver16GameEventManager13ProcessEventsEv(this);
}

