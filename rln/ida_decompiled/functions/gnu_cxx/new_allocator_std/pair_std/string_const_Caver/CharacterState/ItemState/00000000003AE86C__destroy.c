/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AE86C
 * Mangled: _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5Caver14CharacterState9ItemStateEEE7destroyEPS6_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>::destroy(std::pair<std::string const,Caver::CharacterState::ItemState>*)
 *
 * Callers: 2
 *   0x00000000001FD8A0  __gnu_cxx::new_allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>::destroy(std::pair<std::string const,Caver::CharacterState::ItemState>*)
 *   0x00000000003AE518  Caver::CharacterState::TrinketBonusForSkills(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 34
 *   insn=0x00000000003AE87C string=0x00000000003AE880 "U"
 *   insn=0x00000000003AE88C string=0x00000000003AE890 "t\n@"
 *   insn=0x00000000003AE890 string=0x00000000003AE894 "4"
 *   insn=0x00000000003AE894 string=0x00000000003AE8D8 "h"
 *   insn=0x00000000003AE898 string=0x00000000003AE89C ""
 *   insn=0x00000000003AE8A8 string=0x00000000003AE8AC "\t@"
 *   insn=0x00000000003AE8B8 string=0x00000000003AE8BC ""
 *   insn=0x00000000003AE8C8 string=0x00000000003AE8CC "@"
 *   insn=0x00000000003AE8DC string=0x00000000003AE8E0 ")"
 *   insn=0x00000000003AE8E8 string=0x00000000003AE8EC "A"
 *   insn=0x00000000003AE8FC string=0x00000000003AE958 "^"
 *   insn=0x00000000003AE914 string=0x00000000003AE918 ")=G"
 *   insn=0x00000000003AE918 string=0x00000000003AE91C "!"
 *   insn=0x00000000003AE920 string=0x00000000003AE924 "\t"
 *   insn=0x00000000003AE920 string=0x00000000003AE938 "\t"
 *   insn=0x00000000003AE924 string=0x00000000003AE928 "*"
 *   insn=0x00000000003AE928 string=0x00000000003AE92C "\n"
 *   insn=0x00000000003AE934 string=0x00000000003AE944 "?"
 *   insn=0x00000000003AE938 string=0x00000000003AE93C "*"
 *   insn=0x00000000003AE93C string=0x00000000003AE940 "\n"
 *   insn=0x00000000003AE944 string=0x00000000003AE948 "L"
 *   insn=0x00000000003AE958 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003AE960 string=0x00000000003AE964 "J"
 *   insn=0x00000000003AE968 string=0x00000000003AE96C "(a"
 *   insn=0x00000000003AE978 string=0x00000000003AE97C "J=G"
 *   insn=0x00000000003AE97C string=0x00000000003AE980 ")!"
 *   insn=0x00000000003AE984 string=0x00000000003AE988 "*"
 *   insn=0x00000000003AE984 string=0x00000000003AE9B4 "*"
 *   insn=0x00000000003AE988 string=0x00000000003AE98C "K"
 *   insn=0x00000000003AE98C string=0x00000000003AE990 "+"
 *   insn=0x00000000003AE994 string=0x00000000003AE998 "_"
 *   insn=0x00000000003AE9B4 string=0x00000000003AE9B8 "K"
 *   insn=0x00000000003AE9B8 string=0x00000000003AE9BC "+"
 *   insn=0x00000000003AE9BC string=0x00000000003AE9C0 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __gnu_cxx::new_allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>::destroy(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 *v6; // x0
  unsigned int *v7; // x8
  int v8; // w9

  _ReadStatusReg(TPIDR_EL0);
  v3 = (_QWORD *)a2[2];
  if ( v3 )
  {
    v4 = v3[1] - 1LL;
    v3[1] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v5 = v3[2] - 1LL;
      v3[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
  v6 = (__int64 *)(*a2 - 24LL);
  if ( v6 != &qword_6FD2E0 )
  {
    v7 = (unsigned int *)(*a2 - 8LL);
    if ( &pthread_create )
    {
      do
        v8 = __ldaxr(v7);
      while ( __stlxr(v8 - 1, v7) );
    }
    else
    {
      v8 = (*v7)--;
    }
    if ( v8 <= 0 )
      operator delete(v6);
  }
}

