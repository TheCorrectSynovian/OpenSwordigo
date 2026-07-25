/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033CDC0
 * Mangled: _ZN5Caver5Proto12UnpackedMesh5ClearEv
 * Demangled: Caver::Proto::UnpackedMesh::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 6
 *   insn=0x000000000033CDCC string=0x000000000033CDD0 "h"
 *   insn=0x000000000033CDD0 string=0x000000000033CDD4 "h"
 *   insn=0x000000000033CDD4 string=0x000000000033CDD8 "H"
 *   insn=0x000000000033CDD8 string=0x000000000033CDDC "`:@"
 *   insn=0x000000000033CDDC string=0x000000000033CDE0 ""
 *   insn=0x000000000033CDE8 string=0x000000000033CDEC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::UnpackedMesh::Clear(__int64 this)
{
  _DWORD *v1; // x19

  v1 = (_DWORD *)this;
  if ( (*(_BYTE *)(this + 120) & 8) != 0 )
  {
    this = *(_QWORD *)(this + 112);
    if ( (__int64 *)this != &Caver::Proto::UnpackedMesh::_default_vertex_data_ )
      this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
  }
  v1[6] = 0;
  v1[14] = 0;
  v1[22] = 0;
  v1[30] = 0;
  return this;
}

