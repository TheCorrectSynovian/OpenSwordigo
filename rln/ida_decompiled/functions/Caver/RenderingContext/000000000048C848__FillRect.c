/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048C848
 * Mangled: _ZN5Caver16RenderingContext8FillRectERKNS_9RectangleEPKNS_5ColorEf
 * Demangled: Caver::RenderingContext::FillRect(Caver::Rectangle const&,Caver::Color const*,float)
 *
 * Callers: 0
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
 * Referenced strings: 37
 *   insn=0x000000000048C858 string=0x000000000048C85C "U"
 *   insn=0x000000000048C86C string=0x000000000048C870 "($@)"
 *   insn=0x000000000048C874 string=0x000000000048C878 "!@"
 *   insn=0x000000000048C884 string=0x000000000048C888 "!(""
 *   insn=0x000000000048C88C string=0x000000000048C890 """
 *   insn=0x000000000048C890 string=0x000000000048C894 "#"
 *   insn=0x000000000048C89C string=0x000000000048C8A0 "B(#"
 *   insn=0x000000000048C8A8 string=0x000000000048C8AC "h"
 *   insn=0x000000000048C8B0 string=0x000000000048C8B4 "h"
 *   insn=0x000000000048C8B0 string=0x000000000048C8C8 "h"
 *   insn=0x000000000048C8B8 string=0x000000000048C8BC "h"
 *   insn=0x000000000048C8BC string=0x000000000048C8C0 " "
 *   insn=0x000000000048C8C4 string=0x00000000001F5860 "P'"
 *   insn=0x000000000048C8CC string=0x000000000048C8D0 "h"
 *   insn=0x000000000048C8D4 string=0x000000000048C8D8 "h"
 *   insn=0x000000000048C8E8 string=0x000000000048C8EC "y"
 *   insn=0x000000000048C8EC string=0x00000000001F5ED0 "P'"
 *   insn=0x000000000048C904 string=0x000000000048C908 "Z"
 *   insn=0x000000000048C910 string=0x000000000048C914 "#"
 *   insn=0x000000000048C920 string=0x000000000048C924 "S"
 *   insn=0x000000000048C924 string=0x000000000048C928 "h"
 *   insn=0x000000000048C92C string=0x000000000048C930 "A"
 *   insn=0x000000000048C930 string=0x000000000048C934 "h"
 *   insn=0x000000000048C93C string=0x000000000048C940 "h"
 *   insn=0x000000000048C948 string=0x000000000048C94C "h"
 *   insn=0x000000000048C960 string=0x000000000048C964 ""
 *   insn=0x000000000048C968 string=0x000000000048C96C "h"
 *   insn=0x000000000048C984 string=0x00000000001F69D0 "0'"
 *   insn=0x000000000048C988 string=0x000000000048C98C "h"
 *   insn=0x000000000048C98C string=0x000000000048C990 ""
 *   insn=0x000000000048C990 string=0x000000000048C994 "h"
 *   insn=0x000000000048C99C string=0x000000000048C9A0 "`"
 *   insn=0x000000000048C9B8 string=0x000000000048C9BC "U"
 *   insn=0x000000000048C9C8 string=0x000000000048C9CC "A"
 *   insn=0x000000000048C9CC string=0x000000000048C9F4 "7"
 *   insn=0x000000000048C9E8 string=0x000000000048C9EC ""
 *   insn=0x000000000048C9F4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::FillRect(
        Caver::RenderingContext *this,
        const Caver::Rectangle *a2,
        const Caver::Color *a3,
        float a4)
{
  int v5; // w8
  int v6; // w8
  _BYTE *v7; // x20

  _ReadStatusReg(TPIDR_EL0);
  if ( *((_BYTE *)this + 113) )
  {
    v5 = *(_DWORD *)this;
    *((_BYTE *)this + 113) = 0;
    if ( !v5 )
      glDisable();
  }
  if ( *((_BYTE *)this + 114) )
  {
    v6 = *(_DWORD *)this;
    *((_BYTE *)this + 114) = 0;
    if ( !v6 )
      glDisable();
  }
  Caver::RenderingContext::UseProgram(this, 2u);
  Caver::VertexArrayObject::SetVertexAttribPointer();
  Caver::VertexArrayObject::SetVertexAttribPointer();
  if ( *((unsigned __int8 *)this + 119) == 255
    && *((unsigned __int8 *)this + 120) == 255
    && *((unsigned __int8 *)this + 121) == 255
    && *((unsigned __int8 *)this + 122) == 255 )
  {
    v7 = (char *)this + 118;
    if ( !*((_BYTE *)this + 118) )
      goto LABEL_15;
  }
  else
  {
    *((_BYTE *)this + 118) = 1;
    v7 = (char *)this + 118;
    *(_DWORD *)((char *)this + 119) = -1;
  }
  if ( !*(_DWORD *)this )
    glColor4ub();
  *v7 = 0;
LABEL_15:
  if ( *((_BYTE *)this + 128) )
  {
    if ( *(_DWORD *)this == 1 )
      Caver::RenderingProgram::HasUniformVariable(*((Caver::RenderingProgram **)this + 7), 0);
    *((_BYTE *)this + 128) = 0;
  }
  return glDrawArrays();
}

