/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D8300
 * Mangled: _ZNK5Caver5Proto12SoundLibrary3NewEv
 * Demangled: Caver::Proto::SoundLibrary::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 8
 *   insn=0x00000000002D830C string=0x00000000002D8310 "h "
 *   insn=0x00000000002D830C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D8310 string=0x00000000002D8314 "uD"
 *   insn=0x00000000002D8314 string=0x00000000002D8318 "\t"
 *   insn=0x00000000002D831C string=0x00000000002D8320 "\t|"
 *   insn=0x00000000002D8320 string=0x00000000002D8324 "A"
 *   insn=0x00000000002D8328 string=0x00000000002D832C "\n "
 *   insn=0x00000000002D832C string=0x00000000002D8330 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SoundLibrary::New(Caver::Proto::SoundLibrary *this)
{
  __int64 result; // x0

  result = operator new(0x50u);
  *(_QWORD *)(result + 16) = result + 40;
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 32) = 4;
  *(_QWORD *)result = off_6C6188;
  *(_DWORD *)(result + 72) = 0;
  return result;
}

