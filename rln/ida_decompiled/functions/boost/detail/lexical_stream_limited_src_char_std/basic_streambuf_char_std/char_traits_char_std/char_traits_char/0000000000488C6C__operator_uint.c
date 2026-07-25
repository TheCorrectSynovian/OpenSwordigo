/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000488C6C
 * Mangled: _ZN5boost6detail26lexical_stream_limited_srcIcSt15basic_streambufIcSt11char_traitsIcEES4_ErsIjEEbRT_
 * Demangled: boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><uint>(uint &)
 *
 * Callers: 2
 *   0x00000000001F6C90  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><uint>(uint &)
 *   0x0000000000488B48  boost::detail::lexical_cast<uint,std::string,false,char>(boost::call_traits<std::string>::param_type,char *,ulong)
 *
 * Callees: 14
 *   0x00000000001F4CF0  std::bad_cast::~bad_cast()
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6F30  boost::throw_exception<boost::bad_lexical_cast>(boost::bad_lexical_cast const&)
 *   0x00000000001FD730  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><float>(float &)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000488F20  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><float>(float &)
 *   0x00000000005210E8  sub_5210E8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x00000000005236B8  sub_5236B8
 *   0x0000000000525138  sub_525138
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 55
 *   insn=0x0000000000488C80 string=0x0000000000488C84 "V"
 *   insn=0x0000000000488CAC string=0x0000000000488CB0 "cd"
 *   insn=0x0000000000488CC4 string=0x0000000000488CC8 "=G"
 *   insn=0x0000000000488CC8 string=0x0000000000488CCC "\t"
 *   insn=0x0000000000488CCC string=0x0000000000488CD0 "\n"
 *   insn=0x0000000000488CE8 string=0x0000000000488CEC "\t"
 *   insn=0x0000000000488CF0 string=0x0000000000488CF4 "*"
 *   insn=0x0000000000488CF4 string=0x0000000000488CF8 "Jy"
 *   insn=0x0000000000488CF8 string=0x0000000000488CFC "*"
 *   insn=0x0000000000488CFC string=0x0000000000488D00 ""
 *   insn=0x0000000000488D08 string=0x0000000000488D0C "\t"
 *   insn=0x0000000000488D14 string=0x0000000000488D18 "q"
 *   insn=0x0000000000488D18 string=0x0000000000488D1C ""
 *   insn=0x0000000000488D20 string=0x0000000000488D24 ""
 *   insn=0x0000000000488D24 string=0x0000000000488D28 ""
 *   insn=0x0000000000488D28 string=0x0000000000488D2C " "
 *   insn=0x0000000000488D2C string=0x0000000000488D30 "!@"
 *   insn=0x0000000000488D34 string=0x0000000000488D38 ""
 *   insn=0x0000000000488D40 string=0x0000000000488D44 "]j"
 *   insn=0x0000000000488D50 string=0x0000000000488D54 ""
 *   insn=0x0000000000488D58 string=0x0000000000488D5C "@A"
 *   insn=0x0000000000488D5C string=0x0000000000488D60 "\t!@"
 *   insn=0x0000000000488D64 string=0x0000000000488D68 ")"
 *   insn=0x0000000000488D68 string=0x0000000000488D6C "Hi)"
 *   insn=0x0000000000488D84 string=0x0000000000488DA4 "K"
 *   insn=0x0000000000488DA4 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000488DAC string=0x0000000000488DB0 "e"
 *   insn=0x0000000000488DB0 string=0x0000000000488DB4 ""
 *   insn=0x0000000000488DBC string=0x0000000000488DC0 ""
 *   insn=0x0000000000488DC8 string=0x0000000000488DCC "@A"
 *   insn=0x0000000000488DCC string=0x0000000000488DD0 "\t!@"
 *   insn=0x0000000000488DD4 string=0x0000000000488DD8 ")"
 *   insn=0x0000000000488DD8 string=0x0000000000488DDC "Hi)"
 *   insn=0x0000000000488DEC string=0x0000000000488DF0 "W"
 *   insn=0x0000000000488E0C string=0x0000000000488E10 "V"
 *   insn=0x0000000000488E1C string=0x0000000000488E20 "3"
 *   insn=0x0000000000488E40 string=0x0000000000488E44 "9"
 *   insn=0x0000000000488E48 string=0x0000000000488E4C "yG"
 *   insn=0x0000000000488E4C string=0x0000000000488E50 "A"
 *   insn=0x0000000000488E5C string=0x0000000000488E60 "\t"
 *   insn=0x0000000000488E60 string=0x0000000000488E64 ""
 *   insn=0x0000000000488E70 string=0x0000000000488E74 "/"
 *   insn=0x0000000000488E74 string=0x0000000000488E78 " "
 *   insn=0x0000000000488E74 string=0x00000000001FD730 "0'"
 *   insn=0x0000000000488EC0 string=0x0000000000488EC4 ""
 *   insn=0x0000000000488EC4 string=0x0000000000488EC8 ")"
 *   insn=0x0000000000488ECC string=0x0000000000488ED0 "J"
 *   insn=0x0000000000488ED0 string=0x0000000000488ED4 "A"
 *   insn=0x0000000000488ED4 string=0x0000000000488ED8 " "
 *   insn=0x0000000000488EDC string=0x0000000000488EE0 "@"
 *   insn=0x0000000000488EEC string=0x00000000001F6F30 "0'"
 *   insn=0x0000000000488EF8 string=0x0000000000488EFC "}"
 *   insn=0x0000000000488EFC string=0x00000000001F4CF0 "P'"
 *   insn=0x0000000000488F10 string=0x0000000000488F14 "m"
 *   insn=0x0000000000488F18 string=0x0000000000488F1C "j"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall boost::detail::lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>>::operator>><unsigned int>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // x8
  __int64 v4; // x9
  _QWORD *v6; // x0
  _BOOL4 v7; // w19
  char *v8; // x8
  __int64 (__fastcall **v10)(); // [xsp+B8h] [xbp-150h] BYREF
  __int64 v11; // [xsp+C0h] [xbp-148h]
  _QWORD v12[3]; // [xsp+C8h] [xbp-140h] BYREF
  int v13; // [xsp+E0h] [xbp-128h]
  __int64 v14; // [xsp+1A0h] [xbp-68h]
  __int16 v15; // [xsp+1A8h] [xbp-60h]
  __int64 v16; // [xsp+1B0h] [xbp-58h]
  __int64 v17; // [xsp+1B8h] [xbp-50h]
  __int64 v18; // [xsp+1C0h] [xbp-48h]
  __int64 v19; // [xsp+1C8h] [xbp-40h]
  __int64 v20; // [xsp+1D0h] [xbp-38h]

  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = a1[8];
  v4 = a1[9];
  a1[1] = v3;
  a1[2] = v3;
  a1[3] = v4;
  sub_521E3C(v12);
  v14 = 0;
  v15 = 0;
  v18 = 0;
  v19 = 0;
  v16 = 0;
  v17 = 0;
  v12[0] = off_6B6BD0;
  v10 = off_6B6BA8;
  v11 = 0;
  sub_5210E8(v12, a1);
  v13 &= ~0x1000u;
  v12[1] = 6;
  v6 = (_QWORD *)sub_525138(&v10, a2);
  v7 = 0;
  v8 = (char *)v6 + *(_QWORD *)(*v6 - 24LL);
  if ( v8 && (*((_DWORD *)v8 + 8) & 5) == 0 )
    v7 = sub_5236B8(&v10) == -1;
  v10 = off_6B6BA8;
  v12[0] = off_6B6BD0;
  v11 = 0;
  sub_5221DC(v12);
  return v7;
}

