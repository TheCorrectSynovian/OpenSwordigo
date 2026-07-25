/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C1E7C
 * Mangled: _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver11EntityClassEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>*)
 *
 * Callers: 1
 *   0x0000000000202660  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>*)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 38
 *   insn=0x00000000003C1E8C string=0x00000000003C1E90 "U"
 *   insn=0x00000000003C1E9C string=0x00000000003C1EA0 "t\n@"
 *   insn=0x00000000003C1EA0 string=0x00000000003C1EA4 "4"
 *   insn=0x00000000003C1EA4 string=0x00000000003C1EE8 "h"
 *   insn=0x00000000003C1EA8 string=0x00000000003C1EAC ""
 *   insn=0x00000000003C1EB8 string=0x00000000003C1EBC "\t@"
 *   insn=0x00000000003C1EC8 string=0x00000000003C1ECC ""
 *   insn=0x00000000003C1ED8 string=0x00000000003C1EDC "@"
 *   insn=0x00000000003C1EE8 string=0x00000000003C1EEC ")"
 *   insn=0x00000000003C1EEC string=0x00000000003C1EF0 ")"
 *   insn=0x00000000003C1EF8 string=0x00000000003C1EFC "A"
 *   insn=0x00000000003C1EFC string=0x00000000003C1F24 "\t"
 *   insn=0x00000000003C1F24 string=0x00000000003C1F28 ")=G"
 *   insn=0x00000000003C1F28 string=0x00000000003C1F2C "!"
 *   insn=0x00000000003C1F30 string=0x00000000003C1F34 "\t"
 *   insn=0x00000000003C1F30 string=0x00000000003C1F48 "\t"
 *   insn=0x00000000003C1F34 string=0x00000000003C1F38 "*"
 *   insn=0x00000000003C1F38 string=0x00000000003C1F3C "\n"
 *   insn=0x00000000003C1F44 string=0x00000000003C1F54 "?"
 *   insn=0x00000000003C1F48 string=0x00000000003C1F4C "*"
 *   insn=0x00000000003C1F4C string=0x00000000003C1F50 "\n"
 *   insn=0x00000000003C1F54 string=0x00000000003C1F58 "L"
 *   insn=0x00000000003C1F68 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003C1F6C string=0x00000000003C1F70 "*"
 *   insn=0x00000000003C1F70 string=0x00000000003C1F74 "J"
 *   insn=0x00000000003C1F78 string=0x00000000003C1F7C "(a"
 *   insn=0x00000000003C1F84 string=0x00000000003C1F88 "\n"
 *   insn=0x00000000003C1F88 string=0x00000000003C1F8C "J=G"
 *   insn=0x00000000003C1F8C string=0x00000000003C1F90 ")!"
 *   insn=0x00000000003C1F94 string=0x00000000003C1F98 "*"
 *   insn=0x00000000003C1F94 string=0x00000000003C1FC4 "*"
 *   insn=0x00000000003C1F98 string=0x00000000003C1F9C "K"
 *   insn=0x00000000003C1F9C string=0x00000000003C1FA0 "+"
 *   insn=0x00000000003C1FA4 string=0x00000000003C1FA8 "_"
 *   insn=0x00000000003C1FBC string=0x00000000003C1FC0 "A"
 *   insn=0x00000000003C1FC4 string=0x00000000003C1FC8 "K"
 *   insn=0x00000000003C1FC8 string=0x00000000003C1FCC "+"
 *   insn=0x00000000003C1FCC string=0x00000000003C1FD0 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>::destroy(
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

