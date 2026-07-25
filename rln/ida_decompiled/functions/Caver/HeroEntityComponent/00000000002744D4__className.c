/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002744D4
 * Mangled: _ZNK5Caver19HeroEntityComponent9classNameEv
 * Demangled: Caver::HeroEntityComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FFC10  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,int>>,std::string const&)
 *   0x00000000002003D0  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_create_node(std::pair<std::string const,int> const&)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 57
 *   insn=0x00000000002744E0 string=0x00000000002744E4 "S"
 *   insn=0x00000000002744E4 string=0x00000000002744E8 "i"
 *   insn=0x00000000002744F0 string=0x000000000058548B "HeroEntity"
 *   insn=0x0000000000274500 string=0x0000000000274504 "h"
 *   insn=0x0000000000274510 string=0x0000000000274524 "k"
 *   insn=0x0000000000274524 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000274548 string=0x000000000027454C "I"
 *   insn=0x000000000027454C string=0x0000000000274550 "("
 *   insn=0x0000000000274564 string=0x0000000000274568 "7"
 *   insn=0x0000000000274588 string=0x000000000027458C ""
 *   insn=0x0000000000274590 string=0x0000000000274594 """
 *   insn=0x0000000000274598 string=0x00000000001F5190 "P'"
 *   insn=0x000000000027459C string=0x00000000002745A0 "@"
 *   insn=0x00000000002745AC string=0x00000000002745B0 ""
 *   insn=0x00000000002745EC string=0x00000000002745F0 "@"
 *   insn=0x00000000002745F8 string=0x00000000002745FC ""
 *   insn=0x00000000002745FC string=0x0000000000274600 ")"
 *   insn=0x0000000000274604 string=0x0000000000274608 """
 *   insn=0x000000000027460C string=0x0000000000274610 " "
 *   insn=0x0000000000274610 string=0x0000000000274614 "@"
 *   insn=0x0000000000274630 string=0x0000000000274634 "w-"
 *   insn=0x000000000027463C string=0x0000000000274640 "6"
 *   insn=0x0000000000274644 string=0x0000000000274648 "u"
 *   insn=0x000000000027464C string=0x0000000000274650 " "
 *   insn=0x0000000000274658 string=0x000000000027465C ""
 *   insn=0x000000000027465C string=0x0000000000274660 ")"
 *   insn=0x0000000000274664 string=0x0000000000274668 """
 *   insn=0x0000000000274698 string=0x000000000027469C "M/"
 *   insn=0x00000000002746B0 string=0x00000000002746B4 "{`"
 *   insn=0x00000000002746B4 string=0x00000000002746B8 "h"
 *   insn=0x00000000002746B8 string=0x00000000002746BC ""
 *   insn=0x00000000002746BC string=0x00000000002746C0 "h"
 *   insn=0x00000000002746C8 string=0x00000000002746CC ")"
 *   insn=0x00000000002746DC string=0x00000000002746E0 ""
 *   insn=0x000000000027472C string=0x0000000000274730 "`"
 *   insn=0x0000000000274738 string=0x000000000027473C ")=G"
 *   insn=0x000000000027473C string=0x0000000000274740 "!"
 *   insn=0x0000000000274744 string=0x0000000000274748 "\t"
 *   insn=0x0000000000274744 string=0x000000000027475C "\t"
 *   insn=0x0000000000274748 string=0x000000000027474C "*"
 *   insn=0x000000000027474C string=0x0000000000274750 "\n"
 *   insn=0x0000000000274758 string=0x0000000000274768 "?"
 *   insn=0x000000000027475C string=0x0000000000274760 "*"
 *   insn=0x0000000000274760 string=0x0000000000274764 "\n"
 *   insn=0x0000000000274784 string=0x0000000000274788 "J"
 *   insn=0x000000000027478C string=0x0000000000274790 "(a"
 *   insn=0x000000000027479C string=0x00000000002747A0 "J=G"
 *   insn=0x00000000002747A0 string=0x00000000002747A4 ")!"
 *   insn=0x00000000002747A8 string=0x00000000002747AC "*"
 *   insn=0x00000000002747A8 string=0x00000000002747D8 "*"
 *   insn=0x00000000002747AC string=0x00000000002747B0 "K"
 *   insn=0x00000000002747B0 string=0x00000000002747B4 "+"
 *   insn=0x00000000002747B8 string=0x00000000002747BC "_"
 *   insn=0x00000000002747D0 string=0x00000000002747D4 "<4"
 *   insn=0x00000000002747D8 string=0x00000000002747DC "K"
 *   insn=0x00000000002747DC string=0x00000000002747E0 "+"
 *   insn=0x00000000002747E0 string=0x00000000002747E4 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::HeroEntityComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "HeroEntity");
}

