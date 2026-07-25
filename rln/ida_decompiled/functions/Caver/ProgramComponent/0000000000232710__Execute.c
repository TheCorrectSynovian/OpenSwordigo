/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000232710
 * Mangled: _ZN5Caver16ProgramComponent7ExecuteEv
 * Demangled: Caver::ProgramComponent::Execute(void)
 *
 * Callers: 1
 *   0x00000000002009F0  Caver::ProgramComponent::Execute(void)
 *
 * Callees: 8
 *   0x00000000001F5BE0  Caver::ProgramComponent::RegisterLibrary(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FDDB0  Caver::ProgramState::SetParentObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000001FEE40  Caver::Component::NewProgramStateForProgram(Caver::Program const&)
 *   0x0000000000200B80  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *   0x0000000000201480  Caver::ProgramState::Execute(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 64
 *   insn=0x0000000000232720 string=0x0000000000232724 "U"
 *   insn=0x0000000000232730 string=0x0000000000232734 "hZ@"
 *   insn=0x0000000000232738 string=0x000000000023273C "MA9"
 *   insn=0x0000000000232738 string=0x0000000000232790 "h"
 *   insn=0x0000000000232740 string=0x0000000000232744 "t^@"
 *   insn=0x0000000000232748 string=0x000000000023274C "4"
 *   insn=0x0000000000232750 string=0x0000000000232754 ""
 *   insn=0x0000000000232764 string=0x0000000000232768 "\t@"
 *   insn=0x0000000000232770 string=0x0000000000232774 ""
 *   insn=0x0000000000232784 string=0x0000000000232788 "@"
 *   insn=0x0000000000232790 string=0x0000000000232794 "h"
 *   insn=0x0000000000232794 string=0x0000000000232798 "hZ@"
 *   insn=0x0000000000232798 string=0x000000000023279C "H"
 *   insn=0x000000000023279C string=0x00000000002327C4 "h"
 *   insn=0x00000000002327A8 string=0x00000000002327AC "A\n"
 *   insn=0x00000000002327AC string=0x00000000002328F4 "w"
 *   insn=0x00000000002327C4 string=0x00000000002327C8 "h"
 *   insn=0x00000000002327C8 string=0x00000000002327CC "h"
 *   insn=0x00000000002327C8 string=0x00000000002327D4 "hN@"
 *   insn=0x00000000002327D4 string=0x00000000002327D8 "H"
 *   insn=0x00000000002327D8 string=0x00000000002327DC "a"
 *   insn=0x00000000002327F0 string=0x00000000002327F4 "\n"
 *   insn=0x00000000002327F0 string=0x0000000000232800 "t^@"
 *   insn=0x00000000002327F4 string=0x00000000002327F8 "J"
 *   insn=0x00000000002327F8 string=0x00000000002327FC "\n"
 *   insn=0x0000000000232800 string=0x0000000000232804 "i""
 *   insn=0x0000000000232804 string=0x0000000000232808 "4"
 *   insn=0x000000000023280C string=0x0000000000232810 ""
 *   insn=0x000000000023281C string=0x0000000000232820 "\t@"
 *   insn=0x000000000023282C string=0x0000000000232830 ""
 *   insn=0x000000000023283C string=0x0000000000232840 "@"
 *   insn=0x000000000023284C string=0x0000000000232850 "4"
 *   insn=0x0000000000232850 string=0x0000000000232894 "`Z@"
 *   insn=0x0000000000232854 string=0x0000000000232858 ""
 *   insn=0x0000000000232868 string=0x000000000023286C "\t@"
 *   insn=0x0000000000232874 string=0x0000000000232878 ""
 *   insn=0x0000000000232888 string=0x000000000023288C "@"
 *   insn=0x0000000000232894 string=0x0000000000232898 "@"
 *   insn=0x0000000000232898 string=0x000000000023289C "hv@"
 *   insn=0x00000000002328A4 string=0x00000000002328DC "a"
 *   insn=0x00000000002328AC string=0x00000000002328B0 "@-"
 *   insn=0x00000000002328B0 string=0x00000000001FDDB0 "0'"
 *   insn=0x00000000002328B8 string=0x00000000002328BC "@"
 *   insn=0x00000000002328B8 string=0x00000000002328D8 "`Z@"
 *   insn=0x00000000002328BC string=0x00000000002328C0 ""
 *   insn=0x00000000002328C0 string=0x00000000002328C4 ""
 *   insn=0x00000000002328C8 string=0x00000000002328CC ""
 *   insn=0x00000000002328CC string=0x00000000002328D0 ""
 *   insn=0x00000000002328E0 string=0x00000000002328E4 "`Z@"
 *   insn=0x00000000002328F4 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000232900 string=0x0000000000232904 "\t\t@"
 *   insn=0x0000000000232904 string=0x0000000000232908 ")"
 *   insn=0x0000000000232908 string=0x000000000023290C "\t\t"
 *   insn=0x000000000023290C string=0x0000000000232910 "!"
 *   insn=0x0000000000232910 string=0x0000000000232914 "\t"
 *   insn=0x0000000000232914 string=0x0000000000232918 ")"
 *   insn=0x000000000023291C string=0x0000000000232920 " "
 *   insn=0x000000000023292C string=0x0000000000232930 "4"
 *   insn=0x0000000000232934 string=0x0000000000232938 ""
 *   insn=0x0000000000232944 string=0x0000000000232948 "\t@"
 *   insn=0x0000000000232954 string=0x0000000000232958 ""
 *   insn=0x0000000000232964 string=0x0000000000232968 "@"
 *   insn=0x0000000000232978 string=0x000000000023297C "tn"
 *   insn=0x0000000000232980 string=0x00000000001F5BE0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::ProgramComponent::Execute(_QWORD *this)
{
  _QWORD *v1; // x19
  __int64 v2; // x8
  _QWORD *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x8
  Caver::SceneObject *v6; // x2
  _QWORD *v7; // x8
  __int64 v8; // x9
  _QWORD *v9; // x20
  __int64 v10; // x8
  __int64 v11; // x8
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x0
  int v16; // w8
  __int64 v17; // [xsp+8h] [xbp-38h] BYREF
  _QWORD *v18; // [xsp+10h] [xbp-30h]
  __int64 v19; // [xsp+18h] [xbp-28h]

  v1 = this;
  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = this[22];
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 83) )
    {
      v3 = (_QWORD *)this[23];
      this[22] = 0;
      this[23] = 0;
      if ( v3 )
      {
        v4 = v3[1] - 1LL;
        v3[1] = v4;
        if ( !v4 )
        {
          this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
          v5 = v3[2] - 1LL;
          v3[2] = v5;
          if ( !v5 )
            this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
        }
      }
    }
  }
  if ( *((_BYTE *)v1 + 112) && !v1[22] && (!*((_BYTE *)v1 + 120) || !*((_BYTE *)v1 + 168)) && v1[19] )
  {
    Caver::Component::NewProgramStateForProgram(&v17, (Caver::Component *)v1, (const Caver::Program *)(v1 + 16));
    v8 = v17;
    v7 = v18;
    if ( v18 )
      ++v18[1];
    v9 = (_QWORD *)v1[23];
    v1[22] = v8;
    v1[23] = v7;
    if ( v9 )
    {
      v10 = v9[1] - 1LL;
      v9[1] = v10;
      if ( !v10 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
        v11 = v9[2] - 1LL;
        v9[2] = v11;
        if ( !v11 )
          (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
      }
    }
    v12 = v18;
    if ( v18 )
    {
      v13 = v18[1] - 1LL;
      v18[1] = v13;
      if ( !v13 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
        v14 = v12[2] - 1LL;
        v12[2] = v14;
        if ( !v14 )
          (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
      }
    }
    this = (_QWORD *)v1[22];
    if ( this )
    {
      if ( *((_DWORD *)v1 + 29) == 7 )
      {
        v17 = 0;
        Caver::ProgramState::SetParentObject();
        v15 = v17;
        if ( v17 )
        {
          v16 = *(_DWORD *)(v17 + 8) - 1;
          *(_DWORD *)(v17 + 8) = v16;
          if ( !v16 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        }
        this = (_QWORD *)v1[22];
      }
      Caver::SceneObjectLib::PushSceneObject((Caver::SceneObjectLib *)this, (Caver::ProgramState *)v1[5], v6);
      return (_QWORD *)Caver::ProgramState::Execute((Caver::ProgramState *)v1[22], 1);
    }
  }
  return this;
}

