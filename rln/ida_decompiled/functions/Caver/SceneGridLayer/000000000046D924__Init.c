/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046D924
 * Mangled: _ZN5Caver14SceneGridLayer4InitERKNS_9RectangleEffff
 * Demangled: Caver::SceneGridLayer::Init(Caver::Rectangle const&,float,float,float,float)
 *
 * Callers: 1
 *   0x00000000001FAFC0  Caver::SceneGridLayer::Init(Caver::Rectangle const&,float,float,float,float)
 *
 * Callees: 5
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F8D70  Caver::SceneGridLayer::CreateVertexData(void)
 *   0x00000000001FBC40  .memset
 *   0x0000000000200FE0  Caver::SceneGridLayer::Reset(void)
 *
 * Referenced strings: 34
 *   insn=0x000000000046D93C string=0x000000000046D940 "h"
 *   insn=0x000000000046D940 string=0x000000000046D944 "j"
 *   insn=0x000000000046D944 string=0x000000000046D948 "K"
 *   insn=0x000000000046D948 string=0x000000000046D94C "("
 *   insn=0x000000000046D94C string=0x000000000046D950 "\t"
 *   insn=0x000000000046D954 string=0x000000000046D958 "h"
 *   insn=0x000000000046D968 string=0x000000000046D96C """
 *   insn=0x000000000046D96C string=0x000000000046D970 "!"
 *   insn=0x000000000046D970 string=0x000000000046D974 "`"
 *   insn=0x000000000046D974 string=0x000000000046D978 "`"
 *   insn=0x000000000046D978 string=0x000000000046D97C "b"
 *   insn=0x000000000046D988 string=0x000000000046D98C "a"
 *   insn=0x000000000046D98C string=0x000000000046D990 "\n"
 *   insn=0x000000000046D990 string=0x000000000046D994 "+"
 *   insn=0x000000000046D994 string=0x000000000046D998 "v}\n"
 *   insn=0x000000000046D9A8 string=0x000000000046D9AC ")"
 *   insn=0x000000000046D9AC string=0x000000000046D9B0 "j."
 *   insn=0x000000000046D9B4 string=0x000000000046D9B8 ""
 *   insn=0x000000000046D9BC string=0x000000000046D9C0 " "
 *   insn=0x000000000046D9C0 string=0x000000000046D9C4 "i""
 *   insn=0x000000000046D9C4 string=0x000000000046D9C8 "k*"
 *   insn=0x000000000046D9CC string=0x00000000001F8570 "0'"
 *   insn=0x000000000046D9D8 string=0x000000000046D9EC "u"
 *   insn=0x000000000046D9E8 string=0x00000000001FBC40 "0'"
 *   insn=0x000000000046D9EC string=0x000000000046D9F0 "t"
 *   insn=0x000000000046D9F4 string=0x000000000046DA28 "h"A9"
 *   insn=0x000000000046D9FC string=0x000000000046DA00 ""
 *   insn=0x000000000046DA0C string=0x000000000046DA10 "@"
 *   insn=0x000000000046DA10 string=0x000000000046DA14 "S"
 *   insn=0x000000000046DA14 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000046DA18 string=0x000000000046DA1C "a"
 *   insn=0x000000000046DA20 string=0x000000000046DA24 "O"
 *   insn=0x000000000046DA28 string=0x000000000046DA2C ""
 *   insn=0x000000000046DA48 string=0x00000000001F8D70 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SceneGridLayer::Init(
        Caver::SceneGridLayer *this,
        const Caver::Rectangle *a2,
        float a3,
        float a4,
        float a5,
        float a6)
{
  float v12; // s0
  float v13; // s3
  unsigned int v14; // w10
  unsigned int v15; // w11
  int v16; // w22
  unsigned __int64 v17; // x0
  _QWORD *v18; // x0
  _QWORD *v19; // x20
  __int64 v20; // x21
  __int64 v21; // x8
  __int64 v22; // x22
  void *v23; // x0

  if ( *((_QWORD *)this + 6) )
    Caver::SceneGridLayer::Reset(this);
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)a2;
  v12 = *((float *)this + 4);
  v13 = *((float *)this + 5);
  *((float *)this + 8) = 1.0 / a3;
  *((float *)this + 9) = 1.0 / a4;
  v14 = vcvtps_s32_f32(v12 / a3);
  v15 = vcvtps_s32_f32(v13 / a4);
  v16 = v15 * v14;
  *((_DWORD *)this + 10) = v14;
  *((_DWORD *)this + 11) = v15;
  if ( !is_mul_ok((int)(v15 * v14), 0x10u) || (unsigned __int64)(16LL * (int)(v15 * v14)) >= 0xFFFFFFFFFFFFFFF8LL )
    v17 = -1;
  else
    v17 = 16LL * (int)(v15 * v14) + 8;
  *((float *)this + 6) = a3;
  *((float *)this + 7) = a4;
  *(float *)this = a5;
  *((float *)this + 1) = a6;
  v18 = (_QWORD *)operator new[](v17);
  *v18 = v16;
  v19 = v18 + 1;
  if ( v16 )
    memset(v18 + 1, 0, 16LL * v16);
  v20 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = v19;
  if ( v20 )
  {
    v21 = *(_QWORD *)(v20 - 8);
    if ( v21 )
    {
      v22 = 16 * v21;
      do
      {
        v23 = *(void **)(v20 + v22 - 16);
        if ( v23 )
          operator delete[](v23);
        v22 -= 16;
      }
      while ( v22 );
    }
    operator delete[]((void *)(v20 - 8));
  }
  if ( *((_BYTE *)this + 72) )
    Caver::SceneGridLayer::CreateVertexData(this);
}

