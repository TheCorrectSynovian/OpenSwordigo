/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000433D1C
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver8GUILabelEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>> const&)
 *
 * Callers: 1
 *   0x00000000001FA9E0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>> const&)
 *
 * Callees: 12
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F51F0  std::_Rb_tree<std::string,std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,std::_Select1st<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C700  sub_54C700
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 48
 *   insn=0x0000000000433D2C string=0x0000000000433D30 ","
 *   insn=0x0000000000433D30 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000433D34 string=0x0000000000433D38 "`"
 *   insn=0x0000000000433D44 string=0x0000000000433D48 "h"
 *   insn=0x0000000000433D4C string=0x0000000000433D50 "h"
 *   insn=0x0000000000433D54 string=0x0000000000433D58 "\t"
 *   insn=0x0000000000433D58 string=0x0000000000433D5C ")"
 *   insn=0x0000000000433D5C string=0x0000000000433D60 "\t"
 *   insn=0x0000000000433D74 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000433D78 string=0x0000000000433D7C "M"
 *   insn=0x0000000000433D7C string=0x0000000000433D80 "|;"
 *   insn=0x0000000000433D7C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000433D88 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000433D90 string=0x0000000000433D94 "ni"
 *   insn=0x0000000000433DC0 string=0x0000000000433DC4 "`"
 *   insn=0x0000000000433DC8 string=0x0000000000433DCC "w"
 *   insn=0x0000000000433DE0 string=0x0000000000433DE4 """
 *   insn=0x0000000000433DE8 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000433DF0 string=0x0000000000433E84 ":"
 *   insn=0x0000000000433E00 string=0x0000000000433E04 "?b"
 *   insn=0x0000000000433E10 string=0x0000000000433E14 ""
 *   insn=0x0000000000433E28 string=0x0000000000433E2C "c"
 *   insn=0x0000000000433E40 string=0x0000000000433E44 ")"
 *   insn=0x0000000000433E44 string=0x0000000000433E48 ""
 *   insn=0x0000000000433E4C string=0x0000000000433E50 """
 *   insn=0x0000000000433E58 string=0x0000000000433E5C "@\t"
 *   insn=0x0000000000433E5C string=0x0000000000433E60 "="
 *   insn=0x0000000000433E64 string=0x0000000000433E68 "_"
 *   insn=0x0000000000433E70 string=0x0000000000433E74 "_"
 *   insn=0x0000000000433E78 string=0x0000000000433E7C "@"
 *   insn=0x0000000000433EA4 string=0x0000000000433EA8 "`"
 *   insn=0x0000000000433EBC string=0x0000000000433EC0 "("
 *   insn=0x0000000000433ED4 string=0x0000000000433ED8 "?"
 *   insn=0x0000000000433ED8 string=0x0000000000433EDC "L"
 *   insn=0x0000000000433EE0 string=0x0000000000433EE4 "?"
 *   insn=0x0000000000433EE8 string=0x0000000000433EEC " "
 *   insn=0x0000000000433EF0 string=0x0000000000433EF4 "h"
 *   insn=0x0000000000433EFC string=0x0000000000433F00 "w"
 *   insn=0x0000000000433F04 string=0x0000000000433F08 "$"
 *   insn=0x0000000000433F0C string=0x0000000000433F10 "_"
 *   insn=0x0000000000433F18 string=0x0000000000433F1C "_"
 *   insn=0x0000000000433F20 string=0x0000000000433F24 "@"
 *   insn=0x0000000000433F38 string=0x0000000000433F3C "L"
 *   insn=0x0000000000433F48 string=0x0000000000433F4C "`"
 *   insn=0x0000000000433F64 string=0x0000000000433F68 "?"
 *   insn=0x0000000000433F70 string=0x0000000000433F74 "?"
 *   insn=0x0000000000433F78 string=0x0000000000433F7C " "
 *   insn=0x0000000000433F8C string=0x00000000001F51F0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_create_node(
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

