/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048D39C
 * Mangled: _ZN5Caver17VertexArrayObject19CreateBufferObjectsEb
 * Demangled: Caver::VertexArrayObject::CreateBufferObjects(bool)
 *
 * Callers: 1
 *   0x00000000001FBDD0  Caver::VertexArrayObject::CreateBufferObjects(bool)
 *
 * Callees: 5
 *   0x00000000001F96E0  .glBufferData
 *   0x00000000001FB1D0  Caver::SizeOfDataType(Caver::DataType)
 *   0x00000000001FCFD0  Caver::RenderingContext::CurrentContext(void)
 *   0x00000000001FD400  .glGenBuffers
 *   0x0000000000200850  .glBindBuffer
 *
 * Referenced strings: 36
 *   insn=0x000000000048D3B0 string=0x000000000048D3B4 ""
 *   insn=0x000000000048D3B4 string=0x00000000001FCFD0 "0'"
 *   insn=0x000000000048D3B8 string=0x000000000048D3BC ""
 *   insn=0x000000000048D3B8 string=0x000000000048D448 ""
 *   insn=0x000000000048D3C0 string=0x000000000048D3C4 "h"
 *   insn=0x000000000048D3C4 string=0x000000000048D3C8 "H"
 *   insn=0x000000000048D3D0 string=0x000000000048D3D4 "t"
 *   insn=0x000000000048D3DC string=0x000000000048D3E0 "`""
 *   insn=0x000000000048D3E0 string=0x000000000048D3E4 ""
 *   insn=0x000000000048D3E4 string=0x000000000048D3E8 "h"@"
 *   insn=0x000000000048D3E4 string=0x00000000001FD400 "0'"
 *   insn=0x000000000048D3EC string=0x000000000048D3F0 ""
 *   insn=0x000000000048D3F8 string=0x000000000048D3FC "\t"
 *   insn=0x000000000048D400 string=0x000000000048D404 "5"
 *   insn=0x000000000048D408 string=0x000000000048D40C "@"
 *   insn=0x000000000048D410 string=0x000000000048D414 "a"
 *   insn=0x000000000048D414 string=0x000000000048D418 "b"
 *   insn=0x000000000048D418 string=0x000000000048D41C "@"
 *   insn=0x000000000048D424 string=0x000000000048D428 "@"
 *   insn=0x000000000048D424 string=0x00000000001F96E0 "0'"
 *   insn=0x000000000048D42C string=0x000000000048D430 ""
 *   insn=0x000000000048D430 string=0x000000000048D434 "h""
 *   insn=0x000000000048D43C string=0x000000000048D440 "K"
 *   insn=0x000000000048D450 string=0x000000000048D454 ""
 *   insn=0x000000000048D454 string=0x000000000048D458 ""
 *   insn=0x000000000048D458 string=0x000000000048D45C "h"
 *   insn=0x000000000048D460 string=0x000000000048D464 "a"
 *   insn=0x000000000048D46C string=0x000000000048D470 "a2@"
 *   insn=0x000000000048D470 string=0x000000000048D474 "`"
 *   insn=0x000000000048D478 string=0x000000000048D47C "`RB)"
 *   insn=0x000000000048D480 string=0x000000000048D484 "S"
 *   insn=0x000000000048D484 string=0x000000000048D488 "b"
 *   insn=0x000000000048D484 string=0x00000000001FB1D0 "0'"
 *   insn=0x000000000048D488 string=0x000000000048D48C "|@"
 *   insn=0x000000000048D490 string=0x000000000048D494 "`"
 *   insn=0x000000000048D4A4 string=0x000000000048D4A8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::VertexArrayObject::CreateBufferObjects(Caver::VertexArrayObject *this, char a2)
{
  Caver::RenderingContext *v4; // x0
  int v5; // w0
  __int64 v6; // x22
  __int64 v7; // x0

  Caver::RenderingContext::CurrentContext(this);
  if ( (a2 & 1) != 0 )
  {
    if ( !*((_BYTE *)v4 + 98) )
      goto LABEL_12;
  }
  else if ( !*((_BYTE *)v4 + 97) )
  {
    goto LABEL_12;
  }
  if ( *((_QWORD *)this + 1) )
  {
    v5 = (a2 & 1) != 0 ? 2 : 1;
    *((_DWORD *)this + 8) = v5;
    v4 = (Caver::RenderingContext *)glGenBuffers();
    if ( *((int *)this + 8) >= 1 )
    {
      v6 = 0;
      do
      {
        glBindBuffer();
        glBufferData();
        v4 = (Caver::RenderingContext *)glBindBuffer();
        ++v6;
      }
      while ( v6 < *((int *)this + 8) );
    }
  }
LABEL_12:
  Caver::RenderingContext::CurrentContext(v4);
  if ( *(_BYTE *)(v7 + 97) )
  {
    if ( *((_QWORD *)this + 3) )
    {
      glGenBuffers();
      glBindBuffer();
      Caver::SizeOfDataType();
      glBufferData();
      glBindBuffer();
    }
  }
}

