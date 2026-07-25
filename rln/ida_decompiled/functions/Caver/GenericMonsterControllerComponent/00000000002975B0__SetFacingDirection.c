/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002975B0
 * Mangled: _ZN5Caver33GenericMonsterControllerComponent18SetFacingDirectionEi
 * Demangled: Caver::GenericMonsterControllerComponent::SetFacingDirection(int)
 *
 * Callers: 1
 *   0x00000000001F7A20  Caver::GenericMonsterControllerComponent::SetFacingDirection(int)
 *
 * Callees: 2
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FD020  Caver::EntityComponent::SetFacingDirection(int)
 *
 * Referenced strings: 21
 *   insn=0x00000000002975C0 string=0x00000000002975C4 "`B@"
 *   insn=0x00000000002975CC string=0x00000000002975D0 "`"
 *   insn=0x00000000002975CC string=0x00000000002975E0 "p@"
 *   insn=0x00000000002975D4 string=0x00000000002975D8 "B"
 *   insn=0x00000000002975D8 string=0x00000000002975DC "`B@"
 *   insn=0x00000000002975D8 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002975EC string=0x00000000002975F0 "`"
 *   insn=0x00000000002975F4 string=0x00000000002975F8 ":"
 *   insn=0x00000000002975F8 string=0x00000000002975FC "`B@"
 *   insn=0x0000000000297604 string=0x0000000000297608 "hB@"
 *   insn=0x0000000000297604 string=0x00000000001FD020 "0'"
 *   insn=0x0000000000297608 string=0x000000000029760C "t\nA"
 *   insn=0x0000000000297610 string=0x0000000000297614 "`"
 *   insn=0x0000000000297610 string=0x0000000000297624 "`r@"
 *   insn=0x0000000000297618 string=0x000000000029761C "1"
 *   insn=0x000000000029761C string=0x0000000000297620 "hB@"
 *   insn=0x000000000029762C string=0x0000000000297630 "`B"
 *   insn=0x000000000029762C string=0x0000000000297640 ""
 *   insn=0x0000000000297634 string=0x0000000000297638 "*"
 *   insn=0x0000000000297638 string=0x000000000029763C "`r@"
 *   insn=0x0000000000297648 string=0x000000000029764C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GenericMonsterControllerComponent::SetFacingDirection(
        Caver::GenericMonsterControllerComponent *this,
        int a2)
{
  __int64 result; // x0
  __int64 v5; // x8
  int v6; // w20
  __int64 v7; // x0
  int v8; // w21

  result = *((_QWORD *)this + 16);
  if ( !result )
  {
    Caver::ComponentOutletBase::Connect((Caver::GenericMonsterControllerComponent *)((char *)this + 112), this);
    result = *((_QWORD *)this + 16);
  }
  if ( *(_DWORD *)(result + 112) != a2 )
  {
    if ( !result )
    {
      Caver::ComponentOutletBase::Connect((Caver::GenericMonsterControllerComponent *)((char *)this + 112), this);
      result = *((_QWORD *)this + 16);
    }
    Caver::EntityComponent::SetFacingDirection((Caver::EntityComponent *)result, a2);
    v5 = *((_QWORD *)this + 16);
    v6 = *((_DWORD *)this + 66);
    if ( !v5 )
    {
      Caver::ComponentOutletBase::Connect((Caver::GenericMonsterControllerComponent *)((char *)this + 112), this);
      v5 = *((_QWORD *)this + 16);
    }
    v7 = *((_QWORD *)this + 28);
    v8 = *(_DWORD *)(v5 + 112);
    if ( !v7 )
    {
      Caver::ComponentOutletBase::Connect((Caver::GenericMonsterControllerComponent *)((char *)this + 208), this);
      v7 = *((_QWORD *)this + 28);
    }
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 264LL))(v7);
    *(_BYTE *)(result + 57) = v6 != v8;
  }
  return result;
}

