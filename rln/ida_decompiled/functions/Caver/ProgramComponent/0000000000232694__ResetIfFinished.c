/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000232694
 * Mangled: _ZN5Caver16ProgramComponent15ResetIfFinishedEv
 * Demangled: Caver::ProgramComponent::ResetIfFinished(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x000000000023269C string=0x00000000002326A0 "X@"
 *   insn=0x00000000002326A0 string=0x00000000002326A4 "H"
 *   insn=0x00000000002326A4 string=0x00000000002326A8 "MA9"
 *   insn=0x00000000002326A8 string=0x00000000002326AC ""
 *   insn=0x00000000002326B8 string=0x00000000002326BC "h"
 *   insn=0x00000000002326BC string=0x00000000002326C0 ""
 *   insn=0x00000000002326C0 string=0x00000000002326C4 "h"
 *   insn=0x00000000002326C4 string=0x00000000002326C8 "!"
 *   insn=0x00000000002326C8 string=0x00000000002326CC "h"
 *   insn=0x00000000002326D0 string=0x00000000002326D4 "\t@"
 *   insn=0x00000000002326D8 string=0x00000000002326DC "h\n@"
 *   insn=0x00000000002326DC string=0x00000000002326E0 ""
 *   insn=0x00000000002326E0 string=0x00000000002326E4 "h\n"
 *   insn=0x00000000002326E8 string=0x00000000002326F8 "h"
 *   insn=0x0000000000232708 string=0x000000000023270C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramComponent::ResetIfFinished(__int64 this)
{
  __int64 v1; // x8
  _QWORD *v2; // x19
  __int64 v3; // x8
  __int64 v4; // x8

  v1 = *(_QWORD *)(this + 176);
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 83) )
    {
      v2 = *(_QWORD **)(this + 184);
      *(_QWORD *)(this + 176) = 0;
      *(_QWORD *)(this + 184) = 0;
      if ( v2 )
      {
        v3 = v2[1] - 1LL;
        v2[1] = v3;
        if ( !v3 )
        {
          this = (*(__int64 (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
          v4 = v2[2] - 1LL;
          v2[2] = v4;
          if ( !v4 )
            return (*(__int64 (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
        }
      }
    }
  }
  return this;
}

