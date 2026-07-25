/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003157D0
 * Mangled: _ZN5Caver5Proto27ElevatorControllerComponent4SwapEPS1_
 * Demangled: Caver::Proto::ElevatorControllerComponent::Swap(Caver::Proto::ElevatorControllerComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000003157D0 string=0x00000000003157D4 " "
 *   insn=0x00000000003157D4 string=0x00000000003157D8 "("
 *   insn=0x00000000003157D8 string=0x00000000003157DC "\t"
 *   insn=0x00000000003157DC string=0x00000000003157E0 ""
 *   insn=0x00000000003157E0 string=0x00000000003157E4 ")"
 *   insn=0x00000000003157E4 string=0x00000000003157E8 "("
 *   insn=0x00000000003157E8 string=0x00000000003157EC "\t"
 *   insn=0x00000000003157EC string=0x00000000003157F0 ""
 *   insn=0x00000000003157F0 string=0x00000000003157F4 ")"
 *   insn=0x00000000003157F4 string=0x00000000003157F8 "("
 *   insn=0x00000000003157F8 string=0x00000000003157FC "\t"
 *   insn=0x00000000003157FC string=0x0000000000315800 ""
 *   insn=0x0000000000315800 string=0x0000000000315804 ")"
 *   insn=0x0000000000315804 string=0x0000000000315808 "(@"
 *   insn=0x0000000000315808 string=0x000000000031580C "\t@"
 *   insn=0x000000000031580C string=0x0000000000315810 ""
 *   insn=0x0000000000315810 string=0x0000000000315814 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::ElevatorControllerComponent *__fastcall Caver::Proto::ElevatorControllerComponent::Swap(
        Caver::Proto::ElevatorControllerComponent *this,
        Caver::Proto::ElevatorControllerComponent *a2)
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

