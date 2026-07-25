/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200D70
 * Mangled: ._ZN5Caver19ComponentCollection5PurgeEv
 * Demangled: Caver::ComponentCollection::Purge(void)
 *
 * Callers: 1
 *   0x000000000024719C  Caver::ComponentManager::Purge(void)
 *
 * Callees: 1
 *   0x0000000000243ADC  std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_create_node(std::pair<int const,Caver::Component::OutletBinding> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200D78 string=0x0000000000200D7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ComponentCollection::Purge(Caver::ComponentCollection *this)
{
  JUMPOUT(0x243C48);
}

