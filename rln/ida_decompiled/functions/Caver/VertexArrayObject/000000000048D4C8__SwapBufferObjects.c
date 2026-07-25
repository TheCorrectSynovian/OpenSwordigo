/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048D4C8
 * Mangled: _ZN5Caver17VertexArrayObject17SwapBufferObjectsEv
 * Demangled: Caver::VertexArrayObject::SwapBufferObjects(void)
 *
 * Callers: 1
 *   0x00000000001F3E20  Caver::VertexArrayObject::SwapBufferObjects(void)
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000048D4D0 string=0x000000000048D4D4 "\t$@"
 *   insn=0x000000000048D4D4 string=0x000000000048D4D8 "*"
 *   insn=0x000000000048D4D8 string=0x000000000048D4DC "_"
 *   insn=0x000000000048D4E0 string=0x000000000048D4E4 "$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::VertexArrayObject::SwapBufferObjects(__int64 this)
{
  int v1; // w8
  int v2; // w9
  int v3; // w8

  v1 = *(_DWORD *)(this + 32);
  if ( v1 >= 2 )
  {
    v2 = *(_DWORD *)(this + 36);
    if ( v2 + 1 < v1 )
      v3 = v2 + 1;
    else
      v3 = 0;
    *(_DWORD *)(this + 36) = v3;
  }
  return this;
}

