/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BB54C
 * Mangled: _ZN5Caver24OnlineController_Android18ShowInterstitialAdERKSsif
 * Demangled: Caver::OnlineController_Android::ShowInterstitialAd(std::string const&,int,float)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F4760  Caver::TimerCurrentSeconds(void)
 *   0x00000000001F6A00  Caver::AndroidGetInterstitialAdInterval(std::string const&,int)
 *   0x00000000001FDAF0  Caver::AndroidLoadInterstitialAd(void)
 *   0x00000000002021B0  Caver::AndroidShowInterstitialAd(double)
 *
 * Referenced strings: 14
 *   insn=0x00000000004BB560 string=0x00000000004BB564 "h"
 *   insn=0x00000000004BB564 string=0x00000000004BB568 ""
 *   insn=0x00000000004BB570 string=0x00000000004BB574 ""
 *   insn=0x00000000004BB588 string=0x00000000001F6A00 "0'"
 *   insn=0x00000000004BB58C string=0x00000000004BB590 "t"
 *   insn=0x00000000004BB590 string=0x00000000004BB594 "\t"
 *   insn=0x00000000004BB590 string=0x00000000001F4760 "P'"
 *   insn=0x00000000004BB594 string=0x00000000004BB598 "t"
 *   insn=0x00000000004BB598 string=0x00000000004BB59C "`"
 *   insn=0x00000000004BB5A0 string=0x00000000004BB5A4 " 9`"
 *   insn=0x00000000004BB5BC string=0x00000000004BB5C0 "L\t"
 *   insn=0x00000000004BB5C0 string=0x00000000001FDAF0 "0'"
 *   insn=0x00000000004BB5C8 string=0x00000000004BB5CC "@"
 *   insn=0x00000000004BB5CC string=0x00000000004BB5D0 "i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OnlineController_Android::ShowInterstitialAd(double *a1, float a2)
{
  __int64 result; // x0
  Caver *InterstitialAdInterval; // x0
  int v6; // w20
  Caver *v7; // x0
  double v8; // d0
  double v9; // d9

  result = (*(__int64 (__fastcall **)(double *))(*(_QWORD *)a1 + 272LL))(a1);
  if ( (result & 1) != 0 )
  {
    InterstitialAdInterval = (Caver *)Caver::AndroidGetInterstitialAdInterval();
    v6 = (int)InterstitialAdInterval;
    v7 = (Caver *)Caver::TimerCurrentSeconds(InterstitialAdInterval);
    v9 = v8;
    if ( v6 && v8 - a1[5] < (double)v6 )
    {
      return Caver::AndroidLoadInterstitialAd(v7);
    }
    else
    {
      result = Caver::AndroidShowInterstitialAd(v7, a2);
      if ( (result & 1) != 0 )
        a1[5] = v9;
    }
  }
  return result;
}

