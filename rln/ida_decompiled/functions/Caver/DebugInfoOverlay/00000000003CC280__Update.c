/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003CC280
 * Mangled: _ZN5Caver16DebugInfoOverlay6UpdateEf
 * Demangled: Caver::DebugInfoOverlay::Update(float)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F38D0  Caver::MeshInstance::NumSkinnedVerticesDrawn(void)
 *   0x00000000001F8730  Caver::MeshInstance::NumStaticVerticesDrawn(void)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FAF70  Caver::DebugInfoOverlay::SetNumVertices(int,int)
 *   0x00000000001FBD10  Caver::TextureLibrary::TotalByteSize(void)
 *   0x00000000001FC330  Caver::DebugInfoOverlay::SetTextureMemoryUsage(int)
 *   0x0000000000202630  Caver::MeshInstance::ResetDrawCounters(void)
 *   0x0000000000203570  Caver::MeshInstance::NumTrianglesDrawn(void)
 *   0x0000000000203A80  Caver::DebugInfoOverlay::SetFPS(float)
 *   0x0000000000203AE0  Caver::DebugInfoOverlay::SetNumTriangles(int)
 *
 * Referenced strings: 17
 *   insn=0x00000000003CC28C string=0x00000000003CC290 "hfA"
 *   insn=0x00000000003CC294 string=0x00000000003CC298 "@"
 *   insn=0x00000000003CC29C string=0x00000000003CC2A0 "aRA"
 *   insn=0x00000000003CC2A0 string=0x00000000003CC2A4 " ( "
 *   insn=0x00000000003CC2AC string=0x00000000003CC2B0 "`R"
 *   insn=0x00000000003CC2B0 string=0x00000000003CC2B4 ""
 *   insn=0x00000000003CC2B4 string=0x00000000003CC2B8 "aNA"
 *   insn=0x00000000003CC2BC string=0x00000000003CC2C0 "t2"
 *   insn=0x00000000003CC2C0 string=0x00000000003CC2C4 "!"
 *   insn=0x00000000003CC2C4 string=0x00000000003CC2C8 " "
 *   insn=0x00000000003CC2E0 string=0x00000000001FA350 "0'"
 *   insn=0x00000000003CC2E4 string=0x00000000001FBD10 "0'"
 *   insn=0x00000000003CC2F0 string=0x00000000001FC330 "0'"
 *   insn=0x00000000003CC2F4 string=0x00000000001F8730 "0'"
 *   insn=0x00000000003CC2F8 string=0x00000000003CC2FC "u"
 *   insn=0x00000000003CC2FC string=0x00000000001F38D0 "P'"
 *   insn=0x00000000003CC30C string=0x00000000001FAF70 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::DebugInfoOverlay::Update(Caver::DebugInfoOverlay *this, float a2)
{
  int v3; // w8
  float v4; // s0
  Caver::TextureLibrary *v5; // x0
  Caver::MeshInstance *v6; // x0
  Caver::MeshInstance *v7; // x0
  int v8; // w20
  int v9; // w0
  Caver::MeshInstance *v10; // x0
  int v11; // w0
  Caver::MeshInstance *v12; // x0

  v3 = *((_DWORD *)this + 89);
  if ( v3 == 1 )
  {
    v5 = (Caver::TextureLibrary *)Caver::TextureLibrary::sharedLibrary(this);
    Caver::TextureLibrary::TotalByteSize(v5);
    Caver::DebugInfoOverlay::SetTextureMemoryUsage(this);
    Caver::MeshInstance::NumStaticVerticesDrawn(v6);
    v8 = (int)v7;
    v9 = Caver::MeshInstance::NumSkinnedVerticesDrawn(v7);
    v10 = (Caver::MeshInstance *)Caver::DebugInfoOverlay::SetNumVertices(this, v8, v9);
    v11 = Caver::MeshInstance::NumTrianglesDrawn(v10);
    v12 = (Caver::MeshInstance *)Caver::DebugInfoOverlay::SetNumTriangles(this, v11);
    Caver::MeshInstance::ResetDrawCounters(v12);
  }
  else if ( !v3 )
  {
    v4 = *((float *)this + 84) + a2;
    *((float *)this + 84) = v4;
    if ( v4 > 0.5 )
    {
      Caver::DebugInfoOverlay::SetFPS(this, (float)*((int *)this + 83) / v4);
      *(_QWORD *)((char *)this + 332) = 0;
    }
  }
}

