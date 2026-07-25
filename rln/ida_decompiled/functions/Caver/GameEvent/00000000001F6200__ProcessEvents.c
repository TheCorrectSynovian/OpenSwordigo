/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6200
 * Mangled: ._ZN5Caver9GameEvent13ProcessEventsEv
 * Demangled: Caver::GameEvent::ProcessEvents(void)
 *
 * Callers: 1
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Callees: 1
 *   0x00000000003B3884  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6208 string=0x00000000001F620C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameEvent::ProcessEvents(Caver::GameEvent *this)
{
  JUMPOUT(0x3B3B40);
}

