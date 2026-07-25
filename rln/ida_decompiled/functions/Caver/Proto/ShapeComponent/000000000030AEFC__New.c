/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030AEFC
 * Mangled: _ZNK5Caver5Proto14ShapeComponent3NewEv
 * Demangled: Caver::Proto::ShapeComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 4
 *   insn=0x000000000030AF08 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000030AF0C string=0x000000000030AF10 ""
 *   insn=0x000000000030AF1C string=0x000000000030AF20 "A"
 *   insn=0x000000000030AF20 string=0x000000000030AF24 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ShapeComponent::New(Caver::Proto::ShapeComponent *this)
{
  __int64 result; // x0

  result = operator new(0x30u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)result = off_6C7A10;
  *(_DWORD *)(result + 40) = 0;
  return result;
}

