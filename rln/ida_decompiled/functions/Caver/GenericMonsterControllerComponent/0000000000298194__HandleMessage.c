/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000298194
 * Mangled: _ZN5Caver33GenericMonsterControllerComponent13HandleMessageEiPv
 * Demangled: Caver::GenericMonsterControllerComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 24
 *   insn=0x00000000002981A0 string=0x00000000002981A4 "?T"
 *   insn=0x00000000002981AC string=0x00000000002981B0 "h"
 *   insn=0x00000000002981B0 string=0x00000000002981B4 "@,@"
 *   insn=0x00000000002981B0 string=0x0000000000584430 "333?"
 *   insn=0x00000000002981BC string=0x00000000002981C0 "("
 *   insn=0x00000000002981C0 string=0x00000000002981C4 "h"
 *   insn=0x00000000002981C4 string=0x0000000000587F44 "fff"
 *   insn=0x00000000002981D0 string=0x00000000002981D4 "@(@"
 *   insn=0x00000000002981D4 string=0x00000000002981D8 "h\nA"
 *   insn=0x00000000002981D8 string=0x00000000002981DC "\t"
 *   insn=0x00000000002981DC string=0x00000000002981E0 "  "
 *   insn=0x00000000002981E0 string=0x00000000002981E4 "4E"
 *   insn=0x00000000002981EC string=0x00000000002981F0 "hB@"
 *   insn=0x00000000002981F0 string=0x00000000002981F4 "t\n"
 *   insn=0x00000000002981FC string=0x0000000000298200 "`"
 *   insn=0x00000000002981FC string=0x0000000000298210 "`r@"
 *   insn=0x0000000000298204 string=0x0000000000298208 "6~"
 *   insn=0x0000000000298208 string=0x000000000029820C "hB@"
 *   insn=0x0000000000298208 string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000298218 string=0x000000000029821C "`B"
 *   insn=0x0000000000298218 string=0x000000000029822C ""
 *   insn=0x0000000000298220 string=0x0000000000298224 "/~"
 *   insn=0x0000000000298224 string=0x0000000000298228 "`r@"
 *   insn=0x0000000000298234 string=0x0000000000298238 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GenericMonsterControllerComponent::HandleMessage(
        Caver::GenericMonsterControllerComponent *this,
        int a2,
        float *a3)
{
  float v4; // s0
  int v5; // w20
  __int64 v6; // x8
  __int64 v7; // x0
  int v8; // w21

  if ( a2 == 21 )
  {
    v4 = a3[11];
    if ( v4 <= 0.7 && v4 > -0.9 )
    {
      v5 = a3[10] >= 0.0 ? 1 : -1;
      if ( *((_DWORD *)this + 66) != v5 )
      {
        v6 = *((_QWORD *)this + 16);
        *((_DWORD *)this + 66) = v5;
        *((_DWORD *)this + 67) = 0;
        if ( !v6 )
        {
          Caver::ComponentOutletBase::Connect((Caver::GenericMonsterControllerComponent *)((char *)this + 112), this);
          v6 = *((_QWORD *)this + 16);
        }
        v7 = *((_QWORD *)this + 28);
        v8 = *(_DWORD *)(v6 + 112);
        if ( !v7 )
        {
          Caver::ComponentOutletBase::Connect((Caver::GenericMonsterControllerComponent *)((char *)this + 208), this);
          v7 = *((_QWORD *)this + 28);
        }
        *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 264LL))(v7) + 57) = v8 != v5;
      }
    }
  }
  return 0;
}

