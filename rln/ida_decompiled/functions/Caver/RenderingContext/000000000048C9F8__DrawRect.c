/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048C9F8
 * Mangled: _ZN5Caver16RenderingContext8DrawRectERKNS_9RectangleERKNS_5ColorEf
 * Demangled: Caver::RenderingContext::DrawRect(Caver::Rectangle const&,Caver::Color const&,float)
 *
 * Callers: 1
 *   0x00000000001FFED0  Caver::RenderingContext::DrawRect(Caver::Rectangle const&,Caver::Color const&,float)
 *
 * Callees: 7
 *   0x00000000001F5860  .glDisable
 *   0x00000000001F5ED0  Caver::RenderingContext::UseProgram(uint)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F69D0  .glColor4ub
 *   0x00000000001FEF10  .glDrawArrays
 *   0x0000000000201270  Caver::VertexArrayObject::SetVertexAttribPointer(Caver::RenderingContext *,uint,int,Caver::DataType,int,void const*)
 *   0x0000000000203BE0  Caver::RenderingProgram::HasUniformVariable(int)
 *
 * Referenced strings: 38
 *   insn=0x000000000048CA08 string=0x000000000048CA0C "U"
 *   insn=0x000000000048CA1C string=0x000000000048CA20 "($@)"
 *   insn=0x000000000048CA24 string=0x000000000048CA28 "!@"
 *   insn=0x000000000048CA30 string=0x000000000048CA34 "#"
 *   insn=0x000000000048CA34 string=0x000000000048CA38 "!(""
 *   insn=0x000000000048CA40 string=0x000000000048CA44 """
 *   insn=0x000000000048CA50 string=0x000000000048CA54 "A(#"
 *   insn=0x000000000048CA5C string=0x000000000048CA60 "h"
 *   insn=0x000000000048CA64 string=0x000000000048CA68 "h"
 *   insn=0x000000000048CA64 string=0x000000000048CA7C "h"
 *   insn=0x000000000048CA6C string=0x000000000048CA70 "h"
 *   insn=0x000000000048CA70 string=0x000000000048CA74 " "
 *   insn=0x000000000048CA74 string=0x000000000048CA78 "z"
 *   insn=0x000000000048CA78 string=0x00000000001F5860 "P'"
 *   insn=0x000000000048CA80 string=0x000000000048CA84 "h"
 *   insn=0x000000000048CA88 string=0x000000000048CA8C "h"
 *   insn=0x000000000048CA90 string=0x000000000048CA94 "s"
 *   insn=0x000000000048CAA0 string=0x00000000001F5ED0 "P'"
 *   insn=0x000000000048CAC0 string=0x000000000048CAC4 "h"
 *   insn=0x000000000048CAC8 string=0x000000000048CACC "!"
 *   insn=0x000000000048CAD0 string=0x000000000048CAD4 "h"
 *   insn=0x000000000048CAD4 string=0x000000000048CAD8 "?"
 *   insn=0x000000000048CAE0 string=0x000000000048CAE4 "h"
 *   insn=0x000000000048CAE4 string=0x000000000048CAE8 "_"
 *   insn=0x000000000048CAE8 string=0x000000000048CAEC "!"
 *   insn=0x000000000048CAF0 string=0x000000000048CAF4 "h"
 *   insn=0x000000000048CB08 string=0x000000000048CB0C "h"
 *   insn=0x000000000048CB08 string=0x000000000048CB18 "h"
 *   insn=0x000000000048CB0C string=0x000000000048CB10 "H"
 *   insn=0x000000000048CB18 string=0x000000000048CB1C ""
 *   insn=0x000000000048CB1C string=0x000000000048CB20 "h"
 *   insn=0x000000000048CB28 string=0x000000000048CB2C "`"
 *   insn=0x000000000048CB30 string=0x000000000048CB34 "+"
 *   insn=0x000000000048CB54 string=0x000000000048CB58 "A"
 *   insn=0x000000000048CB8C string=0x000000000048CB90 "h"
 *   insn=0x000000000048CB90 string=0x000000000048CB94 ""
 *   insn=0x000000000048CB98 string=0x00000000001F69D0 "0'"
 *   insn=0x000000000048CBA0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::DrawRect(
        Caver::RenderingContext *this,
        const Caver::Rectangle *a2,
        const Caver::Color *a3,
        float a4)
{
  int v6; // w8
  int v7; // w8
  _BYTE *v8; // x20
  int v10; // w0

  _ReadStatusReg(TPIDR_EL0);
  if ( *((_BYTE *)this + 113) )
  {
    v6 = *(_DWORD *)this;
    *((_BYTE *)this + 113) = 0;
    if ( !v6 )
      glDisable();
  }
  if ( *((_BYTE *)this + 114) )
  {
    v7 = *(_DWORD *)this;
    *((_BYTE *)this + 114) = 0;
    if ( !v7 )
      glDisable();
  }
  Caver::RenderingContext::UseProgram(this, 0);
  Caver::VertexArrayObject::SetVertexAttribPointer();
  if ( *(unsigned __int8 *)a3 != *((unsigned __int8 *)this + 119)
    || *((unsigned __int8 *)a3 + 1) != *((unsigned __int8 *)this + 120)
    || *((unsigned __int8 *)a3 + 2) != *((unsigned __int8 *)this + 121)
    || *((unsigned __int8 *)a3 + 3) != *((unsigned __int8 *)this + 122) )
  {
    v10 = *(_DWORD *)a3;
    *((_BYTE *)this + 118) = 1;
    v8 = (char *)this + 118;
    *(_DWORD *)((char *)this + 119) = v10;
    if ( *(_DWORD *)this )
      goto LABEL_13;
LABEL_20:
    glColor4ub();
    goto LABEL_13;
  }
  v8 = (char *)this + 118;
  if ( !*((_BYTE *)this + 118) )
    goto LABEL_14;
  if ( !*(_DWORD *)this )
    goto LABEL_20;
LABEL_13:
  *v8 = 0;
LABEL_14:
  if ( *((_BYTE *)this + 128) )
  {
    if ( *(_DWORD *)this == 1 )
      Caver::RenderingProgram::HasUniformVariable(*((Caver::RenderingProgram **)this + 7), 0);
    *((_BYTE *)this + 128) = 0;
  }
  return glDrawArrays();
}

