/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030D66C
 * Mangled: _ZN5Caver5Proto15DamageComponent4SwapEPS1_
 * Demangled: Caver::Proto::DamageComponent::Swap(Caver::Proto::DamageComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 44
 *   insn=0x000000000030D670 string=0x000000000030D674 "("
 *   insn=0x000000000030D674 string=0x000000000030D678 "\t"
 *   insn=0x000000000030D678 string=0x000000000030D67C ""
 *   insn=0x000000000030D67C string=0x000000000030D680 ")"
 *   insn=0x000000000030D680 string=0x000000000030D684 "("
 *   insn=0x000000000030D684 string=0x000000000030D688 "\t"
 *   insn=0x000000000030D688 string=0x000000000030D68C ""
 *   insn=0x000000000030D68C string=0x000000000030D690 ")"
 *   insn=0x000000000030D690 string=0x000000000030D694 "("
 *   insn=0x000000000030D694 string=0x000000000030D698 "\t"
 *   insn=0x000000000030D698 string=0x000000000030D69C ""
 *   insn=0x000000000030D69C string=0x000000000030D6A0 ")"
 *   insn=0x000000000030D6A0 string=0x000000000030D6A4 "("
 *   insn=0x000000000030D6A4 string=0x000000000030D6A8 "\t"
 *   insn=0x000000000030D6A8 string=0x000000000030D6AC ""
 *   insn=0x000000000030D6AC string=0x000000000030D6B0 ")"
 *   insn=0x000000000030D6B0 string=0x000000000030D6B4 "(p@9\tp@9p"
 *   insn=0x000000000030D6B4 string=0x000000000030D6B8 "\tp@9p"
 *   insn=0x000000000030D6B8 string=0x000000000030D6BC "p"
 *   insn=0x000000000030D6BC string=0x000000000030D6C0 ")p"
 *   insn=0x000000000030D6C0 string=0x000000000030D6C4 "( @"
 *   insn=0x000000000030D6C4 string=0x000000000030D6C8 "\t @"
 *   insn=0x000000000030D6C8 string=0x000000000030D6CC " "
 *   insn=0x000000000030D6CC string=0x000000000030D6D0 ") "
 *   insn=0x000000000030D6D0 string=0x000000000030D6D4 "($@"
 *   insn=0x000000000030D6D4 string=0x000000000030D6D8 "\t$@"
 *   insn=0x000000000030D6D8 string=0x000000000030D6DC "$"
 *   insn=0x000000000030D6DC string=0x000000000030D6E0 ")$"
 *   insn=0x000000000030D6E0 string=0x000000000030D6E4 "("
 *   insn=0x000000000030D6E4 string=0x000000000030D6E8 "\t"
 *   insn=0x000000000030D6E8 string=0x000000000030D6EC ""
 *   insn=0x000000000030D6EC string=0x000000000030D6F0 ")"
 *   insn=0x000000000030D6F0 string=0x000000000030D6F4 "("
 *   insn=0x000000000030D6F4 string=0x000000000030D6F8 "\t"
 *   insn=0x000000000030D6F8 string=0x000000000030D6FC ""
 *   insn=0x000000000030D6FC string=0x000000000030D700 ")"
 *   insn=0x000000000030D700 string=0x000000000030D704 "(,@"
 *   insn=0x000000000030D704 string=0x000000000030D708 "\t,@"
 *   insn=0x000000000030D708 string=0x000000000030D70C ","
 *   insn=0x000000000030D70C string=0x000000000030D710 "),"
 *   insn=0x000000000030D710 string=0x000000000030D714 "(@"
 *   insn=0x000000000030D714 string=0x000000000030D718 "\t@"
 *   insn=0x000000000030D718 string=0x000000000030D71C ""
 *   insn=0x000000000030D71C string=0x000000000030D720 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DamageComponent::Swap(__int64 this, Caver::Proto::DamageComponent *a2)
{
  int v2; // w9
  int v3; // w9
  int v4; // w9
  int v5; // w9
  int v6; // w9
  int v7; // w9
  int v8; // w9
  int v9; // w9

  if ( a2 != (Caver::Proto::DamageComponent *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 16) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    v4 = *(_DWORD *)(this + 20);
    *(_DWORD *)(this + 20) = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 5) = v4;
    v5 = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v5;
    LOBYTE(v5) = *(_BYTE *)(this + 28);
    *(_BYTE *)(this + 28) = *((_BYTE *)a2 + 28);
    *((_BYTE *)a2 + 28) = v5;
    v6 = *(_DWORD *)(this + 32);
    *(_DWORD *)(this + 32) = *((_DWORD *)a2 + 8);
    *((_DWORD *)a2 + 8) = v6;
    v7 = *(_DWORD *)(this + 36);
    *(_DWORD *)(this + 36) = *((_DWORD *)a2 + 9);
    *((_DWORD *)a2 + 9) = v7;
    LOBYTE(v7) = *(_BYTE *)(this + 40);
    *(_BYTE *)(this + 40) = *((_BYTE *)a2 + 40);
    *((_BYTE *)a2 + 40) = v7;
    LOBYTE(v7) = *(_BYTE *)(this + 41);
    *(_BYTE *)(this + 41) = *((_BYTE *)a2 + 41);
    *((_BYTE *)a2 + 41) = v7;
    v8 = *(_DWORD *)(this + 44);
    *(_DWORD *)(this + 44) = *((_DWORD *)a2 + 11);
    *((_DWORD *)a2 + 11) = v8;
    v9 = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v9;
  }
  return this;
}

