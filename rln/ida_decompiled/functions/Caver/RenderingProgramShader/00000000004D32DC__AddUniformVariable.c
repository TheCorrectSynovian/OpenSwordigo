/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D32DC
 * Mangled: _ZN5Caver22RenderingProgramShader18AddUniformVariableEiRKSs
 * Demangled: Caver::RenderingProgramShader::AddUniformVariable(int,std::string const&)
 *
 * Callers: 1
 *   0x0000000000200230  Caver::RenderingProgramShader::AddUniformVariable(int,std::string const&)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FF990  std::vector<Caver::RenderingProgramShader::UniformVariable,std::allocator<Caver::RenderingProgramShader::UniformVariable>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::RenderingProgramShader::UniformVariable*,std::vector<Caver::RenderingProgramShader::UniformVariable,std::allocator<Caver::RenderingProgramShader::UniformVariable>>>,Caver::RenderingProgramShader::UniformVariable const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 36
 *   insn=0x00000000004D32EC string=0x00000000004D32F0 "U"
 *   insn=0x00000000004D3324 string=0x00000000004D3328 "h"
 *   insn=0x00000000004D332C string=0x00000000004D3330 "@"
 *   insn=0x00000000004D3330 string=0x00000000004D3358 "`"
 *   insn=0x00000000004D3334 string=0x00000000004D3338 "\t"
 *   insn=0x00000000004D3340 string=0x00000000004D3344 "y\"
 *   insn=0x00000000004D3344 string=0x00000000004D3348 "h"
 *   insn=0x00000000004D3348 string=0x00000000004D334C "A"
 *   insn=0x00000000004D334C string=0x00000000004D3350 "h"
 *   insn=0x00000000004D3354 string=0x00000000004D3368 "h"
 *   insn=0x00000000004D3368 string=0x00000000004D336C ""
 *   insn=0x00000000004D336C string=0x00000000004D3370 "h"
 *   insn=0x00000000004D337C string=0x00000000004D3380 "A"
 *   insn=0x00000000004D33A8 string=0x00000000004D33AC ")=G"
 *   insn=0x00000000004D33AC string=0x00000000004D33B0 "!"
 *   insn=0x00000000004D33B4 string=0x00000000004D33B8 "\t"
 *   insn=0x00000000004D33B4 string=0x00000000004D33CC "\t"
 *   insn=0x00000000004D33B8 string=0x00000000004D33BC "*"
 *   insn=0x00000000004D33BC string=0x00000000004D33C0 "\n"
 *   insn=0x00000000004D33C8 string=0x00000000004D33D8 "?"
 *   insn=0x00000000004D33CC string=0x00000000004D33D0 "*"
 *   insn=0x00000000004D33D0 string=0x00000000004D33D4 "\n"
 *   insn=0x00000000004D33D8 string=0x00000000004D33DC "L"
 *   insn=0x00000000004D33EC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D33F4 string=0x00000000004D33F8 "(a"
 *   insn=0x00000000004D3404 string=0x00000000004D3408 "J=G"
 *   insn=0x00000000004D3408 string=0x00000000004D340C ")!"
 *   insn=0x00000000004D3410 string=0x00000000004D3414 "*"
 *   insn=0x00000000004D3410 string=0x00000000004D3440 "*"
 *   insn=0x00000000004D3414 string=0x00000000004D3418 "K"
 *   insn=0x00000000004D3418 string=0x00000000004D341C "+"
 *   insn=0x00000000004D3420 string=0x00000000004D3424 "_"
 *   insn=0x00000000004D3438 string=0x00000000004D343C """
 *   insn=0x00000000004D3440 string=0x00000000004D3444 "K"
 *   insn=0x00000000004D3444 string=0x00000000004D3448 "+"
 *   insn=0x00000000004D3448 string=0x00000000004D344C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::RenderingProgramShader::AddUniformVariable(__int64 a1, int a2)
{
  _DWORD *v3; // x8
  void *v4; // x0
  unsigned int *v5; // x8
  int v6; // w9
  _QWORD v8[3]; // [xsp+8h] [xbp-38h] BYREF

  v8[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8[0] = &byte_6FD2F8;
  sub_56A6A8(v8);
  v3 = *(_DWORD **)(a1 + 40);
  if ( v3 == *(_DWORD **)(a1 + 48) )
  {
    std::vector<Caver::RenderingProgramShader::UniformVariable>::_M_insert_aux();
  }
  else
  {
    *v3 = a2;
    sub_56A528(v3 + 2, v8);
    *(_QWORD *)(a1 + 40) += 16LL;
  }
  ++*(_DWORD *)(a1 + 24);
  v4 = (void *)(v8[0] - 24LL);
  if ( (__int64 *)(v8[0] - 24LL) != &qword_6FD2E0 )
  {
    v5 = (unsigned int *)(v8[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v6 = __ldaxr(v5);
      while ( __stlxr(v6 - 1, v5) );
    }
    else
    {
      v6 = (*v5)--;
    }
    if ( v6 <= 0 )
      operator delete(v4);
  }
}

