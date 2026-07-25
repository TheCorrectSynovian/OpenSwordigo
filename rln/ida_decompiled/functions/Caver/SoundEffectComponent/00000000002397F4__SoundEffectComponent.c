/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002397F4
 * Mangled: _ZN5Caver20SoundEffectComponentC2Ev
 * Demangled: Caver::SoundEffectComponent::SoundEffectComponent(void)
 *
 * Callers: 1
 *   0x00000000001FBC80  Caver::SoundEffectComponent::SoundEffectComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000002397FC string=0x0000000000239800 "h%"
 *   insn=0x0000000000239800 string=0x0000000000239804 ""
 *   insn=0x0000000000239808 string=0x000000000023980C "j%"
 *   insn=0x000000000023980C string=0x0000000000239810 "JiB"
 *   insn=0x0000000000239814 string=0x0000000000239818 "a"
 *   insn=0x0000000000239818 string=0x000000000023981C ""
 *   insn=0x000000000023981C string=0x0000000000239820 "KA"
 *   insn=0x0000000000239820 string=0x0000000000239824 "?"
 *   insn=0x0000000000239824 string=0x0000000000239828 ""
 *   insn=0x0000000000239828 string=0x000000000023982C "K"
 *   insn=0x000000000023982C string=0x0000000000239830 "`"
 *   insn=0x0000000000239830 string=0x0000000000239834 "KA"
 *   insn=0x0000000000239834 string=0x0000000000239838 "J"
 *   insn=0x0000000000239838 string=0x000000000023983C "<"
 *   insn=0x0000000000239840 string=0x0000000000239844 "@"
 *   insn=0x0000000000239848 string=0x000000000023984C ""
 *   insn=0x0000000000239854 string=0x0000000000239858 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::SoundEffectComponent::SoundEffectComponent(Caver::SoundEffectComponent *this)
{
  __n128 result; // q0

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *((_QWORD *)this + 9) = 0;
  *(_QWORD *)this = off_6BB7C0;
  result.n128_u64[0] = (unsigned __int64)&off_6BB8E0;
  *((_QWORD *)this + 15) = &byte_6FD2F8;
  result.n128_u64[1] = (unsigned __int64)&off_6BB920;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = &off_6BB940;
  *((_DWORD *)this + 32) = 1065353216;
  *((_DWORD *)this + 37) = 0;
  *(_QWORD *)((char *)this + 132) = 0;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((__n128 *)this + 1) = result;
  *(_QWORD *)((char *)this + 140) = 0;
  return result;
}

