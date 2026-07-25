/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003151CC
 * Mangled: _ZN5Caver5Proto23BushControllerComponent4SwapEPS1_
 * Demangled: Caver::Proto::BushControllerComponent::Swap(Caver::Proto::BushControllerComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x00000000003151D0 string=0x00000000003151D4 "("
 *   insn=0x00000000003151D4 string=0x00000000003151D8 "\t"
 *   insn=0x00000000003151D8 string=0x00000000003151DC ""
 *   insn=0x00000000003151DC string=0x00000000003151E0 ")"
 *   insn=0x00000000003151E0 string=0x00000000003151E4 "("
 *   insn=0x00000000003151E4 string=0x00000000003151E8 "\t"
 *   insn=0x00000000003151E8 string=0x00000000003151EC ""
 *   insn=0x00000000003151EC string=0x00000000003151F0 ")"
 *   insn=0x00000000003151F0 string=0x00000000003151F4 "("
 *   insn=0x00000000003151F4 string=0x00000000003151F8 "\t"
 *   insn=0x00000000003151F8 string=0x00000000003151FC ""
 *   insn=0x00000000003151FC string=0x0000000000315200 ")"
 *   insn=0x0000000000315200 string=0x0000000000315204 "("
 *   insn=0x0000000000315204 string=0x0000000000315208 "\t"
 *   insn=0x0000000000315208 string=0x000000000031520C ""
 *   insn=0x000000000031520C string=0x0000000000315210 ")"
 *   insn=0x0000000000315210 string=0x0000000000315214 "(@"
 *   insn=0x0000000000315214 string=0x0000000000315218 "\t@"
 *   insn=0x0000000000315218 string=0x000000000031521C ""
 *   insn=0x000000000031521C string=0x0000000000315220 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::BushControllerComponent *__fastcall Caver::Proto::BushControllerComponent::Swap(
        Caver::Proto::BushControllerComponent *this,
        Caver::Proto::BushControllerComponent *a2)
{
  int v2; // w9
  int v3; // w9
  int v4; // w9
  int v5; // w9
  int v6; // w9

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
    v5 = *((_DWORD *)this + 6);
    *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v5;
    v6 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v6;
  }
  return this;
}

