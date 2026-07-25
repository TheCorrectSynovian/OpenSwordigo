/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A9BDC
 * Mangled: _ZN5Caver14GUIRoundedRect8SetColorENS_5ColorE
 * Demangled: Caver::GUIRoundedRect::SetColor(Caver::Color)
 *
 * Callers: 1
 *   0x00000000001F64D0  Caver::GUIRoundedRect::SetColor(Caver::Color)
 *
 * Callees: 1
 *   0x0000000000203CD0  Caver::GUIRoundedRect::CreateSprite(void)
 *
 * Referenced strings: 12
 *   insn=0x00000000004A9BDC string=0x00000000004A9BE0 "\t @9"
 *   insn=0x00000000004A9BE8 string=0x00000000004A9BEC "("
 *   insn=0x00000000004A9BE8 string=0x00000000004A9C20 "("
 *   insn=0x00000000004A9BEC string=0x00000000004A9BF0 "\t$@9"
 *   insn=0x00000000004A9BF4 string=0x00000000004A9BF8 "A"
 *   insn=0x00000000004A9BF8 string=0x00000000004A9BFC "(@9\t(@9"
 *   insn=0x00000000004A9BFC string=0x00000000004A9C00 "\t(@9"
 *   insn=0x00000000004A9C08 string=0x00000000004A9C0C "("
 *   insn=0x00000000004A9C0C string=0x00000000004A9C10 "\t,@9"
 *   insn=0x00000000004A9C14 string=0x00000000004A9C18 "A"
 *   insn=0x00000000004A9C20 string=0x00000000004A9C24 ""
 *   insn=0x00000000004A9C24 string=0x00000000004A9C28 "*h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIRoundedRect::SetColor(__int64 result, unsigned __int8 *a2)
{
  if ( *a2 != *(unsigned __int8 *)(result + 8)
    || a2[1] != *(unsigned __int8 *)(result + 9)
    || a2[2] != *(unsigned __int8 *)(result + 10)
    || a2[3] != *(unsigned __int8 *)(result + 11) )
  {
    *(_DWORD *)(result + 8) = *(_DWORD *)a2;
    return Caver::GUIRoundedRect::CreateSprite((Caver::GUIRoundedRect *)result);
  }
  return result;
}

