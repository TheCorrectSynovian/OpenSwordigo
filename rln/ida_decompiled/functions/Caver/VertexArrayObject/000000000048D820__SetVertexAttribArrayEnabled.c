/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048D820
 * Mangled: _ZN5Caver17VertexArrayObject27SetVertexAttribArrayEnabledEPNS_16RenderingContextEjb
 * Demangled: Caver::VertexArrayObject::SetVertexAttribArrayEnabled(Caver::RenderingContext *,uint,bool)
 *
 * Callers: 1
 *   0x00000000001FDD60  Caver::VertexArrayObject::SetVertexAttribArrayEnabled(Caver::RenderingContext *,uint,bool)
 *
 * Callees: 2
 *   0x00000000001F4D40  .glEnableClientState
 *   0x00000000001FC180  .glDisableClientState
 *
 * Referenced strings: 6
 *   insn=0x000000000048D820 string=0x000000000048D824 "H"
 *   insn=0x000000000048D82C string=0x000000000048D830 "B"
 *   insn=0x000000000048D830 string=0x000000000048D834 "C"
 *   insn=0x000000000048D830 string=0x000000000048D838 "R"
 *   insn=0x000000000048D834 string=0x00000000001F4D40 "P'"
 *   insn=0x000000000048D838 string=0x00000000001FC180 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::VertexArrayObject::SetVertexAttribArrayEnabled(
        _DWORD *this,
        Caver::RenderingContext *a2,
        char a3)
{
  if ( !*this )
  {
    if ( (a3 & 1) != 0 )
      return (_DWORD *)glEnableClientState();
    else
      return (_DWORD *)glDisableClientState();
  }
  return this;
}

