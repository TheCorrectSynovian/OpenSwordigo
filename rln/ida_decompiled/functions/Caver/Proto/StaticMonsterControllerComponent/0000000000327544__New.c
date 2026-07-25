/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000327544
 * Mangled: _ZNK5Caver5Proto32StaticMonsterControllerComponent3NewEv
 * Demangled: Caver::Proto::StaticMonsterControllerComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 8
 *   insn=0x000000000032754C string=0x0000000000327550 "$8"
 *   insn=0x0000000000327550 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000327554 string=0x0000000000327558 "%D"
 *   insn=0x0000000000327558 string=0x000000000032755C "*"
 *   insn=0x000000000032755C string=0x0000000000327560 "@9B"
 *   insn=0x0000000000327560 string=0x0000000000327564 "\t"
 *   insn=0x0000000000327564 string=0x0000000000327568 "A"
 *   insn=0x000000000032756C string=0x0000000000327570 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::StaticMonsterControllerComponent::New(
        Caver::Proto::StaticMonsterControllerComponent *this)
{
  __int64 v1; // x0
  double result; // d0

  v1 = operator new(0x38u);
  *(_QWORD *)&result = 0x400000000LL;
  *(_QWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 16) = v1 + 32;
  *(_QWORD *)v1 = off_6C8E38;
  *(_QWORD *)(v1 + 24) = 0x400000000LL;
  *(_DWORD *)(v1 + 48) = 0;
  return result;
}

