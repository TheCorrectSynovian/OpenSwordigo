/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000243ADC
 * Mangled: _ZNSt8_Rb_treeIiSt4pairIKiN5Caver9Component13OutletBindingEESt10_Select1stIS5_ESt4lessIiESaIS5_EE14_M_create_nodeERKS5_
 * Demangled: std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_create_node(std::pair<int const,Caver::Component::OutletBinding> const&)
 *
 * Callers: 1
 *   0x00000000001F4F10  std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_create_node(std::pair<int const,Caver::Component::OutletBinding> const&)
 *
 * Callees: 10
 *   0x00000000001F3A10  std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Component>*,std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>>,boost::intrusive_ptr<Caver::Component> const&)
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 67
 *   insn=0x0000000000243AF0 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000243AF8 string=0x0000000000243AFC "`"
 *   insn=0x0000000000243B00 string=0x0000000000243B04 "h""
 *   insn=0x0000000000243B08 string=0x0000000000243B0C "h*"
 *   insn=0x0000000000243B1C string=0x0000000000243B20 "h"
 *   insn=0x0000000000243B24 string=0x0000000000243B28 "h"
 *   insn=0x0000000000243B34 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000243B3C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000243B48 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000243B4C string=0x0000000000243B50 "]"
 *   insn=0x0000000000243B64 string=0x0000000000243B68 "S"
 *   insn=0x0000000000243B68 string=0x0000000000243B6C "h"
 *   insn=0x0000000000243B78 string=0x0000000000243B7C "(@"
 *   insn=0x0000000000243B78 string=0x0000000000243B88 ""
 *   insn=0x0000000000243B7C string=0x0000000000243B80 ""
 *   insn=0x0000000000243B80 string=0x0000000000243B84 "("
 *   insn=0x0000000000243B8C string=0x0000000000243B90 "`"
 *   insn=0x0000000000243B98 string=0x0000000000243B9C ")@"
 *   insn=0x0000000000243B98 string=0x0000000000243BA8 "!"
 *   insn=0x0000000000243B9C string=0x0000000000243BA0 ")"
 *   insn=0x0000000000243BA0 string=0x0000000000243BA4 ")"
 *   insn=0x0000000000243BA8 string=0x0000000000243BAC ""
 *   insn=0x0000000000243BB4 string=0x0000000000243BB8 ""
 *   insn=0x0000000000243BB4 string=0x0000000000243BD0 "@"
 *   insn=0x0000000000243BB8 string=0x0000000000243BEC "h"
 *   insn=0x0000000000243BC4 string=0x00000000001F3A10 "P'"
 *   insn=0x0000000000243BD0 string=0x0000000000243BD4 ""
 *   insn=0x0000000000243BD4 string=0x0000000000243BD8 ""
 *   insn=0x0000000000243BDC string=0x0000000000243BE0 ""
 *   insn=0x0000000000243BE0 string=0x0000000000243BE4 ""
 *   insn=0x0000000000243C0C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000243C14 string=0x0000000000243C18 "("
 *   insn=0x0000000000243C18 string=0x0000000000243C1C "\t\t@"
 *   insn=0x0000000000243C1C string=0x0000000000243C20 ")"
 *   insn=0x0000000000243C20 string=0x0000000000243C24 "\t\t"
 *   insn=0x0000000000243C28 string=0x0000000000243C2C "\t"
 *   insn=0x0000000000243C2C string=0x0000000000243C30 ")"
 *   insn=0x0000000000243C34 string=0x0000000000243C38 " "
 *   insn=0x0000000000243C3C string=0x0000000000243C40 "!"
 *   insn=0x0000000000243C58 string=0x0000000000243C5C "u"@"
 *   insn=0x0000000000243C6C string=0x0000000000243C70 "*"
 *   insn=0x0000000000243C70 string=0x0000000000243C74 "J"
 *   insn=0x0000000000243C74 string=0x0000000000243C78 "j"
 *   insn=0x0000000000243C78 string=0x0000000000243C84 "?"
 *   insn=0x0000000000243C7C string=0x0000000000243C80 "*"
 *   insn=0x0000000000243C84 string=0x0000000000243C88 "@"
 *   insn=0x0000000000243C88 string=0x0000000000243C8C "\t"
 *   insn=0x0000000000243C88 string=0x0000000000243CF0 "\t!"
 *   insn=0x0000000000243C8C string=0x0000000000243C90 "?"
 *   insn=0x0000000000243C94 string=0x0000000000243C98 "("
 *   insn=0x0000000000243CA4 string=0x0000000000243CA8 "\t\t@"
 *   insn=0x0000000000243CA8 string=0x0000000000243CAC ")"
 *   insn=0x0000000000243CAC string=0x0000000000243CB0 "\t\t"
 *   insn=0x0000000000243CBC string=0x0000000000243CC0 "@"
 *   insn=0x0000000000243CC0 string=0x0000000000243CC4 ""
 *   insn=0x0000000000243CC4 string=0x0000000000243CC8 ""
 *   insn=0x0000000000243CCC string=0x0000000000243CD0 ""
 *   insn=0x0000000000243CD0 string=0x0000000000243CD4 ""
 *   insn=0x0000000000243CE8 string=0x0000000000243CEC "h"
 *   insn=0x0000000000243CF0 string=0x0000000000243CF4 "i"
 *   insn=0x0000000000243CFC string=0x0000000000243D00 "@"
 *   insn=0x0000000000243D00 string=0x0000000000243D04 ""
 *   insn=0x0000000000243D04 string=0x0000000000243D08 ""
 *   insn=0x0000000000243D08 string=0x0000000000243D0C "`"
 *   insn=0x0000000000243D0C string=0x0000000000243D18 ""
 *   insn=0x0000000000243D18 string=0x0000000000243D1C ""
 *   insn=0x0000000000243D20 string=0x0000000000243D24 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_create_node(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // x19
  __int64 result; // x0

  v3 = operator new(0x48u);
  *(_DWORD *)(v3 + 32) = *(_DWORD *)a2;
  *(_DWORD *)(v3 + 40) = *(_DWORD *)(a2 + 8);
  sub_56A528(v3 + 48, a2 + 16);
  result = v3;
  *(_BYTE *)(v3 + 64) = *(_BYTE *)(a2 + 32);
  *(_QWORD *)(v3 + 56) = *(_QWORD *)(a2 + 24);
  return result;
}

