/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C38AC
 * Mangled: _ZN5Caver5QuestC2Ev
 * Demangled: Caver::Quest::Quest(void)
 *
 * Callers: 1
 *   0x00000000001F8AE0  Caver::Quest::Quest(void)
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000003C38AC string=0x00000000003C38B0 ")"
 *   insn=0x00000000003C38B0 string=0x00000000003C38B4 ""
 *   insn=0x00000000003C38B4 string=0x00000000003C38B8 ""
 *   insn=0x00000000003C38B8 string=0x00000000003C38BC "(a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall Caver::Quest::Quest(Caver::Quest *this)
{
  int64x2_t result; // q0

  *(_DWORD *)this = -1;
  result = vdupq_n_s64((unsigned __int64)&byte_6FD2F8);
  *(int64x2_t *)((char *)this + 8) = result;
  *(int64x2_t *)((char *)this + 24) = result;
  return result;
}

