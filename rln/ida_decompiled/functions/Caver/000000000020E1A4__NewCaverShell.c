/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020E1A4
 * Mangled: _ZN5Caver13NewCaverShellEiPPc
 * Demangled: Caver::NewCaverShell(int,char **)
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F76F0  Caver::FWShell::FWShell(void)
 *   0x00000000001FCD50  Caver::FWShell::AddArgument(std::string const&)
 *   0x0000000000203770  std::terminate(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 41
 *   insn=0x000000000020E1BC string=0x000000000020E1C0 "V"
 *   insn=0x000000000020E1D8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000020E1DC string=0x000000000020E1E0 "D"
 *   insn=0x000000000020E1E0 string=0x00000000001F76F0 "0'"
 *   insn=0x000000000020E1E8 string=0x000000000020E1EC "QC"
 *   insn=0x000000000020E1F8 string=0x000000000020E1FC "A"
 *   insn=0x000000000020E204 string=0x000000000020E208 "h"
 *   insn=0x000000000020E208 string=0x000000000020E20C "iB"
 *   insn=0x000000000020E210 string=0x000000000020E214 "k"
 *   insn=0x000000000020E230 string=0x000000000020E234 "\t"
 *   insn=0x000000000020E230 string=0x000000000020E248 "\t"
 *   insn=0x000000000020E234 string=0x000000000020E238 "*"
 *   insn=0x000000000020E238 string=0x000000000020E23C "\n"
 *   insn=0x000000000020E244 string=0x000000000020E254 "?"
 *   insn=0x000000000020E248 string=0x000000000020E24C "*"
 *   insn=0x000000000020E24C string=0x000000000020E250 "\n"
 *   insn=0x000000000020E258 string=0x000000000020E294 "9"
 *   insn=0x000000000020E25C string=0x000000000020E260 "Qp"
 *   insn=0x000000000020E270 string=0x000000000020E274 "Qb"
 *   insn=0x000000000020E280 string=0x00000000001FCD50 "0'"
 *   insn=0x000000000020E290 string=0x000000000020E22C "!"
 *   insn=0x000000000020E294 string=0x000000000020E298 "?"
 *   insn=0x000000000020E298 string=0x000000000020E29C "k"
 *   insn=0x000000000020E2A8 string=0x000000000020E2AC "!"
 *   insn=0x000000000020E2D0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000020E2DC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000020E2E0 string=0x000000000020E2E4 "x"
 *   insn=0x000000000020E2EC string=0x000000000020E2F0 "(a"
 *   insn=0x000000000020E2F8 string=0x000000000020E2FC ")!"
 *   insn=0x000000000020E300 string=0x000000000020E304 "*"
 *   insn=0x000000000020E300 string=0x000000000020E330 "*"
 *   insn=0x000000000020E304 string=0x000000000020E308 "K"
 *   insn=0x000000000020E308 string=0x000000000020E30C "+"
 *   insn=0x000000000020E310 string=0x000000000020E314 "_"
 *   insn=0x000000000020E320 string=0x000000000020E324 " p"
 *   insn=0x000000000020E328 string=0x000000000020E32C "f"
 *   insn=0x000000000020E330 string=0x000000000020E334 "K"
 *   insn=0x000000000020E334 string=0x000000000020E338 "+"
 *   insn=0x000000000020E338 string=0x000000000020E33C "_"
 *   insn=0x000000000020E350 string=0x000000000020E354 ""
 *   insn=0x000000000020E350 string=0x00000000001F45E0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::NewCaverShell(Caver *this, __int64 a2, char **a3)
{
  int v3; // w21
  __int64 v5; // x19
  __int64 i; // x25
  unsigned int *v7; // x8
  int v8; // w9
  void *v9; // x0
  _QWORD v11[3]; // [xsp+18h] [xbp-58h] BYREF

  v3 = (int)this;
  v11[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = operator new(0xB0u);
  Caver::FWShell::FWShell((Caver::FWShell *)v5);
  *(_QWORD *)(v5 + 152) = 0;
  *(_QWORD *)(v5 + 160) = 0;
  *(_QWORD *)(v5 + 136) = 0;
  *(_QWORD *)(v5 + 144) = 0;
  *(_QWORD *)v5 = off_6B8ED0;
  *(_QWORD *)(v5 + 128) = &byte_6FD2F8;
  *(_BYTE *)(v5 + 168) = 0;
  if ( v3 >= 2 )
  {
    for ( i = 1; i < v3; ++i )
    {
      sub_566BB8((int)v11, *(char **)(a2 + 8 * i));
      Caver::FWShell::AddArgument();
      v9 = (void *)(v11[0] - 24LL);
      if ( (__int64 *)(v11[0] - 24LL) != &qword_6FD2E0 )
      {
        v7 = (unsigned int *)(v11[0] - 8LL);
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
          operator delete(v9);
      }
    }
  }
  return v5;
}

