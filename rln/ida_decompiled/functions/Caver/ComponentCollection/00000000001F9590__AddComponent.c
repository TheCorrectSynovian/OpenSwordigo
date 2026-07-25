/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9590
 * Mangled: ._ZN5Caver19ComponentCollection12AddComponentEPNS_9ComponentE
 * Demangled: Caver::ComponentCollection::AddComponent(Caver::Component *)
 *
 * Callers: 1
 *   0x000000000024723C  Caver::ComponentManager::RegisterComponentInterface(long,Caver::Component *)
 *
 * Callees: 1
 *   0x0000000000243ADC  std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_create_node(std::pair<int const,Caver::Component::OutletBinding> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9598 string=0x00000000001F959C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ComponentCollection::AddComponent()
{
  JUMPOUT(0x243B58);
}

