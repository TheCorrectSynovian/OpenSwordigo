/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CC414
 * Mangled: _ZN5Caver11WeaponTrail27RemoveSegmentsFromBeginningEi
 * Demangled: Caver::WeaponTrail::RemoveSegmentsFromBeginning(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBBB0  .memmove
 *
 * Referenced strings: 8
 *   insn=0x00000000002CC414 string=0x00000000002CC418 ""
 *   insn=0x00000000002CC418 string=0x00000000002CC41C "*x"
 *   insn=0x00000000002CC41C string=0x00000000002CC420 "J}@"
 *   insn=0x00000000002CC420 string=0x00000000002CC424 ")"
 *   insn=0x00000000002CC428 string=0x00000000002CC42C "*y"
 *   insn=0x00000000002CC42C string=0x00000000002CC430 "B}{"
 *   insn=0x00000000002CC430 string=0x00000000002CC434 "\t"
 *   insn=0x00000000002CC43C string=0x00000000001FBBB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall Caver::WeaponTrail::RemoveSegmentsFromBeginning(Caver::WeaponTrail *this, int a2)
{
  char *v2; // x8
  int v3; // w9

  v2 = (char *)*((_QWORD *)this + 3);
  v3 = *((_DWORD *)this + 1) - a2;
  *((_DWORD *)this + 1) = v3;
  return memmove(v2, &v2[64 * a2], 64LL * v3);
}

