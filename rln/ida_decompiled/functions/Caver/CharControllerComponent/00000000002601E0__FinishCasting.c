/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002601E0
 * Mangled: _ZN5Caver23CharControllerComponent13FinishCastingEv
 * Demangled: Caver::CharControllerComponent::FinishCasting(void)
 *
 * Callers: 1
 *   0x00000000001F9350  Caver::CharControllerComponent::FinishCasting(void)
 *
 * Callees: 12
 *   0x00000000001F4090  Caver::SkillComponent::FinishCasting(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000200B80  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *   0x0000000000201190  Caver::SkillComponent::CancelCasting(void)
 *   0x0000000000203AD0  Caver::CharAnimControllerComponent::FinishCasting(boost::intrusive_ptr<Caver::AnimKeysNode> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000261698  Caver::CharControllerComponent::Interface(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 94
 *   insn=0x00000000002601F0 string=0x00000000002601F4 "V"
 *   insn=0x0000000000260200 string=0x0000000000260204 "t"
 *   insn=0x0000000000260208 string=0x000000000026020C "uzA"
 *   insn=0x0000000000260208 string=0x000000000026023C "tN@"
 *   insn=0x0000000000260214 string=0x0000000000260218 ""
 *   insn=0x0000000000260218 string=0x000000000026021C ""
 *   insn=0x0000000000260224 string=0x0000000000260228 " "
 *   insn=0x0000000000260228 string=0x000000000026022C "@"
 *   insn=0x000000000026022C string=0x0000000000260230 ""
 *   insn=0x0000000000260230 string=0x0000000000260234 ""
 *   insn=0x0000000000260234 string=0x0000000000260238 "%"
 *   insn=0x0000000000260240 string=0x0000000000260244 "`""
 *   insn=0x0000000000260248 string=0x000000000026024C "%^"
 *   insn=0x000000000026024C string=0x0000000000260250 "tN@"
 *   insn=0x000000000026024C string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000260254 string=0x0000000000260264 "`"
 *   insn=0x0000000000260258 string=0x000000000026025C ""
 *   insn=0x0000000000260264 string=0x0000000000260268 "t"
 *   insn=0x000000000026026C string=0x0000000000260270 "@"
 *   insn=0x0000000000260270 string=0x0000000000260274 ""
 *   insn=0x0000000000260274 string=0x0000000000260278 ""
 *   insn=0x000000000026027C string=0x0000000000260280 ""
 *   insn=0x0000000000260280 string=0x0000000000260284 ""
 *   insn=0x0000000000260288 string=0x000000000026028C "t"
 *   insn=0x00000000002602A0 string=0x00000000002602A4 "("
 *   insn=0x00000000002602A4 string=0x00000000002602A8 "uzA"
 *   insn=0x00000000002602AC string=0x00000000002602B0 "@"
 *   insn=0x00000000002602B8 string=0x00000000002602BC "\t^"
 *   insn=0x00000000002602DC string=0x00000000002602E0 "@"
 *   insn=0x00000000002602DC string=0x00000000002602FC "`zA"
 *   insn=0x00000000002602E0 string=0x00000000002602E4 ""
 *   insn=0x00000000002602E4 string=0x00000000002602E8 ""
 *   insn=0x00000000002602EC string=0x00000000002602F0 ""
 *   insn=0x00000000002602F0 string=0x00000000002602F4 ""
 *   insn=0x00000000002602FC string=0x0000000000260300 "dO"
 *   insn=0x0000000000260300 string=0x00000000001F4090 "P'"
 *   insn=0x0000000000260328 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000260330 string=0x0000000000260334 "("
 *   insn=0x0000000000260334 string=0x0000000000260338 "\t\t@"
 *   insn=0x0000000000260338 string=0x000000000026033C ")"
 *   insn=0x000000000026033C string=0x0000000000260340 "\t\t"
 *   insn=0x0000000000260344 string=0x0000000000260348 "\t"
 *   insn=0x0000000000260348 string=0x000000000026034C ")"
 *   insn=0x0000000000260350 string=0x0000000000260354 " "
 *   insn=0x0000000000260358 string=0x000000000026035C "Z"
 *   insn=0x0000000000260370 string=0x0000000000260374 "T"
 *   insn=0x0000000000260380 string=0x0000000000260384 "`"
 *   insn=0x0000000000260384 string=0x0000000000260388 "@"
 *   insn=0x0000000000260388 string=0x0000000000260410 "`N@"
 *   insn=0x000000000026039C string=0x00000000002603A0 "@"
 *   insn=0x000000000026039C string=0x00000000002603BC "`zA"
 *   insn=0x00000000002603A0 string=0x00000000002603A4 ""
 *   insn=0x00000000002603A4 string=0x00000000002603A8 ""
 *   insn=0x00000000002603AC string=0x00000000002603B0 ""
 *   insn=0x00000000002603B0 string=0x00000000002603B4 ""
 *   insn=0x00000000002603C0 string=0x00000000002603C4 "s"
 *   insn=0x00000000002603C4 string=0x00000000002603C8 "`zA"
 *   insn=0x00000000002603D0 string=0x00000000002603D4 "@"
 *   insn=0x00000000002603D4 string=0x00000000002603D8 ""
 *   insn=0x00000000002603D8 string=0x00000000002603DC ""
 *   insn=0x00000000002603E0 string=0x00000000002603E4 ""
 *   insn=0x00000000002603E4 string=0x00000000002603E8 ""
 *   insn=0x0000000000260414 string=0x0000000000260418 "`""
 *   insn=0x0000000000260414 string=0x000000000026042C "@"
 *   insn=0x0000000000260420 string=0x0000000000260424 "`N@"
 *   insn=0x0000000000260428 string=0x0000000000260438 "h"
 *   insn=0x000000000026042C string=0x0000000000260430 ""
 *   insn=0x0000000000260430 string=0x0000000000260434 ""
 *   insn=0x0000000000260438 string=0x000000000026043C "`"
 *   insn=0x000000000026043C string=0x0000000000260440 "h"
 *   insn=0x0000000000260440 string=0x0000000000260444 "\t\t@"
 *   insn=0x0000000000260444 string=0x0000000000260448 ")"
 *   insn=0x0000000000260448 string=0x000000000026044C "\t\t"
 *   insn=0x0000000000260450 string=0x0000000000260454 "\t"
 *   insn=0x0000000000260458 string=0x000000000026045C ")"
 *   insn=0x000000000026045C string=0x0000000000260460 " "
 *   insn=0x0000000000260460 string=0x0000000000260464 "`"
 *   insn=0x0000000000260474 string=0x0000000000260478 "("
 *   insn=0x0000000000260478 string=0x000000000026047C "\t\t@"
 *   insn=0x000000000026047C string=0x0000000000260480 ")"
 *   insn=0x0000000000260480 string=0x0000000000260484 "\t\t"
 *   insn=0x0000000000260488 string=0x000000000026048C "\t"
 *   insn=0x000000000026048C string=0x0000000000260490 ")"
 *   insn=0x0000000000260494 string=0x0000000000260498 " "
 *   insn=0x000000000026049C string=0x00000000002604A0 "\t"
 *   insn=0x00000000002604B4 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000002604C0 string=0x00000000002604C4 " "
 *   insn=0x00000000002604C0 string=0x00000000001FC790 "0'"
 *   insn=0x00000000002604CC string=0x00000000002604D0 "!$"
 *   insn=0x00000000002604D0 string=0x00000000002604D4 "!"
 *   insn=0x00000000002604D4 string=0x00000000002604D8 "B"
 *   insn=0x00000000002604D4 string=0x0000000000261698 " $"
 *   insn=0x00000000002604D8 string=0x00000000002604DC "`"
 *   insn=0x00000000002604DC string=0x00000000002604E0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CharControllerComponent::FinishCasting(Caver::CharControllerComponent *this)
{
  __int64 v2; // x21
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x20
  _DWORD *v6; // x0
  int v7; // w8
  __int64 v8; // x21
  int v9; // w8
  _DWORD *v11; // [xsp+50h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  if ( !*((_QWORD *)this + 50) )
  {
    v5 = *((_QWORD *)this + 19);
    if ( v5
      || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 136), this),
          (v5 = *((_QWORD *)this + 19)) != 0) )
    {
      ++*(_DWORD *)(v5 + 8);
    }
    v6 = (_DWORD *)*((_QWORD *)this + 50);
    *((_QWORD *)this + 50) = v5;
    if ( v6 )
    {
      v7 = v6[2] - 1;
      v6[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v2 = *((_QWORD *)this + 94);
  v3 = *(_QWORD *)(v2 + 128);
  if ( !v3 )
  {
    Caver::ComponentOutletBase::Connect(
      (Caver::ComponentOutletBase *)(v2 + 112),
      *((const Caver::Component **)this + 94));
    if ( !*(_QWORD *)(v2 + 128) )
    {
      v11 = 0;
      goto LABEL_15;
    }
    v8 = *((_QWORD *)this + 94);
    v3 = *(_QWORD *)(v8 + 128);
    if ( !v3 )
    {
      Caver::ComponentOutletBase::Connect(
        (Caver::ComponentOutletBase *)(v8 + 112),
        *((const Caver::Component **)this + 94));
      v3 = *(_QWORD *)(v8 + 128);
    }
  }
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 264LL))(v3);
  v11 = (_DWORD *)v4;
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
LABEL_15:
  Caver::CharAnimControllerComponent::FinishCasting();
  if ( v11 )
  {
    v9 = v11[2] - 1;
    v11[2] = v9;
    if ( !v9 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  return Caver::SkillComponent::FinishCasting(*((Caver::SkillComponent **)this + 94));
}

