/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004960A0
 * Mangled: _ZN5Caver9GUIButton12SetTintColorENS_5ColorE
 * Demangled: Caver::GUIButton::SetTintColor(Caver::Color)
 *
 * Callers: 1
 *   0x00000000001F5960  Caver::GUIButton::SetTintColor(Caver::Color)
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x00000000004960A0 string=0x00000000004960A4 "\t"
 *   insn=0x00000000004960AC string=0x00000000004960B0 "("
 *   insn=0x00000000004960AC string=0x00000000004960E0 "("
 *   insn=0x00000000004960B0 string=0x00000000004960B4 "\t"
 *   insn=0x00000000004960B8 string=0x00000000004960BC "!"
 *   insn=0x00000000004960BC string=0x00000000004960C0 "(@9\t"
 *   insn=0x00000000004960C0 string=0x00000000004960C4 "\t"
 *   insn=0x00000000004960CC string=0x00000000004960D0 "("
 *   insn=0x00000000004960D0 string=0x00000000004960D4 "\t"
 *   insn=0x00000000004960D8 string=0x00000000004960DC "`"
 *   insn=0x00000000004960E0 string=0x00000000004960E4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIButton::SetTintColor(__int64 result, unsigned __int8 *a2)
{
  if ( *a2 != *(unsigned __int8 *)(result + 444)
    || a2[1] != *(unsigned __int8 *)(result + 445)
    || a2[2] != *(unsigned __int8 *)(result + 446)
    || a2[3] != *(unsigned __int8 *)(result + 447) )
  {
    *(_DWORD *)(result + 444) = *(_DWORD *)a2;
  }
  return result;
}

