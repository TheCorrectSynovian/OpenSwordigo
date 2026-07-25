/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004642A8
 * Mangled: _ZN5Caver5Scene10FinishLoadEv
 * Demangled: Caver::Scene::FinishLoad(void)
 *
 * Callers: 1
 *   0x0000000000202180  Caver::Scene::FinishLoad(void)
 *
 * Callees: 10
 *   0x00000000001F3F80  Caver::SceneGrid::SetBounds(Caver::Rectangle const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6520  Caver::SceneObjectGroup::FinishLoad(void)
 *   0x00000000001F9B40  Caver::ObjectLibrary::LoadAllPrograms(Caver::ProgramState *)
 *   0x00000000001FC980  Caver::SceneObject::FinishLoad(void)
 *   0x00000000001FCA90  Caver::Scene::NewProgramStateForProgram(Caver::Program const&)
 *   0x0000000000201480  Caver::ProgramState::Execute(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 57
 *   insn=0x00000000004642BC string=0x00000000004642C0 "V"
 *   insn=0x00000000004642C8 string=0x00000000004642CC "a"
 *   insn=0x00000000004642D0 string=0x00000000004642D4 "`R@"
 *   insn=0x00000000004642D8 string=0x00000000004642DC "h""
 *   insn=0x00000000004642E0 string=0x00000000004642E4 "aB@"
 *   insn=0x00000000004642E0 string=0x00000000001F9B40 "0'"
 *   insn=0x00000000004642E8 string=0x00000000004642EC "("
 *   insn=0x00000000004642E8 string=0x0000000000464358 "tf@"
 *   insn=0x00000000004642EC string=0x00000000004642F0 "H"
 *   insn=0x00000000004642FC string=0x00000000001FCA90 "0'"
 *   insn=0x0000000000464300 string=0x0000000000464304 "`"
 *   insn=0x0000000000464308 string=0x000000000046430C "]t"
 *   insn=0x0000000000464310 string=0x0000000000464314 "4"
 *   insn=0x0000000000464318 string=0x000000000046431C ""
 *   insn=0x000000000046432C string=0x0000000000464330 "\t@"
 *   insn=0x0000000000464338 string=0x000000000046433C ""
 *   insn=0x000000000046434C string=0x0000000000464350 "@"
 *   insn=0x0000000000464358 string=0x000000000046435C "w"
 *   insn=0x0000000000464368 string=0x00000000004643C4 "t~@"
 *   insn=0x0000000000464378 string=0x000000000046437C "@"
 *   insn=0x0000000000464388 string=0x000000000046438C ""
 *   insn=0x0000000000464394 string=0x0000000000464398 "za"
 *   insn=0x0000000000464398 string=0x00000000001FC980 "0'"
 *   insn=0x00000000004643A0 string=0x00000000004643A4 ""
 *   insn=0x00000000004643B4 string=0x00000000004643B8 ""
 *   insn=0x00000000004643C4 string=0x00000000004643C8 "s"
 *   insn=0x00000000004643E4 string=0x00000000004643E8 "@"
 *   insn=0x00000000004643F4 string=0x00000000004643F8 ""
 *   insn=0x0000000000464400 string=0x0000000000464404 "GH"
 *   insn=0x0000000000464404 string=0x00000000001F6520 "0'"
 *   insn=0x000000000046440C string=0x0000000000464410 ""
 *   insn=0x0000000000464420 string=0x0000000000464424 ""
 *   insn=0x0000000000464458 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000464468 string=0x000000000046446C ""
 *   insn=0x0000000000464470 string=0x0000000000464474 "a"
 *   insn=0x0000000000464478 string=0x000000000046447C "\t@"
 *   insn=0x0000000000464488 string=0x000000000046448C ""
 *   insn=0x0000000000464490 string=0x0000000000464494 "a"
 *   insn=0x0000000000464498 string=0x000000000046449C "@"
 *   insn=0x00000000004644B4 string=0x00000000004644B8 ""
 *   insn=0x00000000004644C4 string=0x00000000004644C8 ""
 *   insn=0x00000000004644D0 string=0x00000000004644D4 ""
 *   insn=0x00000000004644D8 string=0x00000000004644DC "5"
 *   insn=0x00000000004644E0 string=0x00000000004644E4 ""
 *   insn=0x00000000004644F0 string=0x00000000004644F4 ""
 *   insn=0x0000000000464514 string=0x0000000000464518 " "
 *   insn=0x0000000000464520 string=0x0000000000464524 "tB"
 *   insn=0x0000000000464520 string=0x0000000000583944 "\n"
 *   insn=0x0000000000464524 string=0x0000000000464528 "`&"
 *   insn=0x0000000000464528 string=0x000000000046452C "a"
 *   insn=0x0000000000464530 string=0x0000000000464534 "   "
 *   insn=0x0000000000464538 string=0x000000000046453C "a"
 *   insn=0x000000000046453C string=0x0000000000464540 "   "
 *   insn=0x0000000000464544 string=0x0000000000464554 "`"
 *   insn=0x000000000046454C string=0x0000000000464550 "`&"
 *   insn=0x000000000046455C string=0x00000000001F3F80 "P'"
 *   insn=0x0000000000464560 string=0x0000000000464564 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Scene *__fastcall Caver::Scene::FinishLoad(Caver::Scene *this)
{
  Caver::ProgramState *v2; // x1
  Caver::ObjectLibrary *v3; // x0
  Caver::Scene *result; // x0
  const Caver::Program *v5; // x1
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x8
  Caver::Scene *v9; // x20
  Caver::SceneObject *v10; // x21
  int v11; // w8
  Caver::Scene *v12; // x20
  Caver::Scene *v13; // x19
  Caver::SceneObjectGroup *v14; // x21
  int v15; // w8
  Caver::ProgramState *v16; // [xsp+28h] [xbp-48h] BYREF
  _QWORD *v17; // [xsp+30h] [xbp-40h]
  __int64 v18; // [xsp+38h] [xbp-38h]

  v2 = (Caver::Scene *)((char *)this + 40);
  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = (Caver::ObjectLibrary *)*((_QWORD *)this + 20);
  *((_BYTE *)this + 8) = 1;
  result = (Caver::Scene *)Caver::ObjectLibrary::LoadAllPrograms(v3, v2);
  v5 = (const Caver::Program *)*((_QWORD *)this + 16);
  if ( v5 && *((_QWORD *)v5 + 3) )
  {
    Caver::Scene::NewProgramStateForProgram((__int64 *)&v16, this, v5);
    result = v16;
    if ( v16 )
      result = (Caver::Scene *)Caver::ProgramState::Execute(v16, 0);
    v6 = v17;
    if ( v17 )
    {
      v7 = v17[1] - 1LL;
      v17[1] = v7;
      if ( !v7 )
      {
        result = (Caver::Scene *)(*(__int64 (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
        v8 = v6[2] - 1LL;
        v6[2] = v8;
        if ( !v8 )
          result = (Caver::Scene *)(*(__int64 (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
      }
    }
  }
  v9 = (Caver::Scene *)*((_QWORD *)this + 25);
  if ( (Caver::Scene *)((char *)this + 184) != v9 )
  {
    do
    {
      v10 = (Caver::SceneObject *)*((_QWORD *)v9 + 5);
      if ( v10 )
        ++*((_DWORD *)v10 + 2);
      Caver::SceneObject::FinishLoad(v10);
      if ( v10 )
      {
        v11 = *((_DWORD *)v10 + 2) - 1;
        *((_DWORD *)v10 + 2) = v11;
        if ( !v11 )
          (*(void (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)v10 + 8LL))(v10);
      }
      result = (Caver::Scene *)sub_54C6A0(v9);
      v9 = result;
    }
    while ( (Caver::Scene *)((char *)this + 184) != result );
  }
  v12 = (Caver::Scene *)*((_QWORD *)this + 31);
  v13 = (Caver::Scene *)((char *)this + 232);
  if ( v13 != v12 )
  {
    do
    {
      v14 = (Caver::SceneObjectGroup *)*((_QWORD *)v12 + 5);
      if ( v14 )
        ++*((_DWORD *)v14 + 2);
      Caver::SceneObjectGroup::FinishLoad(v14);
      if ( v14 )
      {
        v15 = *((_DWORD *)v14 + 2) - 1;
        *((_DWORD *)v14 + 2) = v15;
        if ( !v15 )
          (*(void (__fastcall **)(Caver::SceneObjectGroup *))(*(_QWORD *)v14 + 8LL))(v14);
      }
      result = (Caver::Scene *)sub_54C6A0(v12);
      v12 = result;
    }
    while ( v13 != result );
  }
  return result;
}

