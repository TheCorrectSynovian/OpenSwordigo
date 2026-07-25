/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BEE90
 * Mangled: _ZN5boost8functionIFvRKSsRKNS_10shared_ptrIN5Caver12StoreProductEEES2_EEaSERKSA_
 * Demangled: boost::function<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>::operator=(boost::function<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)> const&)
 *
 * Callers: 1
 *   0x00000000001FE490  boost::function<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>::operator=(boost::function<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)> const&)
 *
 * Callees: 14
 *   0x00000000001F3A70  boost::function3<void,std::string const&,bool,std::string const&>::swap(boost::function3<void,std::string const&,bool,std::string const&>&)
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000200410  boost::function3<void,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>::swap(boost::function3<void,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>&)
 *   0x0000000000201020  boost::function3<void,std::string const&,bool,std::string const&>::move_assign(boost::function3<void,std::string const&,bool,std::string const&>&)
 *   0x0000000000201D80  boost::function3<void,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>::move_assign(boost::function3<void,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>&)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000203DD0  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C700  sub_54C700
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 142
 *   insn=0x00000000004BEE9C string=0x00000000004BEEA0 "T"
 *   insn=0x00000000004BEEB0 string=0x00000000004BEEB4 "("
 *   insn=0x00000000004BEEBC string=0x00000000004BEEC0 "("
 *   insn=0x00000000004BEEC0 string=0x00000000004BEEC4 ""
 *   insn=0x00000000004BEEC0 string=0x00000000004BEEE4 "("
 *   insn=0x00000000004BEEC4 string=0x00000000004BEEC8 ""
 *   insn=0x00000000004BEECC string=0x00000000004BEED0 "  "
 *   insn=0x00000000004BEED0 string=0x00000000004BEED4 "!!"
 *   insn=0x00000000004BEEE8 string=0x00000000004BEEEC " "
 *   insn=0x00000000004BEEF8 string=0x00000000004BEEFC "E"
 *   insn=0x00000000004BEF00 string=0x00000000004BEF04 "h"
 *   insn=0x00000000004BEF04 string=0x00000000004BEF08 "("
 *   insn=0x00000000004BEF08 string=0x00000000004BEF0C ""
 *   insn=0x00000000004BEF0C string=0x00000000004BEF10 ""
 *   insn=0x00000000004BEF18 string=0x00000000004BEF1C " !"
 *   insn=0x00000000004BEF54 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004BEF5C string=0x00000000004BEF60 "h"
 *   insn=0x00000000004BEF60 string=0x00000000004BEF64 "("
 *   insn=0x00000000004BEF64 string=0x00000000004BEF68 ""
 *   insn=0x00000000004BEF68 string=0x00000000004BEF6C ""
 *   insn=0x00000000004BEF74 string=0x00000000004BEF78 " !"
 *   insn=0x00000000004BEF8C string=0x00000000004BEF90 "M\n"
 *   insn=0x00000000004BEFA8 string=0x00000000004BEFAC "U"
 *   insn=0x00000000004BEFD0 string=0x00000000004BEFD4 "k"
 *   insn=0x00000000004BEFDC string=0x00000000004BEFE0 "h"
 *   insn=0x00000000004BEFE8 string=0x00000000004BEFEC "e"
 *   insn=0x00000000004BEFF0 string=0x00000000004BEFF4 "h"
 *   insn=0x00000000004BEFF4 string=0x00000000004BEFF8 "("
 *   insn=0x00000000004BEFF8 string=0x00000000004BEFFC ""
 *   insn=0x00000000004BEFFC string=0x00000000004BF000 ""
 *   insn=0x00000000004BF008 string=0x00000000004BF00C " !"
 *   insn=0x00000000004BF04C string=0x00000000004BF050 "h"
 *   insn=0x00000000004BF050 string=0x00000000004BF054 "("
 *   insn=0x00000000004BF054 string=0x00000000004BF058 ""
 *   insn=0x00000000004BF058 string=0x00000000004BF05C ""
 *   insn=0x00000000004BF064 string=0x00000000004BF068 " !"
 *   insn=0x00000000004BF0A4 string=0x00000000004BF0A8 "H"
 *   insn=0x00000000004BF0A8 string=0x00000000004BF0AC "h"
 *   insn=0x00000000004BF0A8 string=0x00000000004BF0D0 "h"
 *   insn=0x00000000004BF0B0 string=0x00000000004BF0B4 ""
 *   insn=0x00000000004BF0B4 string=0x00000000004BF0B8 ""
 *   insn=0x00000000004BF0BC string=0x00000000004BF0C0 "a""
 *   insn=0x00000000004BF0D0 string=0x00000000004BF0D4 ""
 *   insn=0x00000000004BF0D4 string=0x00000000004BF0D8 ""
 *   insn=0x00000000004BF0D8 string=0x00000000004BF0DC ""
 *   insn=0x00000000004BF0DC string=0x00000000004BF0E0 ""
 *   insn=0x00000000004BF0E4 string=0x00000000004BF0E8 "`""
 *   insn=0x00000000004BF100 string=0x00000000004BF104 "h"
 *   insn=0x00000000004BF108 string=0x00000000004BF10C "`"
 *   insn=0x00000000004BF120 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004BF130 string=0x00000000001FD590 "0'"
 *   insn=0x00000000004BF14C string=0x00000000004BF150 "T"
 *   insn=0x00000000004BF160 string=0x00000000004BF164 "("
 *   insn=0x00000000004BF16C string=0x00000000004BF170 "("
 *   insn=0x00000000004BF170 string=0x00000000004BF174 ""
 *   insn=0x00000000004BF170 string=0x00000000004BF194 "("
 *   insn=0x00000000004BF174 string=0x00000000004BF178 ""
 *   insn=0x00000000004BF17C string=0x00000000004BF180 "  "
 *   insn=0x00000000004BF180 string=0x00000000004BF184 "!!"
 *   insn=0x00000000004BF198 string=0x00000000004BF19C " "
 *   insn=0x00000000004BF1A8 string=0x00000000004BF1AC "1"
 *   insn=0x00000000004BF1AC string=0x00000000001F3A70 "P'"
 *   insn=0x00000000004BF1B0 string=0x00000000004BF1B4 "h"
 *   insn=0x00000000004BF1B4 string=0x00000000004BF1B8 "("
 *   insn=0x00000000004BF1B8 string=0x00000000004BF1BC ""
 *   insn=0x00000000004BF1BC string=0x00000000004BF1C0 ""
 *   insn=0x00000000004BF1C8 string=0x00000000004BF1CC " !"
 *   insn=0x00000000004BF1EC string=0x00000000004BF204 "3"
 *   insn=0x00000000004BF20C string=0x00000000004BF210 "h"
 *   insn=0x00000000004BF210 string=0x00000000004BF214 "("
 *   insn=0x00000000004BF214 string=0x00000000004BF218 ""
 *   insn=0x00000000004BF218 string=0x00000000004BF21C ""
 *   insn=0x00000000004BF224 string=0x00000000004BF228 " !"
 *   insn=0x00000000004BF240 string=0x00000000004BF244 "B<"
 *   insn=0x00000000004BF258 string=0x00000000004BF25C "U"
 *   insn=0x00000000004BF280 string=0x00000000004BF284 "g"
 *   insn=0x00000000004BF28C string=0x00000000004BF290 "d"
 *   insn=0x00000000004BF298 string=0x00000000004BF29C "a"
 *   insn=0x00000000004BF2A0 string=0x00000000004BF2A4 "h"
 *   insn=0x00000000004BF2A4 string=0x00000000004BF2A8 "("
 *   insn=0x00000000004BF2A8 string=0x00000000004BF2AC ""
 *   insn=0x00000000004BF2AC string=0x00000000004BF2B0 ""
 *   insn=0x00000000004BF2B8 string=0x00000000004BF2BC " !"
 *   insn=0x00000000004BF2FC string=0x00000000004BF300 "h"
 *   insn=0x00000000004BF300 string=0x00000000004BF304 "("
 *   insn=0x00000000004BF304 string=0x00000000004BF308 ""
 *   insn=0x00000000004BF308 string=0x00000000004BF30C ""
 *   insn=0x00000000004BF314 string=0x00000000004BF318 " !"
 *   insn=0x00000000004BF32C string=0x00000000004BF330 "e\t"
 *   insn=0x00000000004BF354 string=0x00000000004BF358 "H"
 *   insn=0x00000000004BF358 string=0x00000000004BF35C "h"
 *   insn=0x00000000004BF358 string=0x00000000004BF380 "h"
 *   insn=0x00000000004BF360 string=0x00000000004BF364 ""
 *   insn=0x00000000004BF364 string=0x00000000004BF368 ""
 *   insn=0x00000000004BF36C string=0x00000000004BF370 "a""
 *   insn=0x00000000004BF380 string=0x00000000004BF384 ""
 *   insn=0x00000000004BF384 string=0x00000000004BF388 ""
 *   insn=0x00000000004BF388 string=0x00000000004BF38C ""
 *   insn=0x00000000004BF38C string=0x00000000004BF390 ""
 *   insn=0x00000000004BF394 string=0x00000000004BF398 "`""
 *   insn=0x00000000004BF3B0 string=0x00000000004BF3B4 "h"
 *   insn=0x00000000004BF3B8 string=0x00000000004BF3BC "`"
 *   insn=0x00000000004BF3DC string=0x00000000004BF3E0 "l"
 *   insn=0x00000000004BF3E4 string=0x00000000004BF3E8 "7\t"
 *   insn=0x00000000004BF418 string=0x00000000004BF41C "`"
 *   insn=0x00000000004BF420 string=0x00000000004BF424 "w"
 *   insn=0x00000000004BF438 string=0x00000000004BF43C """
 *   insn=0x00000000004BF43C string=0x00000000004BF440 "T"
 *   insn=0x00000000004BF440 string=0x00000000001F5190 "P'"
 *   insn=0x00000000004BF448 string=0x00000000004BF4DC ":"
 *   insn=0x00000000004BF468 string=0x00000000004BF46C ""
 *   insn=0x00000000004BF474 string=0x00000000004BF478 "F"
 *   insn=0x00000000004BF480 string=0x00000000004BF484 "c"
 *   insn=0x00000000004BF498 string=0x00000000004BF49C ")"
 *   insn=0x00000000004BF49C string=0x00000000004BF4A0 ""
 *   insn=0x00000000004BF4A4 string=0x00000000004BF4A8 """
 *   insn=0x00000000004BF4A8 string=0x00000000004BF4AC "9"
 *   insn=0x00000000004BF4B0 string=0x00000000004BF4B4 "@\t"
 *   insn=0x00000000004BF4B4 string=0x00000000004BF4B8 "="
 *   insn=0x00000000004BF4BC string=0x00000000004BF4C0 "_"
 *   insn=0x00000000004BF4C8 string=0x00000000004BF4CC "_"
 *   insn=0x00000000004BF4D0 string=0x00000000004BF4D4 "@"
 *   insn=0x00000000004BF4E8 string=0x00000000004BF4EC ")"
 *   insn=0x00000000004BF4FC string=0x00000000004BF500 "`"
 *   insn=0x00000000004BF504 string=0x00000000004BF508 "N4"
 *   insn=0x00000000004BF514 string=0x00000000004BF518 "("
 *   insn=0x00000000004BF520 string=0x00000000004BF524 ""
 *   insn=0x00000000004BF52C string=0x00000000004BF530 "?"
 *   insn=0x00000000004BF530 string=0x00000000004BF534 "L"
 *   insn=0x00000000004BF538 string=0x00000000004BF53C "?"
 *   insn=0x00000000004BF540 string=0x00000000004BF544 " "
 *   insn=0x00000000004BF548 string=0x00000000004BF54C "h"
 *   insn=0x00000000004BF554 string=0x00000000004BF558 "w"
 *   insn=0x00000000004BF55C string=0x00000000004BF560 "$"
 *   insn=0x00000000004BF564 string=0x00000000004BF568 "_"
 *   insn=0x00000000004BF570 string=0x00000000004BF574 "_"
 *   insn=0x00000000004BF578 string=0x00000000004BF57C "@"
 *   insn=0x00000000004BF590 string=0x00000000004BF594 "L"
 *   insn=0x00000000004BF5A0 string=0x00000000004BF5A4 "`"
 *   insn=0x00000000004BF5BC string=0x00000000004BF5C0 "?"
 *   insn=0x00000000004BF5C8 string=0x00000000004BF5CC "?"
 *   insn=0x00000000004BF5D0 string=0x00000000004BF5D4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::function<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>::operator=(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // x8
  void (__fastcall *v4)(__int128 *, __int128 *, __int64); // x8
  __int64 v6; // [xsp+168h] [xbp-38h]
  __int128 v7; // [xsp+170h] [xbp-30h] BYREF
  __int64 v8; // [xsp+180h] [xbp-20h]
  __int64 v9; // [xsp+188h] [xbp-18h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = 0;
  v3 = *a2;
  if ( *a2 )
  {
    v6 = *a2;
    if ( (v3 & 1) != 0 )
    {
      v8 = a2[3];
      v7 = *(_OWORD *)(a2 + 1);
    }
    else
    {
      (*(void (__fastcall **)(__int64 *, __int128 *, _QWORD))(v3 & 0xFFFFFFFFFFFFFFFELL))(a2 + 1, &v7, 0);
    }
  }
  boost::function3<void,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>::swap();
  if ( v6 )
  {
    if ( (v6 & 1) == 0 )
    {
      v4 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(v6 & 0xFFFFFFFFFFFFFFFELL);
      if ( v4 )
        v4(&v7, &v7, 2);
    }
  }
  return a1;
}

