/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002676AC
 * Mangled: _ZN5Caver21EntityActionComponent13HandleMessageEiPv
 * Demangled: Caver::EntityActionComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F99C0  Caver::ProgramState::Abort(void)
 *
 * Referenced strings: 20
 *   insn=0x00000000002676B4 string=0x00000000002676B8 "?"
 *   insn=0x00000000002676BC string=0x00000000002676C0 "@"
 *   insn=0x00000000002676C0 string=0x00000000002676C4 "?"
 *   insn=0x00000000002676C0 string=0x00000000002676E8 "`N@"
 *   insn=0x00000000002676C8 string=0x00000000002676CC "?"
 *   insn=0x00000000002676C8 string=0x0000000000267700 "hN@"
 *   insn=0x00000000002676D0 string=0x00000000002676D4 "hN@"
 *   insn=0x00000000002676D4 string=0x00000000002676D8 "h"
 *   insn=0x00000000002676DC string=0x00000000002676E0 "\tE"
 *   insn=0x00000000002676E0 string=0x00000000002676E4 " "
 *   insn=0x00000000002676EC string=0x00000000002676F0 "LA9"
 *   insn=0x00000000002676F8 string=0x00000000001F99C0 "0'"
 *   insn=0x00000000002676FC string=0x0000000000267710 "tR@"
 *   insn=0x0000000000267700 string=0x0000000000267704 ""
 *   insn=0x0000000000267704 string=0x0000000000267708 "\tMA9"
 *   insn=0x0000000000267714 string=0x0000000000267718 "t"
 *   insn=0x000000000026771C string=0x0000000000267720 ""
 *   insn=0x0000000000267730 string=0x0000000000267734 "\t@"
 *   insn=0x000000000026773C string=0x0000000000267740 ""
 *   insn=0x0000000000267750 string=0x0000000000267754 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityActionComponent::HandleMessage(Caver::EntityActionComponent *this, int a2, void *a3)
{
  __int64 v4; // x8
  Caver::ProgramState *v5; // x0
  __int64 v6; // x8
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x8

  if ( a2 == 2 )
  {
    v5 = (Caver::ProgramState *)*((_QWORD *)this + 19);
    if ( !v5 || *((_BYTE *)v5 + 83) )
      return 0;
    Caver::ProgramState::Abort(v5);
  }
  else
  {
    if ( a2 != 6 )
    {
      if ( a2 == 5 )
      {
        v4 = *((_QWORD *)this + 19);
        if ( v4 )
          *(_BYTE *)(v4 + 81) = 1;
      }
      return 0;
    }
    v6 = *((_QWORD *)this + 19);
    if ( !v6 )
      return 0;
    if ( !*(_BYTE *)(v6 + 83) )
    {
      *(_BYTE *)(v6 + 81) = 0;
      return 0;
    }
  }
  v7 = (_QWORD *)*((_QWORD *)this + 20);
  *((_QWORD *)this + 19) = 0;
  *((_QWORD *)this + 20) = 0;
  if ( v7 )
  {
    v8 = v7[1] - 1LL;
    v7[1] = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
  }
  return 0;
}

