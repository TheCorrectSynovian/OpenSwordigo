/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003CBF00
 * Mangled: _ZN5Caver16DebugInfoOverlay15SetNumTrianglesEi
 * Demangled: Caver::DebugInfoOverlay::SetNumTriangles(int)
 *
 * Callers: 1
 *   0x0000000000203AE0  Caver::DebugInfoOverlay::SetNumTriangles(int)
 *
 * Callees: 10
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x0000000000200F70  boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x0000000000569E1C  sub_569E1C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 72
 *   insn=0x00000000003CBF14 string=0x00000000003CBF18 "W"
 *   insn=0x00000000003CBF24 string=0x00000000003CBF28 "`A"
 *   insn=0x00000000003CBF6C string=0x00000000003CBF70 "\t"
 *   insn=0x00000000003CBF8C string=0x00000000003CBF90 " "
 *   insn=0x00000000003CBF90 string=0x0000000000592328 "Triangles: "
 *   insn=0x00000000003CBF9C string=0x00000000003CBFA0 "$8"
 *   insn=0x00000000003CBFAC string=0x00000000003CBFB0 "a"
 *   insn=0x00000000003CBFB0 string=0x00000000003CBFB4 "("
 *   insn=0x00000000003CBFB4 string=0x00000000003CBFB8 "_"
 *   insn=0x00000000003CBFBC string=0x00000000003CBFCC "`"
 *   insn=0x00000000003CBFC0 string=0x00000000003CBFC4 "s"
 *   insn=0x00000000003CBFC4 string=0x00000000001F5190 "P'"
 *   insn=0x00000000003CBFD8 string=0x00000000003CBFDC "M"
 *   insn=0x00000000003CBFDC string=0x00000000001F8510 "0'"
 *   insn=0x00000000003CC008 string=0x00000000003CC00C "A"
 *   insn=0x00000000003CC028 string=0x00000000003CC02C ")=G"
 *   insn=0x00000000003CC034 string=0x00000000003CC038 "\t"
 *   insn=0x00000000003CC034 string=0x00000000003CC070 "\t"
 *   insn=0x00000000003CC038 string=0x00000000003CC03C "*"
 *   insn=0x00000000003CC03C string=0x00000000003CC040 "\n"
 *   insn=0x00000000003CC044 string=0x00000000003CC048 ""
 *   insn=0x00000000003CC048 string=0x00000000003CC07C "?"
 *   insn=0x00000000003CC04C string=0x00000000003CC050 ")=G"
 *   insn=0x00000000003CC050 string=0x00000000003CC054 "!"
 *   insn=0x00000000003CC058 string=0x00000000003CC05C "\t"
 *   insn=0x00000000003CC058 string=0x00000000003CC094 "\t"
 *   insn=0x00000000003CC05C string=0x00000000003CC060 "*"
 *   insn=0x00000000003CC060 string=0x00000000003CC064 "\n"
 *   insn=0x00000000003CC068 string=0x00000000003CC06C ""
 *   insn=0x00000000003CC06C string=0x00000000003CC0A0 "?"
 *   insn=0x00000000003CC070 string=0x00000000003CC074 "*"
 *   insn=0x00000000003CC074 string=0x00000000003CC078 "\n"
 *   insn=0x00000000003CC094 string=0x00000000003CC098 "*"
 *   insn=0x00000000003CC098 string=0x00000000003CC09C "\n"
 *   insn=0x00000000003CC0B4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003CC0C4 string=0x00000000003CC0C8 "(a"
 *   insn=0x00000000003CC0CC string=0x00000000003CC0D0 "!"
 *   insn=0x00000000003CC0E4 string=0x00000000003CC0E8 ")=G"
 *   insn=0x00000000003CC0E8 string=0x00000000003CC0EC "!"
 *   insn=0x00000000003CC0EC string=0x00000000003CC0F0 "i"
 *   insn=0x00000000003CC0F0 string=0x00000000003CC0F4 "\t"
 *   insn=0x00000000003CC0F0 string=0x00000000003CC15C "\t"
 *   insn=0x00000000003CC0F4 string=0x00000000003CC0F8 "*"
 *   insn=0x00000000003CC0F8 string=0x00000000003CC0FC "\n"
 *   insn=0x00000000003CC100 string=0x00000000003CC104 "?"
 *   insn=0x00000000003CC10C string=0x00000000003CC110 "*"
 *   insn=0x00000000003CC110 string=0x00000000003CC1B8 "{x"
 *   insn=0x00000000003CC114 string=0x00000000003CC118 "J=G"
 *   insn=0x00000000003CC118 string=0x00000000003CC11C ")!"
 *   insn=0x00000000003CC120 string=0x00000000003CC124 "*"
 *   insn=0x00000000003CC120 string=0x00000000003CC138 "*"
 *   insn=0x00000000003CC124 string=0x00000000003CC128 "K"
 *   insn=0x00000000003CC128 string=0x00000000003CC12C "+"
 *   insn=0x00000000003CC134 string=0x00000000003CC144 "_"
 *   insn=0x00000000003CC138 string=0x00000000003CC13C "K"
 *   insn=0x00000000003CC13C string=0x00000000003CC140 "+"
 *   insn=0x00000000003CC144 string=0x00000000003CC148 "l"
 *   insn=0x00000000003CC15C string=0x00000000003CC160 "*"
 *   insn=0x00000000003CC160 string=0x00000000003CC164 "\n"
 *   insn=0x00000000003CC164 string=0x00000000003CC168 "?"
 *   insn=0x00000000003CC168 string=0x00000000003CC16C ""
 *   insn=0x00000000003CC178 string=0x00000000003CC17C "(a"
 *   insn=0x00000000003CC188 string=0x00000000003CC18C "J=G"
 *   insn=0x00000000003CC18C string=0x00000000003CC190 ")!"
 *   insn=0x00000000003CC194 string=0x00000000003CC198 "*"
 *   insn=0x00000000003CC194 string=0x00000000003CC1C4 "*"
 *   insn=0x00000000003CC198 string=0x00000000003CC19C "K"
 *   insn=0x00000000003CC19C string=0x00000000003CC1A0 "+"
 *   insn=0x00000000003CC1A4 string=0x00000000003CC1A8 "_"
 *   insn=0x00000000003CC1C4 string=0x00000000003CC1C8 "K"
 *   insn=0x00000000003CC1C8 string=0x00000000003CC1CC "+"
 *   insn=0x00000000003CC1CC string=0x00000000003CC1D0 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::DebugInfoOverlay::SetNumTriangles(Caver::DebugInfoOverlay *this, int a2)
{
  Caver::GUILabel *v3; // x19
  char *v4; // x24
  __int64 v5; // x0
  __int64 v6; // x8
  char *v7; // x21
  size_t v8; // x2
  __int64 *v9; // x20
  _QWORD *v10; // x1
  char *v11; // x0
  unsigned int *v12; // x8
  int v13; // w9
  unsigned int *v14; // x8
  int v15; // w9
  char *v16; // [xsp+8h] [xbp-68h] BYREF
  void *v17; // [xsp+10h] [xbp-60h] BYREF
  _BYTE v18[12]; // [xsp+34h] [xbp-3Ch] BYREF

  *(_QWORD *)&v18[4] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_DWORD *)this + 88) != a2 )
  {
    *((_DWORD *)this + 88) = a2;
    v3 = (Caver::GUILabel *)*((_QWORD *)this + 36);
    v4 = &byte_6FD2F8;
    v16 = &byte_6FD2F8;
    v5 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>();
    v6 = v5;
    if ( a2 < 0 )
    {
      *(_BYTE *)(v5 - 1) = 45;
      v6 = v5 - 1;
      v4 = v16;
    }
    sub_569E1C(&v16, 0, *((_QWORD *)v4 - 3), v6, &v18[-v6]);
    ((void (__fastcall *)(void **__return_ptr, const char *, char **))loc_25A030)(&v17, "Triangles: ", &v16);
    v7 = (char *)v17;
    v9 = (__int64 *)((char *)v17 - 24);
    v8 = *((_QWORD *)v17 - 3);
    v10 = (_QWORD *)*((_QWORD *)v3 + 32);
    if ( v8 != *(v10 - 3) || memcmp(v17, v10, v8) )
    {
      sub_56A6A8((char *)v3 + 256);
      Caver::GUILabel::UpdateText(v3);
      v7 = (char *)v17;
      v9 = (__int64 *)((char *)v17 - 24);
    }
    if ( v9 != &qword_6FD2E0 )
    {
      v12 = (unsigned int *)(v7 - 8);
      if ( &pthread_create )
      {
        do
          v13 = __ldaxr(v12);
        while ( __stlxr(v13 - 1, v12) );
      }
      else
      {
        v13 = (*v12)--;
      }
      if ( v13 <= 0 )
        operator delete(v9);
    }
    v11 = v16 - 24;
    if ( v16 - 24 != (char *)&qword_6FD2E0 )
    {
      v14 = (unsigned int *)(v16 - 8);
      if ( &pthread_create )
      {
        do
          v15 = __ldaxr(v14);
        while ( __stlxr(v15 - 1, v14) );
      }
      else
      {
        v15 = (*v14)--;
      }
      if ( v15 <= 0 )
        operator delete(v11);
    }
  }
}

