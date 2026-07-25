/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030FD30
 * Mangled: _ZNK5Caver5Proto14LightComponent3NewEv
 * Demangled: Caver::Proto::LightComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x000000000030FD38 string=0x000000000030FD3C ")"
 *   insn=0x000000000030FD3C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000030FD40 string=0x000000000030FD44 "yB"
 *   insn=0x000000000030FD50 string=0x000000000030FD54 "A"
 *   insn=0x000000000030FD58 string=0x000000000030FD5C "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::LightComponent::New(Caver::Proto::LightComponent *this)
{
  __int64 result; // x0

  result = operator new(0x40u);
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)result = off_6C7CE0;
  *(_QWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 40) = 0;
  return result;
}

