/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003271C4
 * Mangled: _ZN5Caver5Proto32SkellyMonsterControllerComponent4SwapEPS1_
 * Demangled: Caver::Proto::SkellyMonsterControllerComponent::Swap(Caver::Proto::SkellyMonsterControllerComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000003271C4 string=0x00000000003271C8 " "
 *   insn=0x00000000003271C8 string=0x00000000003271CC "("
 *   insn=0x00000000003271CC string=0x00000000003271D0 "\t"
 *   insn=0x00000000003271D0 string=0x00000000003271D4 ""
 *   insn=0x00000000003271D4 string=0x00000000003271D8 ")"
 *   insn=0x00000000003271D8 string=0x00000000003271DC "("
 *   insn=0x00000000003271DC string=0x00000000003271E0 "\t"
 *   insn=0x00000000003271E0 string=0x00000000003271E4 ""
 *   insn=0x00000000003271E4 string=0x00000000003271E8 ")"
 *   insn=0x00000000003271E8 string=0x00000000003271EC "("
 *   insn=0x00000000003271EC string=0x00000000003271F0 "\t"
 *   insn=0x00000000003271F0 string=0x00000000003271F4 ""
 *   insn=0x00000000003271F4 string=0x00000000003271F8 ")"
 *   insn=0x00000000003271F8 string=0x00000000003271FC "(@"
 *   insn=0x00000000003271FC string=0x0000000000327200 "\t@"
 *   insn=0x0000000000327200 string=0x0000000000327204 ""
 *   insn=0x0000000000327204 string=0x0000000000327208 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::SkellyMonsterControllerComponent *__fastcall Caver::Proto::SkellyMonsterControllerComponent::Swap(
        Caver::Proto::SkellyMonsterControllerComponent *this,
        Caver::Proto::SkellyMonsterControllerComponent *a2)
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

