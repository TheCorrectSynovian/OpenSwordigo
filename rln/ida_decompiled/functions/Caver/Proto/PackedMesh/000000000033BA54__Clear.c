/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033BA54
 * Mangled: _ZN5Caver5Proto10PackedMesh5ClearEv
 * Demangled: Caver::Proto::PackedMesh::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 6
 *   insn=0x000000000033BA60 string=0x000000000033BA64 "hBB9h"
 *   insn=0x000000000033BA64 string=0x000000000033BA68 "h"
 *   insn=0x000000000033BA68 string=0x000000000033BA6C "h"
 *   insn=0x000000000033BA6C string=0x000000000033BA70 "`F@"
 *   insn=0x000000000033BA70 string=0x000000000033BA74 "uB"
 *   insn=0x000000000033BA7C string=0x000000000033BA80 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PackedMesh::Clear(__int64 this)
{
  _DWORD *v1; // x19

  v1 = (_DWORD *)this;
  if ( (*(_BYTE *)(this + 144) & 8) != 0 )
  {
    this = *(_QWORD *)(this + 136);
    if ( (__int64 *)this != &Caver::Proto::PackedMesh::_default_vertex_data_ )
      this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
  }
  v1[6] = 0;
  v1[16] = 0;
  v1[26] = 0;
  v1[36] = 0;
  return this;
}

