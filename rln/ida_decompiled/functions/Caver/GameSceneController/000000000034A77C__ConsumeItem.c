/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000034A77C
 * Mangled: _ZN5Caver19GameSceneController11ConsumeItemERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::GameSceneController::ConsumeItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x00000000001FD4F0  Caver::GameSceneController::ConsumeItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000005689E0  sub_5689E0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 37
 *   insn=0x000000000034A78C string=0x000000000034A790 "U"
 *   insn=0x000000000034A7A0 string=0x000000000034A7A4 "("
 *   insn=0x000000000034A7A8 string=0x000000000034A7AC "_"
 *   insn=0x000000000034A7AC string=0x000000000034A7B0 "!"
 *   insn=0x000000000034A7B0 string=0x000000000058EAA1 "healingpotion"
 *   insn=0x000000000034A7C8 string=0x000000000034A7CC ")"
 *   insn=0x000000000034A7D8 string=0x000000000034A7DC "T"
 *   insn=0x000000000034A7DC string=0x000000000034A7E0 "hz@"
 *   insn=0x000000000034A7E0 string=0x000000000034A7E4 "\t"
 *   insn=0x000000000034A7E8 string=0x000000000034A7EC "\n"
 *   insn=0x000000000034A7EC string=0x000000000034A7F0 "))"
 *   insn=0x000000000034A7F0 string=0x000000000034A7F4 "_"
 *   insn=0x000000000034A7F4 string=0x000000000034A7F8 ")"
 *   insn=0x000000000034A7F8 string=0x000000000034A7FC ")}"
 *   insn=0x000000000034A7FC string=0x000000000034A800 "\t"
 *   insn=0x000000000034A828 string=0x000000000034A82C ")=G"
 *   insn=0x000000000034A82C string=0x000000000034A830 "!"
 *   insn=0x000000000034A834 string=0x000000000034A838 "\t"
 *   insn=0x000000000034A834 string=0x000000000034A84C "\t"
 *   insn=0x000000000034A838 string=0x000000000034A83C "*"
 *   insn=0x000000000034A83C string=0x000000000034A840 "\n"
 *   insn=0x000000000034A848 string=0x000000000034A858 "?"
 *   insn=0x000000000034A84C string=0x000000000034A850 "*"
 *   insn=0x000000000034A850 string=0x000000000034A854 "\n"
 *   insn=0x000000000034A870 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000034A878 string=0x000000000034A87C "J"
 *   insn=0x000000000034A880 string=0x000000000034A884 "(a"
 *   insn=0x000000000034A890 string=0x000000000034A894 "J=G"
 *   insn=0x000000000034A894 string=0x000000000034A898 ")!"
 *   insn=0x000000000034A89C string=0x000000000034A8A0 "*"
 *   insn=0x000000000034A89C string=0x000000000034A8CC "*"
 *   insn=0x000000000034A8A0 string=0x000000000034A8A4 "K"
 *   insn=0x000000000034A8A4 string=0x000000000034A8A8 "+"
 *   insn=0x000000000034A8AC string=0x000000000034A8B0 "_"
 *   insn=0x000000000034A8CC string=0x000000000034A8D0 "K"
 *   insn=0x000000000034A8D0 string=0x000000000034A8D4 "+"
 *   insn=0x000000000034A8D4 string=0x000000000034A8D8 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameSceneController::ConsumeItem(__int64 a1, _QWORD *a2)
{
  int v3; // w20
  void *v4; // x0
  __int64 v5; // x8
  int v6; // w9
  unsigned int *v7; // x8
  int v8; // w9
  _QWORD v9[3]; // [xsp+8h] [xbp-38h] BYREF

  v9[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_56A528(v9, *a2 + 8LL);
  v3 = sub_5689E0((int)v9, "healingpotion");
  v4 = (void *)(v9[0] - 24LL);
  if ( (__int64 *)(v9[0] - 24LL) == &qword_6FD2E0 )
    goto LABEL_2;
  v7 = (unsigned int *)(v9[0] - 8LL);
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
  if ( v8 > 0 )
  {
LABEL_2:
    if ( v3 )
      return;
  }
  else
  {
    operator delete(v4);
    if ( v3 )
      return;
  }
  v5 = *(_QWORD *)(a1 + 240);
  if ( !*(_BYTE *)(v5 + 120) )
  {
    v6 = *(_DWORD *)(v5 + 128) + 10;
    if ( *(_DWORD *)(v5 + 124) <= v6 )
      v6 = *(_DWORD *)(v5 + 124);
    *(_DWORD *)(v5 + 128) = v6 & ~(v6 >> 31);
  }
}

