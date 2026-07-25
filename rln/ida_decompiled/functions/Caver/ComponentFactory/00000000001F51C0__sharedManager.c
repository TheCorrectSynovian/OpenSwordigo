/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F51C0
 * Mangled: ._ZN5Caver16ComponentFactory13sharedManagerEv
 * Demangled: Caver::ComponentFactory::sharedManager(void)
 *
 * Callers: 3
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x00000000004701FC  Caver::SceneObject::Clone(void)
 *   0x00000000004770DC  sub_4770DC
 *
 * Callees: 1
 *   0x0000000000243E48  std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Component>*,std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>>,boost::intrusive_ptr<Caver::Component> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F51C8 string=0x00000000001F51CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ComponentFactory::sharedManager(Caver::ComponentFactory *this)
{
  JUMPOUT(0x244140);
}

