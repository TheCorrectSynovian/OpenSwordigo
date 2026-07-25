/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003805F0
 * Mangled: _ZNSt8_Rb_treeISsSsSt9_IdentityISsESt4lessISsESaISsEE14_M_create_nodeERKSs
 * Demangled: std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_create_node(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F7300  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_create_node(std::string const&)
 *
 * Callees: 12
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FE0F0  std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C700  sub_54C700
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 41
 *   insn=0x0000000000380604 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000380608 string=0x000000000038060C "`"
 *   insn=0x0000000000380628 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000038062C string=0x0000000000380630 " "
 *   insn=0x0000000000380630 string=0x0000000000380634 "O\t"
 *   insn=0x0000000000380630 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000038063C string=0x00000000001FD590 "0'"
 *   insn=0x0000000000380644 string=0x0000000000380648 "A7"
 *   insn=0x0000000000380674 string=0x0000000000380678 "`"
 *   insn=0x000000000038067C string=0x0000000000380680 "w"
 *   insn=0x0000000000380694 string=0x0000000000380698 """
 *   insn=0x000000000038069C string=0x00000000001F5190 "P'"
 *   insn=0x00000000003806A4 string=0x0000000000380738 ":"
 *   insn=0x00000000003806C4 string=0x00000000003806C8 ""
 *   insn=0x00000000003806DC string=0x00000000003806E0 "c"
 *   insn=0x00000000003806F4 string=0x00000000003806F8 ")"
 *   insn=0x00000000003806F8 string=0x00000000003806FC ""
 *   insn=0x0000000000380700 string=0x0000000000380704 """
 *   insn=0x000000000038070C string=0x0000000000380710 "@\t"
 *   insn=0x0000000000380710 string=0x0000000000380714 "="
 *   insn=0x0000000000380718 string=0x000000000038071C "_"
 *   insn=0x0000000000380724 string=0x0000000000380728 "_"
 *   insn=0x000000000038072C string=0x0000000000380730 "@"
 *   insn=0x0000000000380758 string=0x000000000038075C "`"
 *   insn=0x0000000000380770 string=0x0000000000380774 "("
 *   insn=0x0000000000380788 string=0x000000000038078C "?"
 *   insn=0x000000000038078C string=0x0000000000380790 "L"
 *   insn=0x0000000000380794 string=0x0000000000380798 "?"
 *   insn=0x000000000038079C string=0x00000000003807A0 " "
 *   insn=0x00000000003807A4 string=0x00000000003807A8 "h"
 *   insn=0x00000000003807B0 string=0x00000000003807B4 "w"
 *   insn=0x00000000003807B8 string=0x00000000003807BC "$"
 *   insn=0x00000000003807C0 string=0x00000000003807C4 "_"
 *   insn=0x00000000003807CC string=0x00000000003807D0 "_"
 *   insn=0x00000000003807D4 string=0x00000000003807D8 "@"
 *   insn=0x00000000003807EC string=0x00000000003807F0 "L"
 *   insn=0x00000000003807FC string=0x0000000000380800 "`"
 *   insn=0x0000000000380818 string=0x000000000038081C "?"
 *   insn=0x0000000000380824 string=0x0000000000380828 "?"
 *   insn=0x000000000038082C string=0x0000000000380830 " "
 *   insn=0x000000000038083C string=0x0000000000380840 ","
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_create_node(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // x19

  v3 = operator new(0x28u);
  sub_56A528(v3 + 32, a2);
  return v3;
}

