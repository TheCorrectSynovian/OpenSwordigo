/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D31A4
 * Mangled: _ZN5Caver22RenderingProgramShaderD2Ev
 * Demangled: Caver::RenderingProgramShader::~RenderingProgramShader()
 *
 * Callers: 1
 *   0x0000000000202B20  Caver::RenderingProgramShader::~RenderingProgramShader()
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 30
 *   insn=0x00000000004D31B8 string=0x00000000004D31BC "U"
 *   insn=0x00000000004D31C8 string=0x00000000004D31CC "tZB"
 *   insn=0x00000000004D31D4 string=0x00000000004D3248 "t"
 *   insn=0x00000000004D31F0 string=0x00000000004D31F4 "\t"
 *   insn=0x00000000004D31F0 string=0x00000000004D3208 "\t"
 *   insn=0x00000000004D31F4 string=0x00000000004D31F8 "*"
 *   insn=0x00000000004D31F8 string=0x00000000004D31FC "\n"
 *   insn=0x00000000004D3204 string=0x00000000004D3214 "?"
 *   insn=0x00000000004D3208 string=0x00000000004D320C "*"
 *   insn=0x00000000004D320C string=0x00000000004D3210 "\n"
 *   insn=0x00000000004D321C string=0x00000000004D3220 "a\"
 *   insn=0x00000000004D3234 string=0x00000000004D31EC "!"
 *   insn=0x00000000004D323C string=0x00000000004D3240 "A"
 *   insn=0x00000000004D3240 string=0x00000000004D3244 "t"
 *   insn=0x00000000004D3248 string=0x00000000004D3254 "h"
 *   insn=0x00000000004D3250 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004D3258 string=0x00000000004D325C ")"
 *   insn=0x00000000004D3264 string=0x00000000004D3268 "a"
 *   insn=0x00000000004D3294 string=0x00000000004D3298 ")=G"
 *   insn=0x00000000004D3298 string=0x00000000004D329C "!"
 *   insn=0x00000000004D32A0 string=0x00000000004D32A4 "\t"
 *   insn=0x00000000004D32A0 string=0x00000000004D32B8 "\t"
 *   insn=0x00000000004D32A4 string=0x00000000004D32A8 "*"
 *   insn=0x00000000004D32A8 string=0x00000000004D32AC "\n"
 *   insn=0x00000000004D32B4 string=0x00000000004D32C4 "?"
 *   insn=0x00000000004D32B8 string=0x00000000004D32BC "*"
 *   insn=0x00000000004D32BC string=0x00000000004D32C0 "\n"
 *   insn=0x00000000004D32C4 string=0x00000000004D32C8 ","
 *   insn=0x00000000004D32CC string=0x00000000004D32D0 "5\"
 *   insn=0x00000000004D32D8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::RenderingProgramShader::~RenderingProgramShader(Caver::RenderingProgramShader *this)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x22
  unsigned int *v4; // x8
  int v5; // w9
  __int64 v6; // x8
  void *v7; // x0
  __int64 v8; // x8
  void *v9; // x0
  unsigned int *v10; // x8
  int v11; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_QWORD *)*((_QWORD *)this + 4);
  v3 = (_QWORD *)*((_QWORD *)this + 5);
  if ( v2 != v3 )
  {
    do
    {
      v6 = v2[1];
      v7 = (void *)(v6 - 24);
      if ( (__int64 *)(v6 - 24) != &qword_6FD2E0 )
      {
        v4 = (unsigned int *)(v6 - 8);
        if ( &pthread_create )
        {
          do
            v5 = __ldaxr(v4);
          while ( __stlxr(v5 - 1, v4) );
        }
        else
        {
          v5 = (*v4)--;
        }
        if ( v5 <= 0 )
          operator delete(v7);
      }
      v2 += 2;
    }
    while ( v2 != v3 );
    v2 = (_QWORD *)*((_QWORD *)this + 4);
  }
  if ( v2 )
    operator delete(v2);
  v8 = *((_QWORD *)this + 1);
  v9 = (void *)(v8 - 24);
  if ( (__int64 *)(v8 - 24) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(v8 - 8);
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

