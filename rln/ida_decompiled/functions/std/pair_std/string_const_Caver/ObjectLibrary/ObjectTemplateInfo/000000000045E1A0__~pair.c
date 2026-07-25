/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045E1A0
 * Mangled: _ZNSt4pairIKSsN5Caver13ObjectLibrary18ObjectTemplateInfoEED2Ev
 * Demangled: std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>::~pair()
 *
 * Callers: 1
 *   0x00000000001FF200  std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>::~pair()
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 53
 *   insn=0x000000000045E1B0 string=0x000000000045E1B4 "U"
 *   insn=0x000000000045E1C0 string=0x000000000045E1C4 "`"
 *   insn=0x000000000045E1C8 string=0x000000000045E1CC "@"
 *   insn=0x000000000045E1C8 string=0x000000000045E1E8 "t\n@"
 *   insn=0x000000000045E1CC string=0x000000000045E1D0 ""
 *   insn=0x000000000045E1D0 string=0x000000000045E1D4 ""
 *   insn=0x000000000045E1D8 string=0x000000000045E1DC ""
 *   insn=0x000000000045E1DC string=0x000000000045E1E0 ""
 *   insn=0x000000000045E1E8 string=0x000000000045E1EC "4"
 *   insn=0x000000000045E1EC string=0x000000000045E230 "h"
 *   insn=0x000000000045E1F0 string=0x000000000045E1F4 ""
 *   insn=0x000000000045E200 string=0x000000000045E204 "\t@"
 *   insn=0x000000000045E210 string=0x000000000045E214 ""
 *   insn=0x000000000045E220 string=0x000000000045E224 "@"
 *   insn=0x000000000045E230 string=0x000000000045E234 ")"
 *   insn=0x000000000045E234 string=0x000000000045E238 ")"
 *   insn=0x000000000045E240 string=0x000000000045E244 "A"
 *   insn=0x000000000045E244 string=0x000000000045E26C ")"
 *   insn=0x000000000045E254 string=0x000000000045E2B0 "`"
 *   insn=0x000000000045E26C string=0x000000000045E270 ")=G"
 *   insn=0x000000000045E270 string=0x000000000045E274 "!"
 *   insn=0x000000000045E278 string=0x000000000045E27C "\t"
 *   insn=0x000000000045E278 string=0x000000000045E290 "\t"
 *   insn=0x000000000045E27C string=0x000000000045E280 "*"
 *   insn=0x000000000045E280 string=0x000000000045E284 "\n"
 *   insn=0x000000000045E28C string=0x000000000045E29C "?"
 *   insn=0x000000000045E290 string=0x000000000045E294 "*"
 *   insn=0x000000000045E294 string=0x000000000045E298 "\n"
 *   insn=0x000000000045E29C string=0x000000000045E2A0 "L"
 *   insn=0x000000000045E2A4 string=0x000000000045E2A8 "?0"
 *   insn=0x000000000045E2B0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000045E2BC string=0x000000000045E30C "h"
 *   insn=0x000000000045E2C0 string=0x000000000045E2C4 ""
 *   insn=0x000000000045E2D0 string=0x000000000045E2D4 "\t@"
 *   insn=0x000000000045E2E0 string=0x000000000045E2E4 ""
 *   insn=0x000000000045E2F0 string=0x000000000045E2F4 "@"
 *   insn=0x000000000045E30C string=0x000000000045E310 ")"
 *   insn=0x000000000045E310 string=0x000000000045E314 ")"
 *   insn=0x000000000045E320 string=0x000000000045E324 ")"
 *   insn=0x000000000045E324 string=0x000000000045E328 ")=G"
 *   insn=0x000000000045E328 string=0x000000000045E32C "!"
 *   insn=0x000000000045E32C string=0x000000000045E330 "i"
 *   insn=0x000000000045E330 string=0x000000000045E334 "\t"
 *   insn=0x000000000045E330 string=0x000000000045E35C "\t"
 *   insn=0x000000000045E334 string=0x000000000045E338 "*"
 *   insn=0x000000000045E338 string=0x000000000045E33C "\n"
 *   insn=0x000000000045E340 string=0x000000000045E344 "?"
 *   insn=0x000000000045E344 string=0x000000000045E348 "l"
 *   insn=0x000000000045E354 string=0x000000000045E358 "["
 *   insn=0x000000000045E35C string=0x000000000045E360 "*"
 *   insn=0x000000000045E360 string=0x000000000045E364 "\n"
 *   insn=0x000000000045E364 string=0x000000000045E368 "?"
 *   insn=0x000000000045E368 string=0x000000000045E36C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>::~pair(_QWORD *a1)
{
  _DWORD *v2; // x0
  int v3; // w8
  _QWORD *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 *v7; // x0
  unsigned int *v8; // x8
  int v9; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_DWORD *)a1[3];
  if ( v2 )
  {
    v3 = v2[2] - 1;
    v2[2] = v3;
    if ( !v3 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v4 = (_QWORD *)a1[2];
  if ( v4 )
  {
    v5 = v4[1] - 1LL;
    v4[1] = v5;
    if ( !v5 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
      v6 = v4[2] - 1LL;
      v4[2] = v6;
      if ( !v6 )
        (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
    }
  }
  v7 = (__int64 *)(*a1 - 24LL);
  if ( v7 != &qword_6FD2E0 )
  {
    v8 = (unsigned int *)(*a1 - 8LL);
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
      operator delete(v7);
  }
}

