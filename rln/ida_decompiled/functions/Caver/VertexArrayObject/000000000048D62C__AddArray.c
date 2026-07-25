/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048D62C
 * Mangled: _ZN5Caver17VertexArrayObject8AddArrayEjiNS_8DataTypeEii
 * Demangled: Caver::VertexArrayObject::AddArray(uint,int,Caver::DataType,int,int)
 *
 * Callers: 1
 *   0x00000000001F4F50  Caver::VertexArrayObject::AddArray(uint,int,Caver::DataType,int,int)
 *
 * Callees: 10
 *   0x00000000001F3E90  .glTexCoordPointer
 *   0x00000000001F4D40  .glEnableClientState
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9880  .glNormalPointer
 *   0x00000000001FC960  .glGetIntegerv
 *   0x00000000001FCFD0  Caver::RenderingContext::CurrentContext(void)
 *   0x0000000000200850  .glBindBuffer
 *   0x0000000000201850  .glVertexPointer
 *   0x0000000000202AA0  .glColorPointer
 *
 * Referenced strings: 47
 *   insn=0x000000000048D648 string=0x000000000048D64C "Y"
 *   insn=0x000000000048D64C string=0x000000000048D650 "("
 *   insn=0x000000000048D660 string=0x000000000048D664 "h"@"
 *   insn=0x000000000048D678 string=0x000000000048D67C "U"
 *   insn=0x000000000048D67C string=0x000000000048D680 ""
 *   insn=0x000000000048D67C string=0x00000000001FCFD0 "0'"
 *   insn=0x000000000048D694 string=0x00000000001FC960 "0'"
 *   insn=0x000000000048D6A0 string=0x000000000048D6A4 "h"@"
 *   insn=0x000000000048D6A8 string=0x000000000048D6AC "k"
 *   insn=0x000000000048D6AC string=0x000000000048D6B0 "h"
 *   insn=0x000000000048D6AC string=0x000000000048D798 "h*@"
 *   insn=0x000000000048D6B0 string=0x000000000048D6B4 "\"
 *   insn=0x000000000048D6C8 string=0x000000000048D73C "y\n"
 *   insn=0x000000000048D6D0 string=0x000000000048D788 "h""
 *   insn=0x000000000048D6D4 string=0x000000000048D6D8 ""
 *   insn=0x000000000048D6EC string=0x000000000048D6F0 "X"
 *   insn=0x000000000048D6F0 string=0x000000000048D6F4 "%"
 *   insn=0x000000000048D718 string=0x000000000048D71C "Y"
 *   insn=0x000000000048D71C string=0x00000000001F9880 "0'"
 *   insn=0x000000000048D734 string=0x00000000001F3E90 "P'"
 *   insn=0x000000000048D73C string=0x000000000048D740 "(C@"
 *   insn=0x000000000048D744 string=0x000000000048D748 "a2@"
 *   insn=0x000000000048D744 string=0x000000000048D758 "!+@"
 *   insn=0x000000000048D748 string=0x000000000048D74C "a"
 *   insn=0x000000000048D74C string=0x000000000048D750 "`"
 *   insn=0x000000000048D750 string=0x000000000048D754 "?"
 *   insn=0x000000000048D758 string=0x000000000048D75C "a"
 *   insn=0x000000000048D75C string=0x000000000048D760 "@"
 *   insn=0x000000000048D760 string=0x000000000048D764 ";"
 *   insn=0x000000000048D768 string=0x000000000048D76C ""
 *   insn=0x000000000048D76C string=0x000000000048D770 "h"
 *   insn=0x000000000048D774 string=0x000000000048D778 "r"
 *   insn=0x000000000048D778 string=0x00000000001F4D40 "P'"
 *   insn=0x000000000048D77C string=0x000000000048D780 ""
 *   insn=0x000000000048D780 string=0x000000000048D784 "H"
 *   insn=0x000000000048D788 string=0x000000000048D78C "Z"
 *   insn=0x000000000048D78C string=0x000000000048D790 "_"
 *   insn=0x000000000048D790 string=0x000000000048D794 "K"
 *   insn=0x000000000048D7A0 string=0x000000000048D7A4 "@"
 *   insn=0x000000000048D7A4 string=0x000000000048D7A8 "*"
 *   insn=0x000000000048D7B0 string=0x000000000048D7EC "("
 *   insn=0x000000000048D7B8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000048D7D0 string=0x000000000048D7D4 "h"
 *   insn=0x000000000048D7D8 string=0x000000000048D7E8 "`"
 *   insn=0x000000000048D7DC string=0x000000000048D7E0 "h"
 *   insn=0x000000000048D7F4 string=0x000000000048D7F8 "!"
 *   insn=0x000000000048D81C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::VertexArrayObject::AddArray(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v12; // x0
  Caver::RenderingContext *Integerv; // x0
  __int64 v14; // x26
  __int64 v15; // x25
  Caver::RenderingContext *v16; // x0
  __int64 v17; // x0
  __int64 i; // x8
  __int64 *v19; // x19
  __int64 v20; // t1

  _ReadStatusReg(TPIDR_EL0);
  if ( *(int *)(a1 + 32) >= 1
    && (Caver::RenderingContext::CurrentContext((Caver::RenderingContext *)a1), *(_BYTE *)(v12 + 99)) )
  {
    glGetIntegerv();
    Integerv = (Caver::RenderingContext *)glGetIntegerv();
    if ( *(int *)(a1 + 32) >= 1 )
    {
      v14 = 0;
      do
      {
        v15 = a1 + 4 * v14;
        if ( !*(_DWORD *)(v15 + 64) && *(_DWORD *)(a1 + 48) )
          Integerv = (Caver::RenderingContext *)glBindBuffer();
        if ( *(_DWORD *)(v15 + 40) )
          Integerv = (Caver::RenderingContext *)glBindBuffer();
        Caver::RenderingContext::CurrentContext(Integerv);
        if ( !*(_DWORD *)v16 )
          v16 = (Caver::RenderingContext *)glEnableClientState();
        Caver::RenderingContext::CurrentContext(v16);
        if ( !*(_DWORD *)Integerv )
        {
          switch ( a2 )
          {
            case 32884:
              Integerv = (Caver::RenderingContext *)glVertexPointer();
              break;
            case 32885:
              Integerv = (Caver::RenderingContext *)glNormalPointer();
              break;
            case 32886:
              Integerv = (Caver::RenderingContext *)glColorPointer();
              break;
            case 32888:
              Integerv = (Caver::RenderingContext *)glTexCoordPointer();
              break;
            default:
              break;
          }
        }
        ++v14;
      }
      while ( v14 < *(int *)(a1 + 32) );
    }
    if ( *(_DWORD *)(a1 + 40) )
      glBindBuffer();
  }
  else
  {
    v17 = operator new(0x20u);
    *(_QWORD *)v17 = 0;
    *(_QWORD *)(v17 + 8) = 0;
    *(_QWORD *)(v17 + 16) = 0;
    *(_QWORD *)(v17 + 24) = 0;
    *(_DWORD *)v17 = a2;
    *(_DWORD *)(v17 + 4) = a3;
    *(_DWORD *)(v17 + 8) = a4;
    *(_DWORD *)(v17 + 12) = a5;
    *(_DWORD *)(v17 + 16) = a6;
    *(_QWORD *)(v17 + 24) = 0;
    v20 = *(_QWORD *)(a1 + 56);
    v19 = (__int64 *)(a1 + 56);
    for ( i = v20; i; i = *(_QWORD *)(i + 24) )
      v19 = (__int64 *)(i + 24);
    *v19 = v17;
  }
}

