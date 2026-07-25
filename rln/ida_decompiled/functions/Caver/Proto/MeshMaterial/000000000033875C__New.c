/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033875C
 * Mangled: _ZNK5Caver5Proto12MeshMaterial3NewEv
 * Demangled: Caver::Proto::MeshMaterial::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x0000000000338768 string=0x000000000033876C "h"
 *   insn=0x0000000000338768 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000033876C string=0x0000000000338770 "\tE"
 *   insn=0x000000000033877C string=0x0000000000338780 "A"
 *   insn=0x0000000000338788 string=0x000000000033878C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MeshMaterial::New(Caver::Proto::MeshMaterial *this)
{
  __int64 result; // x0

  result = operator new(0x40u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)result = off_6C9CC0;
  *(_DWORD *)(result + 40) = 0;
  return result;
}

