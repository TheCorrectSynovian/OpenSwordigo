/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036A764
 * Mangled: _ZN5Caver21LevelUpViewControllerC2Ev
 * Demangled: Caver::LevelUpViewController::LevelUpViewController(void)
 *
 * Callers: 1
 *   0x00000000001FA040  Caver::LevelUpViewController::LevelUpViewController(void)
 *
 * Callees: 1
 *   0x00000000001F40B0  Caver::GUIViewController::GUIViewController(void)
 *
 * Referenced strings: 7
 *   insn=0x000000000036A770 string=0x000000000036A774 "O&"
 *   insn=0x000000000036A774 string=0x00000000001F40B0 "P'"
 *   insn=0x000000000036A778 string=0x000000000036A77C "-@"
 *   insn=0x000000000036A784 string=0x000000000036A788 "\tA"
 *   insn=0x000000000036A788 string=0x000000000036A78C ""
 *   insn=0x000000000036A78C string=0x000000000036A790 "i"
 *   insn=0x000000000036A790 string=0x000000000036A794 "h&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LevelUpViewController::LevelUpViewController(Caver::LevelUpViewController *this)
{
  __int64 result; // x0

  result = Caver::GUIViewController::GUIViewController(this);
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 12) = 0;
  *(_QWORD *)this = off_6CC540;
  *((_QWORD *)this + 9) = &off_6CC5B0;
  return result;
}

