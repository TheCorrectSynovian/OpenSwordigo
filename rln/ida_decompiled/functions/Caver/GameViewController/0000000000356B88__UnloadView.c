/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000356B88
 * Mangled: _ZN5Caver18GameViewController10UnloadViewEv
 * Demangled: Caver::GameViewController::UnloadView(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7760  Caver::GameViewController::SaveGameState(bool)
 *
 * Referenced strings: 6
 *   insn=0x0000000000356B88 string=0x0000000000356B8C ""
 *   insn=0x0000000000356B8C string=0x0000000000356B90 "\t"
 *   insn=0x0000000000356B90 string=0x0000000000356B94 "i"
 *   insn=0x0000000000356B94 string=0x0000000000356B98 ""
 *   insn=0x0000000000356B98 string=0x0000000000356B9C "H"
 *   insn=0x0000000000356BA8 string=0x00000000001F7760 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GameViewController *__fastcall Caver::GameViewController::UnloadView(Caver::GameViewController *this)
{
  __int64 v1; // x8

  v1 = *(_QWORD *)(*((_QWORD *)this + 27) + 256LL);
  if ( !*(_BYTE *)(v1 + 228) && !*(_BYTE *)(v1 + 416) )
    return (Caver::GameViewController *)Caver::GameViewController::SaveGameState(this, 1);
  return this;
}

