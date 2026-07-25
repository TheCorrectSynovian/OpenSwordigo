/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000233E70
 * Mangled: _ZN5Caver19PropertiesComponent14PropertyForKeyERKSs
 * Demangled: Caver::PropertiesComponent::PropertyForKey(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F8710  Caver::PropertiesComponent::PropertyForKey(std::string const&)
 *
 * Callees: 3
 *   0x00000000001FC590  Caver::PropertiesComponent::Load(void)
 *   0x00000000001FE720  std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::operator[](std::string const&)
 *   0x000000000056A528  sub_56A528
 *
 * Referenced strings: 2
 *   insn=0x0000000000233E8C string=0x0000000000233E90 "i"
 *   insn=0x0000000000233E98 string=0x00000000001FC590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::PropertiesComponent::PropertyForKey@<X0>(
        Caver::PropertiesComponent *this@<X0>,
        __int64 a2@<X8>)
{
  __int64 v3; // x1

  if ( !*((_BYTE *)this + 112) )
    Caver::PropertiesComponent::Load(this);
  v3 = std::map<std::string,std::string>::operator[]();
  return sub_56A528(a2, v3);
}

