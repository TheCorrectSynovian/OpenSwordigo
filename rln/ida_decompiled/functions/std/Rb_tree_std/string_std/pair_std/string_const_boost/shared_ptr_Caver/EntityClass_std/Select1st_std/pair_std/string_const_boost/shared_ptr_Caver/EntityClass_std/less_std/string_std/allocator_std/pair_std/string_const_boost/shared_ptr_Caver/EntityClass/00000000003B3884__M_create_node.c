/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B3884
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver11EntityClassEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>> const&)
 *
 * Callers: 1
 *   0x00000000001F3400  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>> const&)
 *
 * Callees: 15
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F46A0  Caver::GameEventManager::ProcessEvents(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FCA40  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,int>> *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000200320  boost::shared_ptr<Caver::GameEvent>::shared_ptr<Caver::GameEvent>(Caver::GameEvent *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202A80  std::vector<boost::shared_ptr<Caver::GameEvent>,std::allocator<boost::shared_ptr<Caver::GameEvent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GameEvent>*,std::vector<boost::shared_ptr<Caver::GameEvent>,std::allocator<boost::shared_ptr<Caver::GameEvent>>>>,boost::shared_ptr<Caver::GameEvent> const&)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000202C60  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,std::string>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 68
 *   insn=0x00000000003B3894 string=0x00000000003B3898 "R"
 *   insn=0x00000000003B3898 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003B389C string=0x00000000003B38A0 "`"
 *   insn=0x00000000003B38A4 string=0x00000000003B38A8 " "
 *   insn=0x00000000003B38AC string=0x00000000003B38B0 "h"
 *   insn=0x00000000003B38B4 string=0x00000000003B38B8 "h"
 *   insn=0x00000000003B38BC string=0x00000000003B38C0 "\t"
 *   insn=0x00000000003B38C0 string=0x00000000003B38C4 ")"
 *   insn=0x00000000003B38C4 string=0x00000000003B38C8 "\t"
 *   insn=0x00000000003B38DC string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003B38E0 string=0x00000000003B38E4 "s"
 *   insn=0x00000000003B38E4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B38EC string=0x00000000003B38F0 "('"
 *   insn=0x00000000003B38F0 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003B3910 string=0x00000000003B3914 "U"
 *   insn=0x00000000003B392C string=0x00000000003B3930 "3"
 *   insn=0x00000000003B3934 string=0x00000000003B3938 "*"
 *   insn=0x00000000003B3948 string=0x00000000003B394C "h"
 *   insn=0x00000000003B3958 string=0x00000000003B395C "q2"
 *   insn=0x00000000003B395C string=0x00000000003B3960 "h"
 *   insn=0x00000000003B3964 string=0x00000000003B3968 "a"A"
 *   insn=0x00000000003B3968 string=0x00000000003B396C "?"
 *   insn=0x00000000003B3970 string=0x00000000003B39A8 "`""
 *   insn=0x00000000003B3974 string=0x00000000003B3978 "("
 *   insn=0x00000000003B397C string=0x00000000003B3980 "("
 *   insn=0x00000000003B3984 string=0x00000000003B3988 "\t"
 *   insn=0x00000000003B3984 string=0x00000000003B3994 "(@"
 *   insn=0x00000000003B3988 string=0x00000000003B398C ")"
 *   insn=0x00000000003B398C string=0x00000000003B3990 "\t"
 *   insn=0x00000000003B3994 string=0x00000000003B3998 "h\n"
 *   insn=0x00000000003B39A0 string=0x00000000003B39BC "h"
 *   insn=0x00000000003B39AC string=0x00000000003B39B0 "4<"
 *   insn=0x00000000003B39B4 string=0x00000000003B39B8 "3"
 *   insn=0x00000000003B39BC string=0x00000000003B39C0 ""
 *   insn=0x00000000003B39C0 string=0x00000000003B39C4 "h"
 *   insn=0x00000000003B39C8 string=0x00000000003B39CC "h"
 *   insn=0x00000000003B39D0 string=0x00000000003B39D4 "\t@"
 *   insn=0x00000000003B39D8 string=0x00000000003B39DC "h\n@"
 *   insn=0x00000000003B39DC string=0x00000000003B39E0 ""
 *   insn=0x00000000003B39E0 string=0x00000000003B39E4 "h\n"
 *   insn=0x00000000003B39E8 string=0x00000000003B39EC "h"
 *   insn=0x00000000003B39F0 string=0x00000000003B39F4 "@"
 *   insn=0x00000000003B3A08 string=0x00000000003B3A20 ",\n"
 *   insn=0x00000000003B3A20 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003B3A28 string=0x00000000003B3A2C "4"
 *   insn=0x00000000003B3A30 string=0x00000000003B3A34 ""
 *   insn=0x00000000003B3A40 string=0x00000000003B3A44 "\t@"
 *   insn=0x00000000003B3A50 string=0x00000000003B3A54 ""
 *   insn=0x00000000003B3A60 string=0x00000000003B3A64 "@"
 *   insn=0x00000000003B3A74 string=0x00000000003B3A78 "5j"
 *   insn=0x00000000003B3A9C string=0x00000000003B3AA0 ")"
 *   insn=0x00000000003B3AAC string=0x00000000003B3AB0 "(A"
 *   insn=0x00000000003B3AB4 string=0x00000000003B3AB8 ""
 *   insn=0x00000000003B3AD8 string=0x00000000003B3ADC "3"
 *   insn=0x00000000003B3ADC string=0x00000000003B3AE0 "a&@"
 *   insn=0x00000000003B3AE0 string=0x00000000003B3AE4 "`"
 *   insn=0x00000000003B3AE8 string=0x00000000003B3AEC "a"
 *   insn=0x00000000003B3AE8 string=0x00000000001FCA40 "0'"
 *   insn=0x00000000003B3AEC string=0x00000000003B3AF0 "`""
 *   insn=0x00000000003B3AF0 string=0x00000000003B3AF4 "[<"
 *   insn=0x00000000003B3B10 string=0x00000000003B3B14 "`""
 *   insn=0x00000000003B3B14 string=0x00000000003B3B18 "R<"
 *   insn=0x00000000003B3B34 string=0x00000000003B3B38 "c7"
 *   insn=0x00000000003B3B4C string=0x00000000003B3B50 "s"
 *   insn=0x00000000003B3B50 string=0x00000000003B3B54 "`"
 *   insn=0x00000000003B3B6C string=0x00000000003B3B70 ""
 *   insn=0x00000000003B3B70 string=0x00000000003B3B74 "`"
 *   insn=0x00000000003B3B80 string=0x00000000001F46A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::_M_create_node(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // x19
  __int64 v4; // x8

  v3 = operator new(0x38u);
  sub_56A528(v3 + 32, a2);
  *(_QWORD *)(v3 + 40) = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(v3 + 48) = v4;
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
  return v3;
}

