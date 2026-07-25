/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000488F20
 * Mangled: _ZN5boost6detail26lexical_stream_limited_srcIcSt15basic_streambufIcSt11char_traitsIcEES4_ErsIfEEbRT_
 * Demangled: boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><float>(float &)
 *
 * Callers: 2
 *   0x00000000001FD730  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><float>(float &)
 *   0x0000000000488C6C  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><uint>(uint &)
 *
 * Callees: 21
 *   0x00000000001F4D80  Caver::NewByteBufferFromAndroidAsset(std::string const&,uint *)
 *   0x00000000001F5B40  .fread
 *   0x00000000001F5F40  .fseek
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F8940  std::string::_M_replace_dispatch<std::istreambuf_iterator<char,std::char_traits<char>>>(__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>,std::istreambuf_iterator<char,std::char_traits<char>>,std::istreambuf_iterator<char,std::char_traits<char>>,std::__false_type)
 *   0x00000000001FB7B0  Caver::IsAndroidAssetsPath(std::string const&)
 *   0x00000000001FC310  .ftell
 *   0x00000000001FDDC0  .fclose
 *   0x00000000001FE440  .printf
 *   0x0000000000201180  .fopen
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000051F654  sub_51F654
 *   0x00000000005210E8  sub_5210E8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x00000000005236B8  sub_5236B8
 *   0x0000000000525888  sub_525888
 *   0x000000000055F52C  sub_55F52C
 *   0x0000000000560604  sub_560604
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 78
 *   insn=0x0000000000488F34 string=0x0000000000488F38 "V"
 *   insn=0x0000000000488F78 string=0x0000000000488F7C "=G"
 *   insn=0x0000000000488F7C string=0x0000000000488F80 "\t"
 *   insn=0x0000000000488F80 string=0x0000000000488F84 "\n"
 *   insn=0x0000000000488F94 string=0x0000000000488F98 "T`"
 *   insn=0x0000000000488F9C string=0x0000000000488FA0 "\t"
 *   insn=0x0000000000488FA4 string=0x0000000000488FA8 "*"
 *   insn=0x0000000000488FA8 string=0x0000000000488FAC "Jy"
 *   insn=0x0000000000488FAC string=0x0000000000488FB0 "*"
 *   insn=0x0000000000488FB0 string=0x0000000000488FB4 ""
 *   insn=0x0000000000488FB4 string=0x0000000000488FB8 ")"
 *   insn=0x0000000000488FBC string=0x0000000000488FC0 "\t"
 *   insn=0x0000000000488FC8 string=0x0000000000488FCC "/r"
 *   insn=0x0000000000488FCC string=0x0000000000488FD0 ""
 *   insn=0x0000000000488FD4 string=0x0000000000488FD8 ""
 *   insn=0x0000000000488FD8 string=0x0000000000488FDC ""
 *   insn=0x0000000000488FDC string=0x0000000000488FE0 " "
 *   insn=0x0000000000488FE0 string=0x0000000000488FE4 "!@"
 *   insn=0x0000000000488FE8 string=0x0000000000488FEC ""
 *   insn=0x0000000000489004 string=0x0000000000489008 ""
 *   insn=0x000000000048900C string=0x0000000000489010 "@A"
 *   insn=0x0000000000489010 string=0x0000000000489014 "\t!@"
 *   insn=0x0000000000489018 string=0x000000000048901C ")"
 *   insn=0x000000000048901C string=0x0000000000489020 "Hi)"
 *   insn=0x0000000000489024 string=0x0000000000489028 "md"
 *   insn=0x0000000000489058 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000489060 string=0x0000000000489064 "^d"
 *   insn=0x0000000000489064 string=0x0000000000489068 ""
 *   insn=0x0000000000489070 string=0x0000000000489074 ""
 *   insn=0x000000000048907C string=0x0000000000489080 "@A"
 *   insn=0x0000000000489080 string=0x0000000000489084 "\t!@"
 *   insn=0x0000000000489088 string=0x000000000048908C ")"
 *   insn=0x000000000048908C string=0x0000000000489090 "Hi)"
 *   insn=0x0000000000489094 string=0x0000000000489098 "Qd"
 *   insn=0x000000000048909C string=0x00000000004890A0 "\t"
 *   insn=0x00000000004890BC string=0x00000000004890C0 "T"
 *   insn=0x00000000004890D4 string=0x00000000004890D8 ""
 *   insn=0x00000000004890E0 string=0x00000000004890E4 "H]"
 *   insn=0x00000000004890E8 string=0x00000000004890EC "ZY"
 *   insn=0x00000000004890F4 string=0x00000000004890F8 "a"
 *   insn=0x00000000004890F8 string=0x00000000004890FC ""
 *   insn=0x00000000004890FC string=0x0000000000489100 ")"
 *   insn=0x0000000000489108 string=0x000000000048910C """
 *   insn=0x000000000048911C string=0x0000000000489120 ""
 *   insn=0x0000000000489120 string=0x00000000001F8940 "0'"
 *   insn=0x0000000000489144 string=0x0000000000489148 ""
 *   insn=0x0000000000489158 string=0x000000000048915C "@"
 *   insn=0x0000000000489160 string=0x0000000000489164 ""
 *   insn=0x0000000000489164 string=0x0000000000489168 "Ii("
 *   insn=0x000000000048916C string=0x0000000000489170 "d"
 *   insn=0x0000000000489180 string=0x00000000004891A0 "L"
 *   insn=0x00000000004891C0 string=0x00000000004891C4 ""
 *   insn=0x00000000004891D8 string=0x00000000004891DC ""
 *   insn=0x00000000004891F4 string=0x00000000004891F8 "U"
 *   insn=0x0000000000489208 string=0x000000000048920C ""
 *   insn=0x000000000048921C string=0x0000000000489220 "K"
 *   insn=0x0000000000489220 string=0x0000000000489224 "J"
 *   insn=0x0000000000489230 string=0x0000000000489234 "@"
 *   insn=0x0000000000489238 string=0x000000000048923C ""
 *   insn=0x000000000048923C string=0x0000000000489240 "Ii("
 *   insn=0x0000000000489250 string=0x0000000000489254 ">"
 *   insn=0x0000000000489270 string=0x0000000000489274 "O"
 *   insn=0x0000000000489274 string=0x00000000001FB7B0 "0'"
 *   insn=0x0000000000489294 string=0x00000000001F4D80 "P'"
 *   insn=0x0000000000489298 string=0x000000000048929C "a"
 *   insn=0x000000000048929C string=0x00000000005969E5 "rb"
 *   insn=0x00000000004892A8 string=0x00000000004892AC "4"
 *   insn=0x00000000004892B8 string=0x00000000004892BC "!"
 *   insn=0x00000000004892BC string=0x00000000001F5F40 "P'"
 *   insn=0x00000000004892C4 string=0x00000000001FC310 "0'"
 *   insn=0x00000000004892E4 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004892F8 string=0x00000000004892FC "S"
 *   insn=0x00000000004892F8 string=0x00000000001F5B40 "P'"
 *   insn=0x00000000004892FC string=0x0000000000489300 "u"
 *   insn=0x0000000000489308 string=0x00000000001FDDC0 "0'"
 *   insn=0x0000000000489310 string=0x0000000000489314 "`"
 *   insn=0x0000000000489314 string=0x000000000048931C "I"
 *   insn=0x0000000000489314 string=0x00000000005969E8 "ERROR: Could not find '%s'\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall boost::detail::lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>>::operator>><float>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // x8
  __int64 v4; // x9
  _QWORD *v6; // x0
  _BOOL4 v7; // w19
  char *v8; // x8
  __int64 (__fastcall **v10)(); // [xsp+290h] [xbp-150h] BYREF
  __int64 v11; // [xsp+298h] [xbp-148h]
  _QWORD v12[3]; // [xsp+2A0h] [xbp-140h] BYREF
  int v13; // [xsp+2B8h] [xbp-128h]
  __int64 v14; // [xsp+378h] [xbp-68h]
  __int16 v15; // [xsp+380h] [xbp-60h]
  __int64 v16; // [xsp+388h] [xbp-58h]
  __int64 v17; // [xsp+390h] [xbp-50h]
  __int64 v18; // [xsp+398h] [xbp-48h]
  __int64 v19; // [xsp+3A0h] [xbp-40h]
  __int64 v20; // [xsp+3A8h] [xbp-38h]

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
  v12[1] = 9;
  v6 = (_QWORD *)sub_525888(&v10, a2);
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

