/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048D4EC
 * Mangled: _ZN5Caver17VertexArrayObject28UpdateVertexBufferObjectDataEv
 * Demangled: Caver::VertexArrayObject::UpdateVertexBufferObjectData(void)
 *
 * Callers: 1
 *   0x00000000001F3880  Caver::VertexArrayObject::UpdateVertexBufferObjectData(void)
 *
 * Callees: 2
 *   0x00000000001FC1A0  .glBufferSubData
 *   0x0000000000200850  .glBindBuffer
 *
 * Referenced strings: 10
 *   insn=0x000000000048D4F8 string=0x000000000048D4FC "h"@"
 *   insn=0x000000000048D500 string=0x000000000048D504 "+"
 *   insn=0x000000000048D504 string=0x000000000048D508 "h&"
 *   insn=0x000000000048D508 string=0x000000000048D50C "t"
 *   insn=0x000000000048D50C string=0x000000000048D510 "@"
 *   insn=0x000000000048D510 string=0x000000000048D514 "h\n"
 *   insn=0x000000000048D51C string=0x000000000048D520 "c"
 *   insn=0x000000000048D520 string=0x000000000048D524 "@"
 *   insn=0x000000000048D530 string=0x00000000001FC1A0 "0'"
 *   insn=0x000000000048D534 string=0x000000000048D538 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::VertexArrayObject::UpdateVertexBufferObjectData(__int64 this)
{
  if ( *(int *)(this + 32) >= 1 )
  {
    glBindBuffer();
    glBufferSubData();
    return glBindBuffer();
  }
  return this;
}

