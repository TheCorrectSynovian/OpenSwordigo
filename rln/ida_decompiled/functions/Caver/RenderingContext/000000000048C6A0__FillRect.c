/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048C6A0
 * Mangled: _ZN5Caver16RenderingContext8FillRectERKNS_9RectangleERKNS_5ColorEf
 * Demangled: Caver::RenderingContext::FillRect(Caver::Rectangle const&,Caver::Color const&,float)
 *
 * Callers: 1
 *   0x0000000000203620  Caver::RenderingContext::FillRect(Caver::Rectangle const&,Caver::Color const&,float)
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
 *   insn=0x000000000048C6B0 string=0x000000000048C6B4 "U"
 *   insn=0x000000000048C6C4 string=0x000000000048C6C8 "($@)"
 *   insn=0x000000000048C6CC string=0x000000000048C6D0 "!@"
 *   insn=0x000000000048C6DC string=0x000000000048C6E0 "!(""
 *   insn=0x000000000048C6E4 string=0x000000000048C6E8 """
 *   insn=0x000000000048C6E8 string=0x000000000048C6EC "#"
 *   insn=0x000000000048C6F4 string=0x000000000048C6F8 "B(#"
 *   insn=0x000000000048C700 string=0x000000000048C704 "h"
 *   insn=0x000000000048C708 string=0x000000000048C70C "h"
 *   insn=0x000000000048C708 string=0x000000000048C720 "h"
 *   insn=0x000000000048C710 string=0x000000000048C714 "h"
 *   insn=0x000000000048C714 string=0x000000000048C718 " "
 *   insn=0x000000000048C718 string=0x000000000048C71C "Q"
 *   insn=0x000000000048C71C string=0x00000000001F5860 "P'"
 *   insn=0x000000000048C724 string=0x000000000048C728 "h"
 *   insn=0x000000000048C72C string=0x000000000048C730 "h"
 *   insn=0x000000000048C734 string=0x000000000048C738 "J"
 *   insn=0x000000000048C744 string=0x00000000001F5ED0 "P'"
 *   insn=0x000000000048C764 string=0x000000000048C768 "h"
 *   insn=0x000000000048C76C string=0x000000000048C770 "!"
 *   insn=0x000000000048C774 string=0x000000000048C778 "h"
 *   insn=0x000000000048C778 string=0x000000000048C77C "?"
 *   insn=0x000000000048C784 string=0x000000000048C788 "h"
 *   insn=0x000000000048C788 string=0x000000000048C78C "_"
 *   insn=0x000000000048C78C string=0x000000000048C790 "!"
 *   insn=0x000000000048C794 string=0x000000000048C798 "h"
 *   insn=0x000000000048C7AC string=0x000000000048C7B0 "h"
 *   insn=0x000000000048C7AC string=0x000000000048C7BC "h"
 *   insn=0x000000000048C7B0 string=0x000000000048C7B4 "H"
 *   insn=0x000000000048C7B4 string=0x000000000048C83C "e"
 *   insn=0x000000000048C7BC string=0x000000000048C7C0 ""
 *   insn=0x000000000048C7C0 string=0x000000000048C7C4 "h"
 *   insn=0x000000000048C7CC string=0x000000000048C7D0 "`"
 *   insn=0x000000000048C7F8 string=0x000000000048C7FC "A"
 *   insn=0x000000000048C830 string=0x000000000048C834 "h"
 *   insn=0x000000000048C834 string=0x000000000048C838 ""
 *   insn=0x000000000048C83C string=0x00000000001F69D0 "0'"
 *   insn=0x000000000048C844 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::FillRect(
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

