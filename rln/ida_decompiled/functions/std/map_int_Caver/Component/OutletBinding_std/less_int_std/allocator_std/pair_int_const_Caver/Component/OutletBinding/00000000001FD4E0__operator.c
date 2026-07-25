/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD4E0
 * Mangled: ._ZNSt3mapIiN5Caver9Component13OutletBindingESt4lessIiESaISt4pairIKiS2_EEEixERS6_
 * Demangled: std::map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::operator[](int const&)
 *
 * Callers: 1
 *   0x0000000000243380  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *
 * Callees: 1
 *   0x0000000000243510  std::map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::operator[](int const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD4E8 string=0x00000000001FD4EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<int,Caver::Component::OutletBinding>::operator[]()
{
  return _ZNSt3mapIiN5Caver9Component13OutletBindingESt4lessIiESaISt4pairIKiS2_EEEixERS6_();
}

