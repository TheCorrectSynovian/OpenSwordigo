/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048DA6C
 * Mangled: _ZN5Caver17VertexArrayObject4DrawEPNS_16RenderingContextEiii
 * Demangled: Caver::VertexArrayObject::Draw(Caver::RenderingContext *,int,int,int)
 *
 * Callers: 1
 *   0x00000000001F9030  Caver::VertexArrayObject::Draw(Caver::RenderingContext *,int,int,int)
 *
 * Callees: 5
 *   0x00000000001F3B30  Caver::RenderingContext::DrawArrays(int,int,int)
 *   0x00000000001FB1D0  Caver::SizeOfDataType(Caver::DataType)
 *   0x00000000001FF830  Caver::VertexArrayObject::BindArrays(Caver::RenderingContext *)
 *   0x0000000000200850  .glBindBuffer
 *   0x0000000000201770  Caver::RenderingContext::DrawElements(int,int,Caver::DataType,void const*)
 *
 * Referenced strings: 23
 *   insn=0x000000000048DA90 string=0x000000000048DA94 "g"
 *   insn=0x000000000048DA94 string=0x000000000048DA98 "h"
 *   insn=0x000000000048DA98 string=0x000000000048DA9C "h"
 *   insn=0x000000000048DA9C string=0x000000000048DAA0 "h2@"
 *   insn=0x000000000048DA9C string=0x000000000048DAA8 "`"
 *   insn=0x000000000048DAAC string=0x000000000048DAB0 "i2@"
 *   insn=0x000000000048DAAC string=0x00000000001FB1D0 "0'"
 *   insn=0x000000000048DAB0 string=0x000000000048DAB4 "c"
 *   insn=0x000000000048DAB4 string=0x000000000048DAB8 "|"
 *   insn=0x000000000048DAB8 string=0x000000000048DABC "i"
 *   insn=0x000000000048DABC string=0x000000000048DAC8 "i"
 *   insn=0x000000000048DAC8 string=0x000000000048DACC "$"
 *   insn=0x000000000048DAD8 string=0x000000000048DADC "%"
 *   insn=0x000000000048DADC string=0x000000000048DAE0 "h&"
 *   insn=0x000000000048DAE0 string=0x000000000048DAE4 "h\n"
 *   insn=0x000000000048DAE4 string=0x000000000048DAE8 "\tA@"
 *   insn=0x000000000048DAEC string=0x000000000048DB04 ")@"
 *   insn=0x000000000048DB08 string=0x000000000048DB0C "@"
 *   insn=0x000000000048DB08 string=0x000000000048DB18 "h2@"
 *   insn=0x000000000048DB10 string=0x000000000048DB14 "O"
 *   insn=0x000000000048DB28 string=0x000000000048DB2C "`"
 *   insn=0x000000000048DB34 string=0x000000000048DB38 "F"
 *   insn=0x000000000048DB4C string=0x00000000001F3B30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::VertexArrayObject::Draw(
        Caver::VertexArrayObject *this,
        Caver::RenderingContext *a2,
        int a3,
        int a4,
        int a5)
{
  __int64 result; // x0
  char *v11; // x8

  Caver::VertexArrayObject::BindArrays(this, a2);
  if ( *((_QWORD *)this + 3) || *((_DWORD *)this + 12) )
  {
    Caver::SizeOfDataType();
    result = Caver::RenderingContext::DrawElements();
  }
  else
  {
    result = Caver::RenderingContext::DrawArrays(a2, a3, a4, a5);
  }
  v11 = (char *)this + 4 * *((int *)this + 9);
  if ( !*((_DWORD *)v11 + 16) )
  {
    if ( *((_DWORD *)v11 + 10) )
      result = glBindBuffer();
    if ( *((_DWORD *)this + 12) )
      return glBindBuffer();
  }
  return result;
}

