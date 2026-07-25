/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4FE0
 * Mangled: ._ZN5Caver11EntityClassC2Ev
 * Demangled: Caver::EntityClass::EntityClass(void)
 *
 * Callers: 1
 *   0x00000000003AF808  Caver::GameData::LoadFromProtobufMessage(Caver::Proto::GameData const&)
 *
 * Callees: 1
 *   0x00000000003AF2C0  std::vector<boost::shared_ptr<Caver::Item>,std::allocator<boost::shared_ptr<Caver::Item>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Item>*,std::vector<boost::shared_ptr<Caver::Item>,std::allocator<boost::shared_ptr<Caver::Item>>>>,boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4FE8 string=0x00000000001F4FEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::EntityClass::EntityClass(Caver::EntityClass *this)
{
  JUMPOUT(0x3AF69C);
}

