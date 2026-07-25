/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000308ABC
 * Mangled: _ZN5Caver5Proto28GroundMeshGeneratorComponent5ClearEv
 * Demangled: Caver::Proto::GroundMeshGeneratorComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000308AD4 string=0x0000000000308AD8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GroundMeshGeneratorComponent::Clear(__int64 this)
{
  int v1; // w8

  v1 = *(_DWORD *)(this + 56);
  if ( (_BYTE)v1 )
  {
    *(_OWORD *)(this + 28) = 0u;
    *(_OWORD *)(this + 12) = 0u;
  }
  if ( (v1 & 0xFF00) != 0 )
  {
    *(_DWORD *)(this + 44) = 0;
    *(_QWORD *)(this + 48) = 0;
  }
  *(_DWORD *)(this + 56) = 0;
  return this;
}

