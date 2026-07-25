/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D86E0
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver13GUIViewLayoutEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE7_M_copyEPKSt13_Rb_tree_nodeIS7_EPSF_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_copy(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>> const*,std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>*)
 *
 * Callers: 1
 *   0x00000000001FEA40  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_copy(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>> const*,std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>*)
 *
 * Callees: 12
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F5240  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>> *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC0E0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OverlayMenuButton,Caver::OverlayMenuButton>(boost::shared_ptr<Caver::OverlayMenuButton> const*,Caver::OverlayMenuButton *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FDA70  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>> const&)
 *   0x00000000001FEA40  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_copy(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>> const*,std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>*)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 34
 *   insn=0x00000000003D8704 string=0x00000000001FDA70 "0'"
 *   insn=0x00000000003D87A4 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003D87B0 string=0x00000000001F5240 "P'"
 *   insn=0x00000000003D87B8 string=0x00000000003D87BC "u"
 *   insn=0x00000000003D87BC string=0x00000000001FD590 "0'"
 *   insn=0x00000000003D87C0 string=0x00000000003D87C4 "@"
 *   insn=0x00000000003D87E0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003D87E4 string=0x00000000003D87E8 "`"
 *   insn=0x00000000003D87EC string=0x00000000003D87F0 "NG"
 *   insn=0x00000000003D87F4 string=0x00000000003D87F8 "h"
 *   insn=0x00000000003D87FC string=0x00000000003D8800 "h"
 *   insn=0x00000000003D8804 string=0x00000000003D8808 "\t"
 *   insn=0x00000000003D8808 string=0x00000000003D880C ")"
 *   insn=0x00000000003D880C string=0x00000000003D8810 "\t"
 *   insn=0x00000000003D882C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003D8834 string=0x00000000003D8838 "V"
 *   insn=0x00000000003D883C string=0x00000000003D8840 "!"
 *   insn=0x00000000003D8860 string=0x00000000003D8864 "_s"
 *   insn=0x00000000003D8864 string=0x00000000003D8868 "i"
 *   insn=0x00000000003D8868 string=0x00000000003D886C ")"
 *   insn=0x00000000003D8878 string=0x00000000003D887C "(A"
 *   insn=0x00000000003D8880 string=0x00000000003D8884 ""
 *   insn=0x00000000003D888C string=0x00000000003D8890 "`""
 *   insn=0x00000000003D889C string=0x00000000001FC0E0 "0'"
 *   insn=0x00000000003D88B0 string=0x00000000003D88B4 "4"
 *   insn=0x00000000003D88B8 string=0x00000000003D88BC ""
 *   insn=0x00000000003D88C8 string=0x00000000003D88CC "\t@"
 *   insn=0x00000000003D88D8 string=0x00000000003D88DC ""
 *   insn=0x00000000003D88E8 string=0x00000000003D88EC "@"
 *   insn=0x00000000003D8900 string=0x00000000003D8904 "7o"
 *   insn=0x00000000003D8908 string=0x00000000003D890C "h"
 *   insn=0x00000000003D890C string=0x00000000003D8910 "!@"
 *   insn=0x00000000003D8920 string=0x00000000003D8924 ""
 *   insn=0x00000000003D892C string=0x00000000003D8930 "`z"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_copy(
        __int64 a1,
        int *a2,
        __int64 a3)
{
  __int64 v5; // x0
  int v6; // w8
  __int64 v7; // x20
  int *v8; // x22
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x21
  int v12; // w8

  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_create_node();
  v6 = *a2;
  v7 = v5;
  *(_QWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 8) = a3;
  *(_DWORD *)v5 = v6;
  if ( *((_QWORD *)a2 + 3) )
    *(_QWORD *)(v5 + 24) = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_copy();
  v8 = (int *)*((_QWORD *)a2 + 2);
  if ( v8 )
  {
    v9 = v7;
    do
    {
      std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_create_node();
      v11 = v10;
      v12 = *v8;
      *(_QWORD *)(v10 + 16) = 0;
      *(_QWORD *)(v10 + 24) = 0;
      *(_DWORD *)v10 = v12;
      *(_QWORD *)(v9 + 16) = v10;
      *(_QWORD *)(v10 + 8) = v9;
      if ( *((_QWORD *)v8 + 3) )
        *(_QWORD *)(v10 + 24) = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_copy();
      v8 = (int *)*((_QWORD *)v8 + 2);
      v9 = v11;
    }
    while ( v8 );
  }
  return v7;
}

