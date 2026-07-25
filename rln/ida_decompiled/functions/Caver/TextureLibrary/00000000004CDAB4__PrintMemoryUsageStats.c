/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CDAB4
 * Mangled: _ZN5Caver14TextureLibrary21PrintMemoryUsageStatsEv
 * Demangled: Caver::TextureLibrary::PrintMemoryUsageStats(void)
 *
 * Callers: 1
 *   0x00000000001FE360  Caver::TextureLibrary::PrintMemoryUsageStats(void)
 *
 * Callees: 13
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7C40  .puts
 *   0x00000000001F8A70  std::__introsort_loop<__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>>(__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>)
 *   0x00000000001FBBB0  .memmove
 *   0x00000000001FE440  .printf
 *   0x00000000001FEAE0  std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,Caver::Texture * const&)
 *   0x00000000004CDAA0  Caver::TextureSizeSortPredicate(Caver::Texture const*,Caver::Texture const*)
 *   0x000000000054C640  sub_54C640
 *   0x000000000056918C  sub_56918C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 111
 *   insn=0x00000000004CDAD4 string=0x00000000004CDAD8 "X"
 *   insn=0x00000000004CDAD8 string=0x00000000004CDADC ""
 *   insn=0x00000000004CDAF4 string=0x00000000004CDAF8 "@"
 *   insn=0x00000000004CDB04 string=0x00000000004CDB0C "i"
 *   insn=0x00000000004CDB18 string=0x00000000004CDB1C "\t"
 *   insn=0x00000000004CDB20 string=0x00000000004CDB24 "!"
 *   insn=0x00000000004CDB58 string=0x00000000004CDB5C "t"
 *   insn=0x00000000004CDB58 string=0x00000000004CDB70 "u"
 *   insn=0x00000000004CDB5C string=0x00000000004CDD2C "@"
 *   insn=0x00000000004CDB74 string=0x00000000004CDB78 ""
 *   insn=0x00000000004CDB7C string=0x00000000004CDB80 """
 *   insn=0x00000000004CDB84 string=0x00000000004CDB88 "c"
 *   insn=0x00000000004CDB88 string=0x00000000004CDAA0 "H@"
 *   insn=0x00000000004CDB94 string=0x00000000001F8A70 "0'"
 *   insn=0x00000000004CDBB8 string=0x00000000004CDBBC "JI@"
 *   insn=0x00000000004CDBBC string=0x00000000004CDBC0 "?"
 *   insn=0x00000000004CDBC0 string=0x00000000004CDBC4 "-"
 *   insn=0x00000000004CDBC4 string=0x00000000004CDBE8 "\n"
 *   insn=0x00000000004CDBCC string=0x00000000004CDBD0 ""
 *   insn=0x00000000004CDBDC string=0x00000000001FBBB0 "0'"
 *   insn=0x00000000004CDBE8 string=0x00000000004CDBEC "JI@"
 *   insn=0x00000000004CDBEC string=0x00000000004CDBF0 "?"
 *   insn=0x00000000004CDBF4 string=0x00000000004CDBF8 "m"
 *   insn=0x00000000004CDBFC string=0x00000000004CDC00 ""
 *   insn=0x00000000004CDC04 string=0x00000000004CDC08 "K"
 *   insn=0x00000000004CDC08 string=0x00000000004CDC0C "\n"
 *   insn=0x00000000004CDC0C string=0x00000000004CDC10 "JI@"
 *   insn=0x00000000004CDC10 string=0x00000000004CDC14 "?"
 *   insn=0x00000000004CDC18 string=0x00000000004CDC1C ","
 *   insn=0x00000000004CDC1C string=0x00000000004CDC20 "\n!"
 *   insn=0x00000000004CDC28 string=0x00000000004CDC2C "W"
 *   insn=0x00000000004CDC3C string=0x00000000004CDC40 "\n"
 *   insn=0x00000000004CDC40 string=0x00000000004CDC44 "+I@"
 *   insn=0x00000000004CDC44 string=0x00000000004CDC48 "JI@"
 *   insn=0x00000000004CDC50 string=0x00000000004CDC54 "M"
 *   insn=0x00000000004CDC54 string=0x00000000004CDC7C "!"
 *   insn=0x00000000004CDC5C string=0x00000000004CDC60 "M"
 *   insn=0x00000000004CDC74 string=0x00000000004CDC78 "L"
 *   insn=0x00000000004CDC80 string=0x00000000004CDC84 "I"
 *   insn=0x00000000004CDC88 string=0x00000000004CDC8C "("
 *   insn=0x00000000004CDC90 string=0x00000000004CDC94 "?"
 *   insn=0x00000000004CDCB0 string=0x00000000004CDCB4 "JI@"
 *   insn=0x00000000004CDCB4 string=0x00000000004CDCB8 "?"
 *   insn=0x00000000004CDCB8 string=0x00000000004CDCBC "-"
 *   insn=0x00000000004CDCBC string=0x00000000004CDCE0 "\n"
 *   insn=0x00000000004CDCC4 string=0x00000000004CDCC8 ""
 *   insn=0x00000000004CDCE0 string=0x00000000004CDCE4 "JI@"
 *   insn=0x00000000004CDCE4 string=0x00000000004CDCE8 "?"
 *   insn=0x00000000004CDCEC string=0x00000000004CDCF0 "m"
 *   insn=0x00000000004CDCF4 string=0x00000000004CDCF8 ""
 *   insn=0x00000000004CDCFC string=0x00000000004CDD00 "K"
 *   insn=0x00000000004CDD00 string=0x00000000004CDD04 "\n"
 *   insn=0x00000000004CDD04 string=0x00000000004CDD08 "JI@"
 *   insn=0x00000000004CDD08 string=0x00000000004CDD0C "?"
 *   insn=0x00000000004CDD10 string=0x00000000004CDD14 ","
 *   insn=0x00000000004CDD14 string=0x00000000004CDD18 "\n!"
 *   insn=0x00000000004CDD1C string=0x00000000004CDD20 "?"
 *   insn=0x00000000004CDD20 string=0x00000000004CDD24 "V"
 *   insn=0x00000000004CDD2C string=0x0000000000597FD0 "== Texture memory usage =="
 *   insn=0x00000000004CDD34 string=0x00000000001F7C40 "0'"
 *   insn=0x00000000004CDD3C string=0x00000000004CDD40 "`\n"
 *   insn=0x00000000004CDD40 string=0x00000000004CDE8C "s"
 *   insn=0x00000000004CDD48 string=0x00000000004CDD4C "Z"
 *   insn=0x00000000004CDD50 string=0x00000000004CDD54 "yI"
 *   insn=0x00000000004CDD54 string=0x00000000004CDD58 "T"
 *   insn=0x00000000004CDD58 string=0x00000000004CDD5C "U"
 *   insn=0x00000000004CDD58 string=0x0000000000597E1C "PNG"
 *   insn=0x00000000004CDD5C string=0x00000000004CDD60 "V"
 *   insn=0x00000000004CDD5C string=0x0000000000597F68 "%8.2f kB - %4dx%4d - %s (%s)\n"
 *   insn=0x00000000004CDD60 string=0x00000000004CDD64 "W"
 *   insn=0x00000000004CDD60 string=0x0000000000597E24 "TEX"
 *   insn=0x00000000004CDD64 string=0x0000000000597E20 "PVR"
 *   insn=0x00000000004CDD68 string=0x0000000000583F97 "unknown"
 *   insn=0x00000000004CDD70 string=0x00000000004CDD74 "\c"
 *   insn=0x00000000004CDD80 string=0x00000000004CDD84 "y"
 *   insn=0x00000000004CDD84 string=0x00000000004CDD88 "(K@"
 *   insn=0x00000000004CDD90 string=0x00000000004CDD94 "(+@"
 *   insn=0x00000000004CDDC0 string=0x00000000004CDDFC " K@"
 *   insn=0x00000000004CDDD0 string=0x00000000004CDDD4 "\n"
 *   insn=0x00000000004CDDFC string=0x00000000004CDE00 "!"
 *   insn=0x00000000004CDE00 string=0x00000000004CDE04 "#@"
 *   insn=0x00000000004CDE2C string=0x00000000004CDE30 "s""
 *   insn=0x00000000004CDE34 string=0x00000000004CDE38 "a"
 *   insn=0x00000000004CDE40 string=0x00000000004CDE44 ")=G"
 *   insn=0x00000000004CDE44 string=0x00000000004CDE48 "!"
 *   insn=0x00000000004CDE4C string=0x00000000004CDE50 "\t"
 *   insn=0x00000000004CDE4C string=0x00000000004CDE64 "\t"
 *   insn=0x00000000004CDE50 string=0x00000000004CDE54 "*"
 *   insn=0x00000000004CDE54 string=0x00000000004CDE58 "\n"
 *   insn=0x00000000004CDE60 string=0x00000000004CDE70 "?"
 *   insn=0x00000000004CDE64 string=0x00000000004CDE68 "*"
 *   insn=0x00000000004CDE68 string=0x00000000004CDE6C "\n"
 *   insn=0x00000000004CDE78 string=0x00000000004CDE7C "Jq"
 *   insn=0x00000000004CDE8C string=0x00000000004CDE98 ""
 *   insn=0x00000000004CDE90 string=0x00000000004CDE94 ""
 *   insn=0x00000000004CDE94 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004CDEA0 string=0x00000000004CDEA4 "A"
 *   insn=0x00000000004CDECC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004CDEE8 string=0x00000000004CDEEC "(a"
 *   insn=0x00000000004CDEF8 string=0x00000000004CDEFC "J=G"
 *   insn=0x00000000004CDEFC string=0x00000000004CDF00 ")!"
 *   insn=0x00000000004CDF04 string=0x00000000004CDF08 "*"
 *   insn=0x00000000004CDF04 string=0x00000000004CDF40 "*"
 *   insn=0x00000000004CDF08 string=0x00000000004CDF0C "K"
 *   insn=0x00000000004CDF0C string=0x00000000004CDF10 "+"
 *   insn=0x00000000004CDF14 string=0x00000000004CDF18 "_"
 *   insn=0x00000000004CDF2C string=0x00000000004CDF30 "@"
 *   insn=0x00000000004CDF38 string=0x00000000004CDF3C "b"
 *   insn=0x00000000004CDF40 string=0x00000000004CDF44 "K"
 *   insn=0x00000000004CDF44 string=0x00000000004CDF48 "+"
 *   insn=0x00000000004CDF48 string=0x00000000004CDF4C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TextureLibrary::PrintMemoryUsageStats(Caver::TextureLibrary *this)
{
  char *v1; // x20
  char *v2; // x19
  __int64 v3; // [xsp+10h] [xbp-90h]
  void *p; // [xsp+18h] [xbp-88h]
  __int64 v5; // [xsp+20h] [xbp-80h]
  __int64 v6; // [xsp+28h] [xbp-78h]
  __int64 v7; // [xsp+38h] [xbp-68h]

  v1 = (char *)this + 16;
  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = 0;
  v6 = 0;
  p = 0;
  v2 = (char *)*((_QWORD *)this + 4);
  if ( v2 != (char *)this + 16 )
  {
    do
    {
      v3 = *((_QWORD *)v2 + 5);
      std::vector<Caver::Texture *>::_M_insert_aux();
      v2 = (char *)sub_54C640(v2);
    }
    while ( v2 != v1 );
  }
  puts("== Texture memory usage ==");
}

