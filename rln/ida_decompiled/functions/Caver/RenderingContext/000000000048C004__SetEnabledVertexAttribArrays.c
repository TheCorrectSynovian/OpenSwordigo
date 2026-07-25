/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048C004
 * Mangled: _ZN5Caver16RenderingContext28SetEnabledVertexAttribArraysEjz
 * Demangled: Caver::RenderingContext::SetEnabledVertexAttribArrays(uint,...)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD1E0  Caver::RenderingContext::SetEnabledVertexAttribArraysImpl(uint *,int)
 *   0x00000000001FDD60  Caver::VertexArrayObject::SetVertexAttribArrayEnabled(Caver::RenderingContext *,uint,bool)
 *
 * Referenced strings: 28
 *   insn=0x000000000048C038 string=0x000000000048C03C "U"
 *   insn=0x000000000048C04C string=0x000000000048C0EC "h2A"
 *   insn=0x000000000048C05C string=0x000000000048C060 "("
 *   insn=0x000000000048C06C string=0x000000000048C070 "i"
 *   insn=0x000000000048C084 string=0x000000000048C088 ""
 *   insn=0x000000000048C088 string=0x000000000048C0A4 "I!"
 *   insn=0x000000000048C08C string=0x000000000048C090 "B"
 *   insn=0x000000000048C094 string=0x000000000048C098 "j"
 *   insn=0x000000000048C0A4 string=0x000000000048C0A8 "?"
 *   insn=0x000000000048C0B4 string=0x000000000048C0B8 "K!"
 *   insn=0x000000000048C0BC string=0x000000000048C0C0 "J"
 *   insn=0x000000000048C0C0 string=0x000000000048C0C4 "J"
 *   insn=0x000000000048C0C4 string=0x000000000048C08C "\ny""
 *   insn=0x000000000048C0CC string=0x000000000048C0D0 "j"
 *   insn=0x000000000048C0D0 string=0x000000000048C0D4 "J"
 *   insn=0x000000000048C0E0 string=0x000000000048C0E4 "?"
 *   insn=0x000000000048C0E4 string=0x00000000001FD1E0 "0'"
 *   insn=0x000000000048C100 string=0x000000000048C104 "y\n"
 *   insn=0x000000000048C104 string=0x000000000048C108 "4A"
 *   insn=0x000000000048C118 string=0x00000000001FDD60 "0'"
 *   insn=0x000000000048C11C string=0x000000000048C120 "?"
 *   insn=0x000000000048C124 string=0x000000000048C128 "h"
 *   insn=0x000000000048C124 string=0x000000000048C134 "h2"
 *   insn=0x000000000048C128 string=0x000000000048C12C "H"
 *   insn=0x000000000048C12C string=0x000000000048C130 "x"
 *   insn=0x000000000048C13C string=0x000000000048C140 "+"
 *   insn=0x000000000048C154 string=0x000000000048C174 "W"
 *   insn=0x000000000048C174 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int *Caver::RenderingContext::SetEnabledVertexAttribArrays(int *this, unsigned int a2, ...)
{
  bool v2; // w3
  int *v3; // x19
  int v4; // w10
  __int64 v5; // x2
  int v6; // w9
  unsigned int *stack; // x10
  unsigned int v8; // w10
  __int64 v9; // x22
  int *v10; // x25
  unsigned int v11; // w20
  char v12; // [xsp+88h] [xbp-B8h]
  gcc_va_list va; // [xsp+B0h] [xbp-90h] BYREF
  unsigned int v14[10]; // [xsp+D0h] [xbp-70h] BYREF
  __int64 v15; // [xsp+F8h] [xbp-48h]

  va_start(va, a2);
  va_arg(va, _QWORD);
  v12 = va_arg(va, _QWORD);
  v2 = v12;
  va_end(va);
  v3 = this;
  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 )
  {
    v14[0] = a2;
    v4 = -48;
    v5 = 1;
    va_start(va, a2);
    while ( 1 )
    {
      v6 = v4 + 8;
      va[0].__gr_offs = v4 + 8;
      if ( v4 + 8 <= 0 )
        break;
      do
      {
        stack = (unsigned int *)va[0].__stack;
        va[0].__stack = (char *)va[0].__stack + 8;
        v8 = *stack;
        if ( !v8 )
          return (int *)Caver::RenderingContext::SetEnabledVertexAttribArraysImpl(
                          (Caver::RenderingContext *)this,
                          v14,
                          v5);
LABEL_3:
        v14[v5++] = v8;
        v4 = v6;
      }
      while ( (v6 & 0x80000000) == 0 );
    }
    v8 = *(_DWORD *)((char *)va[0].__gr_top + v4);
    if ( !v8 )
      return (int *)Caver::RenderingContext::SetEnabledVertexAttribArraysImpl((Caver::RenderingContext *)this, v14, v5);
    goto LABEL_3;
  }
  if ( this[76] >= 1 )
  {
    v9 = 0;
    do
    {
      v10 = &v3[v9];
      v11 = v10[66];
      this = (int *)Caver::VertexArrayObject::SetVertexAttribArrayEnabled(
                      (Caver::VertexArrayObject *)v3,
                      (Caver::RenderingContext *)v11,
                      0,
                      v2);
      v10[66] = 0;
      if ( v11 == 32886 && !*v3 )
        *((_BYTE *)v3 + 118) = 1;
      ++v9;
    }
    while ( v9 < v3[76] );
  }
  v3[76] = 0;
  return this;
}

