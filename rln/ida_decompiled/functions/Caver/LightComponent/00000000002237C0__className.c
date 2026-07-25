/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002237C0
 * Mangled: _ZNK5Caver14LightComponent9classNameEv
 * Demangled: Caver::LightComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F5600  std::vector<boost::intrusive_ptr<Caver::LightComponent>,std::allocator<boost::intrusive_ptr<Caver::LightComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::LightComponent>*,std::vector<boost::intrusive_ptr<Caver::LightComponent>,std::allocator<boost::intrusive_ptr<Caver::LightComponent>>>>,boost::intrusive_ptr<Caver::LightComponent> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 47
 *   insn=0x00000000002237CC string=0x00000000002237D0 "S"
 *   insn=0x00000000002237D0 string=0x00000000002237D4 "i"
 *   insn=0x00000000002237DC string=0x0000000000583FD5 "Light"
 *   insn=0x00000000002237EC string=0x00000000002237F0 "h"
 *   insn=0x0000000000223810 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000022382C string=0x0000000000223830 "V"
 *   insn=0x0000000000223858 string=0x000000000022385C "h\n@"
 *   insn=0x0000000000223858 string=0x0000000000223868 "h"
 *   insn=0x000000000022385C string=0x0000000000223860 ""
 *   insn=0x0000000000223860 string=0x0000000000223864 "h\n"
 *   insn=0x0000000000223868 string=0x000000000022386C "Q@"
 *   insn=0x000000000022387C string=0x00000000002238EC "h\n@"
 *   insn=0x0000000000223880 string=0x0000000000223884 "h\n@"
 *   insn=0x0000000000223884 string=0x0000000000223888 ""
 *   insn=0x0000000000223888 string=0x000000000022388C "h\n"
 *   insn=0x0000000000223890 string=0x0000000000223894 "?"
 *   insn=0x0000000000223894 string=0x0000000000223898 " "
 *   insn=0x0000000000223898 string=0x000000000022389C "3"
 *   insn=0x000000000022389C string=0x00000000002238A0 "h\n@"
 *   insn=0x00000000002238A0 string=0x00000000002238A4 ""
 *   insn=0x00000000002238A4 string=0x00000000002238A8 "h\n"
 *   insn=0x00000000002238B4 string=0x00000000002238B8 ""
 *   insn=0x00000000002238B4 string=0x00000000002238D0 "@"
 *   insn=0x00000000002238C0 string=0x00000000002238C4 "OG"
 *   insn=0x00000000002238C4 string=0x00000000001F5600 "P'"
 *   insn=0x00000000002238D0 string=0x00000000002238D4 ""
 *   insn=0x00000000002238D4 string=0x00000000002238D8 ""
 *   insn=0x00000000002238DC string=0x00000000002238E0 ""
 *   insn=0x00000000002238E0 string=0x00000000002238E4 ""
 *   insn=0x00000000002238EC string=0x00000000002238F0 ""
 *   insn=0x00000000002238F0 string=0x00000000002238F4 "h\n"
 *   insn=0x00000000002238F8 string=0x00000000002238FC "h"
 *   insn=0x0000000000223900 string=0x0000000000223904 ""
 *   insn=0x0000000000223924 string=0x0000000000223940 "dJ"
 *   insn=0x000000000022394C string=0x0000000000223950 "h"
 *   insn=0x0000000000223950 string=0x0000000000223954 "\t\t@"
 *   insn=0x0000000000223950 string=0x000000000022397C "h\n@"
 *   insn=0x0000000000223954 string=0x0000000000223958 ")"
 *   insn=0x0000000000223958 string=0x000000000022395C "\t\t"
 *   insn=0x0000000000223960 string=0x0000000000223964 "\t"
 *   insn=0x0000000000223964 string=0x0000000000223968 ")"
 *   insn=0x000000000022396C string=0x0000000000223970 " "
 *   insn=0x000000000022397C string=0x0000000000223980 ""
 *   insn=0x0000000000223980 string=0x0000000000223984 "h\n"
 *   insn=0x0000000000223988 string=0x000000000022398C "h"
 *   insn=0x000000000022398C string=0x0000000000223990 ""
 *   insn=0x00000000002239A0 string=0x00000000002239A4 "j"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::LightComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Light");
}

