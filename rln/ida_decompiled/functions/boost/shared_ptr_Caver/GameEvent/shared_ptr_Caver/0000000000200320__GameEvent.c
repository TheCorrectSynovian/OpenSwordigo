/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200320
 * Mangled: ._ZN5boost10shared_ptrIN5Caver9GameEventEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GameEvent>::shared_ptr<Caver::GameEvent>(Caver::GameEvent *)
 *
 * Callers: 1
 *   0x00000000003B3884  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>> const&)
 *
 * Callees: 1
 *   0x00000000003B3884  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200328 string=0x000000000020032C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::GameEvent>::shared_ptr<Caver::GameEvent>()
{
  JUMPOUT(0x3B3A7C);
}

