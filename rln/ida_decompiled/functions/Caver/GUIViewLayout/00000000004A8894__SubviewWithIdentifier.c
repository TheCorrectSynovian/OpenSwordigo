/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A8894
 * Mangled: _ZN5Caver13GUIViewLayout21SubviewWithIdentifierERKSs
 * Demangled: Caver::GUIViewLayout::SubviewWithIdentifier(std::string const&)
 *
 * Callers: 1
 *   0x00000000001FC260  Caver::GUIViewLayout::SubviewWithIdentifier(std::string const&)
 *
 * Callees: 1
 *   0x00000000002031A0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::find(std::string const&)
 *
 * Referenced strings: 9
 *   insn=0x00000000004A88A8 string=0x00000000004A88AC "=j"
 *   insn=0x00000000004A88B4 string=0x00000000004A88B8 "@"
 *   insn=0x00000000004A88B8 string=0x00000000004A88BC ""
 *   insn=0x00000000004A88BC string=0x00000000004A88C0 "h"
 *   insn=0x00000000004A88C0 string=0x00000000004A88C4 ""
 *   insn=0x00000000004A88C4 string=0x00000000004A88C8 "h"
 *   insn=0x00000000004A88CC string=0x00000000004A88D0 "\t"
 *   insn=0x00000000004A88D0 string=0x00000000004A88D4 ")"
 *   insn=0x00000000004A88D4 string=0x00000000004A88D8 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::GUIViewLayout::SubviewWithIdentifier@<X0>(__int64 a1@<X0>, _QWORD *a2@<X8>)
{
  __int64 result; // x0
  __int64 v5; // x8

  result = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::find();
  if ( a1 + 40 == result )
  {
    *a2 = 0;
    a2[1] = 0;
  }
  else
  {
    *a2 = *(_QWORD *)(result + 40);
    v5 = *(_QWORD *)(result + 48);
    a2[1] = v5;
    if ( v5 )
      ++*(_QWORD *)(v5 + 8);
  }
  return result;
}

