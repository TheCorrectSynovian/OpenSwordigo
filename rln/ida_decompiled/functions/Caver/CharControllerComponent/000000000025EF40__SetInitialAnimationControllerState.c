/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025EF40
 * Mangled: _ZN5Caver23CharControllerComponent34SetInitialAnimationControllerStateEv
 * Demangled: Caver::CharControllerComponent::SetInitialAnimationControllerState(void)
 *
 * Callers: 1
 *   0x00000000001F3810  Caver::CharControllerComponent::SetInitialAnimationControllerState(void)
 *
 * Callees: 5
 *   0x00000000001F76E0  Caver::CharAnimControllerComponent::Reset(void)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F8CF0  Caver::CharAnimControllerComponent::StartMoving(void)
 *   0x00000000001FAE40  Caver::CharAnimControllerComponent::StartFalling(void)
 *   0x00000000001FE020  Caver::CharAnimControllerComponent::StartJumping(bool)
 *
 * Referenced strings: 81
 *   insn=0x000000000025EF4C string=0x000000000025EF50 "`"
 *   insn=0x000000000025EF50 string=0x000000000025EF54 "`"
 *   insn=0x000000000025EF54 string=0x000000000025EF58 "`N@"
 *   insn=0x000000000025EF5C string=0x000000000025EF60 "`""
 *   insn=0x000000000025EF5C string=0x000000000025EF74 "@"
 *   insn=0x000000000025EF68 string=0x000000000025EF6C "`N@"
 *   insn=0x000000000025EF68 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000025EF70 string=0x000000000025EF80 "h"
 *   insn=0x000000000025EF74 string=0x000000000025EF78 ""
 *   insn=0x000000000025EF78 string=0x000000000025EF7C ""
 *   insn=0x000000000025EF80 string=0x000000000025EF84 "`"
 *   insn=0x000000000025EF88 string=0x000000000025EF8C "\t\t@"
 *   insn=0x000000000025EF88 string=0x000000000025EF9C "@"
 *   insn=0x000000000025EF8C string=0x000000000025EF90 ")"
 *   insn=0x000000000025EF90 string=0x000000000025EF94 "\t\t"
 *   insn=0x000000000025EF98 string=0x000000000025F10C "\t"
 *   insn=0x000000000025EFA0 string=0x000000000025EFA4 "h2B"
 *   insn=0x000000000025EFA0 string=0x00000000001F76E0 "0'"
 *   insn=0x000000000025EFA8 string=0x000000000025EFAC "`"
 *   insn=0x000000000025EFA8 string=0x000000000025EFB8 "hRB"
 *   insn=0x000000000025EFAC string=0x000000000025EFB0 "@"
 *   insn=0x000000000025EFB0 string=0x000000000025EFB4 "Og"
 *   insn=0x000000000025EFB0 string=0x000000000025EFF8 "`N@"
 *   insn=0x000000000025EFB4 string=0x00000000001F8CF0 "0'"
 *   insn=0x000000000025EFC0 string=0x000000000025EFC4 "`"
 *   insn=0x000000000025EFC0 string=0x000000000025EFDC "hrI9(\n"
 *   insn=0x000000000025EFC4 string=0x000000000025EFC8 "`"
 *   insn=0x000000000025EFC8 string=0x000000000025F054 "`N@"
 *   insn=0x000000000025EFDC string=0x000000000025EFE0 "(\n"
 *   insn=0x000000000025EFE0 string=0x000000000025EFE4 "`"
 *   insn=0x000000000025EFE4 string=0x000000000025EFE8 "@"
 *   insn=0x000000000025EFE8 string=0x000000000025F0B0 "`N@"
 *   insn=0x000000000025EFF4 string=0x00000000001FAE40 "0'"
 *   insn=0x000000000025EFFC string=0x000000000025F000 "`""
 *   insn=0x000000000025EFFC string=0x000000000025F014 "@"
 *   insn=0x000000000025F008 string=0x000000000025F00C "`N@"
 *   insn=0x000000000025F010 string=0x000000000025F020 "h"
 *   insn=0x000000000025F014 string=0x000000000025F018 ""
 *   insn=0x000000000025F018 string=0x000000000025F01C ""
 *   insn=0x000000000025F020 string=0x000000000025F024 "`"
 *   insn=0x000000000025F024 string=0x000000000025F028 "h"
 *   insn=0x000000000025F028 string=0x000000000025F02C "\t\t@"
 *   insn=0x000000000025F02C string=0x000000000025F030 ")"
 *   insn=0x000000000025F030 string=0x000000000025F034 "\t\t"
 *   insn=0x000000000025F038 string=0x000000000025F03C "\t"
 *   insn=0x000000000025F040 string=0x000000000025F044 ")"
 *   insn=0x000000000025F044 string=0x000000000025F048 " "
 *   insn=0x000000000025F048 string=0x000000000025F04C "`"
 *   insn=0x000000000025F058 string=0x000000000025F05C "`""
 *   insn=0x000000000025F058 string=0x000000000025F070 "@"
 *   insn=0x000000000025F064 string=0x000000000025F068 "`N@"
 *   insn=0x000000000025F06C string=0x000000000025F07C "h"
 *   insn=0x000000000025F070 string=0x000000000025F074 ""
 *   insn=0x000000000025F074 string=0x000000000025F078 ""
 *   insn=0x000000000025F07C string=0x000000000025F080 "`"
 *   insn=0x000000000025F080 string=0x000000000025F084 "H"
 *   insn=0x000000000025F084 string=0x000000000025F088 "\t\t@"
 *   insn=0x000000000025F088 string=0x000000000025F08C ")"
 *   insn=0x000000000025F08C string=0x000000000025F090 "\t\t"
 *   insn=0x000000000025F094 string=0x000000000025F098 "\t"
 *   insn=0x000000000025F09C string=0x000000000025F0A0 ")"
 *   insn=0x000000000025F0A0 string=0x000000000025F0A4 " "
 *   insn=0x000000000025F0A4 string=0x000000000025F0A8 "`"
 *   insn=0x000000000025F0B4 string=0x000000000025F0B8 "`""
 *   insn=0x000000000025F0B4 string=0x000000000025F0CC "@"
 *   insn=0x000000000025F0C0 string=0x000000000025F0C4 "`N@"
 *   insn=0x000000000025F0C8 string=0x000000000025F0D8 "h"
 *   insn=0x000000000025F0CC string=0x000000000025F0D0 ""
 *   insn=0x000000000025F0D0 string=0x000000000025F0D4 ""
 *   insn=0x000000000025F0D8 string=0x000000000025F0DC "`"
 *   insn=0x000000000025F0DC string=0x000000000025F0E0 "h"
 *   insn=0x000000000025F0E0 string=0x000000000025F0E4 "\t\t@"
 *   insn=0x000000000025F0E4 string=0x000000000025F0E8 ")"
 *   insn=0x000000000025F0E8 string=0x000000000025F0EC "\t\t"
 *   insn=0x000000000025F0F0 string=0x000000000025F0F4 "\t"
 *   insn=0x000000000025F0F8 string=0x000000000025F0FC ")"
 *   insn=0x000000000025F0FC string=0x000000000025F100 " "
 *   insn=0x000000000025F100 string=0x000000000025F104 "`"
 *   insn=0x000000000025F110 string=0x000000000025F114 ")"
 *   insn=0x000000000025F114 string=0x000000000025F118 " "
 *   insn=0x000000000025F118 string=0x000000000025F11C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CharControllerComponent::SetInitialAnimationControllerState(
        Caver::CharControllerComponent *this)
{
  Caver::CharAnimControllerComponent *v2; // x0
  _QWORD *v3; // x8
  int v4; // w9
  Caver::CharAnimControllerComponent *v5; // x0
  Caver::CharAnimControllerComponent *v6; // x0
  Caver::CharAnimControllerComponent *v7; // x0
  _DWORD *v8; // x8
  int v9; // w9
  _DWORD *v10; // x8
  int v11; // w9
  _DWORD *v12; // x8
  int v13; // w9

  v2 = (Caver::CharAnimControllerComponent *)*((_QWORD *)this + 50);
  if ( !v2 )
  {
    v2 = (Caver::CharAnimControllerComponent *)*((_QWORD *)this + 19);
    if ( v2
      || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 136), this),
          (v2 = (Caver::CharAnimControllerComponent *)*((_QWORD *)this + 19)) != 0) )
    {
      ++*((_DWORD *)v2 + 2);
    }
    v3 = (_QWORD *)*((_QWORD *)this + 50);
    *((_QWORD *)this + 50) = v2;
    if ( v3 && (v4 = *((_DWORD *)v3 + 2) - 1, (*((_DWORD *)v3 + 2) = v4) == 0) )
    {
      (*(void (__fastcall **)(_QWORD *__return_ptr, _QWORD *))(*v3 + 8LL))(v3, v3);
      v2 = (Caver::CharAnimControllerComponent *)*((_QWORD *)this + 50);
      if ( !v2 )
        return;
    }
    else if ( !v2 )
    {
      return;
    }
  }
  Caver::CharAnimControllerComponent::Reset(v2);
  if ( *((_DWORD *)this + 140) )
  {
    v5 = (Caver::CharAnimControllerComponent *)*((_QWORD *)this + 50);
    if ( !v5 )
    {
      v5 = (Caver::CharAnimControllerComponent *)*((_QWORD *)this + 19);
      if ( v5
        || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 136), this),
            (v5 = (Caver::CharAnimControllerComponent *)*((_QWORD *)this + 19)) != 0) )
      {
        ++*((_DWORD *)v5 + 2);
      }
      v8 = (_DWORD *)*((_QWORD *)this + 50);
      *((_QWORD *)this + 50) = v5;
      if ( v8 )
      {
        v9 = v8[2] - 1;
        v8[2] = v9;
        if ( !v9 )
        {
          (*(void (__fastcall **)(_DWORD *__return_ptr, _DWORD *))(*(_QWORD *)v8 + 8LL))(v8, v8);
          v5 = (Caver::CharAnimControllerComponent *)*((_QWORD *)this + 50);
        }
      }
    }
    Caver::CharAnimControllerComponent::StartMoving(v5);
  }
  if ( *((_DWORD *)this + 148) == 3 )
  {
    v6 = (Caver::CharAnimControllerComponent *)*((_QWORD *)this + 50);
    if ( !v6 )
    {
      v6 = (Caver::CharAnimControllerComponent *)*((_QWORD *)this + 19);
      if ( v6
        || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 136), this),
            (v6 = (Caver::CharAnimControllerComponent *)*((_QWORD *)this + 19)) != 0) )
      {
        ++*((_DWORD *)v6 + 2);
      }
      v10 = (_DWORD *)*((_QWORD *)this + 50);
      *((_QWORD *)this + 50) = v6;
      if ( v10 )
      {
        v11 = v10[2] - 1;
        v10[2] = v11;
        if ( !v11 )
        {
          (*(void (__fastcall **)(_DWORD *__return_ptr, _DWORD *))(*(_QWORD *)v10 + 8LL))(v10, v10);
          v6 = (Caver::CharAnimControllerComponent *)*((_QWORD *)this + 50);
        }
      }
    }
    Caver::CharAnimControllerComponent::StartJumping(v6, 0);
  }
  else if ( *((_BYTE *)this + 604) )
  {
    v7 = (Caver::CharAnimControllerComponent *)*((_QWORD *)this + 50);
    if ( !v7 )
    {
      v7 = (Caver::CharAnimControllerComponent *)*((_QWORD *)this + 19);
      if ( v7
        || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 136), this),
            (v7 = (Caver::CharAnimControllerComponent *)*((_QWORD *)this + 19)) != 0) )
      {
        ++*((_DWORD *)v7 + 2);
      }
      v12 = (_DWORD *)*((_QWORD *)this + 50);
      *((_QWORD *)this + 50) = v7;
      if ( v12 )
      {
        v13 = v12[2] - 1;
        v12[2] = v13;
        if ( !v13 )
        {
          (*(void (__fastcall **)(_DWORD *__return_ptr, _DWORD *))(*(_QWORD *)v12 + 8LL))(v12, v12);
          v7 = (Caver::CharAnimControllerComponent *)*((_QWORD *)this + 50);
        }
      }
    }
    Caver::CharAnimControllerComponent::StartFalling(v7);
  }
}

