/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046B060
 * Mangled: _ZN5boost6detail26lexical_stream_limited_srcIcSt15basic_streambufIcSt11char_traitsIcEES4_ErsIiEEbRT_
 * Demangled: boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><int>(int &)
 *
 * Callers: 2
 *   0x00000000001FDCB0  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><int>(int &)
 *   0x000000000046AF3C  boost::detail::lexical_cast<int,std::string,false,char>(boost::call_traits<std::string>::param_type,char *,ulong)
 *
 * Callees: 15
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F4CF0  std::bad_cast::~bad_cast()
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x0000000000202070  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone_impl(boost::exception_detail::error_info_injector<boost::bad_lexical_cast> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000046B2E0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl()
 *   0x00000000005210E8  sub_5210E8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x0000000000523408  sub_523408
 *   0x00000000005236B8  sub_5236B8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 49
 *   insn=0x000000000046B074 string=0x000000000046B078 "V"
 *   insn=0x000000000046B0A0 string=0x000000000046B0A4 "f"
 *   insn=0x000000000046B0B8 string=0x000000000046B0BC "=G"
 *   insn=0x000000000046B0BC string=0x000000000046B0C0 "\t"
 *   insn=0x000000000046B0C0 string=0x000000000046B0C4 "\n"
 *   insn=0x000000000046B0DC string=0x000000000046B0E0 "\t"
 *   insn=0x000000000046B0E4 string=0x000000000046B0E8 "*"
 *   insn=0x000000000046B0E8 string=0x000000000046B0EC "Jy"
 *   insn=0x000000000046B0EC string=0x000000000046B0F0 "*"
 *   insn=0x000000000046B0F0 string=0x000000000046B0F4 ""
 *   insn=0x000000000046B0FC string=0x000000000046B100 "\t"
 *   insn=0x000000000046B10C string=0x000000000046B110 ""
 *   insn=0x000000000046B114 string=0x000000000046B118 ""
 *   insn=0x000000000046B118 string=0x000000000046B11C ""
 *   insn=0x000000000046B11C string=0x000000000046B120 " "
 *   insn=0x000000000046B120 string=0x000000000046B124 "!@"
 *   insn=0x000000000046B128 string=0x000000000046B12C ""
 *   insn=0x000000000046B134 string=0x000000000046B138 "`"
 *   insn=0x000000000046B144 string=0x000000000046B148 ""
 *   insn=0x000000000046B14C string=0x000000000046B150 "@A"
 *   insn=0x000000000046B150 string=0x000000000046B154 "\t!@"
 *   insn=0x000000000046B158 string=0x000000000046B15C ")"
 *   insn=0x000000000046B15C string=0x000000000046B160 "Hi)"
 *   insn=0x000000000046B178 string=0x000000000046B198 "N,"
 *   insn=0x000000000046B198 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000046B1A4 string=0x000000000046B1A8 ""
 *   insn=0x000000000046B1B0 string=0x000000000046B1B4 ""
 *   insn=0x000000000046B1BC string=0x000000000046B1C0 "@A"
 *   insn=0x000000000046B1C0 string=0x000000000046B1C4 "\t!@"
 *   insn=0x000000000046B1C8 string=0x000000000046B1CC ")"
 *   insn=0x000000000046B1CC string=0x000000000046B1D0 "Hi)"
 *   insn=0x000000000046B1E0 string=0x000000000046B1E4 "Z"
 *   insn=0x000000000046B204 string=0x00000000001F9460 "0'"
 *   insn=0x000000000046B20C string=0x000000000046B210 ")"
 *   insn=0x000000000046B214 string=0x000000000046B218 ""
 *   insn=0x000000000046B21C string=0x000000000046B220 "*A"
 *   insn=0x000000000046B220 string=0x000000000046B224 ")"
 *   insn=0x000000000046B248 string=0x000000000046B24C "!"
 *   insn=0x000000000046B24C string=0x000000000046B250 "BlE"
 *   insn=0x000000000046B25C string=0x00000000001FB4A0 "0'"
 *   insn=0x000000000046B260 string=0x000000000046B264 ""
 *   insn=0x000000000046B268 string=0x000000000046B26C "A"
 *   insn=0x000000000046B278 string=0x000000000046B27C "\t"
 *   insn=0x000000000046B27C string=0x000000000046B280 ")"
 *   insn=0x000000000046B284 string=0x000000000046B288 " "
 *   insn=0x000000000046B290 string=0x000000000046B294 "t"
 *   insn=0x000000000046B290 string=0x00000000001F4CF0 "P'"
 *   insn=0x000000000046B29C string=0x00000000001F41F0 "P'"
 *   insn=0x000000000046B2A8 string=0x00000000001F8280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall boost::detail::lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>>::operator>><int>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // x8
  __int64 v4; // x9
  _QWORD *v6; // x0
  _BOOL4 v7; // w19
  char *v8; // x8
  __int64 (__fastcall **v10)(); // [xsp+70h] [xbp-150h] BYREF
  __int64 v11; // [xsp+78h] [xbp-148h]
  _QWORD v12[3]; // [xsp+80h] [xbp-140h] BYREF
  int v13; // [xsp+98h] [xbp-128h]
  __int64 v14; // [xsp+158h] [xbp-68h]
  __int16 v15; // [xsp+160h] [xbp-60h]
  __int64 v16; // [xsp+168h] [xbp-58h]
  __int64 v17; // [xsp+170h] [xbp-50h]
  __int64 v18; // [xsp+178h] [xbp-48h]
  __int64 v19; // [xsp+180h] [xbp-40h]
  __int64 v20; // [xsp+188h] [xbp-38h]

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
  v6 = (_QWORD *)sub_523408(&v10, a2);
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

