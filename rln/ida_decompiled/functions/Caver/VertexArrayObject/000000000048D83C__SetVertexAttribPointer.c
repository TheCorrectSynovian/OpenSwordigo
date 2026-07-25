/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048D83C
 * Mangled: _ZN5Caver17VertexArrayObject22SetVertexAttribPointerEPNS_16RenderingContextEjiNS_8DataTypeEiPKv
 * Demangled: Caver::VertexArrayObject::SetVertexAttribPointer(Caver::RenderingContext *,uint,int,Caver::DataType,int,void const*)
 *
 * Callers: 1
 *   0x0000000000201270  Caver::VertexArrayObject::SetVertexAttribPointer(Caver::RenderingContext *,uint,int,Caver::DataType,int,void const*)
 *
 * Callees: 4
 *   0x00000000001F3E90  .glTexCoordPointer
 *   0x00000000001F9880  .glNormalPointer
 *   0x0000000000201850  .glVertexPointer
 *   0x0000000000202AA0  .glColorPointer
 *
 * Referenced strings: 9
 *   insn=0x000000000048D83C string=0x000000000048D840 "H"
 *   insn=0x000000000048D840 string=0x000000000048D848 "h"
 *   insn=0x000000000048D848 string=0x000000000048D84C "("
 *   insn=0x000000000048D854 string=0x000000000048D858 "I"
 *   insn=0x000000000048D858 string=0x000000000048D860 "(y"
 *   insn=0x000000000048D860 string=0x000000000048D864 ""
 *   insn=0x000000000048D88C string=0x00000000001F9880 "0'"
 *   insn=0x000000000048D8B0 string=0x000000000048D8B4 "w"
 *   insn=0x000000000048D8B4 string=0x00000000001F3E90 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::VertexArrayObject::SetVertexAttribPointer(_DWORD *result, int a2)
{
  if ( !*result )
  {
    switch ( a2 )
    {
      case 32884:
        result = (_DWORD *)glVertexPointer();
        break;
      case 32885:
        result = (_DWORD *)glNormalPointer();
        break;
      case 32886:
        result = (_DWORD *)glColorPointer();
        break;
      case 32888:
        result = (_DWORD *)glTexCoordPointer();
        break;
      default:
        return result;
    }
  }
  return result;
}

