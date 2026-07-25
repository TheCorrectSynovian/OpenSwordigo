/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005210E8
 * Mangled: sub_5210E8
 * Demangled: sub_5210E8
 *
 * Callers: 43
 *   0x000000000046B060  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><int>(int &)
 *   0x0000000000488C6C  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><uint>(uint &)
 *   0x0000000000488F20  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><float>(float &)
 *   0x0000000000522294  sub_522294
 *   0x0000000000522E30  sub_522E30
 *   0x0000000000522E5C  sub_522E5C
 *   0x0000000000523020  sub_523020
 *   0x000000000052304C  sub_52304C
 *   0x000000000053F5C0  sub_53F5C0
 *   0x000000000053F5E8  sub_53F5E8
 *   0x000000000053F778  sub_53F778
 *   0x000000000053FBE8  sub_53FBE8
 *   0x000000000054606C  sub_54606C
 *   0x0000000000546320  sub_546320
 *   0x00000000005464C0  sub_5464C0
 *   0x000000000054695C  sub_54695C
 *   0x0000000000546A98  sub_546A98
 *   0x0000000000546C04  sub_546C04
 *   0x0000000000546D9C  sub_546D9C
 *   0x0000000000547234  sub_547234
 *   0x00000000005473C8  sub_5473C8
 *   0x0000000000547574  sub_547574
 *   0x0000000000547764  sub_547764
 *   0x00000000005602E0  sub_5602E0
 *   0x00000000005603BC  sub_5603BC
 *   0x00000000005604C0  sub_5604C0
 *   0x0000000000560604  sub_560604
 *   0x0000000000560770  sub_560770
 *   0x00000000005608B4  sub_5608B4
 *   0x0000000000560BC8  sub_560BC8
 *   0x0000000000560C9C  sub_560C9C
 *   0x0000000000560D9C  sub_560D9C
 *   0x0000000000560ED8  sub_560ED8
 *   0x0000000000561040  sub_561040
 *   0x000000000056117C  sub_56117C
 *   0x000000000056148C  sub_56148C
 *   0x00000000005615C4  sub_5615C4
 *   0x0000000000561714  sub_561714
 *   0x00000000005618B4  sub_5618B4
 *   0x0000000000561A68  sub_561A68
 *   0x0000000000561C08  sub_561C08
 *   0x00000000005717C4  sub_5717C4
 *   0x000000000057199C  sub_57199C
 *
 * Callees: 7
 *   0x0000000000522C5C  sub_522C5C
 *   0x000000000052D354  sub_52D354
 *   0x000000000052E184  sub_52E184
 *   0x000000000052E1EC  sub_52E1EC
 *   0x000000000052F0C0  sub_52F0C0
 *   0x000000000052F270  sub_52F270
 *   0x000000000052F2DC  sub_52F2DC
 *
 * Referenced strings: 11
 *   insn=0x000000000052111C string=0x0000000000521120 "`z"
 *   insn=0x0000000000521124 string=0x0000000000521128 "R8"
 *   insn=0x0000000000521138 string=0x000000000052113C "`~"
 *   insn=0x0000000000521140 string=0x0000000000521144 "f8"
 *   insn=0x0000000000521148 string=0x000000000052114C "@"
 *   insn=0x0000000000521150 string=0x0000000000521154 "&4"
 *   insn=0x0000000000521154 string=0x0000000000521158 "`"
 *   insn=0x0000000000521160 string=0x0000000000521164 "uv"
 *   insn=0x0000000000521174 string=0x0000000000521178 "`""
 *   insn=0x0000000000521190 string=0x0000000000521194 "78"
 *   insn=0x00000000005211A4 string=0x00000000005211A8 "M8"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_5210E8(__int64 a1, __int64 a2)
{
  __int64 v4; // x20
  _BOOL8 result; // x0

  v4 = a1 + 208;
  sub_522C5C(a1);
  if ( (unsigned __int8)sub_52F0C0(v4) )
  {
    *(_QWORD *)(a1 + 240) = sub_52D354(v4);
    if ( (unsigned __int8)sub_52F270(v4) )
      goto LABEL_3;
LABEL_7:
    *(_QWORD *)(a1 + 248) = 0;
    if ( (unsigned __int8)sub_52F2DC(v4) )
      goto LABEL_4;
LABEL_8:
    *(_QWORD *)(a1 + 256) = 0;
    goto LABEL_5;
  }
  *(_QWORD *)(a1 + 240) = 0;
  if ( !(unsigned __int8)sub_52F270(v4) )
    goto LABEL_7;
LABEL_3:
  *(_QWORD *)(a1 + 248) = sub_52E184(v4);
  if ( !(unsigned __int8)sub_52F2DC(v4) )
    goto LABEL_8;
LABEL_4:
  *(_QWORD *)(a1 + 256) = sub_52E1EC(v4);
LABEL_5:
  *(_BYTE *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = a2;
  result = a2 == 0;
  *(_BYTE *)(a1 + 225) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = result;
  return result;
}

