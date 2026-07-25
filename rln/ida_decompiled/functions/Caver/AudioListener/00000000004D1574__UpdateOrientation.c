/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D1574
 * Mangled: _ZN5Caver13AudioListener17UpdateOrientationEv
 * Demangled: Caver::AudioListener::UpdateOrientation(void)
 *
 * Callers: 1
 *   0x0000000000203B70  Caver::AudioListener::UpdateOrientation(void)
 *
 * Callees: 8
 *   0x00000000001F4330  .alGetError
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6A60  .alListenerfv
 *   0x0000000000203B70  Caver::AudioListener::UpdateOrientation(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 45
 *   insn=0x00000000004D1580 string=0x00000000004D1584 "S"
 *   insn=0x00000000004D1584 string=0x00000000004D1588 "h"
 *   insn=0x00000000004D1598 string=0x00000000004D159C " @"
 *   insn=0x00000000004D15A0 string=0x00000000004D15A4 "$@"
 *   insn=0x00000000004D15AC string=0x00000000004D15B0 ","
 *   insn=0x00000000004D15B0 string=0x00000000004D15B4 "!"
 *   insn=0x00000000004D15B0 string=0x00000000001F6A60 "0'"
 *   insn=0x00000000004D15B4 string=0x0000000000598089 "alListenerfv"
 *   insn=0x00000000004D15C0 string=0x00000000004D15C4 "}U"
 *   insn=0x00000000004D15C4 string=0x00000000004D15C8 "Z"
 *   insn=0x00000000004D15C8 string=0x00000000001F4330 "P'"
 *   insn=0x00000000004D15D0 string=0x00000000004D15D4 ")"
 *   insn=0x00000000004D15DC string=0x00000000004D15E0 "!"
 *   insn=0x00000000004D15E0 string=0x00000000004D15E4 "h"
 *   insn=0x00000000004D15F0 string=0x00000000004D1648 """
 *   insn=0x00000000004D1604 string=0x00000000004D1608 ")=G"
 *   insn=0x00000000004D1608 string=0x00000000004D160C "!"
 *   insn=0x00000000004D1610 string=0x00000000004D1614 "\t"
 *   insn=0x00000000004D1610 string=0x00000000004D1628 "\t"
 *   insn=0x00000000004D1614 string=0x00000000004D1618 "*"
 *   insn=0x00000000004D1618 string=0x00000000004D161C "\n"
 *   insn=0x00000000004D1624 string=0x00000000004D1634 "?"
 *   insn=0x00000000004D1628 string=0x00000000004D162C "*"
 *   insn=0x00000000004D162C string=0x00000000004D1630 "\n"
 *   insn=0x00000000004D1634 string=0x00000000004D1638 "l"
 *   insn=0x00000000004D163C string=0x00000000004D1640 "Yc"
 *   insn=0x00000000004D1648 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D1650 string=0x00000000004D1654 "J"
 *   insn=0x00000000004D1658 string=0x00000000004D165C "(a"
 *   insn=0x00000000004D1668 string=0x00000000004D166C "J=G"
 *   insn=0x00000000004D166C string=0x00000000004D1670 ")!"
 *   insn=0x00000000004D1674 string=0x00000000004D1678 "*"
 *   insn=0x00000000004D1674 string=0x00000000004D16A4 "*"
 *   insn=0x00000000004D1678 string=0x00000000004D167C "K"
 *   insn=0x00000000004D167C string=0x00000000004D1680 "+"
 *   insn=0x00000000004D1684 string=0x00000000004D1688 "_"
 *   insn=0x00000000004D1694 string=0x00000000004D1698 "Cc"
 *   insn=0x00000000004D16A4 string=0x00000000004D16A8 "K"
 *   insn=0x00000000004D16A8 string=0x00000000004D16AC "+"
 *   insn=0x00000000004D16AC string=0x00000000004D16B0 "_"
 *   insn=0x00000000004D16BC string=0x00000000004D16C0 "("
 *   insn=0x00000000004D16C0 string=0x00000000004D16C4 ""
 *   insn=0x00000000004D16C4 string=0x00000000004D16C8 "(@"
 *   insn=0x00000000004D16C8 string=0x00000000004D16CC "$"
 *   insn=0x00000000004D16CC string=0x00000000004D16D0 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::AudioListener::UpdateOrientation(Caver::AudioListener *this)
{
  void *v1; // x0
  unsigned int *v2; // x8
  int v3; // w9
  __int64 v4; // [xsp+10h] [xbp-40h] BYREF
  __int128 v5; // [xsp+20h] [xbp-30h]
  int v6; // [xsp+30h] [xbp-20h]
  int v7; // [xsp+34h] [xbp-1Ch]
  __int64 v8; // [xsp+38h] [xbp-18h]

  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *((_OWORD *)this + 1);
  v6 = *((_DWORD *)this + 8);
  v7 = *((_DWORD *)this + 9);
  alListenerfv();
  sub_566BB8((int)&v4, "alListenerfv");
  alGetError();
  v1 = (void *)(v4 - 24);
  if ( (__int64 *)(v4 - 24) != &qword_6FD2E0 )
  {
    v2 = (unsigned int *)(v4 - 8);
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

