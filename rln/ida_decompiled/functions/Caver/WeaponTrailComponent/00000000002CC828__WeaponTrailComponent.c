/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CC828
 * Mangled: _ZN5Caver20WeaponTrailComponentC2Ev
 * Demangled: Caver::WeaponTrailComponent::WeaponTrailComponent(void)
 *
 * Callers: 2
 *   0x00000000001FA740  Caver::WeaponTrailComponent::WeaponTrailComponent(void)
 *   0x00000000001FCA80  Caver::WeaponTrailComponent::WeaponTrailComponent(void)
 *
 * Callees: 9
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9A50  Caver::WeaponTrail::InitWithMaxSegments(int)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *   0x00000000002024A0  Caver::WeaponTrail::WeaponTrail(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 42
 *   insn=0x00000000002CC844 string=0x00000000002CC848 ""
 *   insn=0x00000000002CC84C string=0x00000000002CC850 "J"
 *   insn=0x00000000002CC854 string=0x00000000002CC858 "a"
 *   insn=0x00000000002CC858 string=0x00000000002CC85C "h"
 *   insn=0x00000000002CC85C string=0x00000000002CC860 "H"
 *   insn=0x00000000002CC864 string=0x00000000002CC868 "H"
 *   insn=0x00000000002CC868 string=0x00000000002CC86C "KA"
 *   insn=0x00000000002CC86C string=0x00000000002CC870 "?"
 *   insn=0x00000000002CC874 string=0x00000000002CC878 "t"
 *   insn=0x00000000002CC878 string=0x00000000002CC87C "k"
 *   insn=0x00000000002CC880 string=0x00000000002CC884 "i~"
 *   insn=0x00000000002CC884 string=0x00000000002CC888 "`"
 *   insn=0x00000000002CC894 string=0x00000000002CC898 "`"
 *   insn=0x00000000002CC8A0 string=0x00000000002CC8A4 "k"
 *   insn=0x00000000002CC8A4 string=0x00000000001F9A50 "0'"
 *   insn=0x00000000002CC8B8 string=0x00000000002CC8BC "h"
 *   insn=0x00000000002CC8BC string=0x00000000002CC8C8 "`B@"
 *   insn=0x00000000002CC8C4 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002CC8C8 string=0x00000000002CC8CC "@"
 *   insn=0x00000000002CC8CC string=0x00000000002CC8D0 "@"
 *   insn=0x00000000002CC8D0 string=0x00000000002CC8D4 ""
 *   insn=0x00000000002CC8D4 string=0x00000000002CC8D8 ""
 *   insn=0x00000000002CC8DC string=0x00000000002CC8E0 ""
 *   insn=0x00000000002CC8E0 string=0x00000000002CC8E4 ""
 *   insn=0x00000000002CC8F8 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002CC918 string=0x00000000002CC91C "U"
 *   insn=0x00000000002CC928 string=0x00000000002CC92C "a"
 *   insn=0x00000000002CC930 string=0x00000000002CC934 "h"@"
 *   insn=0x00000000002CC93C string=0x00000000002CC940 "Zw\n"
 *   insn=0x00000000002CC940 string=0x00000000002CC944 "`"
 *   insn=0x00000000002CC96C string=0x00000000002CC970 "!"
 *   insn=0x00000000002CC970 string=0x00000000002CC974 "B"
 *   insn=0x00000000002CC974 string=0x00000000002CC978 "c"
 *   insn=0x00000000002CC97C string=0x00000000002CC980 "!"
 *   insn=0x00000000002CC980 string=0x00000000002CC984 "B"
 *   insn=0x00000000002CC984 string=0x00000000002CC988 "c"
 *   insn=0x00000000002CC990 string=0x00000000002CC994 " %"
 *   insn=0x00000000002CC9A4 string=0x00000000002CC9A8 "E&"
 *   insn=0x00000000002CC9A8 string=0x00000000002CC9AC "a!"
 *   insn=0x00000000002CC9B4 string=0x00000000002CC9B8 "v"
 *   insn=0x00000000002CC9D0 string=0x00000000002CC9E8 ":"
 *   insn=0x00000000002CC9E8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WeaponTrailComponent::WeaponTrailComponent(Caver::WeaponTrailComponent *this)
{
  __int128 v2; // q0
  Caver::WeaponTrail *v3; // x20

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *(_QWORD *)&v2 = &off_6C5908;
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)&v2 + 1) = &off_6C5948;
  v3 = (Caver::WeaponTrailComponent *)((char *)this + 112);
  *(_QWORD *)this = off_6C57F0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 13) = 0;
  *((_OWORD *)this + 1) = v2;
  Caver::WeaponTrail::WeaponTrail((Caver::WeaponTrailComponent *)((char *)this + 112));
  __asm { FMOV            V0.4S, #1.0 }
  *((_OWORD *)this + 11) = _Q0;
  *((_OWORD *)this + 12) = _Q0;
  return Caver::WeaponTrail::InitWithMaxSegments(v3, 100);
}

