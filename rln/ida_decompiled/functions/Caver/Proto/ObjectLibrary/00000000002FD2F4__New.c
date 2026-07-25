/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FD2F4
 * Mangled: _ZNK5Caver5Proto13ObjectLibrary3NewEv
 * Demangled: Caver::Proto::ObjectLibrary::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 19
 *   insn=0x00000000002FD300 string=0x00000000002FD304 "H"
 *   insn=0x00000000002FD300 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002FD304 string=0x00000000002FD308 "J"
 *   insn=0x00000000002FD308 string=0x00000000002FD30C "eG"
 *   insn=0x00000000002FD30C string=0x00000000002FD310 "J"
 *   insn=0x00000000002FD310 string=0x00000000002FD314 "\t"
 *   insn=0x00000000002FD318 string=0x00000000002FD31C "A"
 *   insn=0x00000000002FD31C string=0x00000000002FD320 "\n$"
 *   insn=0x00000000002FD320 string=0x00000000002FD324 "\t"
 *   insn=0x00000000002FD324 string=0x00000000002FD328 "\t("
 *   insn=0x00000000002FD328 string=0x00000000002FD32C "\t"
 *   insn=0x00000000002FD32C string=0x00000000002FD330 "\tD"
 *   insn=0x00000000002FD330 string=0x00000000002FD334 "\t`"
 *   insn=0x00000000002FD334 string=0x00000000002FD338 "\t`"
 *   insn=0x00000000002FD344 string=0x00000000002FD348 "\t("
 *   insn=0x00000000002FD34C string=0x00000000002FD350 "\t`"
 *   insn=0x00000000002FD354 string=0x00000000002FD358 "\t"
 *   insn=0x00000000002FD35C string=0x00000000002FD360 "\t"
 *   insn=0x00000000002FD360 string=0x00000000002FD364 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::ObjectLibrary::New(Caver::Proto::ObjectLibrary *this)
{
  __int64 v1; // x0
  double result; // d0

  v1 = operator new(0x100u);
  result = 0.0;
  *(_QWORD *)(v1 + 16) = &Caver::Proto::ObjectLibrary::_default_name_;
  *(_QWORD *)(v1 + 24) = v1 + 48;
  *(_QWORD *)(v1 + 80) = v1 + 104;
  *(_QWORD *)(v1 + 136) = v1 + 160;
  *(_QWORD *)(v1 + 192) = v1 + 216;
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 32) = 0;
  *(_DWORD *)(v1 + 40) = 4;
  *(_QWORD *)(v1 + 88) = 0;
  *(_DWORD *)(v1 + 96) = 4;
  *(_QWORD *)(v1 + 144) = 0;
  *(_DWORD *)(v1 + 152) = 4;
  *(_QWORD *)(v1 + 200) = 0;
  *(_DWORD *)(v1 + 208) = 4;
  *(_QWORD *)v1 = off_6C7380;
  *(_DWORD *)(v1 + 248) = 0;
  return result;
}

