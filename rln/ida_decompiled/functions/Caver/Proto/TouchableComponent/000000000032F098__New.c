/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032F098
 * Mangled: _ZNK5Caver5Proto18TouchableComponent3NewEv
 * Demangled: Caver::Proto::TouchableComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x000000000032F0A0 string=0x000000000032F0A4 "O"
 *   insn=0x000000000032F0A4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032F0A8 string=0x000000000032F0AC ""
 *   insn=0x000000000032F0B4 string=0x000000000032F0B8 "A"
 *   insn=0x000000000032F0B8 string=0x000000000032F0BC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::TouchableComponent::New(Caver::Proto::TouchableComponent *this)
{
  __int64 result; // x0

  result = operator new(0x20u);
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_QWORD *)result = off_6C94C8;
  return result;
}

