/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D7F90
 * Mangled: _ZN5Caver5Proto11SoundEffect4SwapEPS1_
 * Demangled: Caver::Proto::SoundEffect::Swap(Caver::Proto::SoundEffect*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x00000000002D7F94 string=0x00000000002D7F98 "(@"
 *   insn=0x00000000002D7F98 string=0x00000000002D7F9C "\t@"
 *   insn=0x00000000002D7F9C string=0x00000000002D7FA0 ""
 *   insn=0x00000000002D7FA0 string=0x00000000002D7FA4 ")"
 *   insn=0x00000000002D7FA4 string=0x00000000002D7FA8 "("
 *   insn=0x00000000002D7FA8 string=0x00000000002D7FAC "\t"
 *   insn=0x00000000002D7FAC string=0x00000000002D7FB0 ""
 *   insn=0x00000000002D7FB0 string=0x00000000002D7FB4 ")"
 *   insn=0x00000000002D7FB4 string=0x00000000002D7FB8 "( @"
 *   insn=0x00000000002D7FB8 string=0x00000000002D7FBC "\t @"
 *   insn=0x00000000002D7FBC string=0x00000000002D7FC0 " "
 *   insn=0x00000000002D7FC0 string=0x00000000002D7FC4 ") "
 *   insn=0x00000000002D7FC4 string=0x00000000002D7FC8 "(@B"
 *   insn=0x00000000002D7FC8 string=0x00000000002D7FCC "\t@B"
 *   insn=0x00000000002D7FCC string=0x00000000002D7FD0 "@"
 *   insn=0x00000000002D7FD0 string=0x00000000002D7FD4 ")@"
 *   insn=0x00000000002D7FD4 string=0x00000000002D7FD8 "(@"
 *   insn=0x00000000002D7FD8 string=0x00000000002D7FDC "\t@"
 *   insn=0x00000000002D7FDC string=0x00000000002D7FE0 ""
 *   insn=0x00000000002D7FE0 string=0x00000000002D7FE4 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SoundEffect::Swap(__int64 this, Caver::Proto::SoundEffect *a2)
{
  __int64 v2; // x9
  __int64 v3; // x9
  __int64 v4; // x9

  if ( a2 != (Caver::Proto::SoundEffect *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    v3 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 32);
    *(_DWORD *)(this + 32) = *((_DWORD *)a2 + 8);
    *((_DWORD *)a2 + 8) = v3;
    v4 = *(_QWORD *)(this + 36);
    *(_QWORD *)(this + 36) = *(_QWORD *)((char *)a2 + 36);
    *(_QWORD *)((char *)a2 + 36) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v4;
  }
  return this;
}

