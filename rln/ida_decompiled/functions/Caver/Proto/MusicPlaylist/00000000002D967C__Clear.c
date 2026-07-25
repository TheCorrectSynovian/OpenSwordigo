/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D967C
 * Mangled: _ZN5Caver5Proto13MusicPlaylist5ClearEv
 * Demangled: Caver::Proto::MusicPlaylist::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 13
 *   insn=0x00000000002D9688 string=0x00000000002D968C "hBA9h"
 *   insn=0x00000000002D968C string=0x00000000002D9690 "h"
 *   insn=0x00000000002D9690 string=0x00000000002D9694 "h "
 *   insn=0x00000000002D9690 string=0x00000000002D96BC "h"@"
 *   insn=0x00000000002D9694 string=0x00000000002D9698 "`\n@"
 *   insn=0x00000000002D9698 string=0x00000000002D969C ""
 *   insn=0x00000000002D96A4 string=0x00000000002D96A8 ""
 *   insn=0x00000000002D96C0 string=0x00000000002D96C4 "k"
 *   insn=0x00000000002D96C8 string=0x00000000002D96CC "h"
 *   insn=0x00000000002D96D0 string=0x00000000002D96D4 ""
 *   insn=0x00000000002D96D4 string=0x00000000002D96D8 ""
 *   insn=0x00000000002D96DC string=0x00000000002D96E0 "h""
 *   insn=0x00000000002D96E8 string=0x00000000002D96EC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MusicPlaylist::Clear(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x20
  __int64 v3; // x0

  v1 = this;
  if ( (*(_BYTE *)(this + 80) & 1) != 0 )
  {
    this = *(_QWORD *)(this + 16);
    if ( (__int64 *)this != &Caver::Proto::MusicPlaylist::_default_name_ )
      this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
  }
  if ( *(int *)(v1 + 32) >= 1 )
  {
    v2 = 0;
    do
    {
      v3 = *(_QWORD *)(*(_QWORD *)(v1 + 24) + 8 * v2);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
      ++v2;
    }
    while ( v2 < *(int *)(v1 + 32) );
  }
  *(_DWORD *)(v1 + 32) = 0;
  *(_DWORD *)(v1 + 80) = 0;
  return this;
}

