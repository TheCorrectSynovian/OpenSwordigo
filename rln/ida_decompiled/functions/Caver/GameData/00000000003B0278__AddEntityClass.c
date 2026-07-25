/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B0278
 * Mangled: _ZN5Caver8GameData14AddEntityClassERKN5boost10shared_ptrINS_11EntityClassEEE
 * Demangled: Caver::GameData::AddEntityClass(boost::shared_ptr<Caver::EntityClass> const&)
 *
 * Callers: 1
 *   0x0000000000203630  Caver::GameData::AddEntityClass(boost::shared_ptr<Caver::EntityClass> const&)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FCA20  std::map<std::string,boost::shared_ptr<Caver::EntityClass>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::operator[](std::string const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 45
 *   insn=0x00000000003B0288 string=0x00000000003B028C "U"
 *   insn=0x00000000003B02A0 string=0x00000000003B02A4 "a"
 *   insn=0x00000000003B02B4 string=0x00000000003B02B8 "i"@"
 *   insn=0x00000000003B02B4 string=0x00000000001FCA20 "0'"
 *   insn=0x00000000003B02BC string=0x00000000003B02C0 "\n"
 *   insn=0x00000000003B02C0 string=0x00000000003B02C4 "J"
 *   insn=0x00000000003B02C4 string=0x00000000003B02C8 "\n"
 *   insn=0x00000000003B02CC string=0x00000000003B02D0 "\t "
 *   insn=0x00000000003B02D0 string=0x00000000003B02D4 "3"
 *   insn=0x00000000003B02D4 string=0x00000000003B02D8 "h"
 *   insn=0x00000000003B02D8 string=0x00000000003B02DC ""
 *   insn=0x00000000003B02DC string=0x00000000003B02E0 "h"
 *   insn=0x00000000003B02E4 string=0x00000000003B02E8 "h"
 *   insn=0x00000000003B02E8 string=0x00000000003B02EC "\t@"
 *   insn=0x00000000003B02F4 string=0x00000000003B02F8 "h\n@"
 *   insn=0x00000000003B02F8 string=0x00000000003B02FC ""
 *   insn=0x00000000003B02FC string=0x00000000003B0300 "h\n"
 *   insn=0x00000000003B0304 string=0x00000000003B0308 "h"
 *   insn=0x00000000003B0308 string=0x00000000003B030C "@"
 *   insn=0x00000000003B031C string=0x00000000003B0320 ")"
 *   insn=0x00000000003B0328 string=0x00000000003B032C "A"
 *   insn=0x00000000003B0354 string=0x00000000003B0358 ")=G"
 *   insn=0x00000000003B0358 string=0x00000000003B035C "!"
 *   insn=0x00000000003B0360 string=0x00000000003B0364 "\t"
 *   insn=0x00000000003B0360 string=0x00000000003B0378 "\t"
 *   insn=0x00000000003B0364 string=0x00000000003B0368 "*"
 *   insn=0x00000000003B0368 string=0x00000000003B036C "\n"
 *   insn=0x00000000003B0374 string=0x00000000003B0384 "?"
 *   insn=0x00000000003B0378 string=0x00000000003B037C "*"
 *   insn=0x00000000003B037C string=0x00000000003B0380 "\n"
 *   insn=0x00000000003B0384 string=0x00000000003B0388 "L"
 *   insn=0x00000000003B0398 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003B03A0 string=0x00000000003B03A4 "J"
 *   insn=0x00000000003B03A8 string=0x00000000003B03AC "(a"
 *   insn=0x00000000003B03B8 string=0x00000000003B03BC "J=G"
 *   insn=0x00000000003B03BC string=0x00000000003B03C0 ")!"
 *   insn=0x00000000003B03C4 string=0x00000000003B03C8 "*"
 *   insn=0x00000000003B03C4 string=0x00000000003B03F4 "*"
 *   insn=0x00000000003B03C8 string=0x00000000003B03CC "K"
 *   insn=0x00000000003B03CC string=0x00000000003B03D0 "+"
 *   insn=0x00000000003B03D4 string=0x00000000003B03D8 "_"
 *   insn=0x00000000003B03EC string=0x00000000003B03F0 "5E"
 *   insn=0x00000000003B03F4 string=0x00000000003B03F8 "K"
 *   insn=0x00000000003B03F8 string=0x00000000003B03FC "+"
 *   insn=0x00000000003B03FC string=0x00000000003B0400 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameData::AddEntityClass(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // x0
  __int64 v4; // x8
  __int64 v5; // x9
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x8
  void *v9; // x0
  unsigned int *v10; // x8
  int v11; // w9
  _QWORD v12[3]; // [xsp+8h] [xbp-38h] BYREF

  v12[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_56A528(v12, *a2);
  v3 = (_QWORD *)std::map<std::string,boost::shared_ptr<Caver::EntityClass>>::operator[]();
  v5 = *a2;
  v4 = a2[1];
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
  v6 = (_QWORD *)v3[1];
  *v3 = v5;
  v3[1] = v4;
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
  v9 = (void *)(v12[0] - 24LL);
  if ( (__int64 *)(v12[0] - 24LL) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(v12[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v11 = __ldaxr(v10);
      while ( __stlxr(v11 - 1, v10) );
    }
    else
    {
      v11 = (*v10)--;
    }
    if ( v11 <= 0 )
      operator delete(v9);
  }
}

