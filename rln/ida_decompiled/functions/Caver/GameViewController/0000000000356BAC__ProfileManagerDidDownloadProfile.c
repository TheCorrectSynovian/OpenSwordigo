/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000356BAC
 * Mangled: _ZN5Caver18GameViewController32ProfileManagerDidDownloadProfileEPNS_14ProfileManagerERKSs
 * Demangled: Caver::GameViewController::ProfileManagerDidDownloadProfile(Caver::ProfileManager *,std::string const&)
 *
 * Callers: 1
 *   0x0000000000201A70  Caver::GameViewController::ProfileManagerDidDownloadProfile(Caver::ProfileManager *,std::string const&)
 *
 * Callees: 9
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC010  Caver::ProfileManager::ProfileWithIdentifier(std::string const&)
 *   0x0000000000201A70  Caver::GameViewController::ProfileManagerDidDownloadProfile(Caver::ProfileManager *,std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 53
 *   insn=0x0000000000356BC4 string=0x0000000000356BC8 "X"
 *   insn=0x0000000000356BC8 string=0x0000000000356BCC ""
 *   insn=0x0000000000356BDC string=0x0000000000356BE0 "hF@"
 *   insn=0x0000000000356BE8 string=0x0000000000356BEC "ON"
 *   insn=0x0000000000356C00 string=0x0000000000356C04 "_"
 *   insn=0x0000000000356C0C string=0x0000000000356C10 "`y"
 *   insn=0x0000000000356C10 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000356C1C string=0x0000000000356C24 "h"
 *   insn=0x0000000000356C24 string=0x0000000000356C28 ""
 *   insn=0x0000000000356C2C string=0x0000000000356C30 "a"
 *   insn=0x0000000000356C30 string=0x0000000000356D1C "i"
 *   insn=0x0000000000356C34 string=0x0000000000356CF0 ""
 *   insn=0x0000000000356C44 string=0x00000000001FC010 "0'"
 *   insn=0x0000000000356C4C string=0x0000000000356C50 "\n"
 *   insn=0x0000000000356C4C string=0x0000000000356C5C "t"
 *   insn=0x0000000000356C50 string=0x0000000000356C54 "J"
 *   insn=0x0000000000356C54 string=0x0000000000356C58 "\n"
 *   insn=0x0000000000356C5C string=0x0000000000356C60 "i""
 *   insn=0x0000000000356C60 string=0x0000000000356C64 "4"
 *   insn=0x0000000000356C68 string=0x0000000000356C6C ""
 *   insn=0x0000000000356C78 string=0x0000000000356C7C "\t@"
 *   insn=0x0000000000356C88 string=0x0000000000356C8C ""
 *   insn=0x0000000000356C98 string=0x0000000000356C9C "@"
 *   insn=0x0000000000356CA8 string=0x0000000000356CAC "3"
 *   insn=0x0000000000356CAC string=0x0000000000356CB0 "h"
 *   insn=0x0000000000356CB0 string=0x0000000000356CB4 ""
 *   insn=0x0000000000356CB4 string=0x0000000000356CB8 "h"
 *   insn=0x0000000000356CBC string=0x0000000000356CC0 "h"
 *   insn=0x0000000000356CC4 string=0x0000000000356CC8 "\t@"
 *   insn=0x0000000000356CCC string=0x0000000000356CD0 "h\n@"
 *   insn=0x0000000000356CD0 string=0x0000000000356CD4 ""
 *   insn=0x0000000000356CD4 string=0x0000000000356CD8 "h\n"
 *   insn=0x0000000000356CDC string=0x0000000000356CE0 "h"
 *   insn=0x0000000000356CE4 string=0x0000000000356CE8 "@"
 *   insn=0x0000000000356CF8 string=0x0000000000356CFC "a"
 *   insn=0x0000000000356CFC string=0x0000000000356D68 "Z}"
 *   insn=0x0000000000356D1C string=0x0000000000356D20 ")=G"
 *   insn=0x0000000000356D28 string=0x0000000000356D2C "\t"
 *   insn=0x0000000000356D28 string=0x0000000000356D40 "\t"
 *   insn=0x0000000000356D2C string=0x0000000000356D30 "*"
 *   insn=0x0000000000356D30 string=0x0000000000356D34 "\n"
 *   insn=0x0000000000356D3C string=0x0000000000356D4C "?"
 *   insn=0x0000000000356D40 string=0x0000000000356D44 "*"
 *   insn=0x0000000000356D44 string=0x0000000000356D48 "\n"
 *   insn=0x0000000000356D4C string=0x0000000000356D50 ","
 *   insn=0x0000000000356D68 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000356D70 string=0x0000000000356D74 "4"
 *   insn=0x0000000000356D78 string=0x0000000000356D7C ""
 *   insn=0x0000000000356D88 string=0x0000000000356D8C "\t@"
 *   insn=0x0000000000356D98 string=0x0000000000356D9C ""
 *   insn=0x0000000000356DA8 string=0x0000000000356DAC "@"
 *   insn=0x0000000000356DBC string=0x0000000000356DC0 "c"
 *   insn=0x0000000000356DC4 string=0x0000000000356DC8 "*"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameViewController::ProfileManagerDidDownloadProfile(_QWORD *a1, __int64 a2, const void **a3)
{
  char *v5; // x23
  size_t v6; // x2
  __int64 *v7; // x22
  _BOOL4 v8; // w25
  _QWORD *v9; // x8
  void *v10; // x9
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8
  _QWORD *v14; // x19
  __int64 v15; // x8
  __int64 v16; // x8
  unsigned int *v17; // x8
  int v18; // w9
  void *v19; // [xsp+0h] [xbp-60h] BYREF
  _QWORD *v20; // [xsp+8h] [xbp-58h]
  __int64 v21; // [xsp+18h] [xbp-48h]

  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_56A528(&v19, a1[17] + 24LL);
  v5 = (char *)v19;
  v6 = *((_QWORD *)*a3 - 3);
  v7 = (__int64 *)((char *)v19 - 24);
  v8 = v6 == *((_QWORD *)v19 - 3) && memcmp(*a3, v19, v6) == 0;
  if ( v7 == &qword_6FD2E0 )
    goto LABEL_5;
  v17 = (unsigned int *)(v5 - 8);
  if ( &pthread_create )
  {
    do
      v18 = __ldaxr(v17);
    while ( __stlxr(v18 - 1, v17) );
  }
  else
  {
    v18 = (*v17)--;
  }
  if ( v18 > 0 )
  {
LABEL_5:
    if ( !v8 )
      return;
  }
  else
  {
    operator delete(v7);
    if ( !v8 )
      return;
  }
  Caver::ProfileManager::ProfileWithIdentifier();
  v10 = v19;
  v9 = v20;
  if ( v20 )
    ++v20[1];
  v11 = (_QWORD *)a1[33];
  a1[32] = v10;
  a1[33] = v9;
  if ( v11 )
  {
    v12 = v11[1] - 1LL;
    v11[1] = v12;
    if ( !v12 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( !v13 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  v14 = v20;
  if ( v20 )
  {
    v15 = v20[1] - 1LL;
    v20[1] = v15;
    if ( !v15 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      v16 = v14[2] - 1LL;
      v14[2] = v16;
      if ( !v16 )
        (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
    }
  }
}

