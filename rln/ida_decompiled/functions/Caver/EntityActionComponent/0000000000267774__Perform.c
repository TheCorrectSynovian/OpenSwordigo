/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000267774
 * Mangled: _ZN5Caver21EntityActionComponent7PerformEv
 * Demangled: Caver::EntityActionComponent::Perform(void)
 *
 * Callers: 1
 *   0x00000000001F43F0  Caver::EntityActionComponent::Perform(void)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FEE40  Caver::Component::NewProgramStateForProgram(Caver::Program const&)
 *   0x0000000000200B80  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *   0x0000000000201480  Caver::ProgramState::Execute(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 28
 *   insn=0x0000000000267784 string=0x0000000000267788 "U"
 *   insn=0x0000000000267794 string=0x0000000000267798 "hF@"
 *   insn=0x00000000002677A0 string=0x00000000002677A4 "a"
 *   insn=0x00000000002677B8 string=0x00000000002677BC "\n"
 *   insn=0x00000000002677B8 string=0x00000000002677C8 "tR@"
 *   insn=0x00000000002677BC string=0x00000000002677C0 "J"
 *   insn=0x00000000002677C0 string=0x00000000002677C4 "\n"
 *   insn=0x00000000002677C8 string=0x00000000002677CC "i"
 *   insn=0x00000000002677CC string=0x00000000002677D0 "4"
 *   insn=0x00000000002677D4 string=0x00000000002677D8 ""
 *   insn=0x00000000002677E4 string=0x00000000002677E8 "\t@"
 *   insn=0x00000000002677F4 string=0x00000000002677F8 ""
 *   insn=0x0000000000267804 string=0x0000000000267808 "@"
 *   insn=0x0000000000267814 string=0x0000000000267818 "4"
 *   insn=0x0000000000267818 string=0x000000000026785C "`N@"
 *   insn=0x000000000026781C string=0x0000000000267820 ""
 *   insn=0x0000000000267830 string=0x0000000000267834 "\t@"
 *   insn=0x000000000026783C string=0x0000000000267840 ""
 *   insn=0x0000000000267850 string=0x0000000000267854 "@"
 *   insn=0x0000000000267860 string=0x0000000000267864 "a"
 *   insn=0x0000000000267868 string=0x000000000026786C "`N@"
 *   insn=0x000000000026789C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002678A4 string=0x00000000002678A8 "4"
 *   insn=0x00000000002678AC string=0x00000000002678B0 ""
 *   insn=0x00000000002678BC string=0x00000000002678C0 "\t@"
 *   insn=0x00000000002678CC string=0x00000000002678D0 ""
 *   insn=0x00000000002678DC string=0x00000000002678E0 "@"
 *   insn=0x00000000002678F4 string=0x00000000002678F8 "L@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityActionComponent::Perform(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x8
  Caver::SceneObject *v3; // x2
  _QWORD *v4; // x8
  __int64 v5; // x9
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x8
  _QWORD *v9; // x20
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // [xsp+8h] [xbp-38h] BYREF
  _QWORD *v13; // [xsp+10h] [xbp-30h]
  __int64 v14; // [xsp+18h] [xbp-28h]

  v1 = this;
  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *(_QWORD *)(this + 136);
  *(_DWORD *)(this + 168) = 0;
  if ( v2 )
  {
    Caver::Component::NewProgramStateForProgram(&v12, (Caver::Component *)this, (const Caver::Program *)(this + 112));
    v5 = v12;
    v4 = v13;
    if ( v13 )
      ++v13[1];
    v6 = *(_QWORD **)(v1 + 160);
    *(_QWORD *)(v1 + 152) = v5;
    *(_QWORD *)(v1 + 160) = v4;
    if ( v6 )
    {
      v7 = v6[1] - 1LL;
      v6[1] = v7;
      if ( !v7 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
        v8 = v6[2] - 1LL;
        v6[2] = v8;
        if ( !v8 )
          (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
      }
    }
    v9 = v13;
    if ( v13 )
    {
      v10 = v13[1] - 1LL;
      v13[1] = v10;
      if ( !v10 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
        v11 = v9[2] - 1LL;
        v9[2] = v11;
        if ( !v11 )
          (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
      }
    }
    this = *(_QWORD *)(v1 + 152);
    if ( this )
    {
      Caver::SceneObjectLib::PushSceneObject((Caver::SceneObjectLib *)this, *(Caver::ProgramState **)(v1 + 40), v3);
      return Caver::ProgramState::Execute(*(Caver::ProgramState **)(v1 + 152), 1);
    }
  }
  return this;
}

