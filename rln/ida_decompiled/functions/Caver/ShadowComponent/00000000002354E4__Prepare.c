/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002354E4
 * Mangled: _ZN5Caver15ShadowComponent7PrepareEv
 * Demangled: Caver::ShadowComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000215678  Caver::ModelComponent::Interface(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 78
 *   insn=0x00000000002354F4 string=0x00000000002354F8 "U"
 *   insn=0x000000000023550C string=0x0000000000235510 "h"
 *   insn=0x0000000000235510 string=0x0000000000235514 "`"
 *   insn=0x0000000000235514 string=0x0000000000235518 "!0D"
 *   insn=0x0000000000235518 string=0x000000000023551C "1,"
 *   insn=0x0000000000235524 string=0x0000000000235528 "\t\t@"
 *   insn=0x0000000000235524 string=0x0000000000235534 "`:@"
 *   insn=0x0000000000235528 string=0x000000000023552C ")"
 *   insn=0x000000000023552C string=0x0000000000235530 "\t\t"
 *   insn=0x0000000000235534 string=0x0000000000235538 "h:"
 *   insn=0x000000000023553C string=0x0000000000235540 "@"
 *   insn=0x000000000023553C string=0x000000000023555C "}"
 *   insn=0x0000000000235540 string=0x0000000000235544 ""
 *   insn=0x0000000000235544 string=0x0000000000235548 ""
 *   insn=0x000000000023554C string=0x0000000000235550 ""
 *   insn=0x0000000000235550 string=0x0000000000235554 ""
 *   insn=0x000000000023555C string=0x00000000001FA350 "0'"
 *   insn=0x0000000000235564 string=0x000000000058EB54 "shadow"
 *   insn=0x0000000000235584 string=0x0000000000235588 "\n("
 *   insn=0x0000000000235590 string=0x0000000000235594 "@"
 *   insn=0x0000000000235590 string=0x00000000002355A0 "hn@"
 *   insn=0x0000000000235594 string=0x0000000000235598 ""
 *   insn=0x0000000000235598 string=0x000000000023559C ""
 *   insn=0x00000000002355A0 string=0x00000000002355A4 "`n"
 *   insn=0x00000000002355A8 string=0x00000000002355AC "\t\t@"
 *   insn=0x00000000002355AC string=0x00000000002355B0 ")"
 *   insn=0x00000000002355B0 string=0x00000000002355B4 "\t\t"
 *   insn=0x00000000002355B4 string=0x00000000002355B8 "@"
 *   insn=0x00000000002355B8 string=0x00000000002355E0 "\t"
 *   insn=0x00000000002355BC string=0x00000000002355C0 "@"
 *   insn=0x00000000002355C0 string=0x00000000002355C4 ""
 *   insn=0x00000000002355C4 string=0x00000000002355C8 ""
 *   insn=0x00000000002355C8 string=0x00000000002355CC "a"
 *   insn=0x00000000002355CC string=0x00000000002355D0 ""
 *   insn=0x00000000002355D0 string=0x00000000002355D4 ""
 *   insn=0x00000000002355D8 string=0x00000000002355DC ""
 *   insn=0x00000000002355E0 string=0x00000000002355E4 ")"
 *   insn=0x00000000002355E8 string=0x00000000002355EC " "
 *   insn=0x00000000002355F0 string=0x00000000002355F4 "`"
 *   insn=0x00000000002355FC string=0x0000000000235600 ")"
 *   insn=0x0000000000235608 string=0x000000000023560C "A"
 *   insn=0x000000000023560C string=0x0000000000235634 "i%"
 *   insn=0x0000000000235634 string=0x0000000000235638 ")=G"
 *   insn=0x0000000000235638 string=0x000000000023563C "!"
 *   insn=0x0000000000235640 string=0x0000000000235644 "\t"
 *   insn=0x0000000000235640 string=0x0000000000235658 "\t"
 *   insn=0x0000000000235644 string=0x0000000000235648 "*"
 *   insn=0x0000000000235648 string=0x000000000023564C "\n"
 *   insn=0x0000000000235654 string=0x0000000000235664 "?"
 *   insn=0x0000000000235658 string=0x000000000023565C "*"
 *   insn=0x000000000023565C string=0x0000000000235660 "\n"
 *   insn=0x0000000000235664 string=0x0000000000235668 "L"
 *   insn=0x000000000023566C string=0x0000000000235670 "M"
 *   insn=0x0000000000235678 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000235684 string=0x0000000000235688 "\t\t@"
 *   insn=0x0000000000235688 string=0x000000000023568C ")"
 *   insn=0x000000000023568C string=0x0000000000235690 "\t\t"
 *   insn=0x0000000000235690 string=0x0000000000235694 "!"
 *   insn=0x0000000000235694 string=0x0000000000235698 "\t"
 *   insn=0x0000000000235698 string=0x000000000023569C ")"
 *   insn=0x00000000002356A0 string=0x00000000002356A4 " "
 *   insn=0x00000000002356BC string=0x00000000002356C0 ")"
 *   insn=0x00000000002356CC string=0x00000000002356D0 "i%"
 *   insn=0x00000000002356D0 string=0x00000000002356D4 ")=G"
 *   insn=0x00000000002356D4 string=0x00000000002356D8 "!"
 *   insn=0x00000000002356D8 string=0x00000000002356DC "i"
 *   insn=0x00000000002356DC string=0x00000000002356E0 "\t"
 *   insn=0x00000000002356DC string=0x0000000000235708 "\t"
 *   insn=0x00000000002356E0 string=0x00000000002356E4 "*"
 *   insn=0x00000000002356E4 string=0x00000000002356E8 "\n"
 *   insn=0x00000000002356EC string=0x00000000002356F0 "?"
 *   insn=0x00000000002356F0 string=0x00000000002356F4 "l"
 *   insn=0x00000000002356F8 string=0x00000000002356FC "*"
 *   insn=0x0000000000235700 string=0x0000000000235704 "p0"
 *   insn=0x0000000000235708 string=0x000000000023570C "*"
 *   insn=0x000000000023570C string=0x0000000000235710 "\n"
 *   insn=0x0000000000235710 string=0x0000000000235714 "?"
 *   insn=0x0000000000235714 string=0x0000000000235718 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ShadowComponent::Prepare(Caver::ShadowComponent *this)
{
  __int64 v2; // x0
  __int64 v3; // x8
  Caver::TextureLibrary *v4; // x0
  int v5; // w8
  _DWORD *v6; // x0
  _DWORD *v7; // x8
  int v8; // w9
  int v9; // w8
  void *v10; // x0
  unsigned int *v11; // x8
  int v12; // w9
  __int64 v13; // [xsp+10h] [xbp-40h] BYREF
  _DWORD *v14; // [xsp+18h] [xbp-38h]
  __int64 v15; // [xsp+28h] [xbp-28h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_DWORD *)this + 42) = 1125515264;
  v2 = Caver::SceneObject::ComponentWithInterface(
         *((Caver::SceneObject **)this + 5),
         (__int64)Caver::ModelComponent::Interface);
  v3 = v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  v4 = (Caver::TextureLibrary *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = v3;
  if ( v4 )
  {
    v5 = *((_DWORD *)v4 + 2) - 1;
    *((_DWORD *)v4 + 2) = v5;
    if ( !v5 )
      v4 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(Caver::TextureLibrary *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  Caver::TextureLibrary::sharedLibrary(v4);
  sub_566BB8((int)&v13, "shadow");
  Caver::TextureLibrary::TextureForName();
  v6 = v14;
  if ( v14 )
    ++v14[2];
  v7 = (_DWORD *)*((_QWORD *)this + 27);
  *((_QWORD *)this + 27) = v6;
  if ( v7 && (v8 = v7[2] - 1, (v7[2] = v8) == 0) )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
    v6 = v14;
    if ( !v14 )
      goto LABEL_14;
  }
  else if ( !v6 )
  {
    goto LABEL_14;
  }
  v9 = v6[2] - 1;
  v6[2] = v9;
  if ( !v9 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
LABEL_14:
  v10 = (void *)(v13 - 24);
  if ( (__int64 *)(v13 - 24) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v13 - 8);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      operator delete(v10);
  }
}

