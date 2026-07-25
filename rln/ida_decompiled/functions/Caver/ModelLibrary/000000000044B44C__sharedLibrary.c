/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044B44C
 * Mangled: _ZN5Caver12ModelLibrary13sharedLibraryEv
 * Demangled: Caver::ModelLibrary::sharedLibrary(void)
 *
 * Callers: 1
 *   0x00000000001FCE60  Caver::ModelLibrary::sharedLibrary(void)
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FBC40  .memset
 *
 * Referenced strings: 9
 *   insn=0x000000000044B460 string=0x000000000044B464 "S"
 *   insn=0x000000000044B468 string=0x000000000044B46C "]"
 *   insn=0x000000000044B46C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000044B478 string=0x000000000044B47C "u""
 *   insn=0x000000000044B480 string=0x00000000001FBC40 "0'"
 *   insn=0x000000000044B484 string=0x000000000044B488 "u"
 *   insn=0x000000000044B494 string=0x000000000044B498 "h~"
 *   insn=0x000000000044B498 string=0x000000000044B49C "?"
 *   insn=0x000000000044B4A0 string=0x000000000044B4A4 "i~"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::ModelLibrary::sharedLibrary(Caver::ModelLibrary *this)
{
  _QWORD *v1; // x19

  v1 = (_QWORD *)qword_6E9A38;
  if ( !qword_6E9A38 )
  {
    v1 = (_QWORD *)operator new(0x90u);
    memset(v1, 0, 0x90u);
    v1[3] = v1 + 1;
    v1[4] = v1 + 1;
    v1[7] = 0;
    v1[8] = 0;
    v1[9] = v1 + 7;
    v1[10] = v1 + 7;
    v1[11] = 0;
    v1[13] = 0;
    v1[14] = 0;
    v1[15] = v1 + 13;
    v1[16] = v1 + 13;
    v1[17] = 0;
    qword_6E9A38 = (__int64)v1;
  }
  return v1;
}

