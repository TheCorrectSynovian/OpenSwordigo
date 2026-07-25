/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023A41C
 * Mangled: _ZN5Caver20SoundEffectComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::SoundEffectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001FE320  Caver::SoundEffectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FD0C0  Caver::SoundLibrary::sharedLibrary(void)
 *   0x00000000001FDFA0  Caver::SoundLibrary::EffectForName(std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000023A72C  `non-virtual thunk to'Caver::SoundEffectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 102
 *   insn=0x000000000023A42C string=0x000000000023A430 "V"
 *   insn=0x000000000023A43C string=0x000000000023A440 "?"
 *   insn=0x000000000023A448 string=0x000000000023A44C "?"
 *   insn=0x000000000023A458 string=0x00000000001FD0C0 "0'"
 *   insn=0x000000000023A464 string=0x000000000023A468 "0"
 *   insn=0x000000000023A478 string=0x00000000001FDFA0 "0'"
 *   insn=0x000000000023A47C string=0x000000000023A480 "U%"
 *   insn=0x000000000023A48C string=0x000000000023A490 "a"
 *   insn=0x000000000023A490 string=0x000000000023A57C "I%"
 *   insn=0x000000000023A494 string=0x000000000023A498 ""
 *   insn=0x000000000023A4A0 string=0x000000000023A4A4 "!"
 *   insn=0x000000000023A4A4 string=0x000000000023A4A8 "`"
 *   insn=0x000000000023A4AC string=0x000000000023A4B0 "~"
 *   insn=0x000000000023A4C0 string=0x000000000023A5A0 "I%"
 *   insn=0x000000000023A4C8 string=0x000000000023A4CC "@"
 *   insn=0x000000000023A4C8 string=0x000000000023A4D8 "hF@"
 *   insn=0x000000000023A4CC string=0x000000000023A4D0 ""
 *   insn=0x000000000023A4D0 string=0x000000000023A4D4 ""
 *   insn=0x000000000023A4D8 string=0x000000000023A4DC "`F"
 *   insn=0x000000000023A4DC string=0x000000000023A4E0 "H"
 *   insn=0x000000000023A4E0 string=0x000000000023A4E4 "\t\t@"
 *   insn=0x000000000023A4E4 string=0x000000000023A4E8 ")"
 *   insn=0x000000000023A4E8 string=0x000000000023A4EC "\t\t"
 *   insn=0x000000000023A4F0 string=0x000000000023A4F4 "\t"
 *   insn=0x000000000023A4F4 string=0x000000000023A4F8 ")"
 *   insn=0x000000000023A4FC string=0x000000000023A500 " "
 *   insn=0x000000000023A508 string=0x000000000023A50C "@"
 *   insn=0x000000000023A50C string=0x000000000023A510 ""
 *   insn=0x000000000023A510 string=0x000000000023A514 ""
 *   insn=0x000000000023A518 string=0x000000000023A51C ""
 *   insn=0x000000000023A51C string=0x000000000023A520 ""
 *   insn=0x000000000023A52C string=0x000000000023A530 ""
 *   insn=0x000000000023A530 string=0x000000000023A534 "h"
 *   insn=0x000000000023A534 string=0x000000000023A538 ""
 *   insn=0x000000000023A53C string=0x000000000023A540 ""
 *   insn=0x000000000023A540 string=0x000000000023A544 "h"
 *   insn=0x000000000023A550 string=0x000000000023A554 "s"
 *   insn=0x000000000023A554 string=0x00000000001F9320 "0'"
 *   insn=0x000000000023A564 string=0x000000000023A614 "/"
 *   insn=0x000000000023A57C string=0x000000000023A580 ")=G"
 *   insn=0x000000000023A580 string=0x000000000023A584 "!"
 *   insn=0x000000000023A588 string=0x000000000023A58C "\t"
 *   insn=0x000000000023A588 string=0x000000000023A5C4 "\t"
 *   insn=0x000000000023A58C string=0x000000000023A590 "*"
 *   insn=0x000000000023A590 string=0x000000000023A594 "\n"
 *   insn=0x000000000023A598 string=0x000000000023A59C ""
 *   insn=0x000000000023A59C string=0x000000000023A5D0 "?"
 *   insn=0x000000000023A5A0 string=0x000000000023A5A4 ")=G"
 *   insn=0x000000000023A5A4 string=0x000000000023A5A8 "!"
 *   insn=0x000000000023A5A8 string=0x000000000023A5AC "\t"
 *   insn=0x000000000023A5AC string=0x000000000023A5B0 "\t"
 *   insn=0x000000000023A5AC string=0x000000000023A5EC "\t"
 *   insn=0x000000000023A5B0 string=0x000000000023A5B4 "*"
 *   insn=0x000000000023A5B4 string=0x000000000023A5B8 "\n"
 *   insn=0x000000000023A5C0 string=0x000000000023A5F8 "?"
 *   insn=0x000000000023A5C4 string=0x000000000023A5C8 "*"
 *   insn=0x000000000023A5C8 string=0x000000000023A5CC "\n"
 *   insn=0x000000000023A5D8 string=0x000000000023A5DC "r"
 *   insn=0x000000000023A5EC string=0x000000000023A5F0 "*"
 *   insn=0x000000000023A5F0 string=0x000000000023A5F4 "\n"
 *   insn=0x000000000023A5F8 string=0x000000000023A5FC "L"
 *   insn=0x000000000023A600 string=0x000000000023A604 "h"
 *   insn=0x000000000023A614 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000023A620 string=0x000000000023A624 "(a"
 *   insn=0x000000000023A62C string=0x000000000023A630 "J%"
 *   insn=0x000000000023A630 string=0x000000000023A634 "J=G"
 *   insn=0x000000000023A634 string=0x000000000023A638 ")!"
 *   insn=0x000000000023A63C string=0x000000000023A640 "*"
 *   insn=0x000000000023A63C string=0x000000000023A670 "*"
 *   insn=0x000000000023A640 string=0x000000000023A644 "K"
 *   insn=0x000000000023A644 string=0x000000000023A648 "+"
 *   insn=0x000000000023A64C string=0x000000000023A650 "_"
 *   insn=0x000000000023A65C string=0x000000000023A660 "Q"
 *   insn=0x000000000023A664 string=0x000000000023A668 "`"
 *   insn=0x000000000023A668 string=0x000000000023A66C "."
 *   insn=0x000000000023A668 string=0x000000000023A694 "@"
 *   insn=0x000000000023A670 string=0x000000000023A674 "K"
 *   insn=0x000000000023A674 string=0x000000000023A678 "+"
 *   insn=0x000000000023A678 string=0x000000000023A67C "_"
 *   insn=0x000000000023A694 string=0x000000000023A698 ""
 *   insn=0x000000000023A698 string=0x000000000023A69C ""
 *   insn=0x000000000023A69C string=0x000000000023A6A0 "!"
 *   insn=0x000000000023A6A0 string=0x000000000023A6A4 ""
 *   insn=0x000000000023A6A4 string=0x000000000023A6A8 ""
 *   insn=0x000000000023A6B8 string=0x000000000023A6BC "J%"
 *   insn=0x000000000023A6BC string=0x000000000023A6C0 "J"
 *   insn=0x000000000023A6C4 string=0x000000000023A6C8 "(a"
 *   insn=0x000000000023A6D0 string=0x000000000023A6D4 "J%"
 *   insn=0x000000000023A6D4 string=0x000000000023A6D8 "J=G"
 *   insn=0x000000000023A6D8 string=0x000000000023A6DC ")!"
 *   insn=0x000000000023A6E0 string=0x000000000023A6E4 "*"
 *   insn=0x000000000023A6E0 string=0x000000000023A710 "*"
 *   insn=0x000000000023A6E4 string=0x000000000023A6E8 "K"
 *   insn=0x000000000023A6E8 string=0x000000000023A6EC "+"
 *   insn=0x000000000023A6F0 string=0x000000000023A6F4 "_"
 *   insn=0x000000000023A6F4 string=0x000000000023A6F8 "l"
 *   insn=0x000000000023A700 string=0x000000000023A704 "("
 *   insn=0x000000000023A708 string=0x000000000023A70C "n"
 *   insn=0x000000000023A710 string=0x000000000023A714 "K"
 *   insn=0x000000000023A714 string=0x000000000023A718 "+"
 *   insn=0x000000000023A718 string=0x000000000023A71C "_"
 *   insn=0x000000000023A724 string=0x000000000023A728 "g"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SoundEffectComponent::SetValueForBindedProperty(
        Caver::SoundEffectComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  void *v5; // x0
  void *v6; // x0
  _DWORD *v7; // x0
  _DWORD *v8; // x8
  int v9; // w9
  int v10; // w8
  unsigned int *v11; // x8
  int v12; // w9
  unsigned int *v13; // x8
  int v14; // w9
  __int64 v15; // [xsp+0h] [xbp-40h] BYREF
  _DWORD *v16; // [xsp+8h] [xbp-38h]
  __int64 v17; // [xsp+18h] [xbp-28h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 == 2 )
  {
    *((_DWORD *)this + 33) = **((_DWORD **)a3 + 1);
    return;
  }
  if ( a2 == 1 )
  {
    *((_DWORD *)this + 32) = **((_DWORD **)a3 + 1);
    return;
  }
  if ( a2 )
  {
    Caver::Component::SetValueForBindedProperty(this, a2, a3);
    return;
  }
  Caver::SoundLibrary::sharedLibrary(this);
  sub_56A528(&v15, *((_QWORD *)a3 + 1));
  Caver::SoundLibrary::EffectForName();
  v5 = (void *)(v15 - 24);
  if ( (__int64 *)(v15 - 24) == &qword_6FD2E0 )
    goto LABEL_5;
  v11 = (unsigned int *)(v15 - 8);
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
  if ( v12 > 0 )
  {
LABEL_5:
    if ( !v16 )
      return;
  }
  else
  {
    operator delete(v5);
    if ( !v16 )
      return;
  }
  sub_56A528(&v15, *((_QWORD *)a3 + 1));
  sub_56A6A8((char *)this + 120);
  v6 = (void *)(v15 - 24);
  if ( (__int64 *)(v15 - 24) == &qword_6FD2E0 )
    goto LABEL_7;
  v13 = (unsigned int *)(v15 - 8);
  if ( &pthread_create )
  {
    do
      v14 = __ldaxr(v13);
    while ( __stlxr(v14 - 1, v13) );
  }
  else
  {
    v14 = (*v13)--;
  }
  if ( v14 > 0 )
  {
LABEL_7:
    v7 = v16;
    if ( !v16 )
      goto LABEL_9;
    goto LABEL_8;
  }
  operator delete(v6);
  v7 = v16;
  if ( v16 )
LABEL_8:
    ++v7[2];
LABEL_9:
  v8 = (_DWORD *)*((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = v7;
  if ( v8 )
  {
    v9 = v8[2] - 1;
    v8[2] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
      v7 = v16;
    }
  }
  if ( v7 )
  {
    v10 = v7[2] - 1;
    v7[2] = v10;
    if ( !v10 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
  }
}

