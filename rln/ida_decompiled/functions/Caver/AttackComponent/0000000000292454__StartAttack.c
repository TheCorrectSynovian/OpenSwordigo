/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000292454
 * Mangled: _ZN5Caver15AttackComponent11StartAttackERKN5boost13intrusive_ptrINS_8AnimNodeEEEPNS_11SceneObjectE
 * Demangled: Caver::AttackComponent::StartAttack(boost::intrusive_ptr<Caver::AnimNode> const&,Caver::SceneObject *)
 *
 * Callers: 1
 *   0x00000000001FFF80  Caver::AttackComponent::StartAttack(boost::intrusive_ptr<Caver::AnimNode> const&,Caver::SceneObject *)
 *
 * Callees: 8
 *   0x00000000001F4FA0  Caver::SoundEffectComponent::Play(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FEE40  Caver::Component::NewProgramStateForProgram(Caver::Program const&)
 *   0x0000000000200B80  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *   0x0000000000201480  Caver::ProgramState::Execute(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 85
 *   insn=0x0000000000292468 string=0x000000000029246C "V"
 *   insn=0x000000000029247C string=0x0000000000292480 "h"
 *   insn=0x0000000000292480 string=0x0000000000292484 "H"
 *   insn=0x0000000000292484 string=0x0000000000292488 "h"
 *   insn=0x0000000000292498 string=0x000000000029249C "i"
 *   insn=0x000000000029249C string=0x00000000002924A0 "("
 *   insn=0x00000000002924A0 string=0x00000000002924A4 "i~@"
 *   insn=0x00000000002924A8 string=0x00000000002924AC "\n\t@"
 *   insn=0x00000000002924A8 string=0x00000000002924B8 " \t@"
 *   insn=0x00000000002924AC string=0x00000000002924B0 "J"
 *   insn=0x00000000002924B0 string=0x00000000002924B4 "\n\t"
 *   insn=0x00000000002924B8 string=0x00000000002924BC "(\t"
 *   insn=0x00000000002924C0 string=0x00000000002924C4 "@"
 *   insn=0x00000000002924C0 string=0x00000000002924D4 "`B@"
 *   insn=0x00000000002924C4 string=0x00000000002924C8 ""
 *   insn=0x00000000002924C8 string=0x00000000002924CC ""
 *   insn=0x00000000002924CC string=0x00000000002924D0 "`"
 *   insn=0x00000000002924D0 string=0x00000000002924FC ""
 *   insn=0x00000000002924D8 string=0x00000000002924DC "`"
 *   insn=0x00000000002924D8 string=0x0000000000292510 ""
 *   insn=0x00000000002924E4 string=0x00000000002924E8 "`B@"
 *   insn=0x00000000002924E4 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002924E8 string=0x00000000002924EC " "
 *   insn=0x00000000002924EC string=0x00000000002924F0 "hv@"
 *   insn=0x00000000002924F4 string=0x00000000002924F8 "M"
 *   insn=0x00000000002924F4 string=0x00000000002925AC "aB"
 *   insn=0x00000000002924F8 string=0x000000000029262C "`f@"
 *   insn=0x00000000002924FC string=0x0000000000292500 ""
 *   insn=0x0000000000292504 string=0x0000000000292508 "`B@"
 *   insn=0x0000000000292510 string=0x0000000000292514 "w~@"
 *   insn=0x0000000000292514 string=0x0000000000292518 ""
 *   insn=0x0000000000292528 string=0x000000000029252C "\t"
 *   insn=0x000000000029253C string=0x0000000000292540 "@"
 *   insn=0x0000000000292540 string=0x0000000000292544 ""
 *   insn=0x0000000000292544 string=0x0000000000292548 ""
 *   insn=0x000000000029254C string=0x0000000000292550 ""
 *   insn=0x0000000000292550 string=0x0000000000292554 ""
 *   insn=0x000000000029255C string=0x0000000000292570 "`B@"
 *   insn=0x0000000000292560 string=0x0000000000292564 ""
 *   insn=0x0000000000292568 string=0x000000000029256C "@"
 *   insn=0x0000000000292574 string=0x0000000000292578 "`"
 *   insn=0x0000000000292574 string=0x0000000000292588 ""
 *   insn=0x000000000029257C string=0x0000000000292580 "X"
 *   insn=0x0000000000292580 string=0x0000000000292584 "`B@"
 *   insn=0x0000000000292588 string=0x000000000029258C ""
 *   insn=0x0000000000292594 string=0x0000000000292598 "h~@"
 *   insn=0x000000000029259C string=0x00000000002925A0 "\tY"
 *   insn=0x00000000002925A0 string=0x00000000002925A4 "hv@"
 *   insn=0x00000000002925A4 string=0x00000000002925A8 "("
 *   insn=0x00000000002925B4 string=0x00000000002925B8 """
 *   insn=0x00000000002925BC string=0x00000000002925C0 " "
 *   insn=0x00000000002925C0 string=0x00000000002925C4 "a"
 *   insn=0x00000000002925C4 string=0x00000000002925C8 "n"
 *   insn=0x00000000002925D0 string=0x00000000002925D4 "k"
 *   insn=0x00000000002925E4 string=0x00000000002925E8 "4"
 *   insn=0x00000000002925EC string=0x00000000002925F0 ""
 *   insn=0x0000000000292600 string=0x0000000000292604 "\t@"
 *   insn=0x000000000029260C string=0x0000000000292610 ""
 *   insn=0x0000000000292620 string=0x0000000000292624 "@"
 *   insn=0x0000000000292630 string=0x0000000000292634 "`"
 *   insn=0x0000000000292630 string=0x0000000000292648 "V"
 *   insn=0x0000000000292638 string=0x000000000029263C ")"
 *   insn=0x000000000029263C string=0x0000000000292640 "`f@"
 *   insn=0x0000000000292640 string=0x0000000000292644 "@"
 *   insn=0x0000000000292648 string=0x00000000001F4FA0 "P'"
 *   insn=0x0000000000292678 string=0x000000000029267C ""
 *   insn=0x0000000000292680 string=0x0000000000292684 "`B@"
 *   insn=0x0000000000292690 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000029269C string=0x00000000002926A0 ""
 *   insn=0x00000000002926A4 string=0x00000000002926A8 "!"
 *   insn=0x00000000002926AC string=0x00000000002926B0 ""
 *   insn=0x00000000002926C4 string=0x00000000002926C8 "4"
 *   insn=0x00000000002926CC string=0x00000000002926D0 ""
 *   insn=0x00000000002926DC string=0x00000000002926E0 "\t@"
 *   insn=0x00000000002926EC string=0x00000000002926F0 ""
 *   insn=0x00000000002926FC string=0x0000000000292700 "@"
 *   insn=0x000000000029270C string=0x0000000000292710 "m"
 *   insn=0x0000000000292714 string=0x0000000000292718 ""
 *   insn=0x0000000000292718 string=0x000000000029271C "h"
 *   insn=0x000000000029271C string=0x0000000000292720 "|@"
 *   insn=0x0000000000292724 string=0x0000000000292728 "\t"
 *   insn=0x0000000000292728 string=0x000000000029272C ") "
 *   insn=0x0000000000292730 string=0x0000000000292734 "\tY"
 *   insn=0x0000000000292738 string=0x000000000029273C ""
 *   insn=0x0000000000292740 string=0x0000000000292744 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AttackComponent::StartAttack(__int64 result, __int64 *a2, Caver::ProgramState *a3)
{
  __int64 v3; // x19
  __int64 v5; // x8
  __int64 v6; // x9
  _DWORD *v7; // x0
  int v8; // w8
  __int64 v9; // x0
  __int64 v10; // x23
  __int64 v11; // x0
  _DWORD *v12; // x21
  _DWORD *v13; // x0
  int v14; // w8
  int v15; // w8
  __int64 v16; // x0
  Caver::SceneObject *v17; // x2
  Caver::SceneObject *v18; // x2
  _QWORD *v19; // x20
  __int64 v20; // x8
  __int64 v21; // x8
  Caver::SceneObjectLib *v22; // [xsp+8h] [xbp-48h] BYREF
  _QWORD *v23; // [xsp+10h] [xbp-40h]
  __int64 v24; // [xsp+18h] [xbp-38h]

  v3 = result;
  v24 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_BYTE *)(result + 256) )
    return result;
  *(_DWORD *)(result + 272) = 0;
  *(_DWORD *)(result + 268) = 0;
  *(_WORD *)(result + 293) = 0;
  *(_BYTE *)(result + 256) = 1;
  v5 = *a2;
  v6 = *(_QWORD *)(result + 248);
  if ( *a2 )
    ++*(_DWORD *)(v5 + 8);
  v7 = *(_DWORD **)(v6 + 16);
  *(_QWORD *)(v6 + 16) = v5;
  if ( v7 && (v8 = v7[2] - 1, (v7[2] = v8) == 0) )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
    v9 = *(_QWORD *)(v3 + 128);
    if ( v9 )
      goto LABEL_11;
  }
  else
  {
    v9 = *(_QWORD *)(v3 + 128);
    if ( v9 )
      goto LABEL_11;
  }
  Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v3 + 112), (const Caver::Component *)v3);
  v9 = *(_QWORD *)(v3 + 128);
  if ( !v9 )
  {
    if ( !*(_QWORD *)(v3 + 232) )
      goto LABEL_27;
LABEL_21:
    Caver::Component::NewProgramStateForProgram(
      (__int64 *)&v22,
      (Caver::Component *)v3,
      (const Caver::Program *)(v3 + 208));
    if ( v22 )
    {
      Caver::SceneObjectLib::PushSceneObject(v22, *(Caver::ProgramState **)(v3 + 40), v17);
      Caver::SceneObjectLib::PushSceneObject(v22, a3, v18);
      Caver::ProgramState::Execute(v22, 2);
    }
    v19 = v23;
    if ( v23 )
    {
      v20 = v23[1] - 1LL;
      v23[1] = v20;
      if ( !v20 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
        v21 = v19[2] - 1LL;
        v19[2] = v21;
        if ( !v21 )
          (*(void (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
      }
    }
    goto LABEL_27;
  }
LABEL_11:
  v10 = *(_QWORD *)(v3 + 248);
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 264LL))(v9);
  v12 = (_DWORD *)v11;
  if ( v11 )
    *(_DWORD *)(v11 + 8) += 2;
  v13 = *(_DWORD **)(v10 + 24);
  *(_QWORD *)(v10 + 24) = v12;
  if ( v13 )
  {
    v14 = v13[2] - 1;
    v13[2] = v14;
    if ( !v14 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 8LL))(v13);
  }
  if ( !v12 || (v15 = v12[2] - 1, (v12[2] = v15) != 0) )
  {
    v16 = *(_QWORD *)(v3 + 128);
    if ( v16 )
      goto LABEL_20;
    goto LABEL_19;
  }
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 8LL))(v12);
  v16 = *(_QWORD *)(v3 + 128);
  if ( !v16 )
  {
LABEL_19:
    Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v3 + 112), (const Caver::Component *)v3);
    v16 = *(_QWORD *)(v3 + 128);
  }
LABEL_20:
  *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 264LL))(v16) + 12) = 0;
  *(_WORD *)(*(_QWORD *)(v3 + 248) + 44LL) = 256;
  if ( *(_QWORD *)(v3 + 232) )
    goto LABEL_21;
LABEL_27:
  result = *(_QWORD *)(v3 + 200);
  if ( result )
    return Caver::SoundEffectComponent::Play((Caver::SoundEffectComponent *)result);
  Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v3 + 184), (const Caver::Component *)v3);
  result = *(_QWORD *)(v3 + 200);
  if ( result )
    return Caver::SoundEffectComponent::Play((Caver::SoundEffectComponent *)result);
  return result;
}

