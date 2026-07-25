/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B4244
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver9GameEventEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::GameEvent>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FCA40  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,int>> *)
 *   0x0000000000202C60  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,std::string>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x00000000003B4250 string=0x00000000003B4254 "s"
 *   insn=0x00000000003B4254 string=0x00000000003B4258 "a&@"
 *   insn=0x00000000003B4258 string=0x00000000003B425C "`"
 *   insn=0x00000000003B4260 string=0x00000000003B4264 "a"
 *   insn=0x00000000003B4260 string=0x00000000001FCA40 "0'"
 *   insn=0x00000000003B4264 string=0x00000000003B4268 "`""
 *   insn=0x00000000003B4268 string=0x00000000003B426C "}:"
 *   insn=0x00000000003B4278 string=0x00000000003B427C ""
 *   insn=0x00000000003B427C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B4298 string=0x00000000003B429C "`""
 *   insn=0x00000000003B429C string=0x00000000003B42A0 "p:"
 *   insn=0x00000000003B42B0 string=0x00000000003B42B4 "&h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::GameEvent>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_erase();
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase();
    operator delete(v1);
  }
}

