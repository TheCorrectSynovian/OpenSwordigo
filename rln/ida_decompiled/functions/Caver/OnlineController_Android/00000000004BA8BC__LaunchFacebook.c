/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA8BC
 * Mangled: _ZN5Caver24OnlineController_Android14LaunchFacebookEv
 * Demangled: Caver::OnlineController_Android::LaunchFacebook(void)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FFAD0  Caver::AndroidOpenURL(std::string const&)
 *   0x0000000000201990  Caver::AndroidIsAgeKnown(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 74
 *   insn=0x00000000004BA8C8 string=0x00000000004BA8CC "S"
 *   insn=0x00000000004BA8CC string=0x00000000004BA8D0 "h"
 *   insn=0x00000000004BA8D8 string=0x00000000005979E1 "http://www.facebook.com/144881932264830"
 *   insn=0x00000000004BA8EC string=0x00000000004BA8F0 "x"
 *   insn=0x00000000004BA8F4 string=0x00000000004BA8F8 "I"
 *   insn=0x00000000004BA8F8 string=0x00000000004BA8FC ")"
 *   insn=0x00000000004BA904 string=0x00000000004BA908 "!"
 *   insn=0x00000000004BA908 string=0x00000000004BA90C "h"
 *   insn=0x00000000004BA908 string=0x00000000004BA92C "I"
 *   insn=0x00000000004BA918 string=0x00000000004BA970 "X"
 *   insn=0x00000000004BA92C string=0x00000000004BA930 ")=G"
 *   insn=0x00000000004BA930 string=0x00000000004BA934 "!"
 *   insn=0x00000000004BA938 string=0x00000000004BA93C "\t"
 *   insn=0x00000000004BA938 string=0x00000000004BA950 "\t"
 *   insn=0x00000000004BA93C string=0x00000000004BA940 "*"
 *   insn=0x00000000004BA940 string=0x00000000004BA944 "\n"
 *   insn=0x00000000004BA94C string=0x00000000004BA95C "?"
 *   insn=0x00000000004BA950 string=0x00000000004BA954 "*"
 *   insn=0x00000000004BA954 string=0x00000000004BA958 "\n"
 *   insn=0x00000000004BA95C string=0x00000000004BA960 "l"
 *   insn=0x00000000004BA970 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004BA974 string=0x00000000004BA978 "J"
 *   insn=0x00000000004BA978 string=0x00000000004BA97C "J"
 *   insn=0x00000000004BA980 string=0x00000000004BA984 "(a"
 *   insn=0x00000000004BA98C string=0x00000000004BA990 "J"
 *   insn=0x00000000004BA990 string=0x00000000004BA994 "J=G"
 *   insn=0x00000000004BA994 string=0x00000000004BA998 ")!"
 *   insn=0x00000000004BA99C string=0x00000000004BA9A0 "*"
 *   insn=0x00000000004BA99C string=0x00000000004BA9CC "*"
 *   insn=0x00000000004BA9A0 string=0x00000000004BA9A4 "K"
 *   insn=0x00000000004BA9A4 string=0x00000000004BA9A8 "+"
 *   insn=0x00000000004BA9AC string=0x00000000004BA9B0 "_"
 *   insn=0x00000000004BA9BC string=0x00000000004BA9C0 "y"
 *   insn=0x00000000004BA9CC string=0x00000000004BA9D0 "K"
 *   insn=0x00000000004BA9D0 string=0x00000000004BA9D4 "+"
 *   insn=0x00000000004BA9D4 string=0x00000000004BA9D8 "_"
 *   insn=0x00000000004BA9F4 string=0x00000000004BA9F8 "S"
 *   insn=0x00000000004BA9F8 string=0x00000000004BA9FC "h"
 *   insn=0x00000000004BAA04 string=0x0000000000597A09 "http://www.twitter.com/touch_foo"
 *   insn=0x00000000004BAA10 string=0x00000000004BAA14 "i"
 *   insn=0x00000000004BAA18 string=0x00000000004BAA1C "-"
 *   insn=0x00000000004BAA20 string=0x00000000004BAA24 "I"
 *   insn=0x00000000004BAA24 string=0x00000000004BAA28 ")"
 *   insn=0x00000000004BAA30 string=0x00000000004BAA34 "!"
 *   insn=0x00000000004BAA34 string=0x00000000004BAA38 "h"
 *   insn=0x00000000004BAA34 string=0x00000000004BAA58 "I"
 *   insn=0x00000000004BAA44 string=0x00000000004BAA9C ""
 *   insn=0x00000000004BAA58 string=0x00000000004BAA5C ")=G"
 *   insn=0x00000000004BAA5C string=0x00000000004BAA60 "!"
 *   insn=0x00000000004BAA64 string=0x00000000004BAA68 "\t"
 *   insn=0x00000000004BAA64 string=0x00000000004BAA7C "\t"
 *   insn=0x00000000004BAA68 string=0x00000000004BAA6C "*"
 *   insn=0x00000000004BAA6C string=0x00000000004BAA70 "\n"
 *   insn=0x00000000004BAA78 string=0x00000000004BAA88 "?"
 *   insn=0x00000000004BAA7C string=0x00000000004BAA80 "*"
 *   insn=0x00000000004BAA80 string=0x00000000004BAA84 "\n"
 *   insn=0x00000000004BAA88 string=0x00000000004BAA8C "l"
 *   insn=0x00000000004BAA90 string=0x00000000004BAA94 "D"
 *   insn=0x00000000004BAAA0 string=0x00000000004BAAA4 "J"
 *   insn=0x00000000004BAAA4 string=0x00000000004BAAA8 "J"
 *   insn=0x00000000004BAAAC string=0x00000000004BAAB0 "(a"
 *   insn=0x00000000004BAAB8 string=0x00000000004BAABC "J"
 *   insn=0x00000000004BAABC string=0x00000000004BAAC0 "J=G"
 *   insn=0x00000000004BAAC0 string=0x00000000004BAAC4 ")!"
 *   insn=0x00000000004BAAC8 string=0x00000000004BAACC "*"
 *   insn=0x00000000004BAAC8 string=0x00000000004BAAF8 "*"
 *   insn=0x00000000004BAACC string=0x00000000004BAAD0 "K"
 *   insn=0x00000000004BAAD0 string=0x00000000004BAAD4 "+"
 *   insn=0x00000000004BAAD8 string=0x00000000004BAADC "_"
 *   insn=0x00000000004BAAE8 string=0x00000000004BAAEC "."
 *   insn=0x00000000004BAAF0 string=0x00000000004BAAF4 "t"
 *   insn=0x00000000004BAAF8 string=0x00000000004BAAFC "K"
 *   insn=0x00000000004BAAFC string=0x00000000004BAB00 "+"
 *   insn=0x00000000004BAB00 string=0x00000000004BAB04 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OnlineController_Android::LaunchFacebook(Caver::OnlineController_Android *this)
{
  void *v1; // x0
  unsigned int *v2; // x8
  int v3; // w9
  _QWORD v4[3]; // [xsp+40h] [xbp-28h] BYREF

  v4[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v4, "http://www.facebook.com/144881932264830");
  Caver::AndroidOpenURL();
  v1 = (void *)(v4[0] - 24LL);
  if ( (__int64 *)(v4[0] - 24LL) != &qword_6FD2E0 )
  {
    v2 = (unsigned int *)(v4[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v3 = __ldaxr(v2);
      while ( __stlxr(v3 - 1, v2) );
    }
    else
    {
      v3 = (*v2)--;
    }
    if ( v3 <= 0 )
      operator delete(v1);
  }
}

