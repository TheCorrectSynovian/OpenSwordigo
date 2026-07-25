/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003147BC
 * Mangled: _ZNK5Caver5Proto15EntityComponent3NewEv
 * Demangled: Caver::Proto::EntityComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 6
 *   insn=0x00000000003147C8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003147CC string=0x00000000003147D0 "UG"
 *   insn=0x00000000003147D4 string=0x00000000003147D8 " 1E"
 *   insn=0x00000000003147DC string=0x00000000003147E0 "A"
 *   insn=0x00000000003147E0 string=0x00000000003147E4 "\n@"
 *   insn=0x00000000003147E4 string=0x00000000003147E8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::EntityComponent::New(Caver::Proto::EntityComponent *this)
{
  __int64 v1; // x0
  double result; // d0

  v1 = operator new(0x18u);
  *(_QWORD *)&result = 0x100000000LL;
  *(_BYTE *)(v1 + 16) = 1;
  *(_QWORD *)v1 = off_6C7FB0;
  *(_QWORD *)(v1 + 8) = 0x100000000LL;
  *(_DWORD *)(v1 + 20) = 0;
  return result;
}

