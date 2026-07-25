/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048C450
 * Mangled: _ZN5Caver16RenderingContext11DrawTextureERKN5boost13intrusive_ptrINS_7TextureEEERKNS_9RectangleES9_f
 * Demangled: Caver::RenderingContext::DrawTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&,Caver::Rectangle const&,float)
 *
 * Callers: 1
 *   0x0000000000203490  Caver::RenderingContext::DrawTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&,Caver::Rectangle const&,float)
 *
 * Callees: 9
 *   0x00000000001F3C70  .glEnable
 *   0x00000000001F5860  .glDisable
 *   0x00000000001F5ED0  Caver::RenderingContext::UseProgram(uint)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F69D0  .glColor4ub
 *   0x00000000001FB000  .glBindTexture
 *   0x00000000001FEF10  .glDrawArrays
 *   0x0000000000201270  Caver::VertexArrayObject::SetVertexAttribPointer(Caver::RenderingContext *,uint,int,Caver::DataType,int,void const*)
 *   0x0000000000203BE0  Caver::RenderingProgram::HasUniformVariable(int)
 *
 * Referenced strings: 48
 *   insn=0x000000000048C468 string=0x000000000048C46C "V"
 *   insn=0x000000000048C474 string=0x000000000048C478 ""
 *   insn=0x000000000048C48C string=0x000000000048C4BC "h"
 *   insn=0x000000000048C490 string=0x000000000048C494 "h"
 *   insn=0x000000000048C494 string=0x000000000048C498 "?"
 *   insn=0x000000000048C49C string=0x000000000048C4A0 " "
 *   insn=0x000000000048C49C string=0x000000000048C4D4 "h"
 *   insn=0x000000000048C4A4 string=0x00000000001FB000 "0'"
 *   insn=0x000000000048C4A8 string=0x000000000048C4AC "h"
 *   insn=0x000000000048C4AC string=0x000000000048C4B0 "h"
 *   insn=0x000000000048C4B0 string=0x000000000048C4B4 "h"
 *   insn=0x000000000048C4B4 string=0x000000000048C4B8 "\t"
 *   insn=0x000000000048C4C0 string=0x000000000048C4C4 " "
 *   insn=0x000000000048C4D4 string=0x000000000048C4D8 "H"
 *   insn=0x000000000048C4FC string=0x000000000048C500 """
 *   insn=0x000000000048C508 string=0x000000000048C50C "!(""
 *   insn=0x000000000048C518 string=0x000000000048C51C "\t"
 *   insn=0x000000000048C524 string=0x000000000048C528 "!"
 *   insn=0x000000000048C52C string=0x000000000048C530 "B"
 *   insn=0x000000000048C53C string=0x000000000048C540 "!(""
 *   insn=0x000000000048C548 string=0x000000000048C54C "h"
 *   insn=0x000000000048C554 string=0x000000000048C568 "h"
 *   insn=0x000000000048C558 string=0x000000000048C55C " "
 *   insn=0x000000000048C55C string=0x000000000048C560 "h"
 *   insn=0x000000000048C564 string=0x00000000001F3C70 "P'"
 *   insn=0x000000000048C56C string=0x000000000048C570 "h"
 *   insn=0x000000000048C574 string=0x000000000048C578 "h"
 *   insn=0x000000000048C580 string=0x00000000001F5860 "P'"
 *   insn=0x000000000048C58C string=0x000000000048C590 "P"
 *   insn=0x000000000048C590 string=0x00000000001F5ED0 "P'"
 *   insn=0x000000000048C5A8 string=0x000000000048C5AC "1"
 *   insn=0x000000000048C5C4 string=0x000000000048C5C8 "*"
 *   insn=0x000000000048C5C8 string=0x000000000048C5CC "h"
 *   insn=0x000000000048C5D0 string=0x000000000048C5D4 "A"
 *   insn=0x000000000048C5D4 string=0x000000000048C5D8 "h"
 *   insn=0x000000000048C5E0 string=0x000000000048C5E4 "h"
 *   insn=0x000000000048C5EC string=0x000000000048C5F0 "h"
 *   insn=0x000000000048C600 string=0x000000000048C604 ""
 *   insn=0x000000000048C608 string=0x000000000048C60C "h"
 *   insn=0x000000000048C624 string=0x00000000001F69D0 "0'"
 *   insn=0x000000000048C628 string=0x000000000048C62C "h"
 *   insn=0x000000000048C62C string=0x000000000048C630 ""
 *   insn=0x000000000048C630 string=0x000000000048C634 "h"
 *   insn=0x000000000048C63C string=0x000000000048C640 "`"
 *   insn=0x000000000048C644 string=0x000000000048C648 "f"
 *   insn=0x000000000048C658 string=0x000000000048C65C "-"
 *   insn=0x000000000048C66C string=0x000000000048C69C ""
 *   insn=0x000000000048C69C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::DrawTexture(__int64 result, __int64 *a2)
{
  __int64 v2; // x23
  __int64 v3; // x19
  int v4; // w8
  _BYTE *v5; // x21

  _ReadStatusReg(TPIDR_EL0);
  v2 = *a2;
  v3 = result;
  if ( *a2 )
  {
    if ( *(_DWORD *)(v2 + 56) != *(_DWORD *)(result + 260) )
    {
      result = glBindTexture();
      *(_DWORD *)(v3 + 260) = *(_DWORD *)(v2 + 56);
      if ( *(_DWORD *)v3 )
        return result;
      goto LABEL_8;
    }
  }
  else if ( *(_DWORD *)(result + 260) )
  {
    result = glBindTexture();
    *(_DWORD *)(v3 + 260) = 0;
  }
  if ( *(_DWORD *)v3 )
    return result;
LABEL_8:
  if ( *(_BYTE *)(v3 + 113) != 1 )
  {
    *(_BYTE *)(v3 + 113) = 1;
    glEnable();
  }
  if ( *(_BYTE *)(v3 + 114) )
  {
    v4 = *(_DWORD *)v3;
    *(_BYTE *)(v3 + 114) = 0;
    if ( !v4 )
      glDisable();
  }
  Caver::RenderingContext::UseProgram((Caver::RenderingContext *)v3, 1u);
  Caver::VertexArrayObject::SetVertexAttribPointer();
  Caver::VertexArrayObject::SetVertexAttribPointer();
  if ( *(unsigned __int8 *)(v3 + 119) != 255
    || *(unsigned __int8 *)(v3 + 120) != 255
    || *(unsigned __int8 *)(v3 + 121) != 255
    || *(unsigned __int8 *)(v3 + 122) != 255 )
  {
    *(_BYTE *)(v3 + 118) = 1;
    v5 = (_BYTE *)(v3 + 118);
    *(_DWORD *)(v3 + 119) = -1;
LABEL_18:
    if ( !*(_DWORD *)v3 )
      glColor4ub();
    *v5 = 0;
    goto LABEL_21;
  }
  v5 = (_BYTE *)(v3 + 118);
  if ( *(_BYTE *)(v3 + 118) )
    goto LABEL_18;
LABEL_21:
  if ( *(_BYTE *)(v3 + 128) )
  {
    if ( *(_DWORD *)v3 == 1 )
      Caver::RenderingProgram::HasUniformVariable(*(Caver::RenderingProgram **)(v3 + 56), 0);
    *(_BYTE *)(v3 + 128) = 0;
  }
  return glDrawArrays();
}

