/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000334D3C
 * Mangled: _ZN5Caver5Proto23MagicSpellCastComponent4SwapEPS1_
 * Demangled: Caver::Proto::MagicSpellCastComponent::Swap(Caver::Proto::MagicSpellCastComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x0000000000334D3C string=0x0000000000334D40 " "
 *   insn=0x0000000000334D40 string=0x0000000000334D44 "("
 *   insn=0x0000000000334D44 string=0x0000000000334D48 "\t"
 *   insn=0x0000000000334D48 string=0x0000000000334D4C ""
 *   insn=0x0000000000334D4C string=0x0000000000334D50 ")"
 *   insn=0x0000000000334D50 string=0x0000000000334D54 "("
 *   insn=0x0000000000334D54 string=0x0000000000334D58 "\t"
 *   insn=0x0000000000334D58 string=0x0000000000334D5C ""
 *   insn=0x0000000000334D5C string=0x0000000000334D60 ")"
 *   insn=0x0000000000334D60 string=0x0000000000334D64 "("
 *   insn=0x0000000000334D64 string=0x0000000000334D68 "\t"
 *   insn=0x0000000000334D68 string=0x0000000000334D6C ""
 *   insn=0x0000000000334D6C string=0x0000000000334D70 ")"
 *   insn=0x0000000000334D70 string=0x0000000000334D74 "(@"
 *   insn=0x0000000000334D74 string=0x0000000000334D78 "\t@"
 *   insn=0x0000000000334D78 string=0x0000000000334D7C ""
 *   insn=0x0000000000334D7C string=0x0000000000334D80 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::MagicSpellCastComponent *__fastcall Caver::Proto::MagicSpellCastComponent::Swap(
        Caver::Proto::MagicSpellCastComponent *this,
        Caver::Proto::MagicSpellCastComponent *a2)
{
  int v2; // w9
  int v3; // w9
  int v4; // w9
  int v5; // w9

  if ( a2 != this )
  {
    v2 = *((_DWORD *)this + 3);
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    v4 = *((_DWORD *)this + 5);
    *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 5) = v4;
    v5 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v5;
  }
  return this;
}

