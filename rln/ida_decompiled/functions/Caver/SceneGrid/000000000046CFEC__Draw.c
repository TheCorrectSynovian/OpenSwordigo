/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046CFEC
 * Mangled: _ZN5Caver9SceneGrid4DrawEPNS_16RenderingContextERKNS_7Matrix4E
 * Demangled: Caver::SceneGrid::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000001FF010  Caver::SceneGrid::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000001F5F90  Caver::SceneGridLayer::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000046D030 string=0x00000000001F5F90 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int *__fastcall Caver::SceneGrid::Draw(int *this, Caver::RenderingContext *a2, const Caver::Matrix4 *a3)
{
  int *v3; // x20
  __int64 v6; // x22
  __int64 v7; // x23

  v3 = this;
  if ( *this >= 1 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      this = (int *)Caver::SceneGridLayer::Draw(*(Caver::SceneGridLayer **)(*((_QWORD *)v3 + 1) + v6), a2, a3);
      ++v7;
      v6 += 16;
    }
    while ( v7 < *v3 );
  }
  return this;
}

