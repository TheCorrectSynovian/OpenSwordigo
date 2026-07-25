/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032BA7C
 * Mangled: _ZN5Caver5Proto14SwingComponent4SwapEPS1_
 * Demangled: Caver::Proto::SwingComponent::Swap(Caver::Proto::SwingComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 25
 *   insn=0x000000000032BA7C string=0x000000000032BA80 " "
 *   insn=0x000000000032BA80 string=0x000000000032BA84 "("
 *   insn=0x000000000032BA84 string=0x000000000032BA88 "\t"
 *   insn=0x000000000032BA88 string=0x000000000032BA8C ""
 *   insn=0x000000000032BA8C string=0x000000000032BA90 ")"
 *   insn=0x000000000032BA90 string=0x000000000032BA94 "(@@9\t@@9@"
 *   insn=0x000000000032BA94 string=0x000000000032BA98 "\t@@9@"
 *   insn=0x000000000032BA98 string=0x000000000032BA9C "@"
 *   insn=0x000000000032BA9C string=0x000000000032BAA0 ")@"
 *   insn=0x000000000032BAA0 string=0x000000000032BAA4 "(D@9\tD@9D"
 *   insn=0x000000000032BAA4 string=0x000000000032BAA8 "\tD@9D"
 *   insn=0x000000000032BAA8 string=0x000000000032BAAC "D"
 *   insn=0x000000000032BAAC string=0x000000000032BAB0 ")D"
 *   insn=0x000000000032BAB0 string=0x000000000032BAB4 "("
 *   insn=0x000000000032BAB4 string=0x000000000032BAB8 "\t"
 *   insn=0x000000000032BAB8 string=0x000000000032BABC ""
 *   insn=0x000000000032BABC string=0x000000000032BAC0 ")"
 *   insn=0x000000000032BAC0 string=0x000000000032BAC4 "("
 *   insn=0x000000000032BAC4 string=0x000000000032BAC8 "\t"
 *   insn=0x000000000032BAC8 string=0x000000000032BACC ""
 *   insn=0x000000000032BACC string=0x000000000032BAD0 ")"
 *   insn=0x000000000032BAD0 string=0x000000000032BAD4 "(@"
 *   insn=0x000000000032BAD4 string=0x000000000032BAD8 "\t@"
 *   insn=0x000000000032BAD8 string=0x000000000032BADC ""
 *   insn=0x000000000032BADC string=0x000000000032BAE0 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SwingComponent::Swap(__int64 this, Caver::Proto::SwingComponent *a2)
{
  int v2; // w9
  int v3; // w9
  __int64 v4; // x9

  if ( a2 != (Caver::Proto::SwingComponent *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    LOBYTE(v2) = *(_BYTE *)(this + 16);
    *(_BYTE *)(this + 16) = *((_BYTE *)a2 + 16);
    *((_BYTE *)a2 + 16) = v2;
    LOBYTE(v2) = *(_BYTE *)(this + 17);
    *(_BYTE *)(this + 17) = *((_BYTE *)a2 + 17);
    *((_BYTE *)a2 + 17) = v2;
    v3 = *(_DWORD *)(this + 20);
    *(_DWORD *)(this + 20) = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 5) = v3;
    v4 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v4;
  }
  return this;
}

