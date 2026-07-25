/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C1668
 * Mangled: _ZN5Caver13PlayerProfile8FilenameEv
 * Demangled: Caver::PlayerProfile::Filename(void)
 *
 * Callers: 1
 *   0x00000000003C0F08  Caver::PlayerProfile::SaveToProtobufMessage(Caver::Proto::PlayerProfile *)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000005677D4  sub_5677D4
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 20
 *   insn=0x00000000003C1674 string=0x00000000003C1678 "T"
 *   insn=0x00000000003C1694 string=0x0000000000591F73 ".gplayer"
 *   insn=0x00000000003C16A0 string=0x00000000003C16A4 "L"
 *   insn=0x00000000003C16C8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003C16CC string=0x00000000003C16D0 "*"
 *   insn=0x00000000003C16D0 string=0x00000000003C16D4 "J"
 *   insn=0x00000000003C16D8 string=0x00000000003C16DC "(a"
 *   insn=0x00000000003C16E4 string=0x00000000003C16E8 "\n"
 *   insn=0x00000000003C16E8 string=0x00000000003C16EC "J=G"
 *   insn=0x00000000003C16EC string=0x00000000003C16F0 ")!"
 *   insn=0x00000000003C16F4 string=0x00000000003C16F8 "*"
 *   insn=0x00000000003C16F4 string=0x00000000003C1724 "*"
 *   insn=0x00000000003C16F8 string=0x00000000003C16FC "K"
 *   insn=0x00000000003C16FC string=0x00000000003C1700 "+"
 *   insn=0x00000000003C1704 string=0x00000000003C1708 "_"
 *   insn=0x00000000003C1714 string=0x00000000003C1718 "#"
 *   insn=0x00000000003C171C string=0x00000000003C1720 "i"
 *   insn=0x00000000003C1724 string=0x00000000003C1728 "K"
 *   insn=0x00000000003C1728 string=0x00000000003C172C "+"
 *   insn=0x00000000003C172C string=0x00000000003C1730 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::PlayerProfile::Filename@<X0>(Caver::PlayerProfile *this@<X0>, __int64 a2@<X8>)
{
  _ReadStatusReg(TPIDR_EL0);
  sub_56A528(a2, (char *)this + 24);
  return sub_5677D4(a2, ".gplayer", 8);
}

