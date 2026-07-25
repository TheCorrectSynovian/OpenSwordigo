/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000521E3C
 * Mangled: sub_521E3C
 * Demangled: sub_521E3C
 *
 * Callers: 50
 *   0x000000000046B060  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><int>(int &)
 *   0x0000000000488C6C  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><uint>(uint &)
 *   0x0000000000488F20  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><float>(float &)
 *   0x0000000000520D44  sub_520D44
 *   0x00000000005210A0  sub_5210A0
 *   0x00000000005216F0  sub_5216F0
 *   0x0000000000521980  sub_521980
 *   0x0000000000522294  sub_522294
 *   0x0000000000522E5C  sub_522E5C
 *   0x000000000052304C  sub_52304C
 *   0x0000000000525D94  sub_525D94
 *   0x0000000000525F4C  sub_525F4C
 *   0x000000000053F5E8  sub_53F5E8
 *   0x000000000053FBE8  sub_53FBE8
 *   0x0000000000541D0C  sub_541D0C
 *   0x000000000054230C  sub_54230C
 *   0x000000000054606C  sub_54606C
 *   0x00000000005464C0  sub_5464C0
 *   0x0000000000546A98  sub_546A98
 *   0x0000000000546D9C  sub_546D9C
 *   0x00000000005473C8  sub_5473C8
 *   0x0000000000547764  sub_547764
 *   0x0000000000548378  sub_548378
 *   0x00000000005487CC  sub_5487CC
 *   0x0000000000548C68  sub_548C68
 *   0x00000000005490A8  sub_5490A8
 *   0x0000000000549540  sub_549540
 *   0x0000000000549A70  sub_549A70
 *   0x00000000005603BC  sub_5603BC
 *   0x0000000000560604  sub_560604
 *   0x00000000005608B4  sub_5608B4
 *   0x0000000000560C9C  sub_560C9C
 *   0x0000000000560ED8  sub_560ED8
 *   0x000000000056117C  sub_56117C
 *   0x00000000005615C4  sub_5615C4
 *   0x00000000005618B4  sub_5618B4
 *   0x0000000000561C08  sub_561C08
 *   0x00000000005631CC  sub_5631CC
 *   0x000000000056354C  sub_56354C
 *   0x000000000056392C  sub_56392C
 *   0x0000000000564084  sub_564084
 *   0x000000000056432C  sub_56432C
 *   0x0000000000564634  sub_564634
 *   0x000000000056492C  sub_56492C
 *   0x0000000000564BD4  sub_564BD4
 *   0x0000000000564EDC  sub_564EDC
 *   0x00000000005717C4  sub_5717C4
 *   0x000000000057199C  sub_57199C
 *   0x0000000000571B20  sub_571B20
 *   0x0000000000571CF8  sub_571CF8
 *
 * Callees: 1
 *   0x000000000053DB28  sub_53DB28
 *
 * Referenced strings: 27
 *   insn=0x0000000000521E4C string=0x0000000000521E50 """
 *   insn=0x0000000000521E54 string=0x0000000000521E58 "?"
 *   insn=0x0000000000521E58 string=0x0000000000521E5C "?"
 *   insn=0x0000000000521E5C string=0x0000000000521E60 "?"
 *   insn=0x0000000000521E60 string=0x0000000000521E64 "?"
 *   insn=0x0000000000521E64 string=0x0000000000521E68 "? "
 *   insn=0x0000000000521E68 string=0x0000000000521E6C "?"
 *   insn=0x0000000000521E6C string=0x0000000000521E70 "?"
 *   insn=0x0000000000521E70 string=0x0000000000521E74 "?"
 *   insn=0x0000000000521E74 string=0x0000000000521E78 "? "
 *   insn=0x0000000000521E78 string=0x0000000000521E7C "?$"
 *   insn=0x0000000000521E7C string=0x0000000000521E80 "?("
 *   insn=0x0000000000521E80 string=0x0000000000521E84 "?,"
 *   insn=0x0000000000521E84 string=0x0000000000521E88 "?0"
 *   insn=0x0000000000521E88 string=0x0000000000521E8C "?4"
 *   insn=0x0000000000521E8C string=0x0000000000521E90 "?8"
 *   insn=0x0000000000521E90 string=0x0000000000521E94 "?<"
 *   insn=0x0000000000521E94 string=0x0000000000521E98 "?@"
 *   insn=0x0000000000521E98 string=0x0000000000521E9C "?D"
 *   insn=0x0000000000521E9C string=0x0000000000521EA0 "?H"
 *   insn=0x0000000000521EA0 string=0x0000000000521EA4 "?L"
 *   insn=0x0000000000521EA4 string=0x0000000000521EA8 "?P"
 *   insn=0x0000000000521EA8 string=0x0000000000521EAC "?T"
 *   insn=0x0000000000521EAC string=0x0000000000521EB0 "?X"
 *   insn=0x0000000000521EB0 string=0x0000000000521EB4 "?\"
 *   insn=0x0000000000521EB4 string=0x0000000000521EB8 """
 *   insn=0x0000000000521EB8 string=0x0000000000521EBC "#d"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_521E3C(__int64 a1)
{
  *(_QWORD *)a1 = off_6B6B70;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 192) = 8;
  *(_QWORD *)(a1 + 200) = a1 + 64;
  return sub_53DB28(a1 + 208);
}

