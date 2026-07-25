/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000228A04
 * Mangled: _ZN5Caver29ObjectLinkControllerComponent17InitWithComponentEPKS0_
 * Demangled: Caver::ObjectLinkControllerComponent::InitWithComponent(Caver::ObjectLinkControllerComponent const*)
 *
 * Callers: 1
 *   0x00000000001F77F0  Caver::ObjectLinkControllerComponent::InitWithComponent(Caver::ObjectLinkControllerComponent const*)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 43
 *   insn=0x0000000000228A14 string=0x0000000000228A18 "U"
 *   insn=0x0000000000228A30 string=0x0000000000228A34 "`"
 *   insn=0x0000000000228A34 string=0x0000000000228A38 "h""
 *   insn=0x0000000000228A38 string=0x0000000000228A3C ""
 *   insn=0x0000000000228A48 string=0x0000000000228A4C "\nA"
 *   insn=0x0000000000228A50 string=0x0000000000228A54 "!"
 *   insn=0x0000000000228A58 string=0x0000000000228A5C "`"
 *   insn=0x0000000000228A6C string=0x0000000000228A70 ")"
 *   insn=0x0000000000228A78 string=0x0000000000228A7C "!"
 *   insn=0x0000000000228A80 string=0x0000000000228A84 "`B"
 *   insn=0x0000000000228A84 string=0x0000000000228A88 ""
 *   insn=0x0000000000228A90 string=0x0000000000228A94 "h"
 *   insn=0x0000000000228A98 string=0x0000000000228A9C "hB"
 *   insn=0x0000000000228AA0 string=0x0000000000228AA4 "h"
 *   insn=0x0000000000228AA4 string=0x0000000000228AA8 "("
 *   insn=0x0000000000228AA8 string=0x0000000000228AAC "i"
 *   insn=0x0000000000228AAC string=0x0000000000228AB0 "("
 *   insn=0x0000000000228AB4 string=0x0000000000228AB8 "h"
 *   insn=0x0000000000228AE0 string=0x0000000000228AE4 ")=G"
 *   insn=0x0000000000228AE4 string=0x0000000000228AE8 "!"
 *   insn=0x0000000000228AEC string=0x0000000000228AF0 "\t"
 *   insn=0x0000000000228AEC string=0x0000000000228B04 "\t"
 *   insn=0x0000000000228AF0 string=0x0000000000228AF4 "*"
 *   insn=0x0000000000228AF4 string=0x0000000000228AF8 "\n"
 *   insn=0x0000000000228B00 string=0x0000000000228B10 "?"
 *   insn=0x0000000000228B04 string=0x0000000000228B08 "*"
 *   insn=0x0000000000228B08 string=0x0000000000228B0C "\n"
 *   insn=0x0000000000228B10 string=0x0000000000228B14 "l"
 *   insn=0x0000000000228B18 string=0x0000000000228B1C """
 *   insn=0x0000000000228B24 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000228B2C string=0x0000000000228B30 "J"
 *   insn=0x0000000000228B34 string=0x0000000000228B38 "(a"
 *   insn=0x0000000000228B44 string=0x0000000000228B48 "J=G"
 *   insn=0x0000000000228B48 string=0x0000000000228B4C ")!"
 *   insn=0x0000000000228B50 string=0x0000000000228B54 "*"
 *   insn=0x0000000000228B50 string=0x0000000000228B80 "*"
 *   insn=0x0000000000228B54 string=0x0000000000228B58 "K"
 *   insn=0x0000000000228B58 string=0x0000000000228B5C "+"
 *   insn=0x0000000000228B60 string=0x0000000000228B64 "_"
 *   insn=0x0000000000228B78 string=0x0000000000228B7C "Rc"
 *   insn=0x0000000000228B80 string=0x0000000000228B84 "K"
 *   insn=0x0000000000228B84 string=0x0000000000228B88 "+"
 *   insn=0x0000000000228B88 string=0x0000000000228B8C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ObjectLinkControllerComponent::InitWithComponent(
        Caver::ObjectLinkControllerComponent *this,
        const Caver::ObjectLinkControllerComponent *a2)
{
  __int64 v4; // x8
  char *v5; // x1
  void *v6; // x0
  __int64 result; // x0
  unsigned int *v8; // x8
  int v9; // w9
  _QWORD v10[3]; // [xsp+8h] [xbp-38h] BYREF

  v10[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  sub_56A6A8((char *)this + 56);
  v4 = *((_QWORD *)a2 + 15);
  if ( v4 )
    v5 = (char *)(v4 + 80);
  else
    v5 = (char *)a2 + 112;
  sub_56A528(v10, v5);
  sub_56A6A8((char *)this + 112);
  v6 = (void *)(v10[0] - 24LL);
  if ( (__int64 *)(v10[0] - 24LL) != &qword_6FD2E0 )
  {
    v8 = (unsigned int *)(v10[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v9 = __ldaxr(v8);
      while ( __stlxr(v9 - 1, v8) );
    }
    else
    {
      v9 = (*v8)--;
    }
    if ( v9 <= 0 )
      operator delete(v6);
  }
  result = sub_56A6A8((char *)this + 144);
  *(_QWORD *)((char *)this + 236) = *(_QWORD *)((char *)a2 + 236);
  *(_QWORD *)((char *)this + 244) = *(_QWORD *)((char *)a2 + 244);
  *(_QWORD *)((char *)this + 252) = *(_QWORD *)((char *)a2 + 252);
  *(_QWORD *)((char *)this + 260) = *(_QWORD *)((char *)a2 + 260);
  *((_DWORD *)this + 67) = *((_DWORD *)a2 + 67);
  return result;
}

